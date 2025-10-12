void UIDrawCall___cctor(const MethodInfo *method)
{
  BetterList_T__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BetterList_T__o *v4; // x19
  struct UIDrawCall_StaticFields *static_fields; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *v8; // x19
  struct UIDrawCall_StaticFields *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UIDrawCall_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct UIDrawCall_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C3C1E7 & 1) == 0 )
  {
    sub_1C32C20(&Method_BetterList_UIDrawCall___ctor__);
    sub_1C32C20(&BetterList_UIDrawCall__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int_____ctor___77995040);
    sub_1C32C20(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C32C20(&UIDrawCall_TypeInfo);
    byte_4C3C1E7 = 1;
  }
  v1 = (BetterList_T__o *)sub_1C32E6C(BetterList_UIDrawCall__TypeInfo);
  BetterList_object____ctor(v1, (const MethodInfo_330FEAC *)Method_BetterList_UIDrawCall___ctor__);
  UIDrawCall_TypeInfo->static_fields->mActiveList = (struct BetterList_UIDrawCall__o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)UIDrawCall_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (BetterList_T__o *)sub_1C32E6C(BetterList_UIDrawCall__TypeInfo);
  BetterList_object____ctor(v4, (const MethodInfo_330FEAC *)Method_BetterList_UIDrawCall___ctor__);
  static_fields = UIDrawCall_TypeInfo->static_fields;
  static_fields->mInactiveList = (struct BetterList_UIDrawCall__o *)v4;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->mInactiveList, (int32_t)v4, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor_58294264(
    v8,
    10,
    (const MethodInfo_3797FF8 *)Method_System_Collections_Generic_List_int_____ctor___77995040);
  v9 = UIDrawCall_TypeInfo->static_fields;
  v9->mCache = (struct System_Collections_Generic_List_int____o *)v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&v9->mCache, (int32_t)v8, v10, v11);
  v12 = UIDrawCall_TypeInfo->static_fields;
  v12->ClipRange = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v12->ClipRange, 0, v13, v14);
  v15 = UIDrawCall_TypeInfo->static_fields;
  v15->ClipArgs = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v15->ClipArgs, 0, v16, v17);
}


void UIDrawCall___ctor(UIDrawCall_o *this, const MethodInfo *method)
{
  BetterList_Vector3__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  BetterList_Vector3__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  BetterList_Vector4__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  BetterList_Vector2__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  BetterList_Color32__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C3C1E6 & 1) == 0 )
  {
    sub_1C32C20(&Method_BetterList_Vector4___ctor__);
    sub_1C32C20(&Method_BetterList_Color32___ctor__);
    sub_1C32C20(&Method_BetterList_Vector3___ctor__);
    sub_1C32C20(&Method_BetterList_Vector2___ctor__);
    sub_1C32C20(&BetterList_Vector3__TypeInfo);
    sub_1C32C20(&BetterList_Vector2__TypeInfo);
    sub_1C32C20(&BetterList_Color32__TypeInfo);
    sub_1C32C20(&BetterList_Vector4__TypeInfo);
    byte_4C3C1E6 = 1;
  }
  *(_QWORD *)&this->fields.depthStart = 0x800000007FFFFFFFLL;
  v3 = (BetterList_Vector3__o *)sub_1C32E6C(BetterList_Vector3__TypeInfo);
  BetterList_Vector3____ctor(v3, (const MethodInfo_3311D84 *)Method_BetterList_Vector3___ctor__);
  this->fields.verts = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.verts, (int32_t)v3, v4, v5);
  v6 = (BetterList_Vector3__o *)sub_1C32E6C(BetterList_Vector3__TypeInfo);
  BetterList_Vector3____ctor(v6, (const MethodInfo_3311D84 *)Method_BetterList_Vector3___ctor__);
  this->fields.norms = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.norms, (int32_t)v6, v7, v8);
  v9 = (BetterList_Vector4__o *)sub_1C32E6C(BetterList_Vector4__TypeInfo);
  BetterList_Vector4____ctor(v9, (const MethodInfo_33128AC *)Method_BetterList_Vector4___ctor__);
  this->fields.tans = v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.tans, (int32_t)v9, v10, v11);
  v12 = (BetterList_Vector2__o *)sub_1C32E6C(BetterList_Vector2__TypeInfo);
  BetterList_Vector2____ctor(v12, (const MethodInfo_3311200 *)Method_BetterList_Vector2___ctor__);
  this->fields.uvs = v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.uvs, (int32_t)v12, v13, v14);
  v15 = (BetterList_Color32__o *)sub_1C32E6C(BetterList_Color32__TypeInfo);
  BetterList_Color32____ctor(v15, (const MethodInfo_330EBF4 *)Method_BetterList_Color32___ctor__);
  this->fields.cols = v15;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.cols, (int32_t)v15, v16, v17);
  this->fields.mRebuildMat = 1;
  this->fields.mRenderQueue = 3000;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIDrawCall__Awake(UIDrawCall_o *this, const MethodInfo *method)
{
  UIDrawCall_c *v2; // x0
  struct System_Int32_array *v3; // x19
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UIDrawCall_c *v7; // x0
  struct UIDrawCall_StaticFields *static_fields; // x0
  struct System_Int32_array *v9; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UIDrawCall_c *v12; // x0
  struct UIDrawCall_StaticFields *v13; // x0

  if ( (byte_4C3C1DB & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&UIDrawCall_TypeInfo);
    sub_1C32C20(&StringLiteral_16154/*"_ClipArgs0"*/);
    sub_1C32C20(&StringLiteral_16160/*"_ClipRange1"*/);
    sub_1C32C20(&StringLiteral_16161/*"_ClipRange2"*/);
    sub_1C32C20(&StringLiteral_16157/*"_ClipArgs3"*/);
    sub_1C32C20(&StringLiteral_16159/*"_ClipRange0"*/);
    sub_1C32C20(&StringLiteral_16155/*"_ClipArgs1"*/);
    sub_1C32C20(&StringLiteral_16162/*"_ClipRange4"*/);
    sub_1C32C20(&StringLiteral_16156/*"_ClipArgs2"*/);
    byte_4C3C1DB = 1;
  }
  v2 = UIDrawCall_TypeInfo;
  if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
    v2 = UIDrawCall_TypeInfo;
  }
  if ( !v2->static_fields->ClipRange )
  {
    v3 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 4);
    v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16159/*"_ClipRange0"*/, 0);
    if ( !v3 )
      goto LABEL_26;
    if ( !LODWORD(v3->max_length) )
      goto LABEL_25;
    v3->m_Items[0] = v4;
    v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16160/*"_ClipRange1"*/, 0);
    if ( LODWORD(v3->max_length) <= 1 )
      goto LABEL_25;
    v3->m_Items[1] = v4;
    v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16161/*"_ClipRange2"*/, 0);
    if ( LODWORD(v3->max_length) <= 2 )
      goto LABEL_25;
    v3->m_Items[2] = v4;
    v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16162/*"_ClipRange4"*/, 0);
    if ( LODWORD(v3->max_length) <= 3 )
      goto LABEL_25;
    v3->m_Items[3] = v4;
    v7 = UIDrawCall_TypeInfo;
    if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
      v7 = UIDrawCall_TypeInfo;
    }
    static_fields = v7->static_fields;
    static_fields->ClipRange = v3;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->ClipRange, (int32_t)v3, v5, v6);
    v2 = UIDrawCall_TypeInfo;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = UIDrawCall_TypeInfo;
  }
  if ( !v2->static_fields->ClipArgs )
  {
    v9 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 4);
    v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16154/*"_ClipArgs0"*/, 0);
    if ( v9 )
    {
      if ( LODWORD(v9->max_length) )
      {
        v9->m_Items[0] = v4;
        v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16155/*"_ClipArgs1"*/, 0);
        if ( LODWORD(v9->max_length) > 1 )
        {
          v9->m_Items[1] = v4;
          v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16156/*"_ClipArgs2"*/, 0);
          if ( LODWORD(v9->max_length) > 2 )
          {
            v9->m_Items[2] = v4;
            v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16157/*"_ClipArgs3"*/, 0);
            if ( LODWORD(v9->max_length) > 3 )
            {
              v9->m_Items[3] = v4;
              v12 = UIDrawCall_TypeInfo;
              if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
                v12 = UIDrawCall_TypeInfo;
              }
              v13 = v12->static_fields;
              v13->ClipArgs = v9;
              sub_1C32BC4((CGThumbnailListItem_o *)&v13->ClipArgs, (int32_t)v9, v10, v11);
              return;
            }
          }
        }
      }
LABEL_25:
      sub_1C32E84(v4);
    }
LABEL_26:
    sub_1C32E7C(v4);
  }
}


void UIDrawCall__Clear(UIDrawCall_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mMesh; // x20
  UnityEngine_Mesh_o *verts; // x0

  if ( (byte_4C3C1D3 & 1) == 0 )
  {
    sub_1C32C20(&Method_BetterList_Vector2__Release__);
    sub_1C32C20(&Method_BetterList_Vector3__Release__);
    sub_1C32C20(&Method_BetterList_Vector4__Release__);
    sub_1C32C20(&Method_BetterList_Color32__Release__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C1D3 = 1;
  }
  mMesh = (UnityEngine_Object_o *)this->fields.mMesh;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMesh, 0, 0) )
  {
    verts = this->fields.mMesh;
    if ( !verts )
      goto LABEL_14;
    UnityEngine_Mesh__Clear(verts, 0);
  }
  verts = (UnityEngine_Mesh_o *)this->fields.verts;
  if ( !verts )
    goto LABEL_14;
  BetterList_Vector3___Release(
    (BetterList_Vector3__o *)verts,
    (const MethodInfo_331149C *)Method_BetterList_Vector3__Release__);
  verts = (UnityEngine_Mesh_o *)this->fields.uvs;
  if ( !verts
    || (BetterList_Vector2___Release(
          (BetterList_Vector2__o *)verts,
          (const MethodInfo_3310A10 *)Method_BetterList_Vector2__Release__),
        (verts = (UnityEngine_Mesh_o *)this->fields.cols) == 0)
    || (BetterList_Color32___Release(
          (BetterList_Color32__o *)verts,
          (const MethodInfo_330E4C4 *)Method_BetterList_Color32__Release__),
        (verts = (UnityEngine_Mesh_o *)this->fields.norms) == 0)
    || (BetterList_Vector3___Release(
          (BetterList_Vector3__o *)verts,
          (const MethodInfo_331149C *)Method_BetterList_Vector3__Release__),
        (verts = (UnityEngine_Mesh_o *)this->fields.tans) == 0) )
  {
LABEL_14:
    sub_1C32E7C(verts);
  }
  BetterList_Vector4___Release(
    (BetterList_Vector4__o *)verts,
    (const MethodInfo_3312008 *)Method_BetterList_Vector4__Release__);
}


void UIDrawCall__ClearAll(const MethodInfo *method)
{
  BetterList_T__o *isPlaying; // x0
  UIDrawCall_c *v2; // x8
  char v3; // w19
  struct BetterList_UIDrawCall__o *mActiveList; // x9
  int size; // w20
  Il2CppObject *Item; // x21
  UnityEngine_GameObject_o *gameObject; // x21

  if ( (byte_4C3C1E1 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Application_TypeInfo);
    sub_1C32C20(&Method_BetterList_UIDrawCall__Clear__);
    sub_1C32C20(&Method_BetterList_UIDrawCall__get_Item__);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIDrawCall_TypeInfo);
    byte_4C3C1E1 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  isPlaying = (BetterList_T__o *)UnityEngine_Application__get_isPlaying(0);
  v2 = UIDrawCall_TypeInfo;
  v3 = (char)isPlaying;
  if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
    v2 = UIDrawCall_TypeInfo;
  }
  mActiveList = v2->static_fields->mActiveList;
  if ( !mActiveList )
    goto LABEL_25;
  size = mActiveList->fields.size;
  while ( 1 )
  {
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      v2 = UIDrawCall_TypeInfo;
    }
    isPlaying = (BetterList_T__o *)v2->static_fields->mActiveList;
    if ( size <= 0 )
      break;
    if ( !isPlaying )
      goto LABEL_25;
    Item = BetterList_object___get_Item(
             isPlaying,
             --size,
             (const MethodInfo_330F558 *)Method_BetterList_UIDrawCall__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    isPlaying = (BetterList_T__o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Item, 0);
    if ( ((unsigned __int8)isPlaying & 1) != 0 )
    {
      if ( !Item )
        goto LABEL_25;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      if ( (v3 & 1) != 0 )
        NGUITools__SetActive(gameObject, 0, 0);
      else
        NGUITools__DestroyImmediate((UnityEngine_Object_o *)gameObject, 0);
    }
    v2 = UIDrawCall_TypeInfo;
  }
  if ( !isPlaying )
LABEL_25:
    sub_1C32E7C(isPlaying);
  BetterList_object___Clear(isPlaying, (const MethodInfo_330F768 *)Method_BetterList_UIDrawCall__Clear__);
}


int32_t UIDrawCall__Count(UIPanel_o *panel, const MethodInfo *method)
{
  int32_t v3; // w21
  int32_t v4; // w20
  void *Item; // x0
  BetterList_T__o *mActiveList; // x8
  UnityEngine_Object_o *v7; // x22

  if ( (byte_4C3C1E4 & 1) == 0 )
  {
    sub_1C32C20(&Method_BetterList_UIDrawCall__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIDrawCall_TypeInfo);
    byte_4C3C1E4 = 1;
  }
  v3 = 0;
  v4 = 0;
  while ( 1 )
  {
    Item = UIDrawCall_TypeInfo;
    if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
      Item = UIDrawCall_TypeInfo;
    }
    mActiveList = (BetterList_T__o *)**((_QWORD **)Item + 23);
    if ( !mActiveList )
LABEL_15:
      sub_1C32E7C(Item);
    if ( v3 >= mActiveList->fields.size )
      return v4;
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      mActiveList = (BetterList_T__o *)UIDrawCall_TypeInfo->static_fields->mActiveList;
      if ( !mActiveList )
        goto LABEL_15;
    }
    Item = BetterList_object___get_Item(
             mActiveList,
             v3,
             (const MethodInfo_330F558 *)Method_BetterList_UIDrawCall__get_Item__);
    if ( !Item )
      goto LABEL_15;
    v7 = (UnityEngine_Object_o *)*((_QWORD *)Item + 6);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 += UnityEngine_Object__op_Equality(v7, (UnityEngine_Object_o *)panel, 0);
    ++v3;
  }
}


UIDrawCall_o *UIDrawCall__Create(
        UIPanel_o *panel,
        UnityEngine_Material_o *mat,
        UnityEngine_Texture_o *tex,
        UnityEngine_Shader_o *shader,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_4C3C1DE & 1) == 0 )
  {
    sub_1C32C20(&UIDrawCall_TypeInfo);
    byte_4C3C1DE = 1;
  }
  if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
  return UIDrawCall__Create_49354264(0, panel, mat, tex, shader, v5);
}


void UIDrawCall__CreateMaterial(UIDrawCall_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panel; // x20
  __int64 shader; // x0
  int32_t clipCount; // w0
  int32_t *p_mClipCount; // x20
  UnityEngine_Object_o *mShader; // x21
  UnityEngine_Object_o *mMaterial; // x21
  int v9; // w8
  System_String_o *v10; // x21
  System_String_o *v11; // x0
  UnityEngine_Object_o *v12; // x22
  System_String_o *v13; // x21
  struct UIPanel_o *v14; // x8
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  UnityEngine_Shader_o *v18; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *v20; // x22
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  UnityEngine_Shader_o *v23; // x0
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *v25; // x22
  UnityEngine_Shader_o *v26; // x0
  const MethodInfo *v27; // x2
  UnityEngine_Object_o *v28; // x22
  UnityEngine_Shader_o *v29; // x0
  const MethodInfo *v30; // x2
  UnityEngine_Object_o *v31; // x22
  UnityEngine_Material_o *v32; // x22
  UnityEngine_Material_o *v33; // x23
  struct UnityEngine_Material_o **p_mDynamicMat; // x22
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  UnityEngine_Object_o *v37; // x23
  System_String_o *name; // x0
  __int64 v39; // x8
  __int64 v40; // x23
  unsigned __int64 v41; // x25
  UnityEngine_Object_o *v42; // x23
  UnityEngine_Shader_o *v43; // x20
  UnityEngine_Material_o *v44; // x21
  struct UnityEngine_Material_o **v45; // x20
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  UnityEngine_Object_o *v48; // x19
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  Il2CppObject *v51; // x19

  if ( (byte_4C3C1D4 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Debug_TypeInfo);
    sub_1C32C20(&UnityEngine_Material_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_15931/*"[NGUI] "*/);
    sub_1C32C20(&StringLiteral_113/*" "*/);
    sub_1C32C20(&StringLiteral_7303/*"Hidden/"*/);
    sub_1C32C20(&StringLiteral_136/*" (TextureClip)"*/);
    sub_1C32C20(&StringLiteral_15131/*"Unlit/Transparent Colored"*/);
    sub_1C32C20(&StringLiteral_135/*" (SoftClip)"*/);
    sub_1C32C20(&StringLiteral_15130/*"Unlit/Text"*/);
    sub_1C32C20(&StringLiteral_7017/*"GUI/Text Shader"*/);
    sub_1C32C20(&StringLiteral_225/*" clip regions"*/);
    sub_1C32C20(&StringLiteral_299/*" shader doesn't have a clipped shader version for "*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3C1D4 = 1;
  }
  this->fields.mTextureClip = 0;
  this->fields.mLegacyShader = 0;
  panel = (UnityEngine_Object_o *)this->fields.panel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(panel, 0, 0) )
  {
    shader = (__int64)this->fields.panel;
    if ( !shader )
      goto LABEL_80;
    clipCount = UIPanel__get_clipCount((UIPanel_o *)shader, 0);
  }
  else
  {
    clipCount = 0;
  }
  this->fields.mClipCount = clipCount;
  p_mClipCount = &this->fields.mClipCount;
  mShader = (UnityEngine_Object_o *)this->fields.mShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mShader, 0, 0) )
  {
    shader = (__int64)this->fields.mShader;
    if ( !shader )
      goto LABEL_80;
  }
  else
  {
    mMaterial = (UnityEngine_Object_o *)this->fields.mMaterial;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(mMaterial, 0, 0) )
    {
      shader = StringLiteral_15131/*"Unlit/Transparent Colored"*/;
      if ( !StringLiteral_15131/*"Unlit/Transparent Colored"*/ )
        goto LABEL_80;
      goto LABEL_22;
    }
    shader = (__int64)this->fields.mMaterial;
    if ( !shader )
      goto LABEL_80;
    shader = (__int64)UnityEngine_Material__get_shader((UnityEngine_Material_o *)shader, 0);
    if ( !shader )
      goto LABEL_80;
  }
  shader = (__int64)UnityEngine_Object__get_name((UnityEngine_Object_o *)shader, 0);
  if ( !shader )
    goto LABEL_80;
LABEL_22:
  shader = (__int64)System_String__Replace_63565092(
                      (System_String_o *)shader,
                      (System_String_o *)StringLiteral_7017/*"GUI/Text Shader"*/,
                      (System_String_o *)StringLiteral_15130/*"Unlit/Text"*/,
                      0);
  if ( !shader )
    goto LABEL_80;
  v9 = *(_DWORD *)(shader + 16);
  v10 = (System_String_o *)shader;
  if ( v9 >= 3
    && System_String__get_Chars((System_String_o *)shader, v9 - 2, 0) == 32
    && (unsigned __int16)(System_String__get_Chars(v10, v10->fields._stringLength - 1, 0) - 49) <= 8u )
  {
    shader = (__int64)System_String__Substring_63564468(v10, 0, v10->fields._stringLength - 2, 0);
    v10 = (System_String_o *)shader;
    if ( !shader )
      goto LABEL_80;
  }
  if ( System_String__StartsWith(v10, (System_String_o *)StringLiteral_7303/*"Hidden/"*/, 0) )
  {
    shader = (__int64)System_String__Substring(v10, 7, 0);
    v10 = (System_String_o *)shader;
    if ( !shader )
      goto LABEL_80;
  }
  shader = (__int64)System_String__Replace_63565092(
                      v10,
                      (System_String_o *)StringLiteral_135/*" (SoftClip)"*/,
                      (System_String_o *)StringLiteral_1/*""*/,
                      0);
  if ( !shader )
    goto LABEL_80;
  v11 = System_String__Replace_63565092(
          (System_String_o *)shader,
          (System_String_o *)StringLiteral_136/*" (TextureClip)"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0);
  v12 = (UnityEngine_Object_o *)this->fields.panel;
  v13 = v11;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  shader = UnityEngine_Object__op_Inequality(v12, 0, 0);
  if ( (shader & 1) != 0 )
  {
    v14 = this->fields.panel;
    if ( !v14 )
      goto LABEL_80;
    if ( v14->fields.mClipping == 1 )
    {
      this->fields.mTextureClip = 1;
      v15 = System_String__Concat_63556792(
              (System_String_o *)StringLiteral_7303/*"Hidden/"*/,
              v13,
              (System_String_o *)StringLiteral_136/*" (TextureClip)"*/,
              0);
LABEL_47:
      v26 = UnityEngine_Shader__Find(v15, 0);
      UIDrawCall__set_shader(this, v26, v27);
      goto LABEL_48;
    }
  }
  if ( !*p_mClipCount )
  {
    v15 = v13;
    goto LABEL_47;
  }
  v16 = System_Int32__ToString((int)this + 152, 0);
  v17 = System_String__Concat_63558796(
          (System_String_o *)StringLiteral_7303/*"Hidden/"*/,
          v13,
          (System_String_o *)StringLiteral_113/*" "*/,
          v16,
          0);
  v18 = UnityEngine_Shader__Find(v17, 0);
  UIDrawCall__set_shader(this, v18, v19);
  v20 = (UnityEngine_Object_o *)this->fields.mShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v20, 0, 0) )
  {
    v21 = System_Int32__ToString((int)this + 152, 0);
    v22 = System_String__Concat_63556792(v13, (System_String_o *)StringLiteral_113/*" "*/, v21, 0);
    v23 = UnityEngine_Shader__Find(v22, 0);
    UIDrawCall__set_shader(this, v23, v24);
  }
  v25 = (UnityEngine_Object_o *)this->fields.mShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v25, 0, 0) && *p_mClipCount == 1 )
  {
    this->fields.mLegacyShader = 1;
    v15 = System_String__Concat_63518544(v13, (System_String_o *)StringLiteral_135/*" (SoftClip)"*/, 0);
    goto LABEL_47;
  }
LABEL_48:
  v28 = (UnityEngine_Object_o *)this->fields.mShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v28, 0, 0) )
  {
    v29 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_15131/*"Unlit/Transparent Colored"*/, 0);
    UIDrawCall__set_shader(this, v29, v30);
  }
  v31 = (UnityEngine_Object_o *)this->fields.mMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v31, 0, 0) )
  {
    v32 = this->fields.mMaterial;
    v33 = (UnityEngine_Material_o *)sub_1C32E6C(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_71086868(v33, v32, 0);
    this->fields.mDynamicMat = v33;
    p_mDynamicMat = &this->fields.mDynamicMat;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mDynamicMat, (int32_t)v33, v35, v36);
    shader = (__int64)this->fields.mMaterial;
    if ( !shader )
      goto LABEL_80;
    v37 = (UnityEngine_Object_o *)*p_mDynamicMat;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)shader, 0);
    shader = (__int64)System_String__Concat_63518544((System_String_o *)StringLiteral_15931/*"[NGUI] "*/, name, 0);
    if ( !v37 )
      goto LABEL_80;
    UnityEngine_Object__set_name(v37, (System_String_o *)shader, 0);
    shader = (__int64)*p_mDynamicMat;
    if ( !*p_mDynamicMat )
      goto LABEL_80;
    UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)shader, 60, 0);
    shader = (__int64)*p_mDynamicMat;
    if ( !*p_mDynamicMat )
      goto LABEL_80;
    UnityEngine_Material__CopyPropertiesFromMaterial((UnityEngine_Material_o *)shader, this->fields.mMaterial, 0);
    shader = (__int64)this->fields.mMaterial;
    if ( !shader )
      goto LABEL_80;
    shader = (__int64)UnityEngine_Material__get_shaderKeywords((UnityEngine_Material_o *)shader, 0);
    if ( !shader )
      goto LABEL_80;
    v39 = *(_QWORD *)(shader + 24);
    v40 = shader;
    if ( (int)v39 >= 1 )
    {
      v41 = 0;
      while ( 1 )
      {
        if ( v41 >= (unsigned int)v39 )
          sub_1C32E84(shader);
        shader = (__int64)*p_mDynamicMat;
        if ( !*p_mDynamicMat )
          break;
        UnityEngine_Material__EnableKeyword(
          (UnityEngine_Material_o *)shader,
          *(System_String_o **)(v40 + 32 + 8 * v41),
          0);
        LODWORD(v39) = *(_DWORD *)(v40 + 24);
        if ( (__int64)++v41 >= (int)v39 )
          goto LABEL_66;
      }
LABEL_80:
      sub_1C32E7C(shader);
    }
LABEL_66:
    v42 = (UnityEngine_Object_o *)this->fields.mShader;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v42, 0, 0) )
    {
      shader = (__int64)*p_mDynamicMat;
      if ( !*p_mDynamicMat )
        goto LABEL_80;
      UnityEngine_Material__set_shader((UnityEngine_Material_o *)shader, this->fields.mShader, 0);
    }
    else if ( *p_mClipCount )
    {
      v50 = System_Int32__ToString((int)this + 152, 0);
      v51 = (Il2CppObject *)System_String__Concat_63558796(
                              v13,
                              (System_String_o *)StringLiteral_299/*" shader doesn't have a clipped shader version for "*/,
                              v50,
                              (System_String_o *)StringLiteral_225/*" clip regions"*/,
                              0);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v51, 0);
    }
  }
  else
  {
    v43 = this->fields.mShader;
    v44 = (UnityEngine_Material_o *)sub_1C32E6C(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v44, v43, 0);
    this->fields.mDynamicMat = v44;
    v45 = &this->fields.mDynamicMat;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mDynamicMat, (int32_t)v44, v46, v47);
    shader = (__int64)this->fields.mShader;
    if ( !shader )
      goto LABEL_80;
    v48 = (UnityEngine_Object_o *)*v45;
    v49 = UnityEngine_Object__get_name((UnityEngine_Object_o *)shader, 0);
    shader = (__int64)System_String__Concat_63518544((System_String_o *)StringLiteral_15931/*"[NGUI] "*/, v49, 0);
    if ( !v48 )
      goto LABEL_80;
    UnityEngine_Object__set_name(v48, (System_String_o *)shader, 0);
    shader = (__int64)*v45;
    if ( !*v45 )
      goto LABEL_80;
    UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)shader, 60, 0);
  }
}


UIDrawCall_o *UIDrawCall__Create_49354264(
        System_String_o *name,
        UIPanel_o *pan,
        UnityEngine_Material_o *mat,
        UnityEngine_Texture_o *tex,
        UnityEngine_Shader_o *shader,
        const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Component_o *v12; // x22
  const MethodInfo *v13; // x1
  UnityEngine_GameObject_o *v14; // x24
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C3C1DF & 1) == 0 )
  {
    sub_1C32C20(&UIDrawCall_TypeInfo);
    byte_4C3C1DF = 1;
  }
  if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UIDrawCall__Create_49354532(name, pan, (const MethodInfo *)mat);
  if ( !gameObject
    || (v12 = gameObject,
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0),
        !pan)
    || (v14 = (UnityEngine_GameObject_o *)gameObject,
        (gameObject = (UnityEngine_Component_o *)UIRect__get_cachedGameObject((UIRect_o *)pan, v13)) == 0)
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_layer(
                                                  (UnityEngine_GameObject_o *)gameObject,
                                                  0),
        !v14) )
  {
    sub_1C32E7C(gameObject);
  }
  UnityEngine_GameObject__set_layer(v14, (int32_t)gameObject, 0);
  UIDrawCall__set_baseMaterial((UIDrawCall_o *)v12, mat, v15);
  UIDrawCall__set_mainTexture((UIDrawCall_o *)v12, tex, v16);
  UIDrawCall__set_shader((UIDrawCall_o *)v12, shader, v17);
  UIDrawCall__set_renderQueue((UIDrawCall_o *)v12, pan->fields.startingRenderQueue, v18);
  UIDrawCall__set_sortingOrder((UIDrawCall_o *)v12, pan->fields.mSortingOrder, v19);
  v12[2].klass = (UnityEngine_Component_c *)pan;
  sub_1C32BC4((CGThumbnailListItem_o *)&v12[2], (int32_t)pan, v20, v21);
  return (UIDrawCall_o *)v12;
}


UIDrawCall_o *UIDrawCall__Create_49354532(System_String_o *name, UIPanel_o *pan, const MethodInfo *method)
{
  BetterList_T__o *mActiveList; // x0
  BetterList_T__o *mInactiveList; // x8
  Il2CppObject *v6; // x20
  UnityEngine_GameObject_o *v7; // x20
  Il2CppObject *v8; // x0
  UIDrawCall_c *v9; // x8
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4C3C1E0 & 1) == 0 )
  {
    sub_1C32C20(&Method_BetterList_UIDrawCall__Add__);
    sub_1C32C20(&Method_BetterList_UIDrawCall__Pop__);
    sub_1C32C20(&Method_UnityEngine_GameObject_AddComponent_UIDrawCall___);
    sub_1C32C20(&UnityEngine_GameObject_TypeInfo);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIDrawCall_TypeInfo);
    byte_4C3C1E0 = 1;
  }
  mActiveList = (BetterList_T__o *)UIDrawCall_TypeInfo;
  if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
    mActiveList = (BetterList_T__o *)UIDrawCall_TypeInfo;
  }
  mInactiveList = *(BetterList_T__o **)(*(_QWORD *)&mActiveList[5].fields.size + 8LL);
  if ( !mInactiveList )
    goto LABEL_25;
  if ( mInactiveList->fields.size < 1 )
  {
    v7 = (UnityEngine_GameObject_o *)sub_1C32E6C(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v7, name, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)v7, 0);
    if ( v7 )
    {
      v8 = UnityEngine_GameObject__AddComponent_object_(
             v7,
             (const MethodInfo_3134888 *)Method_UnityEngine_GameObject_AddComponent_UIDrawCall___);
      v9 = UIDrawCall_TypeInfo;
      v6 = v8;
      if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
        v9 = UIDrawCall_TypeInfo;
      }
      mActiveList = (BetterList_T__o *)v9->static_fields->mActiveList;
      if ( mActiveList )
      {
        BetterList_object___Add(mActiveList, v6, (const MethodInfo_330F780 *)Method_BetterList_UIDrawCall__Add__);
        return (UIDrawCall_o *)v6;
      }
    }
    goto LABEL_25;
  }
  if ( !LODWORD(mActiveList[7].klass) )
  {
    j_il2cpp_runtime_class_init_0(mActiveList);
    mInactiveList = (BetterList_T__o *)UIDrawCall_TypeInfo->static_fields->mInactiveList;
    if ( !mInactiveList )
      goto LABEL_25;
  }
  mActiveList = (BetterList_T__o *)BetterList_object___Pop(
                                     mInactiveList,
                                     (const MethodInfo_330FC9C *)Method_BetterList_UIDrawCall__Pop__);
  if ( !UIDrawCall_TypeInfo->static_fields->mActiveList )
    goto LABEL_25;
  v6 = (Il2CppObject *)mActiveList;
  BetterList_object___Add(
    (BetterList_T__o *)UIDrawCall_TypeInfo->static_fields->mActiveList,
    (Il2CppObject *)mActiveList,
    (const MethodInfo_330F780 *)Method_BetterList_UIDrawCall__Add__);
  if ( !name )
  {
    if ( v6 )
      goto LABEL_21;
LABEL_25:
    sub_1C32E7C(mActiveList);
  }
  if ( !v6 )
    goto LABEL_25;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v6, name, 0);
LABEL_21:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetActive(gameObject, 1, 0);
  return (UIDrawCall_o *)v6;
}


void UIDrawCall__Destroy(UIDrawCall_o *dc, const MethodInfo *method)
{
  BetterList_T__o *mActiveList; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  bool isPlaying; // w20
  UIDrawCall_c *v7; // x8
  bool v8; // w0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v10; // x1
  UIDrawCall_c *v11; // x0
  UnityEngine_Object_o *v12; // x19

  if ( (byte_4C3C1E5 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Application_TypeInfo);
    sub_1C32C20(&Method_BetterList_UIDrawCall__Add__);
    sub_1C32C20(&Method_BetterList_UIDrawCall__Remove__);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIDrawCall_TypeInfo);
    byte_4C3C1E5 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mActiveList = (BetterList_T__o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)dc, 0);
  if ( ((unsigned __int8)mActiveList & 1) != 0 )
  {
    if ( !dc )
      goto LABEL_24;
    dc->fields.onRender = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&dc->fields.onRender, 0, v4, v5);
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    isPlaying = UnityEngine_Application__get_isPlaying(0);
    v7 = UIDrawCall_TypeInfo;
    if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
      v7 = UIDrawCall_TypeInfo;
    }
    mActiveList = (BetterList_T__o *)v7->static_fields->mActiveList;
    if ( !mActiveList )
      goto LABEL_24;
    v8 = BetterList_object___Remove(
           mActiveList,
           (Il2CppObject *)dc,
           (const MethodInfo_330FA38 *)Method_BetterList_UIDrawCall__Remove__);
    if ( isPlaying )
    {
      if ( v8 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dc, 0);
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        NGUITools__SetActive(gameObject, 0, 0);
        UIDrawCall__Clear(dc, v10);
        v11 = UIDrawCall_TypeInfo;
        if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
          v11 = UIDrawCall_TypeInfo;
        }
        mActiveList = (BetterList_T__o *)v11->static_fields->mInactiveList;
        if ( mActiveList )
        {
          BetterList_object___Add(
            mActiveList,
            (Il2CppObject *)dc,
            (const MethodInfo_330F780 *)Method_BetterList_UIDrawCall__Add__);
          return;
        }
LABEL_24:
        sub_1C32E7C(mActiveList);
      }
    }
    else
    {
      v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dc, 0);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__DestroyImmediate(v12, 0);
    }
  }
}


System_Int32_array *UIDrawCall__GenerateCachedIndexBuffer(
        UIDrawCall_o *this,
        int32_t vertexCount,
        int32_t indexCount,
        const MethodInfo *method)
{
  UIDrawCall_c *v6; // x0
  struct System_Collections_Generic_List_int____o *mCache; // x8
  int size; // w8
  int v9; // w24
  int32_t i; // w22
  Il2CppObject *Item; // x0
  System_Int32_array *v12; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  unsigned int namespaze; // w8
  unsigned int v16; // w9
  int32_t v17; // w10
  int v18; // w10
  unsigned int v19; // w10
  unsigned int v20; // w10
  unsigned int v21; // w12
  System_Collections_Generic_List_object__o *v22; // x8
  const char *name; // x8
  _QWORD *v24; // x9
  __int64 namespaze_low; // x10
  const char *v26; // x8

  if ( (byte_4C3C1D8 & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int____RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1C32C20(&UIDrawCall_TypeInfo);
    byte_4C3C1D8 = 1;
  }
  v6 = UIDrawCall_TypeInfo;
  if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
    v6 = UIDrawCall_TypeInfo;
  }
  mCache = v6->static_fields->mCache;
  if ( !mCache )
    goto LABEL_41;
  size = mCache->fields._size;
  v9 = size - 1;
  if ( size >= 1 )
  {
    for ( i = 0; ; ++i )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = UIDrawCall_TypeInfo;
      }
      v6 = (UIDrawCall_c *)v6->static_fields->mCache;
      if ( !v6 )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v6,
               i,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_int____get_Item__);
      if ( Item )
      {
        v12 = (System_Int32_array *)Item;
        if ( LODWORD(Item[1].monitor) == indexCount )
          return v12;
      }
      if ( v9 == i )
        goto LABEL_15;
      v6 = UIDrawCall_TypeInfo;
    }
    goto LABEL_41;
  }
LABEL_15:
  v6 = (UIDrawCall_c *)sub_1C32CC8(int___TypeInfo, (unsigned int)indexCount);
  v12 = (System_Int32_array *)v6;
  if ( vertexCount >= 1 )
  {
    if ( !v6 )
      goto LABEL_41;
    namespaze = (unsigned int)v6->_1.namespaze;
    v16 = 0;
    v17 = 0;
    do
    {
      if ( v16 >= namespaze )
        goto LABEL_40;
      *((_DWORD *)&v6->_1.byval_arg.data + (int)v16) = v17;
      if ( v16 + 1 >= namespaze
        || (v18 = v17 + 1, *((_DWORD *)&v6->_1.byval_arg.data + (int)(v16 + 1)) = v18, v16 + 2 >= namespaze)
        || (v19 = v18 + 1, *((_DWORD *)&v6->_1.byval_arg.data + (int)(v16 + 2)) = v19, v16 + 3 >= namespaze)
        || (*((_DWORD *)&v6->_1.byval_arg.data + (int)(v16 + 3)) = v19, v16 + 4 >= namespaze)
        || (v20 = v19 + 1, *((_DWORD *)&v6->_1.byval_arg.data + (int)(v16 + 4)) = v20, v16 + 5 >= namespaze) )
      {
LABEL_40:
        sub_1C32E84(v6);
      }
      v21 = v20 - 3;
      v17 = v20 + 1;
      *((_DWORD *)&v6->_1.byval_arg.data + (int)(v16 + 5)) = v21;
      v16 += 6;
    }
    while ( v17 < vertexCount );
  }
  v6 = UIDrawCall_TypeInfo;
  if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
    v6 = UIDrawCall_TypeInfo;
  }
  v22 = (System_Collections_Generic_List_object__o *)v6->static_fields->mCache;
  if ( !v22 )
    goto LABEL_41;
  if ( v22->fields._size >= 11 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v22 = (System_Collections_Generic_List_object__o *)UIDrawCall_TypeInfo->static_fields->mCache;
      if ( !v22 )
        goto LABEL_41;
    }
    System_Collections_Generic_List_object___RemoveAt(
      v22,
      0,
      (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_int____RemoveAt__);
    v6 = UIDrawCall_TypeInfo;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = UIDrawCall_TypeInfo;
  }
  v6 = (UIDrawCall_c *)v6->static_fields->mCache;
  if ( !v6
    || (name = v6->_1.name, v24 = Method_System_Collections_Generic_List_int____Add__,
                            ++HIDWORD(v6->_1.namespaze),
                            !name) )
  {
LABEL_41:
    sub_1C32E7C(v6);
  }
  namespaze_low = SLODWORD(v6->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v6,
      &v12->obj,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &name[8 * namespaze_low];
    LODWORD(v6->_1.namespaze) = namespaze_low + 1;
    *((_QWORD *)v26 + 4) = v12;
    sub_1C32BC4((CGThumbnailListItem_o *)(v26 + 32), (int32_t)v12, v13, v14);
  }
  return v12;
}


void UIDrawCall__OnDestroy(UIDrawCall_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_mMesh; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_Mesh_o *mMesh; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C3C1DD & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    byte_4C3C1DD = 1;
  }
  mMesh = this->fields.mMesh;
  p_mMesh = (CGThumbnailListItem_o *)&this->fields.mMesh;
  v4 = (UnityEngine_Object_o *)mMesh;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__DestroyImmediate(v4, 0);
  p_mMesh->klass = 0;
  sub_1C32BC4(p_mMesh, 0, v6, v7);
}


void UIDrawCall__OnDisable(UIDrawCall_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *mRenderer; // x20
  UnityEngine_Renderer_o *v14; // x20
  UnityEngine_Material_array *v15; // x0
  CGThumbnailListItem_o *p_mDynamicMat; // x19
  UnityEngine_Object_o *v17; // x20
  struct UnityEngine_Material_o *mDynamicMat; // t1
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C3C1DC & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Material___TypeInfo);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C1DC = 1;
  }
  *(_QWORD *)&this->fields.depthStart = 0x800000007FFFFFFFLL;
  this->fields.panel = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.panel, 0, v2, v3);
  this->fields.manager = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.manager, 0, v5, v6);
  this->fields.mMaterial = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mMaterial, 0, v7, v8);
  this->fields.mTexture = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mTexture, 0, v9, v10);
  this->fields.clipTexture = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.clipTexture, 0, v11, v12);
  mRenderer = (UnityEngine_Object_o *)this->fields.mRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mRenderer, 0, 0) )
  {
    v14 = (UnityEngine_Renderer_o *)this->fields.mRenderer;
    v15 = (UnityEngine_Material_array *)sub_1C32CC8(UnityEngine_Material___TypeInfo, 0);
    if ( !v14 )
      sub_1C32E7C(v15);
    UnityEngine_Renderer__set_sharedMaterials(v14, v15, 0);
  }
  mDynamicMat = this->fields.mDynamicMat;
  p_mDynamicMat = (CGThumbnailListItem_o *)&this->fields.mDynamicMat;
  v17 = (UnityEngine_Object_o *)mDynamicMat;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__DestroyImmediate(v17, 0);
  p_mDynamicMat->klass = 0;
  sub_1C32BC4(p_mDynamicMat, 0, v19, v20);
}


void UIDrawCall__OnEnable(UIDrawCall_o *this, const MethodInfo *method)
{
  this->fields.mRebuildMat = 1;
}


void UIDrawCall__OnWillRenderObject(UIDrawCall_o *this, const MethodInfo *method)
{
  __int128 v2; // q8
  __int128 v3; // q14
  struct UIDrawCall_OnRenderCallback_o *onRender; // x8
  struct UnityEngine_Material_o *mDynamicMat; // x1
  UnityEngine_Object_o *v7; // x20
  UIPanel_o *cachedTransform; // x0
  struct UIPanel_o *panel; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UnityEngine_Material_o *v14; // x20
  __int64 v15; // x8
  UnityEngine_Material_o *v16; // x20
  float v17; // s0
  float v18; // s8
  float v19; // s9
  float v20; // s1
  float v21; // s0
  int v22; // s3
  struct UIPanel_o *mParentPanel; // x20
  float v24; // s0
  float v25; // s10
  float v26; // s1
  float v27; // s11
  float v28; // s8
  float v29; // s9
  int32_t v30; // w21
  float v31; // s11
  float v32; // s15
  float v33; // s10
  UnityEngine_Object_o *v34; // x22
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x2
  float v37; // s12
  const MethodInfo *v38; // x1
  UnityEngine_Transform_o *v39; // x22
  const MethodInfo *v40; // x1
  float v41; // s12
  float v42; // s13
  __int128 v43; // q11
  __int128 v44; // q10
  float v45; // s14
  float v46; // s15
  float v47; // s8
  const MethodInfo *v48; // x1
  float v49; // s12
  float v50; // s13
  float v51; // s14
  float v52; // s9
  float v53; // s0
  float v54; // s1
  UnityEngine_Object_o *v55; // x22
  float v56; // [xsp+4h] [xbp-8Ch]
  float v57; // [xsp+8h] [xbp-88h]
  float v58; // [xsp+Ch] [xbp-84h]
  float v59; // [xsp+Ch] [xbp-84h]
  UnityEngine_Vector2_o v60; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v61; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Positive; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o clipTextureRotationInfo; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3C1D9 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Debug_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIDrawCall_TypeInfo);
    sub_1C32C20(&StringLiteral_16168/*"_ClipTex"*/);
    sub_1C32C20(&StringLiteral_16165/*"_ClipRotateInfo"*/);
    sub_1C32C20(&StringLiteral_10515/*"Panel can only be clipped properly if X and Y rotation is left at 0"*/);
    sub_1C32C20(&StringLiteral_16166/*"_ClipSharpness"*/);
    byte_4C3C1D9 = 1;
  }
  UIDrawCall__UpdateMaterials(this, method);
  onRender = this->fields.onRender;
  if ( onRender )
  {
    mDynamicMat = this->fields.mDynamicMat;
    if ( !mDynamicMat )
      mDynamicMat = this->fields.mMaterial;
    ((void (__fastcall *)(intptr_t, struct UnityEngine_Material_o *, intptr_t))onRender->fields.invoke_impl)(
      onRender->fields.method_code,
      mDynamicMat,
      onRender->fields.method);
  }
  v7 = (UnityEngine_Object_o *)this->fields.mDynamicMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = (UIPanel_o *)UnityEngine_Object__op_Equality(v7, 0, 0);
  if ( ((unsigned __int8)cachedTransform & 1) == 0 && this->fields.mClipCount )
  {
    if ( this->fields.mTextureClip )
    {
      panel = this->fields.panel;
      if ( panel )
      {
        x = panel->fields.drawCallClipRange.fields.x;
        y = panel->fields.drawCallClipRange.fields.y;
        z = panel->fields.drawCallClipRange.fields.z;
        w = panel->fields.drawCallClipRange.fields.w;
        cachedTransform = (UIPanel_o *)UIDrawCall_TypeInfo;
        v14 = this->fields.mDynamicMat;
        if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
          cachedTransform = (UIPanel_o *)UIDrawCall_TypeInfo;
        }
        v15 = *(_QWORD *)&cachedTransform->fields.drawCalls->fields._size;
        if ( v15 )
        {
          if ( !*(_DWORD *)(v15 + 24) )
            sub_1C32E84(cachedTransform);
          if ( v14 )
          {
            v68.fields.w = 1.0 / w;
            v68.fields.z = 1.0 / z;
            v68.fields.y = (float)-y / w;
            v68.fields.x = (float)-x / z;
            UnityEngine_Material__SetVector_71093580(v14, *(_DWORD *)(v15 + 32), v68, 0);
            cachedTransform = this->fields.panel;
            if ( cachedTransform )
            {
              v16 = this->fields.mDynamicMat;
              LODWORD(v17) = *(_OWORD *)&UIPanel__get_clipTextureRotationInfo(cachedTransform, 0);
              cachedTransform = this->fields.panel;
              if ( cachedTransform )
              {
                v18 = v17;
                clipTextureRotationInfo = UIPanel__get_clipTextureRotationInfo(cachedTransform, 0);
                cachedTransform = this->fields.panel;
                if ( cachedTransform )
                {
                  v19 = clipTextureRotationInfo.fields.y;
                  v70 = UIPanel__get_clipTextureRotationInfo(cachedTransform, 0);
                  if ( v16 )
                  {
                    v20 = (float)-v19 / w;
                    v21 = (float)-v18 / z;
                    v22 = 0;
                    UnityEngine_Material__SetVector(v16, (System_String_o *)StringLiteral_16165/*"_ClipRotateInfo"*/, v70, 0);
                    cachedTransform = (UIPanel_o *)this->fields.mDynamicMat;
                    if ( cachedTransform )
                    {
                      UnityEngine_Material__SetTexture(
                        (UnityEngine_Material_o *)cachedTransform,
                        (System_String_o *)StringLiteral_16168/*"_ClipTex"*/,
                        (UnityEngine_Texture_o *)this->fields.clipTexture,
                        0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_61:
      sub_1C32E7C(cachedTransform);
    }
    mParentPanel = this->fields.panel;
    if ( this->fields.mLegacyShader )
    {
      if ( !mParentPanel )
        goto LABEL_61;
      v24 = mParentPanel->fields.mClipSoftness.fields.x;
      v25 = mParentPanel->fields.drawCallClipRange.fields.z;
      v26 = mParentPanel->fields.mClipSoftness.fields.y;
      v27 = mParentPanel->fields.drawCallClipRange.fields.w;
      cachedTransform = (UIPanel_o *)this->fields.mDynamicMat;
      v28 = v24 <= 0.0 ? 1000.0 : v25 / v24;
      v29 = v26 <= 0.0 ? 1000.0 : v27 / v26;
      if ( !cachedTransform )
        goto LABEL_61;
      v60.fields.y = (float)-mParentPanel->fields.drawCallClipRange.fields.y / v27;
      v60.fields.x = (float)-mParentPanel->fields.drawCallClipRange.fields.x / v25;
      UnityEngine_Material__set_mainTextureOffset((UnityEngine_Material_o *)cachedTransform, v60, 0);
      cachedTransform = (UIPanel_o *)this->fields.mDynamicMat;
      if ( !cachedTransform )
        goto LABEL_61;
      v61.fields.x = 1.0 / v25;
      v61.fields.y = 1.0 / v27;
      UnityEngine_Material__set_mainTextureScale((UnityEngine_Material_o *)cachedTransform, v61, 0);
      cachedTransform = (UIPanel_o *)this->fields.mDynamicMat;
      if ( !cachedTransform )
        goto LABEL_61;
      v71.fields.x = v28;
      v71.fields.y = v29;
      v71.fields.z = 0.0;
      v71.fields.w = 0.0;
      UnityEngine_Material__SetVector(
        (UnityEngine_Material_o *)cachedTransform,
        (System_String_o *)StringLiteral_16166/*"_ClipSharpness"*/,
        v71,
        0);
    }
    else
    {
      LODWORD(v3) = 981668463;
      v30 = 0;
      while ( 1 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        cachedTransform = (UIPanel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)mParentPanel, 0, 0);
        if ( ((unsigned __int8)cachedTransform & 1) == 0 )
          break;
        if ( !mParentPanel )
          goto LABEL_61;
        if ( UIPanel__get_hasClipping(mParentPanel, 0) )
        {
          *(float *)&v2 = mParentPanel->fields.drawCallClipRange.fields.x;
          v31 = mParentPanel->fields.drawCallClipRange.fields.y;
          v32 = mParentPanel->fields.drawCallClipRange.fields.z;
          v33 = mParentPanel->fields.drawCallClipRange.fields.w;
          v34 = (UnityEngine_Object_o *)this->fields.panel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v37 = 0.0;
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)mParentPanel, v34, 0) )
          {
            cachedTransform = (UIPanel_o *)UIRect__get_cachedTransform((UIRect_o *)mParentPanel, v35);
            if ( !this->fields.panel )
              goto LABEL_61;
            v39 = (UnityEngine_Transform_o *)cachedTransform;
            cachedTransform = (UIPanel_o *)UIRect__get_cachedTransform((UIRect_o *)this->fields.panel, v38);
            if ( !cachedTransform )
              goto LABEL_61;
            position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)cachedTransform, 0);
            if ( !v39 )
              goto LABEL_61;
            v58 = v31;
            v63 = UnityEngine_Transform__InverseTransformPoint(v39, position, 0);
            cachedTransform = this->fields.panel;
            if ( !cachedTransform )
              goto LABEL_61;
            v41 = v63.fields.x;
            v42 = v63.fields.y;
            v56 = v32;
            v57 = v33;
            v43 = v2;
            v44 = v3;
            cachedTransform = (UIPanel_o *)UIRect__get_cachedTransform((UIRect_o *)cachedTransform, v40);
            if ( !cachedTransform )
              goto LABEL_61;
            rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)cachedTransform, 0);
            v64 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation, 0);
            v64.fields.x = v64.fields.x * 57.296;
            v64.fields.y = v64.fields.y * 57.296;
            v64.fields.z = v64.fields.z * 57.296;
            Positive = UnityEngine_Quaternion__Internal_MakePositive(v64, 0);
            v45 = Positive.fields.x;
            v46 = Positive.fields.y;
            v47 = Positive.fields.z;
            cachedTransform = (UIPanel_o *)UIRect__get_cachedTransform((UIRect_o *)mParentPanel, v48);
            if ( !cachedTransform )
              goto LABEL_61;
            *(float *)&v43 = *(float *)&v43 - v41;
            v59 = v58 - v42;
            v73 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)cachedTransform, 0);
            v66 = UnityEngine_Quaternion__Internal_ToEulerRad(v73, 0);
            v66.fields.x = v66.fields.x * 57.296;
            v66.fields.y = v66.fields.y * 57.296;
            v66.fields.z = v66.fields.z * 57.296;
            v67 = UnityEngine_Quaternion__Internal_MakePositive(v66, 0);
            v49 = v67.fields.y - v46;
            v50 = v67.fields.z - v47;
            v51 = NGUIMath__WrapAngle(v67.fields.x - v45, 0);
            v52 = NGUIMath__WrapAngle(v49, 0);
            v53 = NGUIMath__WrapAngle(v50, 0);
            v54 = fabsf(v51);
            v3 = v44;
            v37 = v53;
            if ( v54 > *(float *)&v44 || fabsf(v52) > *(float *)&v44 )
            {
              v55 = (UnityEngine_Object_o *)this->fields.panel;
              v32 = v56;
              v33 = v57;
              if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
              UnityEngine_Debug__LogWarning_71037576((Il2CppObject *)StringLiteral_10515/*"Panel can only be clipped properly if X and Y rotation is left at 0"*/, v55, 0);
            }
            else
            {
              v32 = v56;
              v33 = v57;
            }
            v2 = v43;
            v31 = v59;
          }
          LODWORD(v74.fields.x) = v2;
          v74.fields.y = v31;
          v74.fields.z = v32;
          v74.fields.w = v33;
          UIDrawCall__SetClipping(this, v30++, v74, mParentPanel->fields.mClipSoftness, v37, v36);
        }
        mParentPanel = mParentPanel->fields.mParentPanel;
      }
    }
  }
}


UnityEngine_Material_o *UIDrawCall__RebuildMaterial(UIDrawCall_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mDynamicMat; // x20
  const MethodInfo *v4; // x1
  UnityEngine_Material_o *v5; // x0
  UnityEngine_Object_o *mTexture; // x20
  UnityEngine_Object_o *mRenderer; // x20
  UnityEngine_Renderer_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UnityEngine_Material_o *v11; // x22
  UnityEngine_Material_o *v12; // x21
  __int64 v14; // x0

  if ( (byte_4C3C1D5 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Material___TypeInfo);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C1D5 = 1;
  }
  mDynamicMat = (UnityEngine_Object_o *)this->fields.mDynamicMat;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__DestroyImmediate(mDynamicMat, 0);
  UIDrawCall__CreateMaterial(this, v4);
  v5 = this->fields.mDynamicMat;
  if ( !v5 )
    goto LABEL_21;
  UnityEngine_Material__set_renderQueue(v5, this->fields.mRenderQueue, 0);
  mTexture = (UnityEngine_Object_o *)this->fields.mTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mTexture, 0, 0) )
  {
    v5 = this->fields.mDynamicMat;
    if ( !v5 )
      goto LABEL_21;
    UnityEngine_Material__set_mainTexture(v5, this->fields.mTexture, 0);
  }
  mRenderer = (UnityEngine_Object_o *)this->fields.mRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mRenderer, 0, 0) )
  {
    v8 = (UnityEngine_Renderer_o *)this->fields.mRenderer;
    v5 = (UnityEngine_Material_o *)sub_1C32CC8(UnityEngine_Material___TypeInfo, 1);
    if ( v5 )
    {
      v11 = this->fields.mDynamicMat;
      v12 = v5;
      if ( v11 )
      {
        v5 = (UnityEngine_Material_o *)sub_1C32D5C(this->fields.mDynamicMat, v5->klass->_1.element_class);
        if ( !v5 )
        {
          v14 = sub_1C32EA0(0);
          sub_1C32D48(v14, 0);
        }
      }
      if ( !LODWORD(v12[1].klass) )
        sub_1C32E84(v5);
      v12[1].monitor = v11;
      sub_1C32BC4((CGThumbnailListItem_o *)&v12[1].monitor, (int32_t)v11, v9, v10);
      if ( v8 )
      {
        UnityEngine_Renderer__set_sharedMaterials(v8, (UnityEngine_Material_array *)v12, 0);
        return this->fields.mDynamicMat;
      }
    }
LABEL_21:
    sub_1C32E7C(v5);
  }
  return this->fields.mDynamicMat;
}


void UIDrawCall__ReleaseAll(const MethodInfo *method)
{
  UIDrawCall_c *v1; // x0
  const MethodInfo *v2; // x0

  if ( (byte_4C3C1E2 & 1) == 0 )
  {
    sub_1C32C20(&UIDrawCall_TypeInfo);
    byte_4C3C1E2 = 1;
  }
  v1 = UIDrawCall_TypeInfo;
  if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
  UIDrawCall__ClearAll((const MethodInfo *)v1);
  UIDrawCall__ReleaseInactive(v2);
}


void UIDrawCall__ReleaseInactive(const MethodInfo *method)
{
  UIDrawCall_c *v1; // x0
  struct BetterList_UIDrawCall__o *mInactiveList; // x8
  int size; // w19
  Il2CppObject *Item; // x20
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4C3C1E3 & 1) == 0 )
  {
    sub_1C32C20(&Method_BetterList_UIDrawCall__Clear__);
    sub_1C32C20(&Method_BetterList_UIDrawCall__get_Item__);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIDrawCall_TypeInfo);
    byte_4C3C1E3 = 1;
  }
  v1 = UIDrawCall_TypeInfo;
  if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
    v1 = UIDrawCall_TypeInfo;
  }
  mInactiveList = v1->static_fields->mInactiveList;
  if ( !mInactiveList )
    goto LABEL_21;
  size = mInactiveList->fields.size;
  while ( 1 )
  {
    if ( !v1->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v1);
      v1 = UIDrawCall_TypeInfo;
    }
    v1 = (UIDrawCall_c *)v1->static_fields->mInactiveList;
    if ( size <= 0 )
      break;
    if ( !v1 )
      goto LABEL_21;
    Item = BetterList_object___get_Item(
             (BetterList_T__o *)v1,
             --size,
             (const MethodInfo_330F558 *)Method_BetterList_UIDrawCall__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v1 = (UIDrawCall_c *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Item, 0);
    if ( ((unsigned __int8)v1 & 1) != 0 )
    {
      if ( !Item )
        goto LABEL_21;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__DestroyImmediate(gameObject, 0);
    }
    v1 = UIDrawCall_TypeInfo;
  }
  if ( !v1 )
LABEL_21:
    sub_1C32E7C(v1);
  BetterList_object___Clear((BetterList_T__o *)v1, (const MethodInfo_330F768 *)Method_BetterList_UIDrawCall__Clear__);
}


void UIDrawCall__SetClipping(
        UIDrawCall_o *this,
        int32_t index,
        UnityEngine_Vector4_o cr,
        UnityEngine_Vector2_o soft,
        float angle,
        const MethodInfo *method)
{
  float y; // s10
  float x; // s9
  float w; // s12
  float z; // s11
  float v11; // s14
  float v12; // s13
  UIDrawCall_c *v15; // x0
  float v16; // s9
  float v17; // s10
  struct System_Int32_array *ClipRange; // x8
  UnityEngine_Material_o *mDynamicMat; // x21
  struct System_Int32_array *ClipArgs; // x21
  UnityEngine_Material_o *v21; // x19
  float cosx; // [xsp+8h] [xbp-68h] BYREF
  float sinx; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector4_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  y = soft.fields.y;
  x = soft.fields.x;
  w = cr.fields.w;
  z = cr.fields.z;
  v11 = cr.fields.y;
  v12 = cr.fields.x;
  if ( (byte_4C3C1DA & 1) == 0 )
  {
    sub_1C32C20(&UIDrawCall_TypeInfo);
    byte_4C3C1DA = 1;
  }
  v15 = UIDrawCall_TypeInfo;
  if ( x <= 0.0 )
    v16 = 1000.0;
  else
    v16 = z / x;
  if ( y <= 0.0 )
    v17 = 1000.0;
  else
    v17 = w / y;
  if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
    v15 = UIDrawCall_TypeInfo;
  }
  ClipRange = v15->static_fields->ClipRange;
  if ( !ClipRange )
    goto LABEL_22;
  if ( SLODWORD(ClipRange->max_length) > index )
  {
    mDynamicMat = this->fields.mDynamicMat;
    if ( v15->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v15), (ClipRange = UIDrawCall_TypeInfo->static_fields->ClipRange) != 0) )
    {
      if ( LODWORD(ClipRange->max_length) <= index )
        goto LABEL_23;
      if ( !mDynamicMat )
        goto LABEL_22;
      v24.fields.w = 1.0 / w;
      v24.fields.z = 1.0 / z;
      v24.fields.y = (float)-v11 / w;
      v24.fields.x = (float)-v12 / z;
      UnityEngine_Material__SetVector_71093580(mDynamicMat, ClipRange->m_Items[index], v24, 0);
      ClipArgs = UIDrawCall_TypeInfo->static_fields->ClipArgs;
      if ( !ClipArgs )
        goto LABEL_22;
      if ( LODWORD(ClipArgs->max_length) <= index )
LABEL_23:
        sub_1C32E84(v15);
      v21 = this->fields.mDynamicMat;
      if ( v21 )
      {
        sincosf(angle * -0.017453, &sinx, &cosx);
        v25.fields.w = cosx;
        v25.fields.z = sinx;
        v25.fields.x = v16;
        v25.fields.y = v17;
        UnityEngine_Material__SetVector_71093580(v21, ClipArgs->m_Items[index], v25, 0);
        return;
      }
    }
LABEL_22:
    sub_1C32E7C(v15);
  }
}


void UIDrawCall__UpdateGeometry(UIDrawCall_o *this, int32_t widgetCount, const MethodInfo *method)
{
  UIDrawCall_o *v4; // x19
  struct BetterList_Vector3__o *verts; // x8
  unsigned int v6; // w21
  struct BetterList_Vector2__o *uvs; // x8
  struct BetterList_Color32__o *cols; // x8
  UIDrawCall_o **p_mFilter; // x20
  UnityEngine_Object_o *mFilter; // x22
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *v14; // x22
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct BetterList_Vector3__o *v18; // x8
  UnityEngine_Object_o *v19; // x21
  struct BetterList_Vector3__o *v20; // x8
  System_String_o *v21; // x0
  Il2CppObject *v22; // x20
  UnityEngine_Object_o *mesh; // x20
  System_String_o *v24; // x0
  Il2CppObject *v25; // x20
  struct System_Int32_array *mIndices; // x8
  System_Int32_array **p_mIndices; // x23
  int32_t v28; // w24
  _BOOL4 v29; // w26
  UIDrawCall_o **p_mMesh; // x22
  UnityEngine_Object_o *mMesh; // x25
  UnityEngine_Mesh_o *v32; // x25
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  UnityEngine_Object_o *v35; // x25
  UnityEngine_Object_o *mMaterial; // x26
  System_String_o *name; // x0
  System_String_o *v38; // x1
  struct BetterList_Vector2__o *v39; // x8
  struct UnityEngine_Vector2_array *buffer; // x9
  struct BetterList_Vector3__o *v41; // x8
  struct UnityEngine_Vector3_array *v42; // x10
  int max_length; // w9
  struct BetterList_Color32__o *v44; // x10
  struct UnityEngine_Color32_array *v45; // x10
  struct BetterList_Vector3__o *norms; // x10
  struct UnityEngine_Vector3_array *v47; // x10
  struct BetterList_Vector4__o *tans; // x10
  struct UnityEngine_Vector4_array *v49; // x10
  struct UIPanel_o *panel; // x9
  UIDrawCall_o *v51; // x25
  int v52; // w28
  BetterList_Vector3__o *v53; // x8
  UIDrawCall_o *v54; // x25
  UnityEngine_Mesh_o *v55; // x25
  UnityEngine_Mesh_o *v56; // x25
  const MethodInfo *v57; // x3
  BetterList_Vector3__o *v58; // x0
  UIDrawCall_o *v59; // x25
  UIDrawCall_o *v60; // x0
  UIDrawCall_o *v61; // x25
  struct UnityEngine_Vector3_array *v62; // x9
  int v63; // w9
  struct UnityEngine_Vector3_array *v64; // x8
  struct BetterList_Vector3__o *v65; // x9
  struct UnityEngine_Vector3_array *v66; // x10
  int v67; // w8
  struct BetterList_Vector2__o *v68; // x8
  struct BetterList_Color32__o *v69; // x8
  struct BetterList_Vector3__o *v70; // x8
  struct BetterList_Vector4__o *v71; // x8
  System_Int32_array *v72; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  UnityEngine_Object_o **p_mRenderer; // x20
  UnityEngine_Object_o *mRenderer; // x21
  Il2CppObject *v77; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  UnityEngine_Object_o *v80; // x21
  const MethodInfo *v81; // x1
  Il2CppObject *v82; // x0
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  int size; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4C3C1D7 & 1) == 0 )
  {
    sub_1C32C20(&Method_BetterList_Vector2__Clear__);
    sub_1C32C20(&Method_BetterList_Vector3__Clear__);
    sub_1C32C20(&Method_BetterList_Color32__Clear__);
    sub_1C32C20(&Method_BetterList_Vector4__Clear__);
    sub_1C32C20(&Method_BetterList_Vector3__ToArray__);
    sub_1C32C20(&Method_BetterList_Vector4__ToArray__);
    sub_1C32C20(&Method_BetterList_Color32__ToArray__);
    sub_1C32C20(&Method_BetterList_Vector2__ToArray__);
    sub_1C32C20(&UnityEngine_Debug_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
    sub_1C32C20(&Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1C32C20(&UnityEngine_Mesh_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_15931/*"[NGUI] "*/);
    sub_1C32C20(&StringLiteral_15932/*"[NGUI] Mesh"*/);
    sub_1C32C20(&StringLiteral_14551/*"Too many vertices on one panel: "*/);
    this = (UIDrawCall_o *)sub_1C32C20(&StringLiteral_14802/*"UIWidgets must fill the buffer with 4 vertices per quad. Found "*/);
    byte_4C3C1D7 = 1;
  }
  verts = v4->fields.verts;
  v4->fields.widgetCount = widgetCount;
  if ( !verts )
    goto LABEL_154;
  size = verts->fields.size;
  v6 = size;
  if ( size < 1 )
    goto LABEL_33;
  uvs = v4->fields.uvs;
  if ( !uvs )
    goto LABEL_154;
  if ( size != uvs->fields.size )
    goto LABEL_33;
  cols = v4->fields.cols;
  if ( !cols )
    goto LABEL_154;
  if ( (size & 3) != 0 || size != cols->fields.size )
  {
LABEL_33:
    this = (UIDrawCall_o *)v4->fields.mFilter;
    if ( !this )
      goto LABEL_154;
    mesh = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mesh, 0, 0) )
    {
      this = (UIDrawCall_o *)v4->fields.mFilter;
      if ( !this )
        goto LABEL_154;
      this = (UIDrawCall_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0);
      if ( !this )
        goto LABEL_154;
      UnityEngine_Mesh__Clear((UnityEngine_Mesh_o *)this, 0);
    }
    v24 = System_Int32__ToString((int32_t)&size, 0);
    v25 = (Il2CppObject *)System_String__Concat_63518544((System_String_o *)StringLiteral_14802/*"UIWidgets must fill the buffer with 4 vertices per quad. Found "*/, v24, 0);
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogError(v25, 0);
    goto LABEL_43;
  }
  p_mFilter = (UIDrawCall_o **)&v4->fields.mFilter;
  mFilter = (UnityEngine_Object_o *)v4->fields.mFilter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mFilter, 0, 0) )
  {
    this = (UIDrawCall_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
    if ( !this )
      goto LABEL_154;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
    *p_mFilter = (UIDrawCall_o *)Component_object;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.mFilter, (int32_t)Component_object, v12, v13);
  }
  v14 = (UnityEngine_Object_o *)*p_mFilter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (UIDrawCall_o *)UnityEngine_Object__op_Equality(v14, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (UIDrawCall_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
    if ( !this )
      goto LABEL_154;
    v15 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)this,
            (const MethodInfo_3134888 *)Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
    *p_mFilter = (UIDrawCall_o *)v15;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.mFilter, (int32_t)v15, v16, v17);
  }
  v18 = v4->fields.verts;
  if ( !v18 )
LABEL_154:
    sub_1C32E7C(this);
  if ( v18->fields.size <= 64999 )
  {
    p_mIndices = &v4->fields.mIndices;
    mIndices = v4->fields.mIndices;
    v28 = 3 * (v6 >> 1);
    if ( mIndices )
      v29 = v28 != LODWORD(mIndices->max_length);
    else
      v29 = 1;
    p_mMesh = (UIDrawCall_o **)&v4->fields.mMesh;
    mMesh = (UnityEngine_Object_o *)v4->fields.mMesh;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (UIDrawCall_o *)UnityEngine_Object__op_Equality(mMesh, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v32 = (UnityEngine_Mesh_o *)sub_1C32E6C(UnityEngine_Mesh_TypeInfo);
      UnityEngine_Mesh___ctor(v32, 0);
      *p_mMesh = (UIDrawCall_o *)v32;
      sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.mMesh, (int32_t)v32, v33, v34);
      this = *p_mMesh;
      if ( !*p_mMesh )
        goto LABEL_154;
      UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)this, 52, 0);
      v35 = (UnityEngine_Object_o *)v4->fields.mMesh;
      mMaterial = (UnityEngine_Object_o *)v4->fields.mMaterial;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (UIDrawCall_o *)UnityEngine_Object__op_Inequality(mMaterial, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (UIDrawCall_o *)v4->fields.mMaterial;
        if ( !this )
          goto LABEL_154;
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (UIDrawCall_o *)System_String__Concat_63518544((System_String_o *)StringLiteral_15931/*"[NGUI] "*/, name, 0);
        v38 = (System_String_o *)this;
      }
      else
      {
        v38 = (System_String_o *)StringLiteral_15932/*"[NGUI] Mesh"*/;
      }
      if ( !v35 )
        goto LABEL_154;
      UnityEngine_Object__set_name(v35, v38, 0);
      this = *p_mMesh;
      if ( !*p_mMesh )
        goto LABEL_154;
      UnityEngine_Mesh__MarkDynamic((UnityEngine_Mesh_o *)this, 0);
      v29 = 1;
    }
    v39 = v4->fields.uvs;
    if ( !v39 )
      goto LABEL_154;
    buffer = v39->fields.buffer;
    if ( !buffer )
      goto LABEL_154;
    v41 = v4->fields.verts;
    if ( !v41 )
      goto LABEL_154;
    v42 = v41->fields.buffer;
    if ( !v42 )
      goto LABEL_154;
    max_length = buffer->max_length;
    if ( max_length != LODWORD(v42->max_length) )
      goto LABEL_85;
    v44 = v4->fields.cols;
    if ( !v44 )
      goto LABEL_154;
    v45 = v44->fields.buffer;
    if ( !v45 )
      goto LABEL_154;
    if ( LODWORD(v45->max_length) != max_length )
      goto LABEL_85;
    norms = v4->fields.norms;
    if ( !norms )
      goto LABEL_154;
    v47 = norms->fields.buffer;
    if ( v47 )
    {
      if ( LODWORD(v47->max_length) != max_length )
        goto LABEL_85;
    }
    tans = v4->fields.tans;
    if ( !tans )
      goto LABEL_154;
    v49 = tans->fields.buffer;
    if ( v49 )
    {
      if ( LODWORD(v49->max_length) != max_length )
        goto LABEL_85;
    }
    panel = v4->fields.panel;
    if ( !panel )
      goto LABEL_154;
    if ( panel->fields.renderQueue )
    {
      v51 = *p_mMesh;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (UIDrawCall_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v51, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v41 = v4->fields.verts;
        if ( !v41 )
          goto LABEL_154;
LABEL_85:
        v52 = 0;
        v4->fields.mTriangles = v41->fields.size >> 1;
        goto LABEL_86;
      }
      this = *p_mMesh;
      if ( !*p_mMesh )
        goto LABEL_154;
      this = (UIDrawCall_o *)UnityEngine_Mesh__get_vertexCount((UnityEngine_Mesh_o *)this, 0);
      v41 = v4->fields.verts;
      if ( !v41 )
        goto LABEL_154;
      v62 = v41->fields.buffer;
      if ( !v62 )
        goto LABEL_154;
      v63 = v62->max_length;
      v4->fields.mTriangles = v41->fields.size >> 1;
      if ( (_DWORD)this != v63 )
      {
        v52 = 0;
        goto LABEL_86;
      }
    }
    else
    {
      v4->fields.mTriangles = v41->fields.size >> 1;
    }
    v64 = v41->fields.buffer;
    if ( !v64 )
      goto LABEL_154;
    this = *p_mMesh;
    if ( SLODWORD(v64->max_length) < 65001 )
    {
      if ( !this )
        goto LABEL_154;
      this = (UIDrawCall_o *)UnityEngine_Mesh__get_vertexCount((UnityEngine_Mesh_o *)this, 0);
      v65 = v4->fields.verts;
      if ( !v65 )
        goto LABEL_154;
      v66 = v65->fields.buffer;
      if ( !v66 )
        goto LABEL_154;
      v67 = (int)this;
      this = *p_mMesh;
      if ( v67 != LODWORD(v66->max_length) )
      {
        if ( !this )
          goto LABEL_154;
        UnityEngine_Mesh__Clear((UnityEngine_Mesh_o *)this, 0);
        v65 = v4->fields.verts;
        if ( !v65 )
          goto LABEL_154;
        this = (UIDrawCall_o *)v4->fields.mMesh;
        v29 = 1;
      }
      if ( !this )
        goto LABEL_154;
      UnityEngine_Mesh__set_vertices((UnityEngine_Mesh_o *)this, v65->fields.buffer, 0);
      v68 = v4->fields.uvs;
      if ( !v68 )
        goto LABEL_154;
      this = (UIDrawCall_o *)v4->fields.mMesh;
      if ( !this )
        goto LABEL_154;
      UnityEngine_Mesh__set_uv((UnityEngine_Mesh_o *)this, v68->fields.buffer, 0);
      v69 = v4->fields.cols;
      if ( !v69 )
        goto LABEL_154;
      this = (UIDrawCall_o *)v4->fields.mMesh;
      if ( !this )
        goto LABEL_154;
      UnityEngine_Mesh__set_colors32((UnityEngine_Mesh_o *)this, v69->fields.buffer, 0);
      v70 = v4->fields.norms;
      if ( v70 )
      {
        this = *p_mMesh;
        if ( !*p_mMesh )
          goto LABEL_154;
        UnityEngine_Mesh__set_normals((UnityEngine_Mesh_o *)this, v70->fields.buffer, 0);
      }
      v71 = v4->fields.tans;
      if ( v71 )
      {
        this = *p_mMesh;
        if ( !*p_mMesh )
          goto LABEL_154;
        UnityEngine_Mesh__set_tangents((UnityEngine_Mesh_o *)this, v71->fields.buffer, 0);
        if ( !v29 )
        {
LABEL_138:
          if ( v4->fields.alwaysOnScreen )
          {
LABEL_141:
            this = *p_mFilter;
            if ( !*p_mFilter )
              goto LABEL_154;
            UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)this, (UnityEngine_Mesh_o *)*p_mMesh, 0);
            goto LABEL_143;
          }
LABEL_139:
          this = *p_mMesh;
          if ( !*p_mMesh )
            goto LABEL_154;
          UnityEngine_Mesh__RecalculateBounds((UnityEngine_Mesh_o *)this, 0);
          goto LABEL_141;
        }
        LOBYTE(v52) = 1;
LABEL_134:
        v72 = UIDrawCall__GenerateCachedIndexBuffer(v60, v6, v28, v57);
        *p_mIndices = v72;
        sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.mIndices, (int32_t)v72, v73, v74);
        this = *p_mMesh;
        if ( !*p_mMesh )
          goto LABEL_154;
        UnityEngine_Mesh__set_triangles((UnityEngine_Mesh_o *)this, *p_mIndices, 0);
        if ( (v52 & 1) == 0 )
          goto LABEL_139;
        goto LABEL_138;
      }
      v52 = 1;
LABEL_133:
      if ( !v29 )
        goto LABEL_137;
      goto LABEL_134;
    }
    if ( !this )
      goto LABEL_154;
    this = (UIDrawCall_o *)UnityEngine_Mesh__get_vertexCount((UnityEngine_Mesh_o *)this, 0);
    v53 = v4->fields.verts;
    if ( !v53 )
      goto LABEL_154;
    v52 = 1;
    if ( (_DWORD)this == v53->fields.size )
    {
LABEL_89:
      v54 = *p_mMesh;
      this = (UIDrawCall_o *)BetterList_Vector3___ToArray(
                               v53,
                               (const MethodInfo_3311C04 *)Method_BetterList_Vector3__ToArray__);
      if ( !v54 )
        goto LABEL_154;
      UnityEngine_Mesh__set_vertices((UnityEngine_Mesh_o *)v54, (UnityEngine_Vector3_array *)this, 0);
      this = (UIDrawCall_o *)v4->fields.uvs;
      if ( !this )
        goto LABEL_154;
      v55 = v4->fields.mMesh;
      this = (UIDrawCall_o *)BetterList_Vector2___ToArray(
                               (BetterList_Vector2__o *)this,
                               (const MethodInfo_3311068 *)Method_BetterList_Vector2__ToArray__);
      if ( !v55 )
        goto LABEL_154;
      UnityEngine_Mesh__set_uv(v55, (UnityEngine_Vector2_array *)this, 0);
      this = (UIDrawCall_o *)v4->fields.cols;
      if ( !this )
        goto LABEL_154;
      v56 = v4->fields.mMesh;
      this = (UIDrawCall_o *)BetterList_Color32___ToArray(
                               (BetterList_Color32__o *)this,
                               (const MethodInfo_330EA68 *)Method_BetterList_Color32__ToArray__);
      if ( !v56 )
        goto LABEL_154;
      UnityEngine_Mesh__set_colors32(v56, (UnityEngine_Color32_array *)this, 0);
      v58 = v4->fields.norms;
      if ( v58 )
      {
        v59 = *p_mMesh;
        this = (UIDrawCall_o *)BetterList_Vector3___ToArray(
                                 v58,
                                 (const MethodInfo_3311C04 *)Method_BetterList_Vector3__ToArray__);
        if ( !v59 )
          goto LABEL_154;
        UnityEngine_Mesh__set_normals((UnityEngine_Mesh_o *)v59, (UnityEngine_Vector3_array *)this, 0);
      }
      v60 = (UIDrawCall_o *)v4->fields.tans;
      if ( v60 )
      {
        v61 = *p_mMesh;
        this = (UIDrawCall_o *)BetterList_Vector4___ToArray(
                                 (BetterList_Vector4__o *)v60,
                                 (const MethodInfo_3312740 *)Method_BetterList_Vector4__ToArray__);
        if ( !v61 )
          goto LABEL_154;
        UnityEngine_Mesh__set_tangents((UnityEngine_Mesh_o *)v61, (UnityEngine_Vector4_array *)this, 0);
        if ( !v29 )
        {
LABEL_137:
          if ( !v52 )
            goto LABEL_139;
          goto LABEL_138;
        }
        goto LABEL_134;
      }
      goto LABEL_133;
    }
LABEL_86:
    this = *p_mMesh;
    if ( !*p_mMesh )
      goto LABEL_154;
    UnityEngine_Mesh__Clear((UnityEngine_Mesh_o *)this, 0);
    v53 = v4->fields.verts;
    if ( !v53 )
      goto LABEL_154;
    v29 = 1;
    goto LABEL_89;
  }
  this = (UIDrawCall_o *)v4->fields.mFilter;
  v4->fields.mTriangles = 0;
  if ( !this )
    goto LABEL_154;
  v19 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (UIDrawCall_o *)UnityEngine_Object__op_Inequality(v19, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_29;
  this = *p_mFilter;
  if ( !*p_mFilter )
    goto LABEL_154;
  this = (UIDrawCall_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0);
  if ( !this )
    goto LABEL_154;
  UnityEngine_Mesh__Clear((UnityEngine_Mesh_o *)this, 0);
LABEL_29:
  v20 = v4->fields.verts;
  if ( !v20 )
    goto LABEL_154;
  v21 = System_Int32__ToString((int)v20 + 24, 0);
  v22 = (Il2CppObject *)System_String__Concat_63518544((System_String_o *)StringLiteral_14551/*"Too many vertices on one panel: "*/, v21, 0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v22, 0);
LABEL_143:
  p_mRenderer = (UnityEngine_Object_o **)&v4->fields.mRenderer;
  mRenderer = (UnityEngine_Object_o *)v4->fields.mRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mRenderer, 0, 0) )
  {
    this = (UIDrawCall_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
    if ( !this )
      goto LABEL_154;
    v77 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)this,
            (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    *p_mRenderer = (UnityEngine_Object_o *)v77;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.mRenderer, (int32_t)v77, v78, v79);
  }
  v80 = *p_mRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v80, 0, 0) )
  {
    this = (UIDrawCall_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
    if ( !this )
      goto LABEL_154;
    v82 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)this,
            (const MethodInfo_3134888 *)Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
    *p_mRenderer = (UnityEngine_Object_o *)v82;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.mRenderer, (int32_t)v82, v83, v84);
  }
  UIDrawCall__UpdateMaterials(v4, v81);
LABEL_43:
  this = (UIDrawCall_o *)v4->fields.verts;
  if ( !this )
    goto LABEL_154;
  BetterList_Vector3___Clear(
    (BetterList_Vector3__o *)this,
    (const MethodInfo_3311494 *)Method_BetterList_Vector3__Clear__);
  this = (UIDrawCall_o *)v4->fields.uvs;
  if ( !this )
    goto LABEL_154;
  BetterList_Vector2___Clear(
    (BetterList_Vector2__o *)this,
    (const MethodInfo_3310A08 *)Method_BetterList_Vector2__Clear__);
  this = (UIDrawCall_o *)v4->fields.cols;
  if ( !this )
    goto LABEL_154;
  BetterList_Color32___Clear(
    (BetterList_Color32__o *)this,
    (const MethodInfo_330E4BC *)Method_BetterList_Color32__Clear__);
  this = (UIDrawCall_o *)v4->fields.norms;
  if ( !this )
    goto LABEL_154;
  BetterList_Vector3___Clear(
    (BetterList_Vector3__o *)this,
    (const MethodInfo_3311494 *)Method_BetterList_Vector3__Clear__);
  this = (UIDrawCall_o *)v4->fields.tans;
  if ( !this )
    goto LABEL_154;
  BetterList_Vector4___Clear(
    (BetterList_Vector4__o *)this,
    (const MethodInfo_3312000 *)Method_BetterList_Vector4__Clear__);
}


void UIDrawCall__UpdateMaterials(UIDrawCall_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panel; // x20
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *mRenderer; // x20
  __int64 clipCount; // x0
  UnityEngine_Material_o *sharedMaterial; // x0
  UnityEngine_Object_o *mMaterial; // x20
  UnityEngine_Object_o *v9; // x21
  UnityEngine_Renderer_o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UnityEngine_Material_o *v13; // x22
  __int64 v14; // x21
  UnityEngine_Object_o *mDynamicMat; // x20
  int32_t mClipCount; // w20
  struct UIPanel_o *v17; // x8
  UnityEngine_Material_o *v18; // x0
  UnityEngine_Object_o *v19; // x20
  UnityEngine_Object_o *v20; // x21
  UnityEngine_Renderer_o *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct UnityEngine_Material_o *v24; // x19
  __int64 v25; // x21
  __int64 v26; // x0

  if ( (byte_4C3C1D6 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Material___TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C1D6 = 1;
  }
  panel = (UnityEngine_Object_o *)this->fields.panel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(panel, 0, 0) )
  {
    if ( this->fields.mUseOriginalMaterial )
    {
      mRenderer = (UnityEngine_Object_o *)this->fields.mRenderer;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(mRenderer, 0, 0) )
      {
        clipCount = (__int64)this->fields.mRenderer;
        if ( !clipCount )
          goto LABEL_41;
        sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)clipCount, 0);
        mMaterial = (UnityEngine_Object_o *)this->fields.mMaterial;
        v9 = (UnityEngine_Object_o *)sharedMaterial;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v9, mMaterial, 0) )
        {
          v10 = (UnityEngine_Renderer_o *)this->fields.mRenderer;
          clipCount = sub_1C32CC8(UnityEngine_Material___TypeInfo, 1);
          if ( !clipCount )
            goto LABEL_41;
          v13 = this->fields.mMaterial;
          v14 = clipCount;
          if ( !v13 || (clipCount = sub_1C32D5C(this->fields.mMaterial, *(_QWORD *)(*(_QWORD *)clipCount + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v14 + 24) )
            {
              *(_QWORD *)(v14 + 32) = v13;
              sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 32), (int32_t)v13, v11, v12);
              if ( v10 )
              {
                UnityEngine_Renderer__set_sharedMaterials(v10, (UnityEngine_Material_array *)v14, 0);
                clipCount = (__int64)this->fields.mMaterial;
                if ( clipCount )
                {
                  UnityEngine_Material__set_renderQueue(
                    (UnityEngine_Material_o *)clipCount,
                    this->fields.mRenderQueue,
                    0);
                  return;
                }
              }
LABEL_41:
              sub_1C32E7C(clipCount);
            }
LABEL_42:
            sub_1C32E84(clipCount);
          }
LABEL_43:
          v26 = sub_1C32EA0(clipCount);
          sub_1C32D48(v26, 0);
        }
      }
    }
    else
    {
      if ( this->fields.mRebuildMat )
        goto LABEL_39;
      mDynamicMat = (UnityEngine_Object_o *)this->fields.mDynamicMat;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(mDynamicMat, 0, 0) )
        goto LABEL_39;
      clipCount = (__int64)this->fields.panel;
      if ( !clipCount )
        goto LABEL_41;
      mClipCount = this->fields.mClipCount;
      clipCount = UIPanel__get_clipCount((UIPanel_o *)clipCount, 0);
      if ( mClipCount != (_DWORD)clipCount )
        goto LABEL_39;
      v17 = this->fields.panel;
      if ( !v17 )
        goto LABEL_41;
      if ( this->fields.mTextureClip != (v17->fields.mClipping == 1) )
      {
LABEL_39:
        UIDrawCall__RebuildMaterial(this, v4);
        this->fields.mRebuildMat = 0;
      }
      else
      {
        clipCount = (__int64)this->fields.mRenderer;
        if ( !clipCount )
          goto LABEL_41;
        v18 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)clipCount, 0);
        v19 = (UnityEngine_Object_o *)this->fields.mDynamicMat;
        v20 = (UnityEngine_Object_o *)v18;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v20, v19, 0) )
        {
          v21 = (UnityEngine_Renderer_o *)this->fields.mRenderer;
          clipCount = sub_1C32CC8(UnityEngine_Material___TypeInfo, 1);
          if ( !clipCount )
            goto LABEL_41;
          v24 = this->fields.mDynamicMat;
          v25 = clipCount;
          if ( v24 )
          {
            clipCount = sub_1C32D5C(v24, *(_QWORD *)(*(_QWORD *)clipCount + 64LL));
            if ( !clipCount )
              goto LABEL_43;
          }
          if ( !*(_DWORD *)(v25 + 24) )
            goto LABEL_42;
          *(_QWORD *)(v25 + 32) = v24;
          sub_1C32BC4((CGThumbnailListItem_o *)(v25 + 32), (int32_t)v24, v22, v23);
          if ( !v21 )
            goto LABEL_41;
          UnityEngine_Renderer__set_sharedMaterials(v21, (UnityEngine_Material_array *)v25, 0);
        }
      }
    }
  }
}


BetterList_UIDrawCall__o *UIDrawCall__get_activeList(const MethodInfo *method)
{
  UIDrawCall_c *v1; // x0

  if ( (byte_4C3C1C7 & 1) == 0 )
  {
    sub_1C32C20(&UIDrawCall_TypeInfo);
    byte_4C3C1C7 = 1;
  }
  v1 = UIDrawCall_TypeInfo;
  if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
    v1 = UIDrawCall_TypeInfo;
  }
  return v1->static_fields->mActiveList;
}


UnityEngine_Material_o *UIDrawCall__get_baseMaterial(UIDrawCall_o *this, const MethodInfo *method)
{
  return this->fields.mMaterial;
}


UnityEngine_Bounds_o *UIDrawCall__get_bounds(
        UnityEngine_Bounds_o *__return_ptr retstr,
        UIDrawCall_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mMesh; // x21
  UnityEngine_Bounds_o *result; // x0
  UnityEngine_Mesh_o *v7; // x0
  __int128 v8; // q0
  UnityEngine_Bounds_o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3C1D2 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C1D2 = 1;
  }
  mMesh = (UnityEngine_Object_o *)this->fields.mMesh;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  result = (UnityEngine_Bounds_o *)UnityEngine_Object__op_Inequality(mMesh, 0, 0);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v7 = this->fields.mMesh;
    if ( !v7 )
      sub_1C32E7C(0);
    result = UnityEngine_Mesh__get_bounds(&v9, v7, 0);
    v8 = *(_OWORD *)&v9.fields.m_Center.fields.x;
    *(_QWORD *)&retstr->fields.m_Extents.fields.y = *(_QWORD *)&v9.fields.m_Extents.fields.y;
    *(_OWORD *)&retstr->fields.m_Center.fields.x = v8;
  }
  else
  {
    *(_QWORD *)&retstr->fields.m_Center.fields.x = 0;
    *(_QWORD *)&retstr->fields.m_Center.fields.z = 0;
    *(_QWORD *)&retstr->fields.m_Extents.fields.y = 0;
  }
  return result;
}


UnityEngine_Transform_o *UIDrawCall__get_cachedTransform(UIDrawCall_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTrans; // x21
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3C1CD & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C1CD = 1;
  }
  mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mTrans, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    this->fields.mTrans = transform;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v5, v6);
  }
  return this->fields.mTrans;
}


UnityEngine_Material_o *UIDrawCall__get_dynamicMaterial(UIDrawCall_o *this, const MethodInfo *method)
{
  return this->fields.mDynamicMat;
}


int32_t UIDrawCall__get_finalRenderQueue(UIDrawCall_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mDynamicMat; // x20
  UnityEngine_Material_o *v4; // x0

  if ( (byte_4C3C1CC & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C1CC = 1;
  }
  mDynamicMat = (UnityEngine_Object_o *)this->fields.mDynamicMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mDynamicMat, 0, 0) )
    return this->fields.mRenderQueue;
  v4 = this->fields.mDynamicMat;
  if ( !v4 )
    sub_1C32E7C(0);
  return UnityEngine_Material__get_renderQueue(v4, 0);
}


BetterList_UIDrawCall__o *UIDrawCall__get_inactiveList(const MethodInfo *method)
{
  UIDrawCall_c *v1; // x0

  if ( (byte_4C3C1C8 & 1) == 0 )
  {
    sub_1C32C20(&UIDrawCall_TypeInfo);
    byte_4C3C1C8 = 1;
  }
  v1 = UIDrawCall_TypeInfo;
  if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
    v1 = UIDrawCall_TypeInfo;
  }
  return v1->static_fields->mInactiveList;
}


bool UIDrawCall__get_isClipped(UIDrawCall_o *this, const MethodInfo *method)
{
  return this->fields.mClipCount != 0;
}


BetterList_UIDrawCall__o *UIDrawCall__get_list(const MethodInfo *method)
{
  UIDrawCall_c *v1; // x0

  if ( (byte_4C3C1C6 & 1) == 0 )
  {
    sub_1C32C20(&UIDrawCall_TypeInfo);
    byte_4C3C1C6 = 1;
  }
  v1 = UIDrawCall_TypeInfo;
  if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
    v1 = UIDrawCall_TypeInfo;
  }
  return v1->static_fields->mActiveList;
}


UnityEngine_Texture_o *UIDrawCall__get_mainTexture(UIDrawCall_o *this, const MethodInfo *method)
{
  return this->fields.mTexture;
}


int32_t UIDrawCall__get_renderQueue(UIDrawCall_o *this, const MethodInfo *method)
{
  return this->fields.mRenderQueue;
}


UnityEngine_Shader_o *UIDrawCall__get_shader(UIDrawCall_o *this, const MethodInfo *method)
{
  return this->fields.mShader;
}


int32_t UIDrawCall__get_sortingOrder(UIDrawCall_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mRenderer; // x20
  UnityEngine_Renderer_o *v4; // x0

  if ( (byte_4C3C1CA & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C1CA = 1;
  }
  mRenderer = (UnityEngine_Object_o *)this->fields.mRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mRenderer, 0, 0) )
    return 0;
  v4 = (UnityEngine_Renderer_o *)this->fields.mRenderer;
  if ( !v4 )
    sub_1C32E7C(0);
  return UnityEngine_Renderer__get_sortingOrder(v4, 0);
}


int32_t UIDrawCall__get_triangles(UIDrawCall_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mMesh; // x20

  if ( (byte_4C3C1D1 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C1D1 = 1;
  }
  mMesh = (UnityEngine_Object_o *)this->fields.mMesh;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMesh, 0, 0) )
    return this->fields.mTriangles;
  else
    return 0;
}


void UIDrawCall__set_baseMaterial(UIDrawCall_o *this, UnityEngine_Material_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mMaterial; // x22
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C3C1CE & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C1CE = 1;
  }
  mMaterial = (UnityEngine_Object_o *)this->fields.mMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMaterial, (UnityEngine_Object_o *)value, 0) )
  {
    this->fields.mMaterial = value;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mMaterial, (int32_t)value, v6, v7);
    this->fields.mRebuildMat = 1;
  }
}


void UIDrawCall__set_mainTexture(UIDrawCall_o *this, UnityEngine_Texture_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Object_o *mDynamicMat; // x21
  UnityEngine_Material_o *v7; // x0

  if ( (byte_4C3C1CF & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C1CF = 1;
  }
  this->fields.mTexture = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mTexture, (int32_t)value, (int32_t)method, v3);
  mDynamicMat = (UnityEngine_Object_o *)this->fields.mDynamicMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mDynamicMat, 0, 0) )
  {
    v7 = this->fields.mDynamicMat;
    if ( !v7 )
      sub_1C32E7C(0);
    UnityEngine_Material__set_mainTexture(v7, value, 0);
  }
}


void UIDrawCall__set_renderQueue(UIDrawCall_o *this, int32_t value, const MethodInfo *method)
{
  UnityEngine_Object_o *mDynamicMat; // x21
  UnityEngine_Material_o *v6; // x0

  if ( (byte_4C3C1C9 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C1C9 = 1;
  }
  if ( this->fields.mRenderQueue != value )
  {
    this->fields.mRenderQueue = value;
    mDynamicMat = (UnityEngine_Object_o *)this->fields.mDynamicMat;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mDynamicMat, 0, 0) )
    {
      v6 = this->fields.mDynamicMat;
      if ( !v6 )
        sub_1C32E7C(0);
      UnityEngine_Material__set_renderQueue(v6, value, 0);
    }
  }
}


void UIDrawCall__set_shader(UIDrawCall_o *this, UnityEngine_Shader_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mShader; // x22
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C3C1D0 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C1D0 = 1;
  }
  mShader = (UnityEngine_Object_o *)this->fields.mShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mShader, (UnityEngine_Object_o *)value, 0) )
  {
    this->fields.mShader = value;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mShader, (int32_t)value, v6, v7);
    this->fields.mRebuildMat = 1;
  }
}


void UIDrawCall__set_sortingOrder(UIDrawCall_o *this, int32_t value, const MethodInfo *method)
{
  UnityEngine_Object_o *mRenderer; // x21
  UnityEngine_Renderer_o *v6; // x0

  if ( (byte_4C3C1CB & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C1CB = 1;
  }
  mRenderer = (UnityEngine_Object_o *)this->fields.mRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mRenderer, 0, 0) )
  {
    v6 = (UnityEngine_Renderer_o *)this->fields.mRenderer;
    if ( v6 )
    {
      if ( UnityEngine_Renderer__get_sortingOrder(v6, 0) == value )
        return;
      v6 = (UnityEngine_Renderer_o *)this->fields.mRenderer;
      if ( v6 )
      {
        UnityEngine_Renderer__set_sortingOrder(v6, value, 0);
        return;
      }
    }
    sub_1C32E7C(v6);
  }
}


void UIDrawCall_OnRenderCallback___ctor(
        UIDrawCall_OnRenderCallback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A7E680;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( this->fields.method_is_virtual )
      {
        v11 = sub_1C32CD8(method);
        v12 = sub_1C33194(method);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = sub_1A7E77C;
          else
            v9 = sub_1A7E740;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = sub_1A7E6BC;
        }
        else
        {
          v9 = sub_1A7E690;
        }
      }
      else
      {
        v9 = sub_1A7E660;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1A7E618;
}


System_IAsyncResult_o *UIDrawCall_OnRenderCallback__BeginInvoke(
        UIDrawCall_OnRenderCallback_o *this,
        UnityEngine_Material_o *mat,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  UnityEngine_Material_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = mat;
  return (System_IAsyncResult_o *)sub_1C32BD4(this, &v6, callback, object);
}


void UIDrawCall_OnRenderCallback__EndInvoke(
        UIDrawCall_OnRenderCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void UIDrawCall_OnRenderCallback__Invoke(
        UIDrawCall_OnRenderCallback_o *this,
        UnityEngine_Material_o *mat,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, UnityEngine_Material_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    mat,
    this->fields.method);
}