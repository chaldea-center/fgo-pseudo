void UIDrawCall___cctor(const MethodInfo *method)
{
  BetterList_T__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BetterList_T__o *v8; // x19
  struct UIDrawCall_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_List_object__o *v16; // x19
  struct UIDrawCall_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct UIDrawCall_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct UIDrawCall_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4CF2E73 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BetterList_UIDrawCall___ctor__);
    sub_1C7BAE8(&BetterList_UIDrawCall__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int_____ctor___78727096);
    sub_1C7BAE8(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C7BAE8(&UIDrawCall_TypeInfo);
    byte_4CF2E73 = 1;
  }
  v1 = (BetterList_T__o *)sub_1C7BD34(BetterList_UIDrawCall__TypeInfo);
  BetterList_object____ctor(v1, (const MethodInfo_33A6B7C *)Method_BetterList_UIDrawCall___ctor__);
  UIDrawCall_TypeInfo->static_fields->mActiveList = (struct BetterList_UIDrawCall__o *)v1;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)UIDrawCall_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
  v8 = (BetterList_T__o *)sub_1C7BD34(BetterList_UIDrawCall__TypeInfo);
  BetterList_object____ctor(v8, (const MethodInfo_33A6B7C *)Method_BetterList_UIDrawCall___ctor__);
  static_fields = UIDrawCall_TypeInfo->static_fields;
  static_fields->mInactiveList = (struct BetterList_UIDrawCall__o *)v8;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->mInactiveList, (int32_t)v8, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor_58975800(
    v16,
    10,
    (const MethodInfo_383E638 *)Method_System_Collections_Generic_List_int_____ctor___78727096);
  v17 = UIDrawCall_TypeInfo->static_fields;
  v17->mCache = (struct System_Collections_Generic_List_int____o *)v16;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v17->mCache, (int32_t)v16, v18, v19, v20, v21, v22, v23);
  v24 = UIDrawCall_TypeInfo->static_fields;
  v24->ClipRange = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v24->ClipRange, 0, v25, v26, v27, v28, v29, v30);
  v31 = UIDrawCall_TypeInfo->static_fields;
  v31->ClipArgs = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v31->ClipArgs, 0, v32, v33, v34, v35, v36, v37);
}


void UIDrawCall___ctor(UIDrawCall_o *this, const MethodInfo *method)
{
  BetterList_Vector3__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  BetterList_Vector3__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  BetterList_Vector4__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  BetterList_Vector2__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  BetterList_Color32__o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4CF2E72 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BetterList_Vector4___ctor__);
    sub_1C7BAE8(&Method_BetterList_Color32___ctor__);
    sub_1C7BAE8(&Method_BetterList_Vector3___ctor__);
    sub_1C7BAE8(&Method_BetterList_Vector2___ctor__);
    sub_1C7BAE8(&BetterList_Vector3__TypeInfo);
    sub_1C7BAE8(&BetterList_Vector2__TypeInfo);
    sub_1C7BAE8(&BetterList_Color32__TypeInfo);
    sub_1C7BAE8(&BetterList_Vector4__TypeInfo);
    byte_4CF2E72 = 1;
  }
  *(_QWORD *)&this->fields.depthStart = 0x800000007FFFFFFFLL;
  v3 = (BetterList_Vector3__o *)sub_1C7BD34(BetterList_Vector3__TypeInfo);
  BetterList_Vector3____ctor(v3, (const MethodInfo_33A8A54 *)Method_BetterList_Vector3___ctor__);
  this->fields.verts = v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.verts, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (BetterList_Vector3__o *)sub_1C7BD34(BetterList_Vector3__TypeInfo);
  BetterList_Vector3____ctor(v10, (const MethodInfo_33A8A54 *)Method_BetterList_Vector3___ctor__);
  this->fields.norms = v10;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.norms, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (BetterList_Vector4__o *)sub_1C7BD34(BetterList_Vector4__TypeInfo);
  BetterList_Vector4____ctor(v17, (const MethodInfo_33A957C *)Method_BetterList_Vector4___ctor__);
  this->fields.tans = v17;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.tans, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (BetterList_Vector2__o *)sub_1C7BD34(BetterList_Vector2__TypeInfo);
  BetterList_Vector2____ctor(v24, (const MethodInfo_33A7ED0 *)Method_BetterList_Vector2___ctor__);
  this->fields.uvs = v24;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.uvs, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (BetterList_Color32__o *)sub_1C7BD34(BetterList_Color32__TypeInfo);
  BetterList_Color32____ctor(v31, (const MethodInfo_33A58C4 *)Method_BetterList_Color32___ctor__);
  this->fields.cols = v31;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.cols, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  this->fields.mRebuildMat = 1;
  this->fields.mRenderQueue = 3000;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIDrawCall__Awake(UIDrawCall_o *this, const MethodInfo *method)
{
  UIDrawCall_c *v2; // x0
  struct System_Int32_array *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UIDrawCall_c *v12; // x0
  struct UIDrawCall_StaticFields *static_fields; // x0
  struct System_Int32_array *v14; // x19
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UIDrawCall_c *v21; // x0
  struct UIDrawCall_StaticFields *v22; // x0

  if ( (byte_4CF2E67 & 1) == 0 )
  {
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&UIDrawCall_TypeInfo);
    sub_1C7BAE8(&StringLiteral_16214/*"_ClipArgs0"*/);
    sub_1C7BAE8(&StringLiteral_16220/*"_ClipRange1"*/);
    sub_1C7BAE8(&StringLiteral_16221/*"_ClipRange2"*/);
    sub_1C7BAE8(&StringLiteral_16217/*"_ClipArgs3"*/);
    sub_1C7BAE8(&StringLiteral_16219/*"_ClipRange0"*/);
    sub_1C7BAE8(&StringLiteral_16215/*"_ClipArgs1"*/);
    sub_1C7BAE8(&StringLiteral_16222/*"_ClipRange4"*/);
    sub_1C7BAE8(&StringLiteral_16216/*"_ClipArgs2"*/);
    byte_4CF2E67 = 1;
  }
  v2 = UIDrawCall_TypeInfo;
  if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
    v2 = UIDrawCall_TypeInfo;
  }
  if ( !v2->static_fields->ClipRange )
  {
    v3 = (struct System_Int32_array *)sub_1C7BB90(int___TypeInfo, 4);
    v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16219/*"_ClipRange0"*/, 0);
    if ( !v3 )
      goto LABEL_26;
    if ( !LODWORD(v3->max_length) )
      goto LABEL_25;
    v3->m_Items[0] = v4;
    v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16220/*"_ClipRange1"*/, 0);
    if ( LODWORD(v3->max_length) <= 1 )
      goto LABEL_25;
    v3->m_Items[1] = v4;
    v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16221/*"_ClipRange2"*/, 0);
    if ( LODWORD(v3->max_length) <= 2 )
      goto LABEL_25;
    v3->m_Items[2] = v4;
    v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16222/*"_ClipRange4"*/, 0);
    if ( LODWORD(v3->max_length) <= 3 )
      goto LABEL_25;
    v3->m_Items[3] = v4;
    v12 = UIDrawCall_TypeInfo;
    if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
      v12 = UIDrawCall_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->ClipRange = v3;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->ClipRange, (int32_t)v3, v6, v7, v8, v9, v10, v11);
    v2 = UIDrawCall_TypeInfo;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = UIDrawCall_TypeInfo;
  }
  if ( !v2->static_fields->ClipArgs )
  {
    v14 = (struct System_Int32_array *)sub_1C7BB90(int___TypeInfo, 4);
    v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16214/*"_ClipArgs0"*/, 0);
    if ( v14 )
    {
      if ( LODWORD(v14->max_length) )
      {
        v14->m_Items[0] = v4;
        v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16215/*"_ClipArgs1"*/, 0);
        if ( LODWORD(v14->max_length) > 1 )
        {
          v14->m_Items[1] = v4;
          v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16216/*"_ClipArgs2"*/, 0);
          if ( LODWORD(v14->max_length) > 2 )
          {
            v14->m_Items[2] = v4;
            v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16217/*"_ClipArgs3"*/, 0);
            if ( LODWORD(v14->max_length) > 3 )
            {
              v14->m_Items[3] = v4;
              v21 = UIDrawCall_TypeInfo;
              if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
                v21 = UIDrawCall_TypeInfo;
              }
              v22 = v21->static_fields;
              v22->ClipArgs = v14;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v22->ClipArgs, (int32_t)v14, v15, v16, v17, v18, v19, v20);
              return;
            }
          }
        }
      }
LABEL_25:
      sub_1C7BD48(v4);
    }
LABEL_26:
    sub_1C7BD40(v4, v5);
  }
}


void UIDrawCall__Clear(UIDrawCall_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mMesh; // x20
  __int64 v4; // x1
  UnityEngine_Mesh_o *verts; // x0

  if ( (byte_4CF2E5F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BetterList_Vector2__Release__);
    sub_1C7BAE8(&Method_BetterList_Vector3__Release__);
    sub_1C7BAE8(&Method_BetterList_Vector4__Release__);
    sub_1C7BAE8(&Method_BetterList_Color32__Release__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E5F = 1;
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
    (const MethodInfo_33A816C *)Method_BetterList_Vector3__Release__);
  verts = (UnityEngine_Mesh_o *)this->fields.uvs;
  if ( !verts
    || (BetterList_Vector2___Release(
          (BetterList_Vector2__o *)verts,
          (const MethodInfo_33A76E0 *)Method_BetterList_Vector2__Release__),
        (verts = (UnityEngine_Mesh_o *)this->fields.cols) == 0)
    || (BetterList_Color32___Release(
          (BetterList_Color32__o *)verts,
          (const MethodInfo_33A5194 *)Method_BetterList_Color32__Release__),
        (verts = (UnityEngine_Mesh_o *)this->fields.norms) == 0)
    || (BetterList_Vector3___Release(
          (BetterList_Vector3__o *)verts,
          (const MethodInfo_33A816C *)Method_BetterList_Vector3__Release__),
        (verts = (UnityEngine_Mesh_o *)this->fields.tans) == 0) )
  {
LABEL_14:
    sub_1C7BD40(verts, v4);
  }
  BetterList_Vector4___Release(
    (BetterList_Vector4__o *)verts,
    (const MethodInfo_33A8CD8 *)Method_BetterList_Vector4__Release__);
}


void UIDrawCall__ClearAll(const MethodInfo *method)
{
  BetterList_T__o *isPlaying; // x0
  __int64 v2; // x1
  UIDrawCall_c *v3; // x8
  char v4; // w19
  struct BetterList_UIDrawCall__o *mActiveList; // x9
  int size; // w20
  Il2CppObject *Item; // x21
  UnityEngine_GameObject_o *gameObject; // x21

  if ( (byte_4CF2E6D & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Application_TypeInfo);
    sub_1C7BAE8(&Method_BetterList_UIDrawCall__Clear__);
    sub_1C7BAE8(&Method_BetterList_UIDrawCall__get_Item__);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UIDrawCall_TypeInfo);
    byte_4CF2E6D = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  isPlaying = (BetterList_T__o *)UnityEngine_Application__get_isPlaying(0);
  v3 = UIDrawCall_TypeInfo;
  v4 = (char)isPlaying;
  if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
    v3 = UIDrawCall_TypeInfo;
  }
  mActiveList = v3->static_fields->mActiveList;
  if ( !mActiveList )
    goto LABEL_25;
  size = mActiveList->fields.size;
  while ( 1 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = UIDrawCall_TypeInfo;
    }
    isPlaying = (BetterList_T__o *)v3->static_fields->mActiveList;
    if ( size <= 0 )
      break;
    if ( !isPlaying )
      goto LABEL_25;
    Item = BetterList_object___get_Item(
             isPlaying,
             --size,
             (const MethodInfo_33A6228 *)Method_BetterList_UIDrawCall__get_Item__);
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
      if ( (v4 & 1) != 0 )
        NGUITools__SetActive(gameObject, 0, 0);
      else
        NGUITools__DestroyImmediate((UnityEngine_Object_o *)gameObject, 0);
    }
    v3 = UIDrawCall_TypeInfo;
  }
  if ( !isPlaying )
LABEL_25:
    sub_1C7BD40(isPlaying, v2);
  BetterList_object___Clear(isPlaying, (const MethodInfo_33A6438 *)Method_BetterList_UIDrawCall__Clear__);
}


int32_t UIDrawCall__Count(UIPanel_o *panel, const MethodInfo *method)
{
  int32_t v3; // w21
  int32_t v4; // w20
  void *Item; // x0
  BetterList_T__o *mActiveList; // x8
  UnityEngine_Object_o *v7; // x22

  if ( (byte_4CF2E70 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BetterList_UIDrawCall__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UIDrawCall_TypeInfo);
    byte_4CF2E70 = 1;
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
      sub_1C7BD40(Item, method);
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
             (const MethodInfo_33A6228 *)Method_BetterList_UIDrawCall__get_Item__);
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

  if ( (byte_4CF2E6A & 1) == 0 )
  {
    sub_1C7BAE8(&UIDrawCall_TypeInfo);
    byte_4CF2E6A = 1;
  }
  if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
  return UIDrawCall__Create_49919344(0, panel, mat, tex, shader, v5);
}


void UIDrawCall__CreateMaterial(UIDrawCall_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panel; // x20
  __int64 v4; // x1
  __int64 shader; // x0
  int32_t clipCount; // w0
  int32_t *p_mClipCount; // x20
  UnityEngine_Object_o *mShader; // x21
  UnityEngine_Object_o *mMaterial; // x21
  int v10; // w8
  System_String_o *v11; // x21
  System_String_o *v12; // x0
  UnityEngine_Object_o *v13; // x22
  System_String_o *v14; // x21
  struct UIPanel_o *v15; // x8
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  UnityEngine_Shader_o *v19; // x0
  const MethodInfo *v20; // x2
  UnityEngine_Object_o *v21; // x22
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  UnityEngine_Shader_o *v24; // x0
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *v26; // x22
  UnityEngine_Shader_o *v27; // x0
  const MethodInfo *v28; // x2
  UnityEngine_Object_o *v29; // x22
  UnityEngine_Shader_o *v30; // x0
  const MethodInfo *v31; // x2
  UnityEngine_Object_o *v32; // x22
  UnityEngine_Material_o *v33; // x22
  UnityEngine_Material_o *v34; // x23
  struct UnityEngine_Material_o **p_mDynamicMat; // x22
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  UnityEngine_Object_o *v42; // x23
  System_String_o *name; // x0
  __int64 v44; // x8
  __int64 v45; // x23
  unsigned __int64 v46; // x25
  UnityEngine_Object_o *v47; // x23
  UnityEngine_Shader_o *v48; // x20
  UnityEngine_Material_o *v49; // x21
  struct UnityEngine_Material_o **v50; // x20
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  UnityEngine_Object_o *v57; // x19
  System_String_o *v58; // x0
  System_String_o *v59; // x0
  Il2CppObject *v60; // x19

  if ( (byte_4CF2E60 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Material_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_15989/*"[NGUI] "*/);
    sub_1C7BAE8(&StringLiteral_113/*" "*/);
    sub_1C7BAE8(&StringLiteral_7320/*"Hidden/"*/);
    sub_1C7BAE8(&StringLiteral_137/*" (TextureClip)"*/);
    sub_1C7BAE8(&StringLiteral_15191/*"Unlit/Transparent Colored"*/);
    sub_1C7BAE8(&StringLiteral_136/*" (SoftClip)"*/);
    sub_1C7BAE8(&StringLiteral_15190/*"Unlit/Text"*/);
    sub_1C7BAE8(&StringLiteral_7033/*"GUI/Text Shader"*/);
    sub_1C7BAE8(&StringLiteral_225/*" clip regions"*/);
    sub_1C7BAE8(&StringLiteral_300/*" shader doesn't have a clipped shader version for "*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF2E60 = 1;
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
      shader = StringLiteral_15191/*"Unlit/Transparent Colored"*/;
      if ( !StringLiteral_15191/*"Unlit/Transparent Colored"*/ )
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
  shader = (__int64)System_String__Replace_64223476(
                      (System_String_o *)shader,
                      (System_String_o *)StringLiteral_7033/*"GUI/Text Shader"*/,
                      (System_String_o *)StringLiteral_15190/*"Unlit/Text"*/,
                      0);
  if ( !shader )
    goto LABEL_80;
  v10 = *(_DWORD *)(shader + 16);
  v11 = (System_String_o *)shader;
  if ( v10 >= 3
    && System_String__get_Chars((System_String_o *)shader, v10 - 2, 0) == 32
    && (unsigned __int16)(System_String__get_Chars(v11, v11->fields._stringLength - 1, 0) - 49) <= 8u )
  {
    shader = (__int64)System_String__Substring_64222852(v11, 0, v11->fields._stringLength - 2, 0);
    v11 = (System_String_o *)shader;
    if ( !shader )
      goto LABEL_80;
  }
  if ( System_String__StartsWith(v11, (System_String_o *)StringLiteral_7320/*"Hidden/"*/, 0) )
  {
    shader = (__int64)System_String__Substring(v11, 7, 0);
    v11 = (System_String_o *)shader;
    if ( !shader )
      goto LABEL_80;
  }
  shader = (__int64)System_String__Replace_64223476(
                      v11,
                      (System_String_o *)StringLiteral_136/*" (SoftClip)"*/,
                      (System_String_o *)StringLiteral_1/*""*/,
                      0);
  if ( !shader )
    goto LABEL_80;
  v12 = System_String__Replace_64223476(
          (System_String_o *)shader,
          (System_String_o *)StringLiteral_137/*" (TextureClip)"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0);
  v13 = (UnityEngine_Object_o *)this->fields.panel;
  v14 = v12;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  shader = UnityEngine_Object__op_Inequality(v13, 0, 0);
  if ( (shader & 1) != 0 )
  {
    v15 = this->fields.panel;
    if ( !v15 )
      goto LABEL_80;
    if ( v15->fields.mClipping == 1 )
    {
      this->fields.mTextureClip = 1;
      v16 = System_String__Concat_64215176(
              (System_String_o *)StringLiteral_7320/*"Hidden/"*/,
              v14,
              (System_String_o *)StringLiteral_137/*" (TextureClip)"*/,
              0);
LABEL_47:
      v27 = UnityEngine_Shader__Find(v16, 0);
      UIDrawCall__set_shader(this, v27, v28);
      goto LABEL_48;
    }
  }
  if ( !*p_mClipCount )
  {
    v16 = v14;
    goto LABEL_47;
  }
  v17 = System_Int32__ToString((int)this + 152, 0);
  v18 = System_String__Concat_64217180(
          (System_String_o *)StringLiteral_7320/*"Hidden/"*/,
          v14,
          (System_String_o *)StringLiteral_113/*" "*/,
          v17,
          0);
  v19 = UnityEngine_Shader__Find(v18, 0);
  UIDrawCall__set_shader(this, v19, v20);
  v21 = (UnityEngine_Object_o *)this->fields.mShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v21, 0, 0) )
  {
    v22 = System_Int32__ToString((int)this + 152, 0);
    v23 = System_String__Concat_64215176(v14, (System_String_o *)StringLiteral_113/*" "*/, v22, 0);
    v24 = UnityEngine_Shader__Find(v23, 0);
    UIDrawCall__set_shader(this, v24, v25);
  }
  v26 = (UnityEngine_Object_o *)this->fields.mShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v26, 0, 0) && *p_mClipCount == 1 )
  {
    this->fields.mLegacyShader = 1;
    v16 = System_String__Concat_64176912(v14, (System_String_o *)StringLiteral_136/*" (SoftClip)"*/, 0);
    goto LABEL_47;
  }
LABEL_48:
  v29 = (UnityEngine_Object_o *)this->fields.mShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v29, 0, 0) )
  {
    v30 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_15191/*"Unlit/Transparent Colored"*/, 0);
    UIDrawCall__set_shader(this, v30, v31);
  }
  v32 = (UnityEngine_Object_o *)this->fields.mMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v32, 0, 0) )
  {
    v33 = this->fields.mMaterial;
    v34 = (UnityEngine_Material_o *)sub_1C7BD34(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_71732712(v34, v33, 0);
    this->fields.mDynamicMat = v34;
    p_mDynamicMat = &this->fields.mDynamicMat;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mDynamicMat, (int32_t)v34, v36, v37, v38, v39, v40, v41);
    shader = (__int64)this->fields.mMaterial;
    if ( !shader )
      goto LABEL_80;
    v42 = (UnityEngine_Object_o *)*p_mDynamicMat;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)shader, 0);
    shader = (__int64)System_String__Concat_64176912((System_String_o *)StringLiteral_15989/*"[NGUI] "*/, name, 0);
    if ( !v42 )
      goto LABEL_80;
    UnityEngine_Object__set_name(v42, (System_String_o *)shader, 0);
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
    v44 = *(_QWORD *)(shader + 24);
    v45 = shader;
    if ( (int)v44 >= 1 )
    {
      v46 = 0;
      while ( 1 )
      {
        if ( v46 >= (unsigned int)v44 )
          sub_1C7BD48(shader);
        shader = (__int64)*p_mDynamicMat;
        if ( !*p_mDynamicMat )
          break;
        UnityEngine_Material__EnableKeyword(
          (UnityEngine_Material_o *)shader,
          *(System_String_o **)(v45 + 32 + 8 * v46),
          0);
        LODWORD(v44) = *(_DWORD *)(v45 + 24);
        if ( (__int64)++v46 >= (int)v44 )
          goto LABEL_66;
      }
LABEL_80:
      sub_1C7BD40(shader, v4);
    }
LABEL_66:
    v47 = (UnityEngine_Object_o *)this->fields.mShader;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v47, 0, 0) )
    {
      shader = (__int64)*p_mDynamicMat;
      if ( !*p_mDynamicMat )
        goto LABEL_80;
      UnityEngine_Material__set_shader((UnityEngine_Material_o *)shader, this->fields.mShader, 0);
    }
    else if ( *p_mClipCount )
    {
      v59 = System_Int32__ToString((int)this + 152, 0);
      v60 = (Il2CppObject *)System_String__Concat_64217180(
                              v14,
                              (System_String_o *)StringLiteral_300/*" shader doesn't have a clipped shader version for "*/,
                              v59,
                              (System_String_o *)StringLiteral_225/*" clip regions"*/,
                              0);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v60, 0);
    }
  }
  else
  {
    v48 = this->fields.mShader;
    v49 = (UnityEngine_Material_o *)sub_1C7BD34(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v49, v48, 0);
    this->fields.mDynamicMat = v49;
    v50 = &this->fields.mDynamicMat;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mDynamicMat, (int32_t)v49, v51, v52, v53, v54, v55, v56);
    shader = (__int64)this->fields.mShader;
    if ( !shader )
      goto LABEL_80;
    v57 = (UnityEngine_Object_o *)*v50;
    v58 = UnityEngine_Object__get_name((UnityEngine_Object_o *)shader, 0);
    shader = (__int64)System_String__Concat_64176912((System_String_o *)StringLiteral_15989/*"[NGUI] "*/, v58, 0);
    if ( !v57 )
      goto LABEL_80;
    UnityEngine_Object__set_name(v57, (System_String_o *)shader, 0);
    shader = (__int64)*v50;
    if ( !*v50 )
      goto LABEL_80;
    UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)shader, 60, 0);
  }
}


UIDrawCall_o *UIDrawCall__Create_49919344(
        System_String_o *name,
        UIPanel_o *pan,
        UnityEngine_Material_o *mat,
        UnityEngine_Texture_o *tex,
        UnityEngine_Shader_o *shader,
        const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v12; // x1
  UnityEngine_Component_o *v13; // x22
  UnityEngine_GameObject_o *v14; // x24
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4CF2E6B & 1) == 0 )
  {
    sub_1C7BAE8(&UIDrawCall_TypeInfo);
    byte_4CF2E6B = 1;
  }
  if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UIDrawCall__Create_49919612(name, pan, (const MethodInfo *)mat);
  if ( !gameObject
    || (v13 = gameObject,
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0),
        !pan)
    || (v14 = (UnityEngine_GameObject_o *)gameObject,
        (gameObject = (UnityEngine_Component_o *)UIRect__get_cachedGameObject((UIRect_o *)pan, v12)) == 0)
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_layer(
                                                  (UnityEngine_GameObject_o *)gameObject,
                                                  0),
        !v14) )
  {
    sub_1C7BD40(gameObject, v12);
  }
  UnityEngine_GameObject__set_layer(v14, (int32_t)gameObject, 0);
  UIDrawCall__set_baseMaterial((UIDrawCall_o *)v13, mat, v15);
  UIDrawCall__set_mainTexture((UIDrawCall_o *)v13, tex, v16);
  UIDrawCall__set_shader((UIDrawCall_o *)v13, shader, v17);
  UIDrawCall__set_renderQueue((UIDrawCall_o *)v13, pan->fields.startingRenderQueue, v18);
  UIDrawCall__set_sortingOrder((UIDrawCall_o *)v13, pan->fields.mSortingOrder, v19);
  v13[2].klass = (UnityEngine_Component_c *)pan;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v13[2], (int32_t)pan, v20, v21, v22, v23, v24, v25);
  return (UIDrawCall_o *)v13;
}


UIDrawCall_o *UIDrawCall__Create_49919612(System_String_o *name, UIPanel_o *pan, const MethodInfo *method)
{
  BetterList_T__o *mActiveList; // x0
  BetterList_T__o *mInactiveList; // x8
  Il2CppObject *v6; // x20
  UnityEngine_GameObject_o *v7; // x20
  Il2CppObject *v8; // x0
  UIDrawCall_c *v9; // x8
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4CF2E6C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BetterList_UIDrawCall__Add__);
    sub_1C7BAE8(&Method_BetterList_UIDrawCall__Pop__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_AddComponent_UIDrawCall___);
    sub_1C7BAE8(&UnityEngine_GameObject_TypeInfo);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UIDrawCall_TypeInfo);
    byte_4CF2E6C = 1;
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
    v7 = (UnityEngine_GameObject_o *)sub_1C7BD34(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v7, name, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)v7, 0);
    if ( v7 )
    {
      v8 = UnityEngine_GameObject__AddComponent_object_(
             v7,
             (const MethodInfo_31C6FE0 *)Method_UnityEngine_GameObject_AddComponent_UIDrawCall___);
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
        BetterList_object___Add(mActiveList, v6, (const MethodInfo_33A6450 *)Method_BetterList_UIDrawCall__Add__);
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
                                     (const MethodInfo_33A696C *)Method_BetterList_UIDrawCall__Pop__);
  if ( !UIDrawCall_TypeInfo->static_fields->mActiveList )
    goto LABEL_25;
  v6 = (Il2CppObject *)mActiveList;
  BetterList_object___Add(
    (BetterList_T__o *)UIDrawCall_TypeInfo->static_fields->mActiveList,
    (Il2CppObject *)mActiveList,
    (const MethodInfo_33A6450 *)Method_BetterList_UIDrawCall__Add__);
  if ( !name )
  {
    if ( v6 )
      goto LABEL_21;
LABEL_25:
    sub_1C7BD40(mActiveList, pan);
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
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  bool isPlaying; // w20
  UIDrawCall_c *v12; // x8
  bool v13; // w0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v15; // x1
  UIDrawCall_c *v16; // x0
  UnityEngine_Object_o *v17; // x19

  if ( (byte_4CF2E71 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Application_TypeInfo);
    sub_1C7BAE8(&Method_BetterList_UIDrawCall__Add__);
    sub_1C7BAE8(&Method_BetterList_UIDrawCall__Remove__);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UIDrawCall_TypeInfo);
    byte_4CF2E71 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mActiveList = (BetterList_T__o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)dc, 0);
  if ( ((unsigned __int8)mActiveList & 1) != 0 )
  {
    if ( !dc )
      goto LABEL_24;
    dc->fields.onRender = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&dc->fields.onRender, 0, v5, v6, v7, v8, v9, v10);
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    isPlaying = UnityEngine_Application__get_isPlaying(0);
    v12 = UIDrawCall_TypeInfo;
    if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
      v12 = UIDrawCall_TypeInfo;
    }
    mActiveList = (BetterList_T__o *)v12->static_fields->mActiveList;
    if ( !mActiveList )
      goto LABEL_24;
    v13 = BetterList_object___Remove(
            mActiveList,
            (Il2CppObject *)dc,
            (const MethodInfo_33A6708 *)Method_BetterList_UIDrawCall__Remove__);
    if ( isPlaying )
    {
      if ( v13 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dc, 0);
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        NGUITools__SetActive(gameObject, 0, 0);
        UIDrawCall__Clear(dc, v15);
        v16 = UIDrawCall_TypeInfo;
        if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
          v16 = UIDrawCall_TypeInfo;
        }
        mActiveList = (BetterList_T__o *)v16->static_fields->mInactiveList;
        if ( mActiveList )
        {
          BetterList_object___Add(
            mActiveList,
            (Il2CppObject *)dc,
            (const MethodInfo_33A6450 *)Method_BetterList_UIDrawCall__Add__);
          return;
        }
LABEL_24:
        sub_1C7BD40(mActiveList, v4);
      }
    }
    else
    {
      v17 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dc, 0);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__DestroyImmediate(v17, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  unsigned int namespaze; // w8
  unsigned int v20; // w9
  int32_t v21; // w10
  int v22; // w10
  unsigned int v23; // w10
  unsigned int v24; // w10
  unsigned int v25; // w12
  System_Collections_Generic_List_object__o *v26; // x8
  const char *name; // x8
  _QWORD *v28; // x9
  __int64 namespaze_low; // x10
  const char *v30; // x8

  if ( (byte_4CF2E64 & 1) == 0 )
  {
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____RemoveAt__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1C7BAE8(&UIDrawCall_TypeInfo);
    byte_4CF2E64 = 1;
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
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_int____get_Item__);
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
  v6 = (UIDrawCall_c *)sub_1C7BB90(int___TypeInfo, (unsigned int)indexCount);
  v12 = (System_Int32_array *)v6;
  if ( vertexCount >= 1 )
  {
    if ( !v6 )
      goto LABEL_41;
    namespaze = (unsigned int)v6->_1.namespaze;
    v20 = 0;
    v21 = 0;
    do
    {
      if ( v20 >= namespaze )
        goto LABEL_40;
      *((_DWORD *)&v6->_1.byval_arg.data + (int)v20) = v21;
      if ( v20 + 1 >= namespaze
        || (v22 = v21 + 1, *((_DWORD *)&v6->_1.byval_arg.data + (int)(v20 + 1)) = v22, v20 + 2 >= namespaze)
        || (v23 = v22 + 1, *((_DWORD *)&v6->_1.byval_arg.data + (int)(v20 + 2)) = v23, v20 + 3 >= namespaze)
        || (*((_DWORD *)&v6->_1.byval_arg.data + (int)(v20 + 3)) = v23, v20 + 4 >= namespaze)
        || (v24 = v23 + 1, *((_DWORD *)&v6->_1.byval_arg.data + (int)(v20 + 4)) = v24, v20 + 5 >= namespaze) )
      {
LABEL_40:
        sub_1C7BD48(v6);
      }
      v25 = v24 - 3;
      v21 = v24 + 1;
      *((_DWORD *)&v6->_1.byval_arg.data + (int)(v20 + 5)) = v25;
      v20 += 6;
    }
    while ( v21 < vertexCount );
  }
  v6 = UIDrawCall_TypeInfo;
  if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
    v6 = UIDrawCall_TypeInfo;
  }
  v26 = (System_Collections_Generic_List_object__o *)v6->static_fields->mCache;
  if ( !v26 )
    goto LABEL_41;
  if ( v26->fields._size >= 11 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v26 = (System_Collections_Generic_List_object__o *)UIDrawCall_TypeInfo->static_fields->mCache;
      if ( !v26 )
        goto LABEL_41;
    }
    System_Collections_Generic_List_object___RemoveAt(
      v26,
      0,
      (const MethodInfo_38405D0 *)Method_System_Collections_Generic_List_int____RemoveAt__);
    v6 = UIDrawCall_TypeInfo;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = UIDrawCall_TypeInfo;
  }
  v6 = (UIDrawCall_c *)v6->static_fields->mCache;
  if ( !v6
    || (name = v6->_1.name, v28 = Method_System_Collections_Generic_List_int____Add__,
                            ++HIDWORD(v6->_1.namespaze),
                            !name) )
  {
LABEL_41:
    sub_1C7BD40(v6, *(_QWORD *)&vertexCount);
  }
  namespaze_low = SLODWORD(v6->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v6,
      &v12->obj,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &name[8 * namespaze_low];
    LODWORD(v6->_1.namespaze) = namespaze_low + 1;
    *((_QWORD *)v30 + 4) = v12;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v30 + 32), (int32_t)v12, v13, v14, v15, v16, v17, v18);
  }
  return v12;
}


void UIDrawCall__OnDestroy(UIDrawCall_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_mMesh; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_Mesh_o *mMesh; // t1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CF2E69 & 1) == 0 )
  {
    sub_1C7BAE8(&NGUITools_TypeInfo);
    byte_4CF2E69 = 1;
  }
  mMesh = this->fields.mMesh;
  p_mMesh = (GrandQuestFolderBoardItem_o *)&this->fields.mMesh;
  v4 = (UnityEngine_Object_o *)mMesh;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__DestroyImmediate(v4, 0);
  p_mMesh->klass = 0;
  sub_1C7BA8C(p_mMesh, 0, v6, v7, v8, v9, v10, v11);
}


void UIDrawCall__OnDisable(UIDrawCall_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  UnityEngine_Object_o *mRenderer; // x20
  UnityEngine_Renderer_o *v34; // x20
  UnityEngine_Material_array *v35; // x0
  __int64 v36; // x1
  GrandQuestFolderBoardItem_o *p_mDynamicMat; // x19
  UnityEngine_Object_o *v38; // x20
  struct UnityEngine_Material_o *mDynamicMat; // t1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7

  if ( (byte_4CF2E68 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Material___TypeInfo);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E68 = 1;
  }
  *(_QWORD *)&this->fields.depthStart = 0x800000007FFFFFFFLL;
  this->fields.panel = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.panel, 0, v2, v3, v4, v5, v6, v7);
  this->fields.manager = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.manager, 0, v9, v10, v11, v12, v13, v14);
  this->fields.mMaterial = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mMaterial, 0, v15, v16, v17, v18, v19, v20);
  this->fields.mTexture = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mTexture, 0, v21, v22, v23, v24, v25, v26);
  this->fields.clipTexture = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.clipTexture, 0, v27, v28, v29, v30, v31, v32);
  mRenderer = (UnityEngine_Object_o *)this->fields.mRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mRenderer, 0, 0) )
  {
    v34 = (UnityEngine_Renderer_o *)this->fields.mRenderer;
    v35 = (UnityEngine_Material_array *)sub_1C7BB90(UnityEngine_Material___TypeInfo, 0);
    if ( !v34 )
      sub_1C7BD40(v35, v36);
    UnityEngine_Renderer__set_sharedMaterials(v34, v35, 0);
  }
  mDynamicMat = this->fields.mDynamicMat;
  p_mDynamicMat = (GrandQuestFolderBoardItem_o *)&this->fields.mDynamicMat;
  v38 = (UnityEngine_Object_o *)mDynamicMat;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__DestroyImmediate(v38, 0);
  p_mDynamicMat->klass = 0;
  sub_1C7BA8C(p_mDynamicMat, 0, v40, v41, v42, v43, v44, v45);
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
  const MethodInfo *v9; // x1
  struct UIPanel_o *panel; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UnityEngine_Material_o *v15; // x20
  __int64 v16; // x8
  UnityEngine_Material_o *v17; // x20
  float v18; // s0
  float v19; // s8
  float v20; // s9
  float v21; // s1
  float v22; // s0
  int v23; // s3
  struct UIPanel_o *mParentPanel; // x20
  float v25; // s0
  float v26; // s10
  float v27; // s1
  float v28; // s11
  float v29; // s8
  float v30; // s9
  int32_t v31; // w21
  float v32; // s11
  float v33; // s15
  float v34; // s10
  UnityEngine_Object_o *v35; // x22
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x2
  float v38; // s12
  UnityEngine_Transform_o *v39; // x22
  float v40; // s12
  float v41; // s13
  __int128 v42; // q11
  __int128 v43; // q10
  float v44; // s14
  float v45; // s15
  float v46; // s8
  const MethodInfo *v47; // x1
  float v48; // s12
  float v49; // s13
  float v50; // s14
  float v51; // s9
  float v52; // s0
  float v53; // s1
  UnityEngine_Object_o *v54; // x22
  float v55; // [xsp+4h] [xbp-8Ch]
  float v56; // [xsp+8h] [xbp-88h]
  float v57; // [xsp+Ch] [xbp-84h]
  float v58; // [xsp+Ch] [xbp-84h]
  UnityEngine_Vector2_o v59; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v60; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Positive; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o clipTextureRotationInfo; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CF2E65 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UIDrawCall_TypeInfo);
    sub_1C7BAE8(&StringLiteral_16228/*"_ClipTex"*/);
    sub_1C7BAE8(&StringLiteral_16225/*"_ClipRotateInfo"*/);
    sub_1C7BAE8(&StringLiteral_10552/*"Panel can only be clipped properly if X and Y rotation is left at 0"*/);
    sub_1C7BAE8(&StringLiteral_16226/*"_ClipSharpness"*/);
    byte_4CF2E65 = 1;
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
        v15 = this->fields.mDynamicMat;
        if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
          cachedTransform = (UIPanel_o *)UIDrawCall_TypeInfo;
        }
        v16 = *(_QWORD *)&cachedTransform->fields.drawCalls->fields._size;
        if ( v16 )
        {
          if ( !*(_DWORD *)(v16 + 24) )
            sub_1C7BD48(cachedTransform);
          if ( v15 )
          {
            v67.fields.w = 1.0 / w;
            v67.fields.z = 1.0 / z;
            v67.fields.y = (float)-y / w;
            v67.fields.x = (float)-x / z;
            UnityEngine_Material__SetVector_71739424(v15, *(_DWORD *)(v16 + 32), v67, 0);
            cachedTransform = this->fields.panel;
            if ( cachedTransform )
            {
              v17 = this->fields.mDynamicMat;
              LODWORD(v18) = *(_OWORD *)&UIPanel__get_clipTextureRotationInfo(cachedTransform, 0);
              cachedTransform = this->fields.panel;
              if ( cachedTransform )
              {
                v19 = v18;
                clipTextureRotationInfo = UIPanel__get_clipTextureRotationInfo(cachedTransform, 0);
                cachedTransform = this->fields.panel;
                if ( cachedTransform )
                {
                  v20 = clipTextureRotationInfo.fields.y;
                  v69 = UIPanel__get_clipTextureRotationInfo(cachedTransform, 0);
                  if ( v17 )
                  {
                    v21 = (float)-v20 / w;
                    v22 = (float)-v19 / z;
                    v23 = 0;
                    UnityEngine_Material__SetVector(v17, (System_String_o *)StringLiteral_16225/*"_ClipRotateInfo"*/, v69, 0);
                    cachedTransform = (UIPanel_o *)this->fields.mDynamicMat;
                    if ( cachedTransform )
                    {
                      UnityEngine_Material__SetTexture(
                        (UnityEngine_Material_o *)cachedTransform,
                        (System_String_o *)StringLiteral_16228/*"_ClipTex"*/,
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
      sub_1C7BD40(cachedTransform, v9);
    }
    mParentPanel = this->fields.panel;
    if ( this->fields.mLegacyShader )
    {
      if ( !mParentPanel )
        goto LABEL_61;
      v25 = mParentPanel->fields.mClipSoftness.fields.x;
      v26 = mParentPanel->fields.drawCallClipRange.fields.z;
      v27 = mParentPanel->fields.mClipSoftness.fields.y;
      v28 = mParentPanel->fields.drawCallClipRange.fields.w;
      cachedTransform = (UIPanel_o *)this->fields.mDynamicMat;
      v29 = v25 <= 0.0 ? 1000.0 : v26 / v25;
      v30 = v27 <= 0.0 ? 1000.0 : v28 / v27;
      if ( !cachedTransform )
        goto LABEL_61;
      v59.fields.y = (float)-mParentPanel->fields.drawCallClipRange.fields.y / v28;
      v59.fields.x = (float)-mParentPanel->fields.drawCallClipRange.fields.x / v26;
      UnityEngine_Material__set_mainTextureOffset((UnityEngine_Material_o *)cachedTransform, v59, 0);
      cachedTransform = (UIPanel_o *)this->fields.mDynamicMat;
      if ( !cachedTransform )
        goto LABEL_61;
      v60.fields.x = 1.0 / v26;
      v60.fields.y = 1.0 / v28;
      UnityEngine_Material__set_mainTextureScale((UnityEngine_Material_o *)cachedTransform, v60, 0);
      cachedTransform = (UIPanel_o *)this->fields.mDynamicMat;
      if ( !cachedTransform )
        goto LABEL_61;
      v70.fields.x = v29;
      v70.fields.y = v30;
      v70.fields.z = 0.0;
      v70.fields.w = 0.0;
      UnityEngine_Material__SetVector(
        (UnityEngine_Material_o *)cachedTransform,
        (System_String_o *)StringLiteral_16226/*"_ClipSharpness"*/,
        v70,
        0);
    }
    else
    {
      LODWORD(v3) = 981668463;
      v31 = 0;
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
          v32 = mParentPanel->fields.drawCallClipRange.fields.y;
          v33 = mParentPanel->fields.drawCallClipRange.fields.z;
          v34 = mParentPanel->fields.drawCallClipRange.fields.w;
          v35 = (UnityEngine_Object_o *)this->fields.panel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v38 = 0.0;
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)mParentPanel, v35, 0) )
          {
            cachedTransform = (UIPanel_o *)UIRect__get_cachedTransform((UIRect_o *)mParentPanel, v36);
            if ( !this->fields.panel )
              goto LABEL_61;
            v39 = (UnityEngine_Transform_o *)cachedTransform;
            cachedTransform = (UIPanel_o *)UIRect__get_cachedTransform((UIRect_o *)this->fields.panel, v9);
            if ( !cachedTransform )
              goto LABEL_61;
            position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)cachedTransform, 0);
            if ( !v39 )
              goto LABEL_61;
            v57 = v32;
            v62 = UnityEngine_Transform__InverseTransformPoint(v39, position, 0);
            cachedTransform = this->fields.panel;
            if ( !cachedTransform )
              goto LABEL_61;
            v40 = v62.fields.x;
            v41 = v62.fields.y;
            v55 = v33;
            v56 = v34;
            v42 = v2;
            v43 = v3;
            cachedTransform = (UIPanel_o *)UIRect__get_cachedTransform((UIRect_o *)cachedTransform, v9);
            if ( !cachedTransform )
              goto LABEL_61;
            rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)cachedTransform, 0);
            v63 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation, 0);
            v63.fields.x = v63.fields.x * 57.296;
            v63.fields.y = v63.fields.y * 57.296;
            v63.fields.z = v63.fields.z * 57.296;
            Positive = UnityEngine_Quaternion__Internal_MakePositive(v63, 0);
            v44 = Positive.fields.x;
            v45 = Positive.fields.y;
            v46 = Positive.fields.z;
            cachedTransform = (UIPanel_o *)UIRect__get_cachedTransform((UIRect_o *)mParentPanel, v47);
            if ( !cachedTransform )
              goto LABEL_61;
            *(float *)&v42 = *(float *)&v42 - v40;
            v58 = v57 - v41;
            v72 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)cachedTransform, 0);
            v65 = UnityEngine_Quaternion__Internal_ToEulerRad(v72, 0);
            v65.fields.x = v65.fields.x * 57.296;
            v65.fields.y = v65.fields.y * 57.296;
            v65.fields.z = v65.fields.z * 57.296;
            v66 = UnityEngine_Quaternion__Internal_MakePositive(v65, 0);
            v48 = v66.fields.y - v45;
            v49 = v66.fields.z - v46;
            v50 = NGUIMath__WrapAngle(v66.fields.x - v44, 0);
            v51 = NGUIMath__WrapAngle(v48, 0);
            v52 = NGUIMath__WrapAngle(v49, 0);
            v53 = fabsf(v50);
            v3 = v43;
            v38 = v52;
            if ( v53 > *(float *)&v43 || fabsf(v51) > *(float *)&v43 )
            {
              v54 = (UnityEngine_Object_o *)this->fields.panel;
              v33 = v55;
              v34 = v56;
              if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
              UnityEngine_Debug__LogWarning_71683224((Il2CppObject *)StringLiteral_10552/*"Panel can only be clipped properly if X and Y rotation is left at 0"*/, v54, 0);
            }
            else
            {
              v33 = v55;
              v34 = v56;
            }
            v2 = v42;
            v32 = v58;
          }
          LODWORD(v73.fields.x) = v2;
          v73.fields.y = v32;
          v73.fields.z = v33;
          v73.fields.w = v34;
          UIDrawCall__SetClipping(this, v31++, v73, mParentPanel->fields.mClipSoftness, v38, v37);
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
  __int64 v5; // x1
  UnityEngine_Material_o *v6; // x0
  UnityEngine_Object_o *mTexture; // x20
  UnityEngine_Object_o *mRenderer; // x20
  UnityEngine_Renderer_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct UnityEngine_Material_o *v16; // x22
  UnityEngine_Material_o *v17; // x21
  __int64 v19; // x0

  if ( (byte_4CF2E61 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Material___TypeInfo);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E61 = 1;
  }
  mDynamicMat = (UnityEngine_Object_o *)this->fields.mDynamicMat;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__DestroyImmediate(mDynamicMat, 0);
  UIDrawCall__CreateMaterial(this, v4);
  v6 = this->fields.mDynamicMat;
  if ( !v6 )
    goto LABEL_21;
  UnityEngine_Material__set_renderQueue(v6, this->fields.mRenderQueue, 0);
  mTexture = (UnityEngine_Object_o *)this->fields.mTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mTexture, 0, 0) )
  {
    v6 = this->fields.mDynamicMat;
    if ( !v6 )
      goto LABEL_21;
    UnityEngine_Material__set_mainTexture(v6, this->fields.mTexture, 0);
  }
  mRenderer = (UnityEngine_Object_o *)this->fields.mRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mRenderer, 0, 0) )
  {
    v9 = (UnityEngine_Renderer_o *)this->fields.mRenderer;
    v6 = (UnityEngine_Material_o *)sub_1C7BB90(UnityEngine_Material___TypeInfo, 1);
    if ( v6 )
    {
      v16 = this->fields.mDynamicMat;
      v17 = v6;
      if ( v16 )
      {
        v6 = (UnityEngine_Material_o *)sub_1C7BC24(this->fields.mDynamicMat, v6->klass->_1.element_class);
        if ( !v6 )
        {
          v19 = sub_1C7BD64(0);
          sub_1C7BC10(v19, 0);
        }
      }
      if ( !LODWORD(v17[1].klass) )
        sub_1C7BD48(v6);
      v17[1].monitor = v16;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v17[1].monitor, (int32_t)v16, v10, v11, v12, v13, v14, v15);
      if ( v9 )
      {
        UnityEngine_Renderer__set_sharedMaterials(v9, (UnityEngine_Material_array *)v17, 0);
        return this->fields.mDynamicMat;
      }
    }
LABEL_21:
    sub_1C7BD40(v6, v5);
  }
  return this->fields.mDynamicMat;
}


void UIDrawCall__ReleaseAll(const MethodInfo *method)
{
  UIDrawCall_c *v1; // x0
  const MethodInfo *v2; // x0

  if ( (byte_4CF2E6E & 1) == 0 )
  {
    sub_1C7BAE8(&UIDrawCall_TypeInfo);
    byte_4CF2E6E = 1;
  }
  v1 = UIDrawCall_TypeInfo;
  if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
  UIDrawCall__ClearAll((const MethodInfo *)v1);
  UIDrawCall__ReleaseInactive(v2);
}


void UIDrawCall__ReleaseInactive(const MethodInfo *method)
{
  __int64 v1; // x1
  UIDrawCall_c *v2; // x0
  struct BetterList_UIDrawCall__o *mInactiveList; // x8
  int size; // w19
  Il2CppObject *Item; // x20
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4CF2E6F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BetterList_UIDrawCall__Clear__);
    sub_1C7BAE8(&Method_BetterList_UIDrawCall__get_Item__);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UIDrawCall_TypeInfo);
    byte_4CF2E6F = 1;
  }
  v2 = UIDrawCall_TypeInfo;
  if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
    v2 = UIDrawCall_TypeInfo;
  }
  mInactiveList = v2->static_fields->mInactiveList;
  if ( !mInactiveList )
    goto LABEL_21;
  size = mInactiveList->fields.size;
  while ( 1 )
  {
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      v2 = UIDrawCall_TypeInfo;
    }
    v2 = (UIDrawCall_c *)v2->static_fields->mInactiveList;
    if ( size <= 0 )
      break;
    if ( !v2 )
      goto LABEL_21;
    Item = BetterList_object___get_Item(
             (BetterList_T__o *)v2,
             --size,
             (const MethodInfo_33A6228 *)Method_BetterList_UIDrawCall__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v2 = (UIDrawCall_c *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Item, 0);
    if ( ((unsigned __int8)v2 & 1) != 0 )
    {
      if ( !Item )
        goto LABEL_21;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__DestroyImmediate(gameObject, 0);
    }
    v2 = UIDrawCall_TypeInfo;
  }
  if ( !v2 )
LABEL_21:
    sub_1C7BD40(v2, v1);
  BetterList_object___Clear((BetterList_T__o *)v2, (const MethodInfo_33A6438 *)Method_BetterList_UIDrawCall__Clear__);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4CF2E66 & 1) == 0 )
  {
    sub_1C7BAE8(&UIDrawCall_TypeInfo);
    byte_4CF2E66 = 1;
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
      UnityEngine_Material__SetVector_71739424(mDynamicMat, ClipRange->m_Items[index], v24, 0);
      ClipArgs = UIDrawCall_TypeInfo->static_fields->ClipArgs;
      if ( !ClipArgs )
        goto LABEL_22;
      if ( LODWORD(ClipArgs->max_length) <= index )
LABEL_23:
        sub_1C7BD48(v15);
      v21 = this->fields.mDynamicMat;
      if ( v21 )
      {
        sincosf(angle * -0.017453, &sinx, &cosx);
        v25.fields.w = cosx;
        v25.fields.z = sinx;
        v25.fields.x = v16;
        v25.fields.y = v17;
        UnityEngine_Material__SetVector_71739424(v21, ClipArgs->m_Items[index], v25, 0);
        return;
      }
    }
LABEL_22:
    sub_1C7BD40(v15, *(_QWORD *)&index);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIDrawCall__UpdateGeometry(UIDrawCall_o *this, int32_t widgetCount, const MethodInfo *method)
{
  int32_t v3; // w20
  UIDrawCall_o *v4; // x19
  struct BetterList_Vector3__o *verts; // x8
  unsigned int v6; // w21
  struct BetterList_Vector2__o *uvs; // x8
  struct BetterList_Color32__o *cols; // x8
  UIDrawCall_o **p_mFilter; // x20
  UnityEngine_Object_o *mFilter; // x22
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  UnityEngine_Object_o *v18; // x22
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct BetterList_Vector3__o *v26; // x8
  UnityEngine_Object_o *v27; // x21
  struct BetterList_Vector3__o *v28; // x8
  System_String_o *v29; // x0
  Il2CppObject *v30; // x20
  UnityEngine_Object_o *mesh; // x20
  System_String_o *v32; // x0
  Il2CppObject *v33; // x20
  struct System_Int32_array *mIndices; // x8
  System_Int32_array **p_mIndices; // x23
  int32_t v36; // w24
  _BOOL4 v37; // w26
  UIDrawCall_o **p_mMesh; // x22
  UnityEngine_Object_o *mMesh; // x25
  UnityEngine_Mesh_o *v40; // x25
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  UnityEngine_Object_o *v47; // x25
  UnityEngine_Object_o *mMaterial; // x26
  System_String_o *name; // x0
  struct BetterList_Vector2__o *v50; // x8
  struct UnityEngine_Vector2_array *buffer; // x9
  struct BetterList_Vector3__o *v52; // x8
  struct UnityEngine_Vector3_array *v53; // x10
  int max_length; // w9
  struct BetterList_Color32__o *v55; // x10
  struct UnityEngine_Color32_array *v56; // x10
  struct BetterList_Vector3__o *norms; // x10
  struct UnityEngine_Vector3_array *v58; // x10
  struct BetterList_Vector4__o *tans; // x10
  struct UnityEngine_Vector4_array *v60; // x10
  struct UIPanel_o *panel; // x9
  UIDrawCall_o *v62; // x25
  int v63; // w28
  BetterList_Vector3__o *v64; // x8
  UIDrawCall_o *v65; // x25
  UnityEngine_Mesh_o *v66; // x25
  UnityEngine_Mesh_o *v67; // x25
  const MethodInfo *v68; // x3
  BetterList_Vector3__o *v69; // x0
  UIDrawCall_o *v70; // x25
  UIDrawCall_o *v71; // x0
  UIDrawCall_o *v72; // x25
  struct UnityEngine_Vector3_array *v73; // x9
  int v74; // w9
  struct UnityEngine_Vector3_array *v75; // x8
  struct BetterList_Vector3__o *v76; // x9
  struct UnityEngine_Vector3_array *v77; // x10
  int v78; // w8
  struct BetterList_Vector2__o *v79; // x8
  struct BetterList_Color32__o *v80; // x8
  struct BetterList_Vector3__o *v81; // x8
  struct BetterList_Vector4__o *v82; // x8
  System_Int32_array *v83; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  UnityEngine_Object_o **p_mRenderer; // x20
  UnityEngine_Object_o *mRenderer; // x21
  Il2CppObject *v92; // x0
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  UnityEngine_Object_o *v99; // x21
  const MethodInfo *v100; // x1
  Il2CppObject *v101; // x0
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *v104; // x4
  int32_t v105; // w5
  int64_t v106; // x6
  System_String_o *v107; // x7
  int size; // [xsp+Ch] [xbp-64h] BYREF

  v3 = widgetCount;
  v4 = this;
  if ( (byte_4CF2E63 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BetterList_Vector2__Clear__);
    sub_1C7BAE8(&Method_BetterList_Vector3__Clear__);
    sub_1C7BAE8(&Method_BetterList_Color32__Clear__);
    sub_1C7BAE8(&Method_BetterList_Vector4__Clear__);
    sub_1C7BAE8(&Method_BetterList_Vector3__ToArray__);
    sub_1C7BAE8(&Method_BetterList_Vector4__ToArray__);
    sub_1C7BAE8(&Method_BetterList_Color32__ToArray__);
    sub_1C7BAE8(&Method_BetterList_Vector2__ToArray__);
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1C7BAE8(&UnityEngine_Mesh_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_15989/*"[NGUI] "*/);
    sub_1C7BAE8(&StringLiteral_15990/*"[NGUI] Mesh"*/);
    sub_1C7BAE8(&StringLiteral_14608/*"Too many vertices on one panel: "*/);
    this = (UIDrawCall_o *)sub_1C7BAE8(&StringLiteral_14865/*"UIWidgets must fill the buffer with 4 vertices per quad. Found "*/);
    byte_4CF2E63 = 1;
  }
  verts = v4->fields.verts;
  v4->fields.widgetCount = v3;
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
    v32 = System_Int32__ToString((int32_t)&size, 0);
    v33 = (Il2CppObject *)System_String__Concat_64176912((System_String_o *)StringLiteral_14865/*"UIWidgets must fill the buffer with 4 vertices per quad. Found "*/, v32, 0);
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogError(v33, 0);
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
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
    *p_mFilter = (UIDrawCall_o *)Component_object;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&v4->fields.mFilter,
      (int32_t)Component_object,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = (UnityEngine_Object_o *)*p_mFilter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (UIDrawCall_o *)UnityEngine_Object__op_Equality(v18, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (UIDrawCall_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
    if ( !this )
      goto LABEL_154;
    v19 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)this,
            (const MethodInfo_31C6FE0 *)Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
    *p_mFilter = (UIDrawCall_o *)v19;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->fields.mFilter, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  }
  v26 = v4->fields.verts;
  if ( !v26 )
LABEL_154:
    sub_1C7BD40(this, *(_QWORD *)&widgetCount);
  if ( v26->fields.size <= 64999 )
  {
    p_mIndices = &v4->fields.mIndices;
    mIndices = v4->fields.mIndices;
    v36 = 3 * (v6 >> 1);
    if ( mIndices )
      v37 = v36 != LODWORD(mIndices->max_length);
    else
      v37 = 1;
    p_mMesh = (UIDrawCall_o **)&v4->fields.mMesh;
    mMesh = (UnityEngine_Object_o *)v4->fields.mMesh;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (UIDrawCall_o *)UnityEngine_Object__op_Equality(mMesh, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v40 = (UnityEngine_Mesh_o *)sub_1C7BD34(UnityEngine_Mesh_TypeInfo);
      UnityEngine_Mesh___ctor(v40, 0);
      *p_mMesh = (UIDrawCall_o *)v40;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->fields.mMesh, (int32_t)v40, v41, v42, v43, v44, v45, v46);
      this = *p_mMesh;
      if ( !*p_mMesh )
        goto LABEL_154;
      UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)this, 52, 0);
      v47 = (UnityEngine_Object_o *)v4->fields.mMesh;
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
        this = (UIDrawCall_o *)System_String__Concat_64176912((System_String_o *)StringLiteral_15989/*"[NGUI] "*/, name, 0);
        *(_QWORD *)&widgetCount = this;
      }
      else
      {
        *(_QWORD *)&widgetCount = StringLiteral_15990/*"[NGUI] Mesh"*/;
      }
      if ( !v47 )
        goto LABEL_154;
      UnityEngine_Object__set_name(v47, *(System_String_o **)&widgetCount, 0);
      this = *p_mMesh;
      if ( !*p_mMesh )
        goto LABEL_154;
      UnityEngine_Mesh__MarkDynamic((UnityEngine_Mesh_o *)this, 0);
      v37 = 1;
    }
    v50 = v4->fields.uvs;
    if ( !v50 )
      goto LABEL_154;
    buffer = v50->fields.buffer;
    if ( !buffer )
      goto LABEL_154;
    v52 = v4->fields.verts;
    if ( !v52 )
      goto LABEL_154;
    v53 = v52->fields.buffer;
    if ( !v53 )
      goto LABEL_154;
    max_length = buffer->max_length;
    if ( max_length != LODWORD(v53->max_length) )
      goto LABEL_85;
    v55 = v4->fields.cols;
    if ( !v55 )
      goto LABEL_154;
    v56 = v55->fields.buffer;
    if ( !v56 )
      goto LABEL_154;
    if ( LODWORD(v56->max_length) != max_length )
      goto LABEL_85;
    norms = v4->fields.norms;
    if ( !norms )
      goto LABEL_154;
    v58 = norms->fields.buffer;
    if ( v58 )
    {
      if ( LODWORD(v58->max_length) != max_length )
        goto LABEL_85;
    }
    tans = v4->fields.tans;
    if ( !tans )
      goto LABEL_154;
    v60 = tans->fields.buffer;
    if ( v60 )
    {
      if ( LODWORD(v60->max_length) != max_length )
        goto LABEL_85;
    }
    panel = v4->fields.panel;
    if ( !panel )
      goto LABEL_154;
    if ( panel->fields.renderQueue )
    {
      v62 = *p_mMesh;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (UIDrawCall_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v62, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v52 = v4->fields.verts;
        if ( !v52 )
          goto LABEL_154;
LABEL_85:
        v63 = 0;
        v4->fields.mTriangles = v52->fields.size >> 1;
        goto LABEL_86;
      }
      this = *p_mMesh;
      if ( !*p_mMesh )
        goto LABEL_154;
      this = (UIDrawCall_o *)UnityEngine_Mesh__get_vertexCount((UnityEngine_Mesh_o *)this, 0);
      v52 = v4->fields.verts;
      if ( !v52 )
        goto LABEL_154;
      v73 = v52->fields.buffer;
      if ( !v73 )
        goto LABEL_154;
      v74 = v73->max_length;
      v4->fields.mTriangles = v52->fields.size >> 1;
      if ( (_DWORD)this != v74 )
      {
        v63 = 0;
        goto LABEL_86;
      }
    }
    else
    {
      v4->fields.mTriangles = v52->fields.size >> 1;
    }
    v75 = v52->fields.buffer;
    if ( !v75 )
      goto LABEL_154;
    this = *p_mMesh;
    if ( SLODWORD(v75->max_length) < 65001 )
    {
      if ( !this )
        goto LABEL_154;
      this = (UIDrawCall_o *)UnityEngine_Mesh__get_vertexCount((UnityEngine_Mesh_o *)this, 0);
      v76 = v4->fields.verts;
      if ( !v76 )
        goto LABEL_154;
      v77 = v76->fields.buffer;
      if ( !v77 )
        goto LABEL_154;
      v78 = (int)this;
      this = *p_mMesh;
      if ( v78 != LODWORD(v77->max_length) )
      {
        if ( !this )
          goto LABEL_154;
        UnityEngine_Mesh__Clear((UnityEngine_Mesh_o *)this, 0);
        v76 = v4->fields.verts;
        if ( !v76 )
          goto LABEL_154;
        this = (UIDrawCall_o *)v4->fields.mMesh;
        v37 = 1;
      }
      if ( !this )
        goto LABEL_154;
      UnityEngine_Mesh__set_vertices((UnityEngine_Mesh_o *)this, v76->fields.buffer, 0);
      v79 = v4->fields.uvs;
      if ( !v79 )
        goto LABEL_154;
      this = (UIDrawCall_o *)v4->fields.mMesh;
      if ( !this )
        goto LABEL_154;
      UnityEngine_Mesh__set_uv((UnityEngine_Mesh_o *)this, v79->fields.buffer, 0);
      v80 = v4->fields.cols;
      if ( !v80 )
        goto LABEL_154;
      this = (UIDrawCall_o *)v4->fields.mMesh;
      if ( !this )
        goto LABEL_154;
      UnityEngine_Mesh__set_colors32((UnityEngine_Mesh_o *)this, v80->fields.buffer, 0);
      v81 = v4->fields.norms;
      if ( v81 )
      {
        this = *p_mMesh;
        if ( !*p_mMesh )
          goto LABEL_154;
        UnityEngine_Mesh__set_normals((UnityEngine_Mesh_o *)this, v81->fields.buffer, 0);
      }
      v82 = v4->fields.tans;
      if ( v82 )
      {
        this = *p_mMesh;
        if ( !*p_mMesh )
          goto LABEL_154;
        UnityEngine_Mesh__set_tangents((UnityEngine_Mesh_o *)this, v82->fields.buffer, 0);
        if ( !v37 )
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
        LOBYTE(v63) = 1;
LABEL_134:
        v83 = UIDrawCall__GenerateCachedIndexBuffer(v71, v6, v36, v68);
        *p_mIndices = v83;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->fields.mIndices, (int32_t)v83, v84, v85, v86, v87, v88, v89);
        this = *p_mMesh;
        if ( !*p_mMesh )
          goto LABEL_154;
        UnityEngine_Mesh__set_triangles((UnityEngine_Mesh_o *)this, *p_mIndices, 0);
        if ( (v63 & 1) == 0 )
          goto LABEL_139;
        goto LABEL_138;
      }
      v63 = 1;
LABEL_133:
      if ( !v37 )
        goto LABEL_137;
      goto LABEL_134;
    }
    if ( !this )
      goto LABEL_154;
    this = (UIDrawCall_o *)UnityEngine_Mesh__get_vertexCount((UnityEngine_Mesh_o *)this, 0);
    v64 = v4->fields.verts;
    if ( !v64 )
      goto LABEL_154;
    v63 = 1;
    if ( (_DWORD)this == v64->fields.size )
    {
LABEL_89:
      v65 = *p_mMesh;
      this = (UIDrawCall_o *)BetterList_Vector3___ToArray(
                               v64,
                               (const MethodInfo_33A88D4 *)Method_BetterList_Vector3__ToArray__);
      if ( !v65 )
        goto LABEL_154;
      UnityEngine_Mesh__set_vertices((UnityEngine_Mesh_o *)v65, (UnityEngine_Vector3_array *)this, 0);
      this = (UIDrawCall_o *)v4->fields.uvs;
      if ( !this )
        goto LABEL_154;
      v66 = v4->fields.mMesh;
      this = (UIDrawCall_o *)BetterList_Vector2___ToArray(
                               (BetterList_Vector2__o *)this,
                               (const MethodInfo_33A7D38 *)Method_BetterList_Vector2__ToArray__);
      if ( !v66 )
        goto LABEL_154;
      UnityEngine_Mesh__set_uv(v66, (UnityEngine_Vector2_array *)this, 0);
      this = (UIDrawCall_o *)v4->fields.cols;
      if ( !this )
        goto LABEL_154;
      v67 = v4->fields.mMesh;
      this = (UIDrawCall_o *)BetterList_Color32___ToArray(
                               (BetterList_Color32__o *)this,
                               (const MethodInfo_33A5738 *)Method_BetterList_Color32__ToArray__);
      if ( !v67 )
        goto LABEL_154;
      UnityEngine_Mesh__set_colors32(v67, (UnityEngine_Color32_array *)this, 0);
      v69 = v4->fields.norms;
      if ( v69 )
      {
        v70 = *p_mMesh;
        this = (UIDrawCall_o *)BetterList_Vector3___ToArray(
                                 v69,
                                 (const MethodInfo_33A88D4 *)Method_BetterList_Vector3__ToArray__);
        if ( !v70 )
          goto LABEL_154;
        UnityEngine_Mesh__set_normals((UnityEngine_Mesh_o *)v70, (UnityEngine_Vector3_array *)this, 0);
      }
      v71 = (UIDrawCall_o *)v4->fields.tans;
      if ( v71 )
      {
        v72 = *p_mMesh;
        this = (UIDrawCall_o *)BetterList_Vector4___ToArray(
                                 (BetterList_Vector4__o *)v71,
                                 (const MethodInfo_33A9410 *)Method_BetterList_Vector4__ToArray__);
        if ( !v72 )
          goto LABEL_154;
        UnityEngine_Mesh__set_tangents((UnityEngine_Mesh_o *)v72, (UnityEngine_Vector4_array *)this, 0);
        if ( !v37 )
        {
LABEL_137:
          if ( !v63 )
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
    v64 = v4->fields.verts;
    if ( !v64 )
      goto LABEL_154;
    v37 = 1;
    goto LABEL_89;
  }
  this = (UIDrawCall_o *)v4->fields.mFilter;
  v4->fields.mTriangles = 0;
  if ( !this )
    goto LABEL_154;
  v27 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (UIDrawCall_o *)UnityEngine_Object__op_Inequality(v27, 0, 0);
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
  v28 = v4->fields.verts;
  if ( !v28 )
    goto LABEL_154;
  v29 = System_Int32__ToString((int)v28 + 24, 0);
  v30 = (Il2CppObject *)System_String__Concat_64176912((System_String_o *)StringLiteral_14608/*"Too many vertices on one panel: "*/, v29, 0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v30, 0);
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
    v92 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)this,
            (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    *p_mRenderer = (UnityEngine_Object_o *)v92;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->fields.mRenderer, (int32_t)v92, v93, v94, v95, v96, v97, v98);
  }
  v99 = *p_mRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v99, 0, 0) )
  {
    this = (UIDrawCall_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
    if ( !this )
      goto LABEL_154;
    v101 = UnityEngine_GameObject__AddComponent_object_(
             (UnityEngine_GameObject_o *)this,
             (const MethodInfo_31C6FE0 *)Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
    *p_mRenderer = (UnityEngine_Object_o *)v101;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->fields.mRenderer, (int32_t)v101, v102, v103, v104, v105, v106, v107);
  }
  UIDrawCall__UpdateMaterials(v4, v100);
LABEL_43:
  this = (UIDrawCall_o *)v4->fields.verts;
  if ( !this )
    goto LABEL_154;
  BetterList_Vector3___Clear(
    (BetterList_Vector3__o *)this,
    (const MethodInfo_33A8164 *)Method_BetterList_Vector3__Clear__);
  this = (UIDrawCall_o *)v4->fields.uvs;
  if ( !this )
    goto LABEL_154;
  BetterList_Vector2___Clear(
    (BetterList_Vector2__o *)this,
    (const MethodInfo_33A76D8 *)Method_BetterList_Vector2__Clear__);
  this = (UIDrawCall_o *)v4->fields.cols;
  if ( !this )
    goto LABEL_154;
  BetterList_Color32___Clear(
    (BetterList_Color32__o *)this,
    (const MethodInfo_33A518C *)Method_BetterList_Color32__Clear__);
  this = (UIDrawCall_o *)v4->fields.norms;
  if ( !this )
    goto LABEL_154;
  BetterList_Vector3___Clear(
    (BetterList_Vector3__o *)this,
    (const MethodInfo_33A8164 *)Method_BetterList_Vector3__Clear__);
  this = (UIDrawCall_o *)v4->fields.tans;
  if ( !this )
    goto LABEL_154;
  BetterList_Vector4___Clear(
    (BetterList_Vector4__o *)this,
    (const MethodInfo_33A8CD0 *)Method_BetterList_Vector4__Clear__);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct UnityEngine_Material_o *v17; // x22
  __int64 v18; // x21
  UnityEngine_Object_o *mDynamicMat; // x20
  int32_t mClipCount; // w20
  struct UIPanel_o *v21; // x8
  UnityEngine_Material_o *v22; // x0
  UnityEngine_Object_o *v23; // x20
  UnityEngine_Object_o *v24; // x21
  UnityEngine_Renderer_o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct UnityEngine_Material_o *v32; // x19
  __int64 v33; // x21
  __int64 v34; // x0

  if ( (byte_4CF2E62 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Material___TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E62 = 1;
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
          clipCount = sub_1C7BB90(UnityEngine_Material___TypeInfo, 1);
          if ( !clipCount )
            goto LABEL_41;
          v17 = this->fields.mMaterial;
          v18 = clipCount;
          if ( !v17 || (clipCount = sub_1C7BC24(this->fields.mMaterial, *(_QWORD *)(*(_QWORD *)clipCount + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v18 + 24) )
            {
              *(_QWORD *)(v18 + 32) = v17;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v18 + 32), (int32_t)v17, v11, v12, v13, v14, v15, v16);
              if ( v10 )
              {
                UnityEngine_Renderer__set_sharedMaterials(v10, (UnityEngine_Material_array *)v18, 0);
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
              sub_1C7BD40(clipCount, v4);
            }
LABEL_42:
            sub_1C7BD48(clipCount);
          }
LABEL_43:
          v34 = sub_1C7BD64(clipCount);
          sub_1C7BC10(v34, 0);
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
      v21 = this->fields.panel;
      if ( !v21 )
        goto LABEL_41;
      if ( this->fields.mTextureClip != (v21->fields.mClipping == 1) )
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
        v22 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)clipCount, 0);
        v23 = (UnityEngine_Object_o *)this->fields.mDynamicMat;
        v24 = (UnityEngine_Object_o *)v22;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v24, v23, 0) )
        {
          v25 = (UnityEngine_Renderer_o *)this->fields.mRenderer;
          clipCount = sub_1C7BB90(UnityEngine_Material___TypeInfo, 1);
          if ( !clipCount )
            goto LABEL_41;
          v32 = this->fields.mDynamicMat;
          v33 = clipCount;
          if ( v32 )
          {
            clipCount = sub_1C7BC24(v32, *(_QWORD *)(*(_QWORD *)clipCount + 64LL));
            if ( !clipCount )
              goto LABEL_43;
          }
          if ( !*(_DWORD *)(v33 + 24) )
            goto LABEL_42;
          *(_QWORD *)(v33 + 32) = v32;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v33 + 32), (int32_t)v32, v26, v27, v28, v29, v30, v31);
          if ( !v25 )
            goto LABEL_41;
          UnityEngine_Renderer__set_sharedMaterials(v25, (UnityEngine_Material_array *)v33, 0);
        }
      }
    }
  }
}


BetterList_UIDrawCall__o *UIDrawCall__get_activeList(const MethodInfo *method)
{
  UIDrawCall_c *v1; // x0

  if ( (byte_4CF2E53 & 1) == 0 )
  {
    sub_1C7BAE8(&UIDrawCall_TypeInfo);
    byte_4CF2E53 = 1;
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
  __int64 v7; // x1
  UnityEngine_Mesh_o *v8; // x0
  __int128 v9; // q0
  UnityEngine_Bounds_o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CF2E5E & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E5E = 1;
  }
  mMesh = (UnityEngine_Object_o *)this->fields.mMesh;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  result = (UnityEngine_Bounds_o *)UnityEngine_Object__op_Inequality(mMesh, 0, 0);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v8 = this->fields.mMesh;
    if ( !v8 )
      sub_1C7BD40(0, v7);
    result = UnityEngine_Mesh__get_bounds(&v10, v8, 0);
    v9 = *(_OWORD *)&v10.fields.m_Center.fields.x;
    *(_QWORD *)&retstr->fields.m_Extents.fields.y = *(_QWORD *)&v10.fields.m_Extents.fields.y;
    *(_OWORD *)&retstr->fields.m_Center.fields.x = v9;
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CF2E59 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E59 = 1;
  }
  mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mTrans, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    this->fields.mTrans = transform;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v5, v6, v7, v8, v9, v10);
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
  __int64 v4; // x1
  UnityEngine_Material_o *v5; // x0

  if ( (byte_4CF2E58 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E58 = 1;
  }
  mDynamicMat = (UnityEngine_Object_o *)this->fields.mDynamicMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mDynamicMat, 0, 0) )
    return this->fields.mRenderQueue;
  v5 = this->fields.mDynamicMat;
  if ( !v5 )
    sub_1C7BD40(0, v4);
  return UnityEngine_Material__get_renderQueue(v5, 0);
}


BetterList_UIDrawCall__o *UIDrawCall__get_inactiveList(const MethodInfo *method)
{
  UIDrawCall_c *v1; // x0

  if ( (byte_4CF2E54 & 1) == 0 )
  {
    sub_1C7BAE8(&UIDrawCall_TypeInfo);
    byte_4CF2E54 = 1;
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

  if ( (byte_4CF2E52 & 1) == 0 )
  {
    sub_1C7BAE8(&UIDrawCall_TypeInfo);
    byte_4CF2E52 = 1;
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
  __int64 v4; // x1
  UnityEngine_Renderer_o *v5; // x0

  if ( (byte_4CF2E56 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E56 = 1;
  }
  mRenderer = (UnityEngine_Object_o *)this->fields.mRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mRenderer, 0, 0) )
    return 0;
  v5 = (UnityEngine_Renderer_o *)this->fields.mRenderer;
  if ( !v5 )
    sub_1C7BD40(0, v4);
  return UnityEngine_Renderer__get_sortingOrder(v5, 0);
}


int32_t UIDrawCall__get_triangles(UIDrawCall_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mMesh; // x20

  if ( (byte_4CF2E5D & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E5D = 1;
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CF2E5A & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E5A = 1;
  }
  mMaterial = (UnityEngine_Object_o *)this->fields.mMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMaterial, (UnityEngine_Object_o *)value, 0) )
  {
    this->fields.mMaterial = value;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mMaterial, (int32_t)value, v6, v7, v8, v9, v10, v11);
    this->fields.mRebuildMat = 1;
  }
}


void UIDrawCall__set_mainTexture(UIDrawCall_o *this, UnityEngine_Texture_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_Object_o *mDynamicMat; // x21
  __int64 v11; // x1
  UnityEngine_Material_o *v12; // x0

  if ( (byte_4CF2E5B & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E5B = 1;
  }
  this->fields.mTexture = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mTexture,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  mDynamicMat = (UnityEngine_Object_o *)this->fields.mDynamicMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mDynamicMat, 0, 0) )
  {
    v12 = this->fields.mDynamicMat;
    if ( !v12 )
      sub_1C7BD40(0, v11);
    UnityEngine_Material__set_mainTexture(v12, value, 0);
  }
}


void UIDrawCall__set_renderQueue(UIDrawCall_o *this, int32_t value, const MethodInfo *method)
{
  UnityEngine_Object_o *mDynamicMat; // x21
  __int64 v6; // x1
  UnityEngine_Material_o *v7; // x0

  if ( (byte_4CF2E55 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E55 = 1;
  }
  if ( this->fields.mRenderQueue != value )
  {
    this->fields.mRenderQueue = value;
    mDynamicMat = (UnityEngine_Object_o *)this->fields.mDynamicMat;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mDynamicMat, 0, 0) )
    {
      v7 = this->fields.mDynamicMat;
      if ( !v7 )
        sub_1C7BD40(0, v6);
      UnityEngine_Material__set_renderQueue(v7, value, 0);
    }
  }
}


void UIDrawCall__set_shader(UIDrawCall_o *this, UnityEngine_Shader_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mShader; // x22
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CF2E5C & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E5C = 1;
  }
  mShader = (UnityEngine_Object_o *)this->fields.mShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mShader, (UnityEngine_Object_o *)value, 0) )
  {
    this->fields.mShader = value;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mShader, (int32_t)value, v6, v7, v8, v9, v10, v11);
    this->fields.mRebuildMat = 1;
  }
}


void UIDrawCall__set_sortingOrder(UIDrawCall_o *this, int32_t value, const MethodInfo *method)
{
  UnityEngine_Object_o *mRenderer; // x21
  __int64 v6; // x1
  UnityEngine_Renderer_o *v7; // x0

  if ( (byte_4CF2E57 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E57 = 1;
  }
  mRenderer = (UnityEngine_Object_o *)this->fields.mRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mRenderer, 0, 0) )
  {
    v7 = (UnityEngine_Renderer_o *)this->fields.mRenderer;
    if ( v7 )
    {
      if ( UnityEngine_Renderer__get_sortingOrder(v7, 0) == value )
        return;
      v7 = (UnityEngine_Renderer_o *)this->fields.mRenderer;
      if ( v7 )
      {
        UnityEngine_Renderer__set_sortingOrder(v7, value, 0);
        return;
      }
    }
    sub_1C7BD40(v7, v6);
  }
}


void UIDrawCall_OnRenderCallback___ctor(
        UIDrawCall_OnRenderCallback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AB8EEC;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( this->fields.method_is_virtual )
      {
        v15 = sub_1C7BBA0(method);
        v16 = sub_1C7C134(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_1AB8FE8;
          else
            v13 = sub_1AB8FAC;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_1AB8F28;
        }
        else
        {
          v13 = sub_1AB8EFC;
        }
      }
      else
      {
        v13 = sub_1AB8ECC;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1AB8E84;
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
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, &v6, callback, object);
}


void UIDrawCall_OnRenderCallback__EndInvoke(
        UIDrawCall_OnRenderCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
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