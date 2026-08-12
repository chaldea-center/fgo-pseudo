void UIDrawCall___cctor(const MethodInfo *method)
{
  BetterList_T__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BetterList_T__o *v8; // x19
  struct UIDrawCall_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *v16; // x19
  struct UIDrawCall_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct UIDrawCall_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct UIDrawCall_StaticFields *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7

  if ( (byte_5975198 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_UIDrawCall___ctor__);
    sub_2213A60(&BetterList_UIDrawCall__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int_____ctor___91637400);
    sub_2213A60(&System_Collections_Generic_List_int____TypeInfo);
    sub_2213A60(&UIDrawCall_TypeInfo);
    byte_5975198 = 1;
  }
  v1 = (BetterList_T__o *)sub_2213CCC(BetterList_UIDrawCall__TypeInfo);
  BetterList_object____ctor(v1, (const MethodInfo_3E70130 *)Method_BetterList_UIDrawCall___ctor__);
  UIDrawCall_TypeInfo->static_fields->mActiveList = (struct BetterList_UIDrawCall__o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)UIDrawCall_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (BetterList_T__o *)sub_2213CCC(BetterList_UIDrawCall__TypeInfo);
  BetterList_object____ctor(v8, (const MethodInfo_3E70130 *)Method_BetterList_UIDrawCall___ctor__);
  static_fields = UIDrawCall_TypeInfo->static_fields;
  static_fields->mInactiveList = (struct BetterList_UIDrawCall__o *)v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->mInactiveList,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor_71840884(
    v16,
    10,
    (const MethodInfo_4483474 *)Method_System_Collections_Generic_List_int_____ctor___91637400);
  v17 = UIDrawCall_TypeInfo->static_fields;
  v17->mCache = (struct System_Collections_Generic_List_int____o *)v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->mCache, (int32_t)v16, v18, v19, v20, v21, v22, v23);
  v24 = UIDrawCall_TypeInfo->static_fields;
  v24->ClipRange = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->ClipRange, 0, v25, v26, v27, v28, v29, v30);
  v31 = UIDrawCall_TypeInfo->static_fields;
  v31->ClipArgs = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v31->ClipArgs, 0, v32, v33, v34, v35, v36, v37);
}


void UIDrawCall___ctor(UIDrawCall_o *this, const MethodInfo *method)
{
  BetterList_Vector3__c *v3; // x0
  BetterList_Vector3__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  BetterList_Vector3__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  BetterList_Vector4__o *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  BetterList_Vector2__o *v25; // x20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  BetterList_Color32__o *v32; // x20
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7

  if ( (byte_5975197 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_Vector4___ctor__);
    sub_2213A60(&Method_BetterList_Color32___ctor__);
    sub_2213A60(&Method_BetterList_Vector3___ctor__);
    sub_2213A60(&Method_BetterList_Vector2___ctor__);
    sub_2213A60(&BetterList_Vector3__TypeInfo);
    sub_2213A60(&BetterList_Vector2__TypeInfo);
    sub_2213A60(&BetterList_Color32__TypeInfo);
    sub_2213A60(&BetterList_Vector4__TypeInfo);
    byte_5975197 = 1;
  }
  v3 = BetterList_Vector3__TypeInfo;
  *(_QWORD *)&this->fields.depthStart = 0x800000007FFFFFFFLL;
  v4 = (BetterList_Vector3__o *)sub_2213CCC(v3);
  BetterList_Vector3____ctor(v4, (const MethodInfo_3E71F78 *)Method_BetterList_Vector3___ctor__);
  this->fields.verts = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.verts, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (BetterList_Vector3__o *)sub_2213CCC(BetterList_Vector3__TypeInfo);
  BetterList_Vector3____ctor(v11, (const MethodInfo_3E71F78 *)Method_BetterList_Vector3___ctor__);
  this->fields.norms = v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.norms, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (BetterList_Vector4__o *)sub_2213CCC(BetterList_Vector4__TypeInfo);
  BetterList_Vector4____ctor(v18, (const MethodInfo_3E72A74 *)Method_BetterList_Vector4___ctor__);
  this->fields.tans = v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.tans, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = (BetterList_Vector2__o *)sub_2213CCC(BetterList_Vector2__TypeInfo);
  BetterList_Vector2____ctor(v25, (const MethodInfo_3E7142C *)Method_BetterList_Vector2___ctor__);
  this->fields.uvs = v25;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.uvs, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = (BetterList_Color32__o *)sub_2213CCC(BetterList_Color32__TypeInfo);
  BetterList_Color32____ctor(v32, (const MethodInfo_3E6EE68 *)Method_BetterList_Color32___ctor__);
  this->fields.cols = v32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.cols, (int32_t)v32, v33, v34, v35, v36, v37, v38);
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
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int32_t v13; // w8
  UIDrawCall_c *v14; // x0
  struct UIDrawCall_StaticFields *static_fields; // x0
  struct System_Int32_array *v16; // x19
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w8
  UIDrawCall_c *v25; // x0
  struct UIDrawCall_StaticFields *v26; // x0

  if ( (byte_597518C & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&UIDrawCall_TypeInfo);
    sub_2213A60(&StringLiteral_16797/*"_ClipArgs0"*/);
    sub_2213A60(&StringLiteral_16803/*"_ClipRange1"*/);
    sub_2213A60(&StringLiteral_16804/*"_ClipRange2"*/);
    sub_2213A60(&StringLiteral_16800/*"_ClipArgs3"*/);
    sub_2213A60(&StringLiteral_16802/*"_ClipRange0"*/);
    sub_2213A60(&StringLiteral_16798/*"_ClipArgs1"*/);
    sub_2213A60(&StringLiteral_16805/*"_ClipRange4"*/);
    sub_2213A60(&StringLiteral_16799/*"_ClipArgs2"*/);
    byte_597518C = 1;
  }
  v2 = UIDrawCall_TypeInfo;
  if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, method);
    v2 = UIDrawCall_TypeInfo;
  }
  if ( !v2->static_fields->ClipRange )
  {
    v3 = (struct System_Int32_array *)sub_2213B20(int___TypeInfo, 4);
    v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16802/*"_ClipRange0"*/, 0);
    if ( !v3 )
      goto LABEL_26;
    if ( !LODWORD(v3->max_length) )
      goto LABEL_25;
    v3->m_Items[0] = v4;
    v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16803/*"_ClipRange1"*/, 0);
    if ( (v3->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_25;
    v3->m_Items[1] = v4;
    v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16804/*"_ClipRange2"*/, 0);
    if ( LODWORD(v3->max_length) <= 2 )
      goto LABEL_25;
    v3->m_Items[2] = v4;
    v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16805/*"_ClipRange4"*/, 0);
    if ( (v3->max_length & 0xFFFFFFFC) == 0 )
      goto LABEL_25;
    v13 = v4;
    v14 = UIDrawCall_TypeInfo;
    v3->m_Items[3] = v13;
    if ( !*(&v14->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v14, v6);
      v14 = UIDrawCall_TypeInfo;
    }
    static_fields = v14->static_fields;
    static_fields->ClipRange = v3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->ClipRange, (int32_t)v3, v7, v8, v9, v10, v11, v12);
    v2 = UIDrawCall_TypeInfo;
  }
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, method);
    v2 = UIDrawCall_TypeInfo;
  }
  if ( !v2->static_fields->ClipArgs )
  {
    v16 = (struct System_Int32_array *)sub_2213B20(int___TypeInfo, 4);
    v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16797/*"_ClipArgs0"*/, 0);
    if ( v16 )
    {
      if ( LODWORD(v16->max_length) )
      {
        v16->m_Items[0] = v4;
        v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16798/*"_ClipArgs1"*/, 0);
        if ( (v16->max_length & 0xFFFFFFFE) != 0 )
        {
          v16->m_Items[1] = v4;
          v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16799/*"_ClipArgs2"*/, 0);
          if ( LODWORD(v16->max_length) > 2 )
          {
            v16->m_Items[2] = v4;
            v4 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16800/*"_ClipArgs3"*/, 0);
            if ( (v16->max_length & 0xFFFFFFFC) != 0 )
            {
              v24 = v4;
              v25 = UIDrawCall_TypeInfo;
              v16->m_Items[3] = v24;
              if ( !*(&v25->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v25, v17);
                v25 = UIDrawCall_TypeInfo;
              }
              v26 = v25->static_fields;
              v26->ClipArgs = v16;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v26->ClipArgs,
                (int32_t)v16,
                v18,
                v19,
                v20,
                v21,
                v22,
                v23);
              return;
            }
          }
        }
      }
LABEL_25:
      sub_2213CE4(v4);
    }
LABEL_26:
    sub_2213CDC(v4, v5);
  }
}


void UIDrawCall__Clear(UIDrawCall_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mMesh; // x20
  __int64 v4; // x1
  UnityEngine_Mesh_o *verts; // x0

  if ( (byte_5975184 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_Vector2__Release__);
    sub_2213A60(&Method_BetterList_Vector3__Release__);
    sub_2213A60(&Method_BetterList_Vector4__Release__);
    sub_2213A60(&Method_BetterList_Color32__Release__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975184 = 1;
  }
  mMesh = (UnityEngine_Object_o *)this->fields.mMesh;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    (const MethodInfo_3E716C4 *)Method_BetterList_Vector3__Release__);
  verts = (UnityEngine_Mesh_o *)this->fields.uvs;
  if ( !verts
    || (BetterList_Vector2___Release(
          (BetterList_Vector2__o *)verts,
          (const MethodInfo_3E70CA8 *)Method_BetterList_Vector2__Release__),
        (verts = (UnityEngine_Mesh_o *)this->fields.cols) == 0)
    || (BetterList_Color32___Release(
          (BetterList_Color32__o *)verts,
          (const MethodInfo_3E6E710 *)Method_BetterList_Color32__Release__),
        (verts = (UnityEngine_Mesh_o *)this->fields.norms) == 0)
    || (BetterList_Vector3___Release(
          (BetterList_Vector3__o *)verts,
          (const MethodInfo_3E716C4 *)Method_BetterList_Vector3__Release__),
        (verts = (UnityEngine_Mesh_o *)this->fields.tans) == 0) )
  {
LABEL_14:
    sub_2213CDC(verts, v4);
  }
  BetterList_Vector4___Release(
    (BetterList_Vector4__o *)verts,
    (const MethodInfo_3E721F8 *)Method_BetterList_Vector4__Release__);
}


void UIDrawCall__ClearAll(const MethodInfo *method)
{
  __int64 v1; // x1
  BetterList_T__o *isPlaying; // x0
  __int64 v3; // x1
  UIDrawCall_c *v4; // x8
  char v5; // w19
  struct BetterList_UIDrawCall__o *mActiveList; // x9
  int size; // w9
  unsigned int v8; // w25
  UIDrawCall_c *v9; // x0
  __int64 v10; // x1
  Il2CppObject *Item; // x20
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x20

  if ( (byte_5975192 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&Method_BetterList_UIDrawCall__Clear__);
    sub_2213A60(&Method_BetterList_UIDrawCall__get_Item__);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIDrawCall_TypeInfo);
    byte_5975192 = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v1);
  isPlaying = (BetterList_T__o *)UnityEngine_Application__get_isPlaying(0);
  v4 = UIDrawCall_TypeInfo;
  v5 = (char)isPlaying;
  if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, v3);
    v4 = UIDrawCall_TypeInfo;
  }
  mActiveList = v4->static_fields->mActiveList;
  if ( !mActiveList )
    goto LABEL_31;
  size = mActiveList->fields.size;
  if ( size >= 1 )
  {
    v8 = size + 1;
    do
    {
      v9 = UIDrawCall_TypeInfo;
      if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, v3);
        v9 = UIDrawCall_TypeInfo;
      }
      isPlaying = (BetterList_T__o *)v9->static_fields->mActiveList;
      if ( !isPlaying )
        goto LABEL_31;
      Item = BetterList_object___get_Item(
               isPlaying,
               v8 - 2,
               (const MethodInfo_3E6F7E8 *)Method_BetterList_UIDrawCall__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      isPlaying = (BetterList_T__o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Item, 0);
      if ( ((unsigned __int8)isPlaying & 1) != 0 )
      {
        if ( (v5 & 1) != 0 )
        {
          if ( !Item )
            goto LABEL_31;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
          if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v12);
          NGUITools__SetActive(gameObject, 0, 0);
        }
        else
        {
          if ( !Item )
            goto LABEL_31;
          v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
          if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v14);
          NGUITools__DestroyImmediate(v15, 0);
        }
      }
      --v8;
    }
    while ( v8 > 1 );
    v4 = UIDrawCall_TypeInfo;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, v3);
    v4 = UIDrawCall_TypeInfo;
  }
  isPlaying = (BetterList_T__o *)v4->static_fields->mActiveList;
  if ( !isPlaying )
LABEL_31:
    sub_2213CDC(isPlaying, v3);
  BetterList_object___Clear(isPlaying, (const MethodInfo_3E6F9F0 *)Method_BetterList_UIDrawCall__Clear__);
}


int32_t UIDrawCall__Count(UIPanel_o *panel, const MethodInfo *method)
{
  int32_t v3; // w20
  int32_t i; // w21
  void *Item; // x0
  BetterList_T__o *mActiveList; // x8
  UnityEngine_Object_o *v7; // x22

  if ( (byte_5975195 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_UIDrawCall__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIDrawCall_TypeInfo);
    byte_5975195 = 1;
  }
  v3 = 0;
  for ( i = 0; ; i += UnityEngine_Object__op_Equality(v7, (UnityEngine_Object_o *)panel, 0) )
  {
    Item = UIDrawCall_TypeInfo;
    if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, method);
      Item = UIDrawCall_TypeInfo;
    }
    mActiveList = (BetterList_T__o *)**((_QWORD **)Item + 23);
    if ( !mActiveList )
LABEL_15:
      sub_2213CDC(Item, method);
    if ( v3 >= mActiveList->fields.size )
      break;
    if ( !*((_DWORD *)Item + 57) )
    {
      j_il2cpp_runtime_class_init_0(Item, method);
      mActiveList = (BetterList_T__o *)UIDrawCall_TypeInfo->static_fields->mActiveList;
      if ( !mActiveList )
        goto LABEL_15;
    }
    Item = BetterList_object___get_Item(
             mActiveList,
             v3,
             (const MethodInfo_3E6F7E8 *)Method_BetterList_UIDrawCall__get_Item__);
    if ( !Item )
      goto LABEL_15;
    v7 = (UnityEngine_Object_o *)*((_QWORD *)Item + 6);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    ++v3;
  }
  return i;
}


UIDrawCall_o *UIDrawCall__Create(
        UIPanel_o *panel,
        UnityEngine_Material_o *mat,
        UnityEngine_Texture_o *tex,
        UnityEngine_Shader_o *shader,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_597518F & 1) == 0 )
  {
    sub_2213A60(&UIDrawCall_TypeInfo);
    byte_597518F = 1;
  }
  if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, mat);
  return UIDrawCall__Create_56463392(0, panel, mat, tex, shader, v5);
}


void UIDrawCall__CreateMaterial(UIDrawCall_o *this, const MethodInfo *method)
{
  UnityEngine_Object_c *v3; // x0
  UnityEngine_Object_o *panel; // x20
  __int64 v5; // x1
  __int64 shader; // x0
  int32_t clipCount; // w0
  UnityEngine_Object_c *v8; // x8
  int32_t *p_mClipCount; // x20
  UnityEngine_Object_o *mShader; // x21
  UnityEngine_Object_o *mMaterial; // x21
  int v12; // w8
  System_String_o *v13; // x21
  System_String_o *v14; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x22
  System_String_o *v17; // x21
  struct UIPanel_o *v18; // x8
  System_String_o *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  UnityEngine_Shader_o *v24; // x0
  const MethodInfo *v25; // x2
  __int64 v26; // x1
  UnityEngine_Object_o *v27; // x22
  __int64 v28; // x1
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  UnityEngine_Shader_o *v31; // x0
  const MethodInfo *v32; // x2
  UnityEngine_Object_o *v33; // x22
  __int64 v34; // x1
  System_String_o *v35; // x1
  UnityEngine_Shader_o *v36; // x0
  const MethodInfo *v37; // x2
  UnityEngine_Object_o *v38; // x22
  __int64 v39; // x1
  UnityEngine_Shader_o *v40; // x0
  const MethodInfo *v41; // x2
  UnityEngine_Object_o *v42; // x22
  UnityEngine_Material_o *v43; // x22
  UnityEngine_Material_o *v44; // x23
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  UnityEngine_Object_o *mDynamicMat; // x22
  System_String_o *name; // x0
  __int64 v53; // x8
  __int64 v54; // x22
  unsigned __int64 v55; // x23
  UnityEngine_Object_o *v56; // x22
  UnityEngine_Shader_o *v57; // x20
  UnityEngine_Material_o *v58; // x21
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  UnityEngine_Object_o *v65; // x20
  System_String_o *v66; // x0
  System_String_o *v67; // x0
  __int64 v68; // x1
  Il2CppObject *v69; // x19

  if ( (byte_5975185 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_16555/*"[NGUI] "*/);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_7608/*"Hidden/"*/);
    sub_2213A60(&StringLiteral_137/*" (TextureClip)"*/);
    sub_2213A60(&StringLiteral_15732/*"Unlit/Transparent Colored"*/);
    sub_2213A60(&StringLiteral_136/*" (SoftClip)"*/);
    sub_2213A60(&StringLiteral_15731/*"Unlit/Text"*/);
    sub_2213A60(&StringLiteral_7314/*"GUI/Text Shader"*/);
    sub_2213A60(&StringLiteral_224/*" clip regions"*/);
    sub_2213A60(&StringLiteral_309/*" shader doesn't have a clipped shader version for "*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5975185 = 1;
  }
  v3 = UnityEngine_Object_TypeInfo;
  panel = (UnityEngine_Object_o *)this->fields.panel;
  this->fields.mTextureClip = 0;
  this->fields.mLegacyShader = 0;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( UnityEngine_Object__op_Inequality(panel, 0, 0) )
  {
    shader = (__int64)this->fields.panel;
    if ( !shader )
      goto LABEL_79;
    clipCount = UIPanel__get_clipCount((UIPanel_o *)shader, 0);
  }
  else
  {
    clipCount = 0;
  }
  v8 = UnityEngine_Object_TypeInfo;
  this->fields.mClipCount = clipCount;
  p_mClipCount = &this->fields.mClipCount;
  mShader = (UnityEngine_Object_o *)this->fields.mShader;
  if ( !*(&v8->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v8, v5);
  if ( UnityEngine_Object__op_Inequality(mShader, 0, 0) )
  {
    shader = (__int64)this->fields.mShader;
    if ( !shader )
      goto LABEL_79;
  }
  else
  {
    mMaterial = (UnityEngine_Object_o *)this->fields.mMaterial;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( !UnityEngine_Object__op_Inequality(mMaterial, 0, 0) )
    {
      shader = StringLiteral_15732/*"Unlit/Transparent Colored"*/;
      if ( !StringLiteral_15732/*"Unlit/Transparent Colored"*/ )
        goto LABEL_79;
      goto LABEL_22;
    }
    shader = (__int64)this->fields.mMaterial;
    if ( !shader )
      goto LABEL_79;
    shader = (__int64)UnityEngine_Material__get_shader((UnityEngine_Material_o *)shader, 0);
    if ( !shader )
      goto LABEL_79;
  }
  shader = (__int64)UnityEngine_Object__get_name((UnityEngine_Object_o *)shader, 0);
  if ( !shader )
    goto LABEL_79;
LABEL_22:
  shader = (__int64)System_String__Replace_75703400(
                      (System_String_o *)shader,
                      (System_String_o *)StringLiteral_7314/*"GUI/Text Shader"*/,
                      (System_String_o *)StringLiteral_15731/*"Unlit/Text"*/,
                      0);
  if ( !shader )
    goto LABEL_79;
  v12 = *(_DWORD *)(shader + 16);
  v13 = (System_String_o *)shader;
  if ( v12 >= 3
    && System_String__get_Chars((System_String_o *)shader, v12 - 2, 0) == 32
    && (unsigned __int16)(System_String__get_Chars(v13, v13->fields._stringLength - 1, 0) - 58) >= 0xFFF7u )
  {
    shader = (__int64)System_String__Substring_75702848(v13, 0, v13->fields._stringLength - 2, 0);
    v13 = (System_String_o *)shader;
    if ( !shader )
      goto LABEL_79;
  }
  if ( System_String__StartsWith(v13, (System_String_o *)StringLiteral_7608/*"Hidden/"*/, 0) )
  {
    shader = (__int64)System_String__Substring(v13, 7, 0);
    v13 = (System_String_o *)shader;
    if ( !shader )
      goto LABEL_79;
  }
  shader = (__int64)System_String__Replace_75703400(
                      v13,
                      (System_String_o *)StringLiteral_136/*" (SoftClip)"*/,
                      (System_String_o *)StringLiteral_1/*""*/,
                      0);
  if ( !shader )
    goto LABEL_79;
  v14 = System_String__Replace_75703400(
          (System_String_o *)shader,
          (System_String_o *)StringLiteral_137/*" (TextureClip)"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0);
  v16 = (UnityEngine_Object_o *)this->fields.panel;
  v17 = v14;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  shader = UnityEngine_Object__op_Inequality(v16, 0, 0);
  if ( (shader & 1) != 0 )
  {
    v18 = this->fields.panel;
    if ( !v18 )
      goto LABEL_79;
    if ( v18->fields.mClipping == 1 )
    {
      v19 = (System_String_o *)StringLiteral_7608/*"Hidden/"*/;
      v20 = (System_String_o *)StringLiteral_137/*" (TextureClip)"*/;
      this->fields.mTextureClip = 1;
      v21 = System_String__Concat_75694928(v19, v17, v20, 0);
LABEL_46:
      v36 = UnityEngine_Shader__Find(v21, 0);
      UIDrawCall__set_shader(this, v36, v37);
      goto LABEL_47;
    }
  }
  v21 = v17;
  if ( !*p_mClipCount )
    goto LABEL_46;
  v22 = System_Int32__ToString((int)this + 152, 0);
  v23 = System_String__Concat_75696856(
          (System_String_o *)StringLiteral_7608/*"Hidden/"*/,
          v17,
          (System_String_o *)StringLiteral_113/*" "*/,
          v22,
          0);
  v24 = UnityEngine_Shader__Find(v23, 0);
  UIDrawCall__set_shader(this, v24, v25);
  v27 = (UnityEngine_Object_o *)this->fields.mShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( UnityEngine_Object__op_Equality(v27, 0, 0) )
  {
    v29 = System_Int32__ToString((int)this + 152, 0);
    v30 = System_String__Concat_75694928(v17, (System_String_o *)StringLiteral_113/*" "*/, v29, 0);
    v31 = UnityEngine_Shader__Find(v30, 0);
    UIDrawCall__set_shader(this, v31, v32);
  }
  v33 = (UnityEngine_Object_o *)this->fields.mShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  if ( UnityEngine_Object__op_Equality(v33, 0, 0) && *p_mClipCount == 1 )
  {
    v35 = (System_String_o *)StringLiteral_136/*" (SoftClip)"*/;
    this->fields.mLegacyShader = 1;
    v21 = System_String__Concat_75651716(v17, v35, 0);
    goto LABEL_46;
  }
LABEL_47:
  v38 = (UnityEngine_Object_o *)this->fields.mShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
  if ( UnityEngine_Object__op_Equality(v38, 0, 0) )
  {
    v40 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_15732/*"Unlit/Transparent Colored"*/, 0);
    UIDrawCall__set_shader(this, v40, v41);
  }
  v42 = (UnityEngine_Object_o *)this->fields.mMaterial;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
  if ( UnityEngine_Object__op_Inequality(v42, 0, 0) )
  {
    v43 = this->fields.mMaterial;
    v44 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_83274924(v44, v43, 0);
    this->fields.mDynamicMat = v44;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mDynamicMat,
      (int32_t)v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    shader = (__int64)this->fields.mMaterial;
    if ( !shader )
      goto LABEL_79;
    mDynamicMat = (UnityEngine_Object_o *)this->fields.mDynamicMat;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)shader, 0);
    shader = (__int64)System_String__Concat_75651716((System_String_o *)StringLiteral_16555/*"[NGUI] "*/, name, 0);
    if ( !mDynamicMat )
      goto LABEL_79;
    UnityEngine_Object__set_name(mDynamicMat, (System_String_o *)shader, 0);
    shader = (__int64)this->fields.mDynamicMat;
    if ( !shader )
      goto LABEL_79;
    UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)shader, 60, 0);
    shader = (__int64)this->fields.mDynamicMat;
    if ( !shader )
      goto LABEL_79;
    UnityEngine_Material__CopyPropertiesFromMaterial((UnityEngine_Material_o *)shader, this->fields.mMaterial, 0);
    shader = (__int64)this->fields.mMaterial;
    if ( !shader )
      goto LABEL_79;
    shader = (__int64)UnityEngine_Material__get_shaderKeywords((UnityEngine_Material_o *)shader, 0);
    if ( !shader )
      goto LABEL_79;
    v53 = *(_QWORD *)(shader + 24);
    v54 = shader;
    if ( (int)v53 >= 1 )
    {
      v55 = 0;
      while ( 1 )
      {
        if ( v55 >= (unsigned int)v53 )
          sub_2213CE4(shader);
        shader = (__int64)this->fields.mDynamicMat;
        if ( !shader )
          break;
        UnityEngine_Material__EnableKeyword(
          (UnityEngine_Material_o *)shader,
          *(System_String_o **)(v54 + 32 + 8 * v55),
          0);
        LODWORD(v53) = *(_DWORD *)(v54 + 24);
        if ( (__int64)++v55 >= (int)v53 )
          goto LABEL_65;
      }
LABEL_79:
      sub_2213CDC(shader, v5);
    }
LABEL_65:
    v56 = (UnityEngine_Object_o *)this->fields.mShader;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(v56, 0, 0) )
    {
      shader = (__int64)this->fields.mDynamicMat;
      if ( !shader )
        goto LABEL_79;
      UnityEngine_Material__set_shader((UnityEngine_Material_o *)shader, this->fields.mShader, 0);
    }
    else if ( *p_mClipCount )
    {
      v67 = System_Int32__ToString((int)this + 152, 0);
      v69 = (Il2CppObject *)System_String__Concat_75696856(
                              v17,
                              (System_String_o *)StringLiteral_309/*" shader doesn't have a clipped shader version for "*/,
                              v67,
                              (System_String_o *)StringLiteral_224/*" clip regions"*/,
                              0);
      if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v68);
      UnityEngine_Debug__LogError(v69, 0);
    }
  }
  else
  {
    v57 = this->fields.mShader;
    v58 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v58, v57, 0);
    this->fields.mDynamicMat = v58;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mDynamicMat,
      (int32_t)v58,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
    shader = (__int64)this->fields.mShader;
    if ( !shader )
      goto LABEL_79;
    v65 = (UnityEngine_Object_o *)this->fields.mDynamicMat;
    v66 = UnityEngine_Object__get_name((UnityEngine_Object_o *)shader, 0);
    shader = (__int64)System_String__Concat_75651716((System_String_o *)StringLiteral_16555/*"[NGUI] "*/, v66, 0);
    if ( !v65 )
      goto LABEL_79;
    UnityEngine_Object__set_name(v65, (System_String_o *)shader, 0);
    shader = (__int64)this->fields.mDynamicMat;
    if ( !shader )
      goto LABEL_79;
    UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)shader, 60, 0);
  }
}


UIDrawCall_o *UIDrawCall__Create_56463392(
        System_String_o *name,
        UIPanel_o *pan,
        UnityEngine_Material_o *mat,
        UnityEngine_Texture_o *tex,
        UnityEngine_Shader_o *shader,
        const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v12; // x1
  UnityEngine_Component_o *v13; // x23
  UnityEngine_GameObject_o *v14; // x24
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_5975190 & 1) == 0 )
  {
    sub_2213A60(&UIDrawCall_TypeInfo);
    byte_5975190 = 1;
  }
  if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, pan);
  gameObject = (UnityEngine_Component_o *)UIDrawCall__Create_56463660(name, pan, (const MethodInfo *)mat);
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
    sub_2213CDC(gameObject, v12);
  }
  UnityEngine_GameObject__set_layer(v14, (int32_t)gameObject, 0);
  UIDrawCall__set_baseMaterial((UIDrawCall_o *)v13, mat, v15);
  UIDrawCall__set_mainTexture((UIDrawCall_o *)v13, tex, v16);
  UIDrawCall__set_shader((UIDrawCall_o *)v13, shader, v17);
  UIDrawCall__set_renderQueue((UIDrawCall_o *)v13, pan->fields.startingRenderQueue, v18);
  UIDrawCall__set_sortingOrder((UIDrawCall_o *)v13, pan->fields.mSortingOrder, v19);
  v13[2].klass = (UnityEngine_Component_c *)pan;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13[2], (int32_t)pan, v20, v21, v22, v23, v24, v25);
  return (UIDrawCall_o *)v13;
}


UIDrawCall_o *UIDrawCall__Create_56463660(System_String_o *name, UIPanel_o *pan, const MethodInfo *method)
{
  BetterList_T__o *mActiveList; // x0
  BetterList_T__o *mInactiveList; // x8
  Il2CppObject *v6; // x20
  UnityEngine_GameObject_o *v7; // x20
  __int64 v8; // x1
  Il2CppObject *v9; // x0
  UIDrawCall_c *v10; // x8
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_5975191 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_UIDrawCall__Add__);
    sub_2213A60(&Method_BetterList_UIDrawCall__Pop__);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_UIDrawCall___);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIDrawCall_TypeInfo);
    byte_5975191 = 1;
  }
  mActiveList = (BetterList_T__o *)UIDrawCall_TypeInfo;
  if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, pan);
    mActiveList = (BetterList_T__o *)UIDrawCall_TypeInfo;
  }
  mInactiveList = *(BetterList_T__o **)(*(_QWORD *)&mActiveList[5].fields.size + 8LL);
  if ( !mInactiveList )
    goto LABEL_25;
  if ( mInactiveList->fields.size < 1 )
  {
    v7 = (UnityEngine_GameObject_o *)sub_2213CCC(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v7, name, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)v7, 0);
    if ( v7 )
    {
      v9 = UnityEngine_GameObject__AddComponent_object_(
             v7,
             (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_UIDrawCall___);
      v10 = UIDrawCall_TypeInfo;
      v6 = v9;
      if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, pan);
        v10 = UIDrawCall_TypeInfo;
      }
      mActiveList = (BetterList_T__o *)v10->static_fields->mActiveList;
      if ( mActiveList )
      {
        BetterList_object___Add(mActiveList, v6, (const MethodInfo_3E6FA08 *)Method_BetterList_UIDrawCall__Add__);
        return (UIDrawCall_o *)v6;
      }
    }
    goto LABEL_25;
  }
  if ( !HIDWORD(mActiveList[7].klass) )
  {
    j_il2cpp_runtime_class_init_0(mActiveList, pan);
    mInactiveList = (BetterList_T__o *)UIDrawCall_TypeInfo->static_fields->mInactiveList;
    if ( !mInactiveList )
      goto LABEL_25;
  }
  mActiveList = (BetterList_T__o *)BetterList_object___Pop(
                                     mInactiveList,
                                     (const MethodInfo_3E6FF08 *)Method_BetterList_UIDrawCall__Pop__);
  if ( !UIDrawCall_TypeInfo->static_fields->mActiveList )
    goto LABEL_25;
  v6 = (Il2CppObject *)mActiveList;
  BetterList_object___Add(
    (BetterList_T__o *)UIDrawCall_TypeInfo->static_fields->mActiveList,
    (Il2CppObject *)mActiveList,
    (const MethodInfo_3E6FA08 *)Method_BetterList_UIDrawCall__Add__);
  if ( !name )
  {
    if ( v6 )
      goto LABEL_21;
LABEL_25:
    sub_2213CDC(mActiveList, pan);
  }
  if ( !v6 )
    goto LABEL_25;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v6, name, 0);
LABEL_21:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v11);
  NGUITools__SetActive(gameObject, 1, 0);
  return (UIDrawCall_o *)v6;
}


void UIDrawCall__Destroy(UIDrawCall_o *dc, const MethodInfo *method)
{
  BetterList_T__o *mActiveList; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  bool isPlaying; // w8
  UIDrawCall_c *v13; // x0
  int v14; // w9
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v17; // x1
  UIDrawCall_c *v18; // x0
  __int64 v19; // x1
  UnityEngine_Object_o *v20; // x19

  if ( (byte_5975196 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&Method_BetterList_UIDrawCall__Add__);
    sub_2213A60(&Method_BetterList_UIDrawCall__Remove__);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIDrawCall_TypeInfo);
    byte_5975196 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  mActiveList = (BetterList_T__o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)dc, 0);
  if ( ((unsigned __int8)mActiveList & 1) != 0 )
  {
    if ( !dc )
      goto LABEL_27;
    dc->fields.onRender = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&dc->fields.onRender, 0, v5, v6, v7, v8, v9, v10);
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v11);
    isPlaying = UnityEngine_Application__get_isPlaying(0);
    v13 = UIDrawCall_TypeInfo;
    v14 = *(&UIDrawCall_TypeInfo->_2.cctor_finished + 1);
    if ( isPlaying )
    {
      if ( !v14 )
      {
        j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, v4);
        v13 = UIDrawCall_TypeInfo;
      }
      mActiveList = (BetterList_T__o *)v13->static_fields->mActiveList;
      if ( !mActiveList )
        goto LABEL_27;
      if ( BetterList_object___Remove(
             mActiveList,
             (Il2CppObject *)dc,
             (const MethodInfo_3E6FCC4 *)Method_BetterList_UIDrawCall__Remove__) )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dc, 0);
        if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v15);
        NGUITools__SetActive(gameObject, 0, 0);
        UIDrawCall__Clear(dc, v17);
        v18 = UIDrawCall_TypeInfo;
        if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, v4);
          v18 = UIDrawCall_TypeInfo;
        }
        mActiveList = (BetterList_T__o *)v18->static_fields->mInactiveList;
        if ( mActiveList )
        {
          BetterList_object___Add(
            mActiveList,
            (Il2CppObject *)dc,
            (const MethodInfo_3E6FA08 *)Method_BetterList_UIDrawCall__Add__);
          return;
        }
LABEL_27:
        sub_2213CDC(mActiveList, v4);
      }
    }
    else
    {
      if ( !v14 )
      {
        j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, v4);
        v13 = UIDrawCall_TypeInfo;
      }
      mActiveList = (BetterList_T__o *)v13->static_fields->mActiveList;
      if ( !mActiveList )
        goto LABEL_27;
      BetterList_object___Remove(
        mActiveList,
        (Il2CppObject *)dc,
        (const MethodInfo_3E6FCC4 *)Method_BetterList_UIDrawCall__Remove__);
      v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dc, 0);
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v19);
      NGUITools__DestroyImmediate(v20, 0);
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
  int size; // w24
  int32_t v9; // w22
  UIDrawCall_c *v10; // x0
  Il2CppObject *Item; // x0
  System_Int32_array *v12; // x19
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  unsigned int namespaze; // w8
  unsigned int v20; // w9
  unsigned int v21; // w10
  unsigned int v22; // w10
  unsigned int v23; // w10
  unsigned int v24; // w12
  System_Collections_Generic_List_object__o *v25; // x8
  const char *name; // x8
  _QWORD *v27; // x9
  __int64 namespaze_low; // x10
  const char *v29; // x8

  if ( (byte_5975189 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int____RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_2213A60(&UIDrawCall_TypeInfo);
    byte_5975189 = 1;
  }
  v6 = UIDrawCall_TypeInfo;
  if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, *(_QWORD *)&vertexCount);
    v6 = UIDrawCall_TypeInfo;
  }
  mCache = v6->static_fields->mCache;
  if ( !mCache )
    goto LABEL_40;
  size = mCache->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    do
    {
      v10 = UIDrawCall_TypeInfo;
      if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, *(_QWORD *)&vertexCount);
        v10 = UIDrawCall_TypeInfo;
      }
      v6 = (UIDrawCall_c *)v10->static_fields->mCache;
      if ( !v6 )
        goto LABEL_40;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v6,
               v9,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_int____get_Item__);
      if ( Item )
      {
        v12 = (System_Int32_array *)Item;
        if ( LODWORD(Item[1].monitor) == indexCount )
          return v12;
      }
    }
    while ( size != ++v9 );
  }
  v6 = (UIDrawCall_c *)sub_2213B20(int___TypeInfo, (unsigned int)indexCount);
  v12 = (System_Int32_array *)v6;
  if ( vertexCount >= 1 )
  {
    if ( !v6 )
      goto LABEL_40;
    namespaze = (unsigned int)v6->_1.namespaze;
    v20 = 0;
    v21 = 0;
    do
    {
      if ( v20 >= namespaze )
        goto LABEL_39;
      *((_DWORD *)&v6->_1.byval_arg.data + (int)v20) = v21;
      if ( v20 + 1 >= namespaze
        || (v22 = v21 + 1, *((_DWORD *)&v6->_1.byval_arg.data + (int)(v20 + 1)) = v22, v20 + 2 >= namespaze)
        || (v23 = v22 + 1, *((_DWORD *)&v6->_1.byval_arg.data + (int)(v20 + 2)) = v23, v20 + 3 >= namespaze)
        || (*((_DWORD *)&v6->_1.byval_arg.data + (int)(v20 + 3)) = v23, v20 + 4 >= namespaze)
        || (v24 = v23 + 1, *((_DWORD *)&v6->_1.byval_arg.data + (int)(v20 + 4)) = v23 + 1, v20 + 5 >= namespaze) )
      {
LABEL_39:
        sub_2213CE4(v6);
      }
      v21 = v23 + 2;
      *((_DWORD *)&v6->_1.byval_arg.data + (int)(v20 + 5)) = v24 - 3;
      v20 += 6;
    }
    while ( (int)(v24 + 1) < vertexCount );
  }
  v6 = UIDrawCall_TypeInfo;
  if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, *(_QWORD *)&vertexCount);
    v6 = UIDrawCall_TypeInfo;
  }
  v25 = (System_Collections_Generic_List_object__o *)v6->static_fields->mCache;
  if ( !v25 )
    goto LABEL_40;
  if ( v25->fields._size >= 11 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, *(_QWORD *)&vertexCount);
      v25 = (System_Collections_Generic_List_object__o *)UIDrawCall_TypeInfo->static_fields->mCache;
      if ( !v25 )
        goto LABEL_40;
    }
    System_Collections_Generic_List_object___RemoveAt(
      v25,
      0,
      (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_int____RemoveAt__);
    v6 = UIDrawCall_TypeInfo;
  }
  if ( !*(&v6->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v6, *(_QWORD *)&vertexCount);
    v6 = UIDrawCall_TypeInfo;
  }
  v6 = (UIDrawCall_c *)v6->static_fields->mCache;
  if ( !v6
    || (name = v6->_1.name, v27 = Method_System_Collections_Generic_List_int____Add__,
                            ++HIDWORD(v6->_1.namespaze),
                            !name) )
  {
LABEL_40:
    sub_2213CDC(v6, *(_QWORD *)&vertexCount);
  }
  namespaze_low = SLODWORD(v6->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v6,
      &v12->obj,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &name[8 * namespaze_low];
    LODWORD(v6->_1.namespaze) = namespaze_low + 1;
    *((_QWORD *)v29 + 4) = v12;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 32), (int32_t)v12, v13, v14, v15, v16, v17, v18);
  }
  return v12;
}


void UIDrawCall__OnDestroy(UIDrawCall_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_mMesh; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_Mesh_o *mMesh; // t1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_597518E & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_597518E = 1;
  }
  mMesh = this->fields.mMesh;
  p_mMesh = (MissionNaviTransitionBoardItem_o *)&this->fields.mMesh;
  v4 = (UnityEngine_Object_o *)mMesh;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  NGUITools__DestroyImmediate(v4, 0);
  p_mMesh->klass = 0;
  sub_2213A04(p_mMesh, 0, v6, v7, v8, v9, v10, v11);
}


void UIDrawCall__OnDisable(UIDrawCall_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x1
  UnityEngine_Object_o *mRenderer; // x20
  __int64 v35; // x1
  UnityEngine_Renderer_o *v36; // x20
  UnityEngine_Material_array *v37; // x0
  __int64 v38; // x1
  MissionNaviTransitionBoardItem_o *p_mDynamicMat; // x19
  UnityEngine_Object_o *v40; // x20
  struct UnityEngine_Material_o *mDynamicMat; // t1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7

  if ( (byte_597518D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Material___TypeInfo);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597518D = 1;
  }
  this->fields.panel = 0;
  *(_QWORD *)&this->fields.depthStart = 0x800000007FFFFFFFLL;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.panel, 0, v2, v3, v4, v5, v6, v7);
  this->fields.manager = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.manager, 0, v9, v10, v11, v12, v13, v14);
  this->fields.mMaterial = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mMaterial, 0, v15, v16, v17, v18, v19, v20);
  this->fields.mTexture = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mTexture, 0, v21, v22, v23, v24, v25, v26);
  this->fields.clipTexture = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.clipTexture, 0, v27, v28, v29, v30, v31, v32);
  mRenderer = (UnityEngine_Object_o *)this->fields.mRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
  if ( UnityEngine_Object__op_Inequality(mRenderer, 0, 0) )
  {
    v36 = (UnityEngine_Renderer_o *)this->fields.mRenderer;
    v37 = (UnityEngine_Material_array *)sub_2213B20(UnityEngine_Material___TypeInfo, 0);
    if ( !v36 )
      sub_2213CDC(v37, v38);
    UnityEngine_Renderer__set_sharedMaterials(v36, v37, 0);
  }
  mDynamicMat = this->fields.mDynamicMat;
  p_mDynamicMat = (MissionNaviTransitionBoardItem_o *)&this->fields.mDynamicMat;
  v40 = (UnityEngine_Object_o *)mDynamicMat;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v35);
  NGUITools__DestroyImmediate(v40, 0);
  p_mDynamicMat->klass = 0;
  sub_2213A04(p_mDynamicMat, 0, v42, v43, v44, v45, v46, v47);
}


void UIDrawCall__OnEnable(UIDrawCall_o *this, const MethodInfo *method)
{
  this->fields.mRebuildMat = 1;
}


void UIDrawCall__OnWillRenderObject(UIDrawCall_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UIDrawCall_OnRenderCallback_o *onRender; // x8
  struct UnityEngine_Material_o *mDynamicMat; // x1
  UnityEngine_Object_o *v6; // x20
  UIPanel_o *cachedTransform; // x0
  const MethodInfo *v8; // x1
  struct UIPanel_o *panel; // x8
  float32x2_t v10; // d1
  float32x2_t v11; // d8
  UnityEngine_Material_o *v12; // x20
  __int64 v13; // x8
  UnityEngine_Material_o *v19; // x20
  float v20; // s8
  float v21; // s9
  UIRect_o **p_panel; // x24
  float32x2_t *v23; // x8
  float32x2_t v24; // d8
  float32x2_t v25; // d9
  int32_t v27; // w20
  struct UIPanel_o **i; // x8
  struct UIPanel_o *v29; // x21
  float x; // s8
  float v31; // s9
  float z; // s15
  float w; // s11
  UnityEngine_Object_o *v34; // x22
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x2
  float v37; // s12
  UnityEngine_Transform_o *v38; // x22
  const MethodInfo *v39; // x1
  float v40; // s14
  float v41; // s10
  __int64 v42; // x1
  UIRect_o *v43; // x22
  float v44; // s0
  float y; // s1
  unsigned __int64 v46; // krC0_8
  unsigned __int64 v47; // [xsp+10h] [xbp-A0h]
  UnityEngine_Vector3_o v48; // 0:kr60_12.12
  UnityEngine_Vector3_o Positive; // 0:kr74_12.12
  UnityEngine_Vector3_o v50; // 0:kr90_12.12
  UnityEngine_Vector3_o v51; // 0:krA4_12.12
  UnityEngine_Vector4_o v52; // 0:krB0_16.16
  UnityEngine_Vector4_o v53; // 0:krD0_16.16
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_597518A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIDrawCall_TypeInfo);
    sub_2213A60(&StringLiteral_16810/*"_ClipTex"*/);
    sub_2213A60(&StringLiteral_16807/*"_ClipRotateInfo"*/);
    sub_2213A60(&StringLiteral_10950/*"Panel can only be clipped properly if X and Y rotation is left at 0"*/);
    sub_2213A60(&StringLiteral_16808/*"_ClipSharpness"*/);
    byte_597518A = 1;
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
  v6 = (UnityEngine_Object_o *)this->fields.mDynamicMat;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  cachedTransform = (UIPanel_o *)UnityEngine_Object__op_Equality(v6, 0, 0);
  if ( ((unsigned __int8)cachedTransform & 1) == 0 && this->fields.mClipCount )
  {
    if ( this->fields.mTextureClip )
    {
      panel = this->fields.panel;
      if ( panel )
      {
        v11.n64_u64[0] = *(unsigned __int64 *)&panel->fields.drawCallClipRange.fields.x;
        v10.n64_u64[0] = *(unsigned __int64 *)&panel->fields.drawCallClipRange.fields.z;
        v12 = this->fields.mDynamicMat;
        cachedTransform = (UIPanel_o *)UIDrawCall_TypeInfo;
        v47 = v10.n64_u64[0];
        if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, v8);
          v10.n64_u64[0] = v47;
          cachedTransform = (UIPanel_o *)UIDrawCall_TypeInfo;
        }
        v13 = *(_QWORD *)&cachedTransform->fields.drawCalls->fields._size;
        if ( v13 )
        {
          if ( !*(_DWORD *)(v13 + 24) )
            sub_2213CE4(cachedTransform);
          if ( v12 )
          {
            __asm { FMOV            V0.2S, #1.0 }
            *(float32x2_t *)&v52.fields.x = vdiv_f32(vneg_f32(v11), v10);
            *(float32x2_t *)&v52.fields.z = vdiv_f32(_D0, v10);
            UnityEngine_Material__SetVector_83285548(v12, *(_DWORD *)(v13 + 32), v52, 0);
            cachedTransform = this->fields.panel;
            if ( cachedTransform )
            {
              v19 = this->fields.mDynamicMat;
              LODWORD(v44) = *(_OWORD *)&UIPanel__get_clipTextureRotationInfo(cachedTransform, 0);
              cachedTransform = this->fields.panel;
              if ( cachedTransform )
              {
                v20 = v44;
                y = UIPanel__get_clipTextureRotationInfo(cachedTransform, 0).fields.y;
                cachedTransform = this->fields.panel;
                if ( cachedTransform )
                {
                  v21 = y;
                  v58.fields.z = UIPanel__get_clipTextureRotationInfo(cachedTransform, 0).fields.z;
                  if ( v19 )
                  {
                    v58.fields.y = (float)-v21 / *((float *)&v47 + 1);
                    v58.fields.x = (float)-v20 / *(float *)&v47;
                    v58.fields.w = 0.0;
                    UnityEngine_Material__SetVector(v19, (System_String_o *)StringLiteral_16807/*"_ClipRotateInfo"*/, v58, 0);
                    cachedTransform = (UIPanel_o *)this->fields.mDynamicMat;
                    if ( cachedTransform )
                    {
                      UnityEngine_Material__SetTexture(
                        (UnityEngine_Material_o *)cachedTransform,
                        (System_String_o *)StringLiteral_16810/*"_ClipTex"*/,
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
LABEL_54:
      sub_2213CDC(cachedTransform, v8);
    }
    p_panel = (UIRect_o **)&this->fields.panel;
    if ( this->fields.mLegacyShader )
    {
      v23 = (float32x2_t *)*p_panel;
      if ( !*p_panel )
        goto LABEL_54;
      cachedTransform = (UIPanel_o *)this->fields.mDynamicMat;
      if ( !cachedTransform )
        goto LABEL_54;
      v24.n64_u64[0] = v23[33].n64_u64[0];
      v25.n64_u64[0] = v23[39].n64_u64[0];
      UnityEngine_Material__set_mainTextureOffset(
        (UnityEngine_Material_o *)cachedTransform,
        (UnityEngine_Vector2_o)vdiv_f32(vneg_f32(v23[32]), v24).n64_u64[0],
        0);
      cachedTransform = (UIPanel_o *)this->fields.mDynamicMat;
      if ( !cachedTransform )
        goto LABEL_54;
      __asm { FMOV            V0.2S, #1.0 }
      UnityEngine_Material__set_mainTextureScale(
        (UnityEngine_Material_o *)cachedTransform,
        (UnityEngine_Vector2_o)vdiv_f32(_D0, v24).n64_u64[0],
        0);
      cachedTransform = (UIPanel_o *)this->fields.mDynamicMat;
      if ( !cachedTransform )
        goto LABEL_54;
      *(int8x8_t *)&v53.fields.x = vbsl_s8(vcgtz_f32(v25), vdiv_f32(v24, v25), vdup_n_s32(0x447A0000u));
      v53.fields.z = 0.0;
      v53.fields.w = 0.0;
      UnityEngine_Material__SetVector(
        (UnityEngine_Material_o *)cachedTransform,
        (System_String_o *)StringLiteral_16808/*"_ClipSharpness"*/,
        v53,
        0);
    }
    else
    {
      v27 = 0;
      for ( i = &this->fields.panel; ; i = &v29->fields.mParentPanel )
      {
        v29 = *i;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        cachedTransform = (UIPanel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0, 0);
        if ( ((unsigned __int8)cachedTransform & 1) == 0 )
          break;
        if ( !v29 )
          goto LABEL_54;
        if ( UIPanel__get_hasClipping(v29, 0) )
        {
          x = v29->fields.drawCallClipRange.fields.x;
          v31 = v29->fields.drawCallClipRange.fields.y;
          z = v29->fields.drawCallClipRange.fields.z;
          w = v29->fields.drawCallClipRange.fields.w;
          v34 = (UnityEngine_Object_o *)*p_panel;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
          v37 = 0.0;
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, v34, 0) )
          {
            cachedTransform = (UIPanel_o *)UIRect__get_cachedTransform((UIRect_o *)v29, v35);
            if ( !*p_panel )
              goto LABEL_54;
            v38 = (UnityEngine_Transform_o *)cachedTransform;
            cachedTransform = (UIPanel_o *)UIRect__get_cachedTransform(*p_panel, v8);
            if ( !cachedTransform )
              goto LABEL_54;
            position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)cachedTransform, 0);
            if ( !v38 )
              goto LABEL_54;
            v46 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint(v38, position, 0);
            cachedTransform = (UIPanel_o *)*p_panel;
            if ( !*p_panel )
              goto LABEL_54;
            cachedTransform = (UIPanel_o *)UIRect__get_cachedTransform((UIRect_o *)cachedTransform, v8);
            if ( !cachedTransform )
              goto LABEL_54;
            rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)cachedTransform, 0);
            v48 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation, 0);
            v54.fields.x = v48.fields.x * 57.296;
            v54.fields.y = v48.fields.y * 57.296;
            v54.fields.z = v48.fields.z * 57.296;
            Positive = UnityEngine_Quaternion__Internal_MakePositive(v54, 0);
            cachedTransform = (UIPanel_o *)UIRect__get_cachedTransform((UIRect_o *)v29, v39);
            if ( !cachedTransform )
              goto LABEL_54;
            v60 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)cachedTransform, 0);
            v50 = UnityEngine_Quaternion__Internal_ToEulerRad(v60, 0);
            v55.fields.x = v50.fields.x * 57.296;
            v55.fields.y = v50.fields.y * 57.296;
            v55.fields.z = v50.fields.z * 57.296;
            v51 = UnityEngine_Quaternion__Internal_MakePositive(v55, 0);
            v40 = NGUIMath__WrapAngle(v51.fields.x - Positive.fields.x, 0);
            v41 = NGUIMath__WrapAngle(v51.fields.y - Positive.fields.y, 0);
            v37 = NGUIMath__WrapAngle(v51.fields.z - Positive.fields.z, 0);
            if ( fabsf(v40) > 0.001 || fabsf(v41) > 0.001 )
            {
              v43 = *p_panel;
              if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v42);
              UnityEngine_Debug__LogWarning_83209572(
                (Il2CppObject *)StringLiteral_10950/*"Panel can only be clipped properly if X and Y rotation is left at 0"*/,
                (UnityEngine_Object_o *)v43,
                0);
              x = x - *(float *)&v46;
              v31 = v31 - *((float *)&v46 + 1);
            }
            else
            {
              x = x - *(float *)&v46;
              v31 = v31 - *((float *)&v46 + 1);
            }
          }
          v57.fields.x = x;
          v57.fields.y = v31;
          v57.fields.z = z;
          v57.fields.w = w;
          UIDrawCall__SetClipping(this, v27++, v57, v29->fields.mClipSoftness, v37, v36);
        }
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
  __int64 v7; // x1
  UnityEngine_Object_o *mTexture; // x20
  UnityEngine_Object_o *mRenderer; // x20
  UnityEngine_Renderer_o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct UnityEngine_Material_o *v17; // x22
  UnityEngine_Material_o *v18; // x21
  __int64 v19; // x1
  __int64 v21; // x0

  if ( (byte_5975186 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Material___TypeInfo);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975186 = 1;
  }
  mDynamicMat = (UnityEngine_Object_o *)this->fields.mDynamicMat;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  NGUITools__DestroyImmediate(mDynamicMat, 0);
  UIDrawCall__CreateMaterial(this, v4);
  v6 = this->fields.mDynamicMat;
  if ( !v6 )
    goto LABEL_21;
  UnityEngine_Material__set_renderQueue(v6, this->fields.mRenderQueue, 0);
  mTexture = (UnityEngine_Object_o *)this->fields.mTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(mTexture, 0, 0) )
  {
    v6 = this->fields.mDynamicMat;
    if ( !v6 )
      goto LABEL_21;
    UnityEngine_Material__set_mainTexture(v6, this->fields.mTexture, 0);
  }
  mRenderer = (UnityEngine_Object_o *)this->fields.mRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(mRenderer, 0, 0) )
  {
    v10 = (UnityEngine_Renderer_o *)this->fields.mRenderer;
    v6 = (UnityEngine_Material_o *)sub_2213B20(UnityEngine_Material___TypeInfo, 1);
    if ( v6 )
    {
      v17 = this->fields.mDynamicMat;
      v18 = v6;
      if ( v17 )
      {
        v6 = (UnityEngine_Material_o *)sub_2213BB4(this->fields.mDynamicMat, v6->klass->_1.element_class);
        if ( !v6 )
        {
          v21 = sub_2213D00(0, v19);
          sub_2213BA0(v21, 0);
        }
      }
      if ( !LODWORD(v18[1].klass) )
        sub_2213CE4(v6);
      v18[1].monitor = v17;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18[1].monitor, (int32_t)v17, v11, v12, v13, v14, v15, v16);
      if ( v10 )
      {
        UnityEngine_Renderer__set_sharedMaterials(v10, (UnityEngine_Material_array *)v18, 0);
        return this->fields.mDynamicMat;
      }
    }
LABEL_21:
    sub_2213CDC(v6, v5);
  }
  return this->fields.mDynamicMat;
}


void UIDrawCall__ReleaseAll(const MethodInfo *method)
{
  __int64 v1; // x1
  UIDrawCall_c *v2; // x0
  const MethodInfo *v3; // x0

  if ( (byte_5975193 & 1) == 0 )
  {
    sub_2213A60(&UIDrawCall_TypeInfo);
    byte_5975193 = 1;
  }
  v2 = UIDrawCall_TypeInfo;
  if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, v1);
  UIDrawCall__ClearAll((const MethodInfo *)v2);
  UIDrawCall__ReleaseInactive(v3);
}


void UIDrawCall__ReleaseInactive(const MethodInfo *method)
{
  __int64 v1; // x1
  BetterList_T__o *mInactiveList; // x0
  struct BetterList_UIDrawCall__o *v3; // x8
  int size; // w8
  unsigned int v5; // w24
  UIDrawCall_c *v6; // x0
  __int64 v7; // x1
  Il2CppObject *Item; // x19
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_5975194 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_UIDrawCall__Clear__);
    sub_2213A60(&Method_BetterList_UIDrawCall__get_Item__);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIDrawCall_TypeInfo);
    byte_5975194 = 1;
  }
  mInactiveList = (BetterList_T__o *)UIDrawCall_TypeInfo;
  if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, v1);
    mInactiveList = (BetterList_T__o *)UIDrawCall_TypeInfo;
  }
  v3 = *(struct BetterList_UIDrawCall__o **)(*(_QWORD *)&mInactiveList[5].fields.size + 8LL);
  if ( !v3 )
    goto LABEL_24;
  size = v3->fields.size;
  if ( size >= 1 )
  {
    v5 = size + 1;
    do
    {
      v6 = UIDrawCall_TypeInfo;
      if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, v1);
        v6 = UIDrawCall_TypeInfo;
      }
      mInactiveList = (BetterList_T__o *)v6->static_fields->mInactiveList;
      if ( !mInactiveList )
        goto LABEL_24;
      Item = BetterList_object___get_Item(
               mInactiveList,
               v5 - 2,
               (const MethodInfo_3E6F7E8 *)Method_BetterList_UIDrawCall__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      mInactiveList = (BetterList_T__o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Item, 0);
      if ( ((unsigned __int8)mInactiveList & 1) != 0 )
      {
        if ( !Item )
          goto LABEL_24;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
        if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v9);
        NGUITools__DestroyImmediate(gameObject, 0);
      }
      --v5;
    }
    while ( v5 > 1 );
    mInactiveList = (BetterList_T__o *)UIDrawCall_TypeInfo;
  }
  if ( !HIDWORD(mInactiveList[7].klass) )
  {
    j_il2cpp_runtime_class_init_0(mInactiveList, v1);
    mInactiveList = (BetterList_T__o *)UIDrawCall_TypeInfo;
  }
  mInactiveList = *(BetterList_T__o **)(*(_QWORD *)&mInactiveList[5].fields.size + 8LL);
  if ( !mInactiveList )
LABEL_24:
    sub_2213CDC(mInactiveList, v1);
  BetterList_object___Clear(mInactiveList, (const MethodInfo_3E6F9F0 *)Method_BetterList_UIDrawCall__Clear__);
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
  __int64 v20; // x23
  struct System_Int32_array *ClipArgs; // x21
  UnityEngine_Material_o *v22; // x19
  float cosx; // [xsp+8h] [xbp-68h] BYREF
  float sinx; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector4_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  y = soft.fields.y;
  x = soft.fields.x;
  w = cr.fields.w;
  z = cr.fields.z;
  v11 = cr.fields.y;
  v12 = cr.fields.x;
  if ( (byte_597518B & 1) == 0 )
  {
    sub_2213A60(&UIDrawCall_TypeInfo);
    byte_597518B = 1;
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
  if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, *(_QWORD *)&index);
    v15 = UIDrawCall_TypeInfo;
  }
  ClipRange = v15->static_fields->ClipRange;
  if ( !ClipRange )
    goto LABEL_22;
  if ( SLODWORD(ClipRange->max_length) > index )
  {
    mDynamicMat = this->fields.mDynamicMat;
    if ( *(&v15->_2.cctor_finished + 1)
      || (j_il2cpp_runtime_class_init_0(v15, *(_QWORD *)&index),
          (ClipRange = UIDrawCall_TypeInfo->static_fields->ClipRange) != 0) )
    {
      if ( LODWORD(ClipRange->max_length) <= index )
        goto LABEL_23;
      if ( !mDynamicMat )
        goto LABEL_22;
      v20 = index;
      v25.fields.w = 1.0 / w;
      v25.fields.z = 1.0 / z;
      v25.fields.y = (float)-v11 / w;
      v25.fields.x = (float)-v12 / z;
      UnityEngine_Material__SetVector_83285548(mDynamicMat, ClipRange->m_Items[index], v25, 0);
      ClipArgs = UIDrawCall_TypeInfo->static_fields->ClipArgs;
      if ( !ClipArgs )
        goto LABEL_22;
      if ( LODWORD(ClipArgs->max_length) <= index )
LABEL_23:
        sub_2213CE4(v15);
      v22 = this->fields.mDynamicMat;
      if ( v22 )
      {
        sincosf(angle * -0.017453, &sinx, &cosx);
        v26.fields.w = cosx;
        v26.fields.z = sinx;
        v26.fields.x = v16;
        v26.fields.y = v17;
        UnityEngine_Material__SetVector_83285548(v22, ClipArgs->m_Items[v20], v26, 0);
        return;
      }
    }
LABEL_22:
    sub_2213CDC(v15, *(_QWORD *)&index);
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
  __int64 v11; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  UnityEngine_Object_o *v19; // x22
  Il2CppObject *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct BetterList_Vector3__o *v27; // x8
  __int64 v28; // x1
  UnityEngine_Object_o *v29; // x21
  struct BetterList_Vector3__o *v30; // x8
  System_String_o *v31; // x0
  __int64 v32; // x1
  Il2CppObject *v33; // x20
  __int64 v34; // x1
  __int64 v35; // x1
  UnityEngine_Object_o *mesh; // x20
  System_String_o *v37; // x0
  __int64 v38; // x1
  Il2CppObject *v39; // x20
  struct System_Int32_array *mIndices; // x8
  System_Int32_array **p_mIndices; // x23
  int32_t v42; // w24
  _BOOL4 v43; // w26
  UIDrawCall_o **p_mMesh; // x22
  UnityEngine_Object_o *mMesh; // x25
  UnityEngine_Mesh_o *v46; // x25
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 v53; // x1
  UnityEngine_Object_o *v54; // x25
  UnityEngine_Object_o *mMaterial; // x26
  System_String_o *name; // x0
  struct BetterList_Vector2__o *v57; // x8
  struct UnityEngine_Vector2_array *buffer; // x9
  struct BetterList_Vector3__o *v59; // x8
  struct UnityEngine_Vector3_array *v60; // x10
  int max_length; // w9
  struct BetterList_Color32__o *v62; // x10
  struct UnityEngine_Color32_array *v63; // x10
  struct BetterList_Vector3__o *norms; // x10
  struct UnityEngine_Vector3_array *v65; // x10
  struct BetterList_Vector4__o *tans; // x10
  struct UnityEngine_Vector4_array *v67; // x10
  struct UIPanel_o *panel; // x9
  UIDrawCall_o *v69; // x25
  char v70; // w28
  BetterList_Vector3__o *v71; // x8
  UIDrawCall_o *v72; // x25
  UnityEngine_Mesh_o *v73; // x25
  UnityEngine_Mesh_o *v74; // x25
  const MethodInfo *v75; // x3
  BetterList_Vector3__o *v76; // x0
  UIDrawCall_o *v77; // x25
  UIDrawCall_o *v78; // x0
  UIDrawCall_o *v79; // x25
  struct UnityEngine_Vector3_array *v80; // x9
  int v81; // w9
  struct UnityEngine_Vector3_array *v82; // x8
  struct BetterList_Vector3__o *v83; // x9
  struct UnityEngine_Vector3_array *v84; // x10
  int v85; // w8
  struct BetterList_Vector2__o *v86; // x8
  struct BetterList_Color32__o *v87; // x8
  struct BetterList_Vector3__o *v88; // x8
  struct BetterList_Vector4__o *v89; // x8
  System_Int32_array *v90; // x0
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  UnityEngine_Object_o **p_mRenderer; // x20
  UnityEngine_Object_o *mRenderer; // x21
  __int64 v99; // x1
  Il2CppObject *v100; // x0
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  UnityEngine_Object_o *v107; // x21
  const MethodInfo *v108; // x1
  Il2CppObject *v109; // x0
  System_String_o *v110; // x2
  System_String_o *v111; // x3
  int32_t v112; // w4
  int32_t v113; // w5
  bool v114; // w6
  bool v115; // w7
  int size; // [xsp+Ch] [xbp-64h] BYREF

  v3 = widgetCount;
  v4 = this;
  if ( (byte_5975188 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_Vector2__Clear__);
    sub_2213A60(&Method_BetterList_Vector3__Clear__);
    sub_2213A60(&Method_BetterList_Color32__Clear__);
    sub_2213A60(&Method_BetterList_Vector4__Clear__);
    sub_2213A60(&Method_BetterList_Vector3__ToArray__);
    sub_2213A60(&Method_BetterList_Vector4__ToArray__);
    sub_2213A60(&Method_BetterList_Color32__ToArray__);
    sub_2213A60(&Method_BetterList_Vector2__ToArray__);
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_2213A60(&UnityEngine_Mesh_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_16555/*"[NGUI] "*/);
    sub_2213A60(&StringLiteral_16556/*"[NGUI] Mesh"*/);
    sub_2213A60(&StringLiteral_15143/*"Too many vertices on one panel: "*/);
    this = (UIDrawCall_o *)sub_2213A60(&StringLiteral_15401/*"UIWidgets must fill the buffer with 4 vertices per quad. Found "*/);
    byte_5975188 = 1;
  }
  verts = v4->fields.verts;
  size = 0;
  v4->fields.widgetCount = v3;
  if ( !verts )
    goto LABEL_153;
  size = verts->fields.size;
  v6 = size;
  if ( size < 1 )
    goto LABEL_33;
  uvs = v4->fields.uvs;
  if ( !uvs )
    goto LABEL_153;
  if ( size != uvs->fields.size )
    goto LABEL_33;
  cols = v4->fields.cols;
  if ( !cols )
    goto LABEL_153;
  if ( (size & 3) != 0 || size != cols->fields.size )
  {
LABEL_33:
    this = (UIDrawCall_o *)v4->fields.mFilter;
    if ( !this )
      goto LABEL_153;
    mesh = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
    if ( UnityEngine_Object__op_Inequality(mesh, 0, 0) )
    {
      this = (UIDrawCall_o *)v4->fields.mFilter;
      if ( !this )
        goto LABEL_153;
      this = (UIDrawCall_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0);
      if ( !this )
        goto LABEL_153;
      UnityEngine_Mesh__Clear((UnityEngine_Mesh_o *)this, 0);
    }
    v37 = System_Int32__ToString((int32_t)&size, 0);
    v39 = (Il2CppObject *)System_String__Concat_75651716((System_String_o *)StringLiteral_15401/*"UIWidgets must fill the buffer with 4 vertices per quad. Found "*/, v37, 0);
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v38);
    UnityEngine_Debug__LogError(v39, 0);
    goto LABEL_43;
  }
  p_mFilter = (UIDrawCall_o **)&v4->fields.mFilter;
  mFilter = (UnityEngine_Object_o *)v4->fields.mFilter;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&widgetCount);
  if ( UnityEngine_Object__op_Equality(mFilter, 0, 0) )
  {
    this = (UIDrawCall_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
    if ( !this )
      goto LABEL_153;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MeshFilter___);
    *p_mFilter = (UIDrawCall_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v4->fields.mFilter,
      (int32_t)Component_object,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = (UnityEngine_Object_o *)*p_mFilter;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  this = (UIDrawCall_o *)UnityEngine_Object__op_Equality(v19, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (UIDrawCall_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
    if ( !this )
      goto LABEL_153;
    v20 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)this,
            (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_MeshFilter___);
    *p_mFilter = (UIDrawCall_o *)v20;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.mFilter, (int32_t)v20, v21, v22, v23, v24, v25, v26);
  }
  v27 = v4->fields.verts;
  if ( !v27 )
LABEL_153:
    sub_2213CDC(this, *(_QWORD *)&widgetCount);
  if ( v27->fields.size <= 64999 )
  {
    p_mIndices = &v4->fields.mIndices;
    mIndices = v4->fields.mIndices;
    v42 = 3 * (v6 >> 1);
    if ( mIndices )
      v43 = v42 != LODWORD(mIndices->max_length);
    else
      v43 = 1;
    p_mMesh = (UIDrawCall_o **)&v4->fields.mMesh;
    mMesh = (UnityEngine_Object_o *)v4->fields.mMesh;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&widgetCount);
    this = (UIDrawCall_o *)UnityEngine_Object__op_Equality(mMesh, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v46 = (UnityEngine_Mesh_o *)sub_2213CCC(UnityEngine_Mesh_TypeInfo);
      UnityEngine_Mesh___ctor(v46, 0);
      *p_mMesh = (UIDrawCall_o *)v46;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.mMesh, (int32_t)v46, v47, v48, v49, v50, v51, v52);
      this = *p_mMesh;
      if ( !*p_mMesh )
        goto LABEL_153;
      UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)this, 52, 0);
      v54 = (UnityEngine_Object_o *)v4->fields.mMesh;
      mMaterial = (UnityEngine_Object_o *)v4->fields.mMaterial;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53);
      this = (UIDrawCall_o *)UnityEngine_Object__op_Inequality(mMaterial, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (UIDrawCall_o *)v4->fields.mMaterial;
        if ( !this )
          goto LABEL_153;
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (UIDrawCall_o *)System_String__Concat_75651716((System_String_o *)StringLiteral_16555/*"[NGUI] "*/, name, 0);
        *(_QWORD *)&widgetCount = this;
      }
      else
      {
        *(_QWORD *)&widgetCount = StringLiteral_16556/*"[NGUI] Mesh"*/;
      }
      if ( !v54 )
        goto LABEL_153;
      UnityEngine_Object__set_name(v54, *(System_String_o **)&widgetCount, 0);
      this = *p_mMesh;
      if ( !*p_mMesh )
        goto LABEL_153;
      UnityEngine_Mesh__MarkDynamic((UnityEngine_Mesh_o *)this, 0);
      v43 = 1;
    }
    v57 = v4->fields.uvs;
    if ( !v57 )
      goto LABEL_153;
    buffer = v57->fields.buffer;
    if ( !buffer )
      goto LABEL_153;
    v59 = v4->fields.verts;
    if ( !v59 )
      goto LABEL_153;
    v60 = v59->fields.buffer;
    if ( !v60 )
      goto LABEL_153;
    max_length = buffer->max_length;
    if ( max_length != LODWORD(v60->max_length) )
      goto LABEL_85;
    v62 = v4->fields.cols;
    if ( !v62 )
      goto LABEL_153;
    v63 = v62->fields.buffer;
    if ( !v63 )
      goto LABEL_153;
    if ( LODWORD(v63->max_length) != max_length )
      goto LABEL_85;
    norms = v4->fields.norms;
    if ( !norms )
      goto LABEL_153;
    v65 = norms->fields.buffer;
    if ( v65 )
    {
      if ( LODWORD(v65->max_length) != max_length )
        goto LABEL_85;
    }
    tans = v4->fields.tans;
    if ( !tans )
      goto LABEL_153;
    v67 = tans->fields.buffer;
    if ( v67 )
    {
      if ( LODWORD(v67->max_length) != max_length )
        goto LABEL_85;
    }
    panel = v4->fields.panel;
    if ( !panel )
      goto LABEL_153;
    if ( panel->fields.renderQueue )
    {
      v69 = *p_mMesh;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&widgetCount);
      this = (UIDrawCall_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v69, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v59 = v4->fields.verts;
        if ( !v59 )
          goto LABEL_153;
LABEL_85:
        v4->fields.mTriangles = v59->fields.size >> 1;
LABEL_86:
        v70 = 1;
        goto LABEL_87;
      }
      this = *p_mMesh;
      if ( !*p_mMesh )
        goto LABEL_153;
      this = (UIDrawCall_o *)UnityEngine_Mesh__get_vertexCount((UnityEngine_Mesh_o *)this, 0);
      v59 = v4->fields.verts;
      if ( !v59 )
        goto LABEL_153;
      v80 = v59->fields.buffer;
      if ( !v80 )
        goto LABEL_153;
      v81 = v80->max_length;
      v4->fields.mTriangles = v59->fields.size >> 1;
      if ( (_DWORD)this != v81 )
        goto LABEL_86;
    }
    else
    {
      v4->fields.mTriangles = v59->fields.size >> 1;
    }
    v82 = v59->fields.buffer;
    if ( !v82 )
      goto LABEL_153;
    this = *p_mMesh;
    if ( SLODWORD(v82->max_length) < 65001 )
    {
      if ( !this )
        goto LABEL_153;
      this = (UIDrawCall_o *)UnityEngine_Mesh__get_vertexCount((UnityEngine_Mesh_o *)this, 0);
      v83 = v4->fields.verts;
      if ( !v83 )
        goto LABEL_153;
      v84 = v83->fields.buffer;
      if ( !v84 )
        goto LABEL_153;
      v85 = (int)this;
      this = *p_mMesh;
      if ( v85 != LODWORD(v84->max_length) )
      {
        if ( !this )
          goto LABEL_153;
        UnityEngine_Mesh__Clear((UnityEngine_Mesh_o *)this, 0);
        v83 = v4->fields.verts;
        if ( !v83 )
          goto LABEL_153;
        this = (UIDrawCall_o *)v4->fields.mMesh;
        v43 = 1;
      }
      if ( !this )
        goto LABEL_153;
      UnityEngine_Mesh__set_vertices((UnityEngine_Mesh_o *)this, v83->fields.buffer, 0);
      v86 = v4->fields.uvs;
      if ( !v86 )
        goto LABEL_153;
      this = (UIDrawCall_o *)v4->fields.mMesh;
      if ( !this )
        goto LABEL_153;
      UnityEngine_Mesh__set_uv((UnityEngine_Mesh_o *)this, v86->fields.buffer, 0);
      v87 = v4->fields.cols;
      if ( !v87 )
        goto LABEL_153;
      this = (UIDrawCall_o *)v4->fields.mMesh;
      if ( !this )
        goto LABEL_153;
      UnityEngine_Mesh__set_colors32((UnityEngine_Mesh_o *)this, v87->fields.buffer, 0);
      v88 = v4->fields.norms;
      if ( v88 )
      {
        this = *p_mMesh;
        if ( !*p_mMesh )
          goto LABEL_153;
        UnityEngine_Mesh__set_normals((UnityEngine_Mesh_o *)this, v88->fields.buffer, 0);
      }
      v89 = v4->fields.tans;
      if ( v89 )
      {
        this = *p_mMesh;
        if ( !*p_mMesh )
          goto LABEL_153;
        UnityEngine_Mesh__set_tangents((UnityEngine_Mesh_o *)this, v89->fields.buffer, 0);
        if ( !v43 )
        {
LABEL_137:
          if ( v4->fields.alwaysOnScreen )
          {
LABEL_140:
            this = *p_mFilter;
            if ( !*p_mFilter )
              goto LABEL_153;
            UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)this, (UnityEngine_Mesh_o *)*p_mMesh, 0);
            goto LABEL_142;
          }
LABEL_138:
          this = *p_mMesh;
          if ( !*p_mMesh )
            goto LABEL_153;
          UnityEngine_Mesh__RecalculateBounds((UnityEngine_Mesh_o *)this, 0);
          goto LABEL_140;
        }
        v70 = 0;
LABEL_135:
        v90 = UIDrawCall__GenerateCachedIndexBuffer(v78, v6, v42, v75);
        *p_mIndices = v90;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v4->fields.mIndices,
          (int32_t)v90,
          v91,
          v92,
          v93,
          v94,
          v95,
          v96);
        this = *p_mMesh;
        if ( !*p_mMesh )
          goto LABEL_153;
        UnityEngine_Mesh__set_triangles((UnityEngine_Mesh_o *)this, *p_mIndices, 0);
        if ( (v70 & 1) != 0 )
          goto LABEL_138;
        goto LABEL_137;
      }
      v70 = 0;
LABEL_134:
      if ( !v43 )
        goto LABEL_101;
      goto LABEL_135;
    }
    if ( !this )
      goto LABEL_153;
    this = (UIDrawCall_o *)UnityEngine_Mesh__get_vertexCount((UnityEngine_Mesh_o *)this, 0);
    v71 = v4->fields.verts;
    if ( !v71 )
      goto LABEL_153;
    v70 = 0;
    if ( (_DWORD)this == v71->fields.size )
    {
LABEL_90:
      v72 = *p_mMesh;
      this = (UIDrawCall_o *)BetterList_Vector3___ToArray(
                               v71,
                               (const MethodInfo_3E71E00 *)Method_BetterList_Vector3__ToArray__);
      if ( !v72 )
        goto LABEL_153;
      UnityEngine_Mesh__set_vertices((UnityEngine_Mesh_o *)v72, (UnityEngine_Vector3_array *)this, 0);
      this = (UIDrawCall_o *)v4->fields.uvs;
      if ( !this )
        goto LABEL_153;
      v73 = v4->fields.mMesh;
      this = (UIDrawCall_o *)BetterList_Vector2___ToArray(
                               (BetterList_Vector2__o *)this,
                               (const MethodInfo_3E712D0 *)Method_BetterList_Vector2__ToArray__);
      if ( !v73 )
        goto LABEL_153;
      UnityEngine_Mesh__set_uv(v73, (UnityEngine_Vector2_array *)this, 0);
      this = (UIDrawCall_o *)v4->fields.cols;
      if ( !this )
        goto LABEL_153;
      v74 = v4->fields.mMesh;
      this = (UIDrawCall_o *)BetterList_Color32___ToArray(
                               (BetterList_Color32__o *)this,
                               (const MethodInfo_3E6ECBC *)Method_BetterList_Color32__ToArray__);
      if ( !v74 )
        goto LABEL_153;
      UnityEngine_Mesh__set_colors32(v74, (UnityEngine_Color32_array *)this, 0);
      v76 = v4->fields.norms;
      if ( v76 )
      {
        v77 = *p_mMesh;
        this = (UIDrawCall_o *)BetterList_Vector3___ToArray(
                                 v76,
                                 (const MethodInfo_3E71E00 *)Method_BetterList_Vector3__ToArray__);
        if ( !v77 )
          goto LABEL_153;
        UnityEngine_Mesh__set_normals((UnityEngine_Mesh_o *)v77, (UnityEngine_Vector3_array *)this, 0);
      }
      v78 = (UIDrawCall_o *)v4->fields.tans;
      if ( v78 )
      {
        v79 = *p_mMesh;
        this = (UIDrawCall_o *)BetterList_Vector4___ToArray(
                                 (BetterList_Vector4__o *)v78,
                                 (const MethodInfo_3E72910 *)Method_BetterList_Vector4__ToArray__);
        if ( !v79 )
          goto LABEL_153;
        UnityEngine_Mesh__set_tangents((UnityEngine_Mesh_o *)v79, (UnityEngine_Vector4_array *)this, 0);
        if ( !v43 )
        {
LABEL_101:
          if ( (v70 & 1) != 0 )
            goto LABEL_138;
          goto LABEL_137;
        }
        goto LABEL_135;
      }
      goto LABEL_134;
    }
LABEL_87:
    this = *p_mMesh;
    if ( !*p_mMesh )
      goto LABEL_153;
    UnityEngine_Mesh__Clear((UnityEngine_Mesh_o *)this, 0);
    v71 = v4->fields.verts;
    if ( !v71 )
      goto LABEL_153;
    v43 = 1;
    goto LABEL_90;
  }
  this = (UIDrawCall_o *)v4->fields.mFilter;
  v4->fields.mTriangles = 0;
  if ( !this )
    goto LABEL_153;
  v29 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  this = (UIDrawCall_o *)UnityEngine_Object__op_Inequality(v29, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_29;
  this = *p_mFilter;
  if ( !*p_mFilter )
    goto LABEL_153;
  this = (UIDrawCall_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0);
  if ( !this )
    goto LABEL_153;
  UnityEngine_Mesh__Clear((UnityEngine_Mesh_o *)this, 0);
LABEL_29:
  v30 = v4->fields.verts;
  if ( !v30 )
    goto LABEL_153;
  v31 = System_Int32__ToString((int)v30 + 24, 0);
  v33 = (Il2CppObject *)System_String__Concat_75651716((System_String_o *)StringLiteral_15143/*"Too many vertices on one panel: "*/, v31, 0);
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v32);
  UnityEngine_Debug__LogError(v33, 0);
LABEL_142:
  p_mRenderer = (UnityEngine_Object_o **)&v4->fields.mRenderer;
  mRenderer = (UnityEngine_Object_o *)v4->fields.mRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
  if ( UnityEngine_Object__op_Equality(mRenderer, 0, 0) )
  {
    this = (UIDrawCall_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
    if ( !this )
      goto LABEL_153;
    v100 = UnityEngine_GameObject__GetComponent_object_(
             (UnityEngine_GameObject_o *)this,
             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    *p_mRenderer = (UnityEngine_Object_o *)v100;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v4->fields.mRenderer,
      (int32_t)v100,
      v101,
      v102,
      v103,
      v104,
      v105,
      v106);
  }
  v107 = *p_mRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v99);
  if ( UnityEngine_Object__op_Equality(v107, 0, 0) )
  {
    this = (UIDrawCall_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
    if ( !this )
      goto LABEL_153;
    v109 = UnityEngine_GameObject__AddComponent_object_(
             (UnityEngine_GameObject_o *)this,
             (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_MeshRenderer___);
    *p_mRenderer = (UnityEngine_Object_o *)v109;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v4->fields.mRenderer,
      (int32_t)v109,
      v110,
      v111,
      v112,
      v113,
      v114,
      v115);
  }
  UIDrawCall__UpdateMaterials(v4, v108);
LABEL_43:
  this = (UIDrawCall_o *)v4->fields.verts;
  if ( !this )
    goto LABEL_153;
  BetterList_Vector3___Clear(
    (BetterList_Vector3__o *)this,
    (const MethodInfo_3E716BC *)Method_BetterList_Vector3__Clear__);
  this = (UIDrawCall_o *)v4->fields.uvs;
  if ( !this )
    goto LABEL_153;
  BetterList_Vector2___Clear(
    (BetterList_Vector2__o *)this,
    (const MethodInfo_3E70CA0 *)Method_BetterList_Vector2__Clear__);
  this = (UIDrawCall_o *)v4->fields.cols;
  if ( !this )
    goto LABEL_153;
  BetterList_Color32___Clear(
    (BetterList_Color32__o *)this,
    (const MethodInfo_3E6E708 *)Method_BetterList_Color32__Clear__);
  this = (UIDrawCall_o *)v4->fields.norms;
  if ( !this )
    goto LABEL_153;
  BetterList_Vector3___Clear(
    (BetterList_Vector3__o *)this,
    (const MethodInfo_3E716BC *)Method_BetterList_Vector3__Clear__);
  this = (UIDrawCall_o *)v4->fields.tans;
  if ( !this )
    goto LABEL_153;
  BetterList_Vector4___Clear(
    (BetterList_Vector4__o *)this,
    (const MethodInfo_3E721F0 *)Method_BetterList_Vector4__Clear__);
}


void UIDrawCall__UpdateMaterials(UIDrawCall_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panel; // x20
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *mRenderer; // x20
  __int64 clipCount; // x0
  UnityEngine_Material_o *sharedMaterial; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *mMaterial; // x20
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Renderer_o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct UnityEngine_Material_o *v18; // x22
  __int64 v19; // x21
  __int64 v20; // x1
  UnityEngine_Object_o *mDynamicMat; // x20
  int32_t mClipCount; // w20
  struct UIPanel_o *v23; // x8
  UnityEngine_Material_o *v24; // x0
  __int64 v25; // x1
  UnityEngine_Object_o *v26; // x20
  UnityEngine_Object_o *v27; // x21
  UnityEngine_Renderer_o *v28; // x20
  struct UnityEngine_Material_o *v29; // x19
  UnityEngine_Material_array *v30; // x21
  __int64 v31; // x0

  if ( (byte_5975187 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Material___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975187 = 1;
  }
  panel = (UnityEngine_Object_o *)this->fields.panel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(panel, 0, 0) )
  {
    if ( this->fields.mUseOriginalMaterial )
    {
      mRenderer = (UnityEngine_Object_o *)this->fields.mRenderer;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      if ( UnityEngine_Object__op_Inequality(mRenderer, 0, 0) )
      {
        clipCount = (__int64)this->fields.mRenderer;
        if ( !clipCount )
          goto LABEL_38;
        sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)clipCount, 0);
        mMaterial = (UnityEngine_Object_o *)this->fields.mMaterial;
        v10 = (UnityEngine_Object_o *)sharedMaterial;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        if ( UnityEngine_Object__op_Inequality(v10, mMaterial, 0) )
        {
          v11 = (UnityEngine_Renderer_o *)this->fields.mRenderer;
          clipCount = sub_2213B20(UnityEngine_Material___TypeInfo, 1);
          if ( clipCount )
          {
            v18 = this->fields.mMaterial;
            v19 = clipCount;
            if ( v18 )
            {
              clipCount = sub_2213BB4(this->fields.mMaterial, *(_QWORD *)(*(_QWORD *)clipCount + 64LL));
              if ( !clipCount )
              {
                v31 = sub_2213D00(0, v20);
                sub_2213BA0(v31, 0);
              }
            }
            if ( !*(_DWORD *)(v19 + 24) )
              sub_2213CE4(clipCount);
            *(_QWORD *)(v19 + 32) = v18;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 32), (int32_t)v18, v12, v13, v14, v15, v16, v17);
            if ( v11 )
            {
              UnityEngine_Renderer__set_sharedMaterials(v11, (UnityEngine_Material_array *)v19, 0);
              clipCount = (__int64)this->fields.mMaterial;
              if ( clipCount )
              {
                UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)clipCount, this->fields.mRenderQueue, 0);
                return;
              }
            }
          }
LABEL_38:
          sub_2213CDC(clipCount, v4);
        }
      }
    }
    else
    {
      if ( this->fields.mRebuildMat )
        goto LABEL_36;
      mDynamicMat = (UnityEngine_Object_o *)this->fields.mDynamicMat;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      if ( UnityEngine_Object__op_Equality(mDynamicMat, 0, 0) )
        goto LABEL_36;
      clipCount = (__int64)this->fields.panel;
      if ( !clipCount )
        goto LABEL_38;
      mClipCount = this->fields.mClipCount;
      clipCount = UIPanel__get_clipCount((UIPanel_o *)clipCount, 0);
      if ( mClipCount != (_DWORD)clipCount )
        goto LABEL_36;
      v23 = this->fields.panel;
      if ( !v23 )
        goto LABEL_38;
      if ( this->fields.mTextureClip != (v23->fields.mClipping == 1) )
      {
LABEL_36:
        UIDrawCall__RebuildMaterial(this, v4);
        this->fields.mRebuildMat = 0;
      }
      else
      {
        clipCount = (__int64)this->fields.mRenderer;
        if ( !clipCount )
          goto LABEL_38;
        v24 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)clipCount, 0);
        v26 = (UnityEngine_Object_o *)this->fields.mDynamicMat;
        v27 = (UnityEngine_Object_o *)v24;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
        if ( UnityEngine_Object__op_Inequality(v27, v26, 0) )
        {
          v28 = (UnityEngine_Renderer_o *)this->fields.mRenderer;
          clipCount = sub_2213B20(UnityEngine_Material___TypeInfo, 1);
          if ( !clipCount )
            goto LABEL_38;
          v29 = this->fields.mDynamicMat;
          v30 = (UnityEngine_Material_array *)clipCount;
          sub_1FFE8F8(clipCount, v29);
          clipCount = sub_1FFE2C4(v30, 0, v29);
          if ( !v28 )
            goto LABEL_38;
          UnityEngine_Renderer__set_sharedMaterials(v28, v30, 0);
        }
      }
    }
  }
}


BetterList_UIDrawCall__o *UIDrawCall__get_activeList(const MethodInfo *method)
{
  __int64 v1; // x1
  UIDrawCall_c *v2; // x0

  if ( (byte_5975178 & 1) == 0 )
  {
    sub_2213A60(&UIDrawCall_TypeInfo);
    byte_5975178 = 1;
  }
  v2 = UIDrawCall_TypeInfo;
  if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, v1);
    v2 = UIDrawCall_TypeInfo;
  }
  return v2->static_fields->mActiveList;
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
  __int64 v9; // x8
  UnityEngine_Bounds_o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5975183 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975183 = 1;
  }
  mMesh = (UnityEngine_Object_o *)this->fields.mMesh;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  result = (UnityEngine_Bounds_o *)UnityEngine_Object__op_Inequality(mMesh, 0, 0);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v8 = this->fields.mMesh;
    if ( !v8 )
      sub_2213CDC(0, v7);
    result = UnityEngine_Mesh__get_bounds(&v10, v8, 0);
    v9 = *(_QWORD *)&v10.fields.m_Extents.fields.y;
    *(_OWORD *)&retstr->fields.m_Center.fields.x = *(_OWORD *)&v10.fields.m_Center.fields.x;
    *(_QWORD *)&retstr->fields.m_Extents.fields.y = v9;
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_597517E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597517E = 1;
  }
  mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mTrans, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    this->fields.mTrans = transform;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_597517D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597517D = 1;
  }
  mDynamicMat = (UnityEngine_Object_o *)this->fields.mDynamicMat;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(mDynamicMat, 0, 0) )
    return this->fields.mRenderQueue;
  v5 = this->fields.mDynamicMat;
  if ( !v5 )
    sub_2213CDC(0, v4);
  return UnityEngine_Material__get_renderQueue(v5, 0);
}


BetterList_UIDrawCall__o *UIDrawCall__get_inactiveList(const MethodInfo *method)
{
  __int64 v1; // x1
  UIDrawCall_c *v2; // x0

  if ( (byte_5975179 & 1) == 0 )
  {
    sub_2213A60(&UIDrawCall_TypeInfo);
    byte_5975179 = 1;
  }
  v2 = UIDrawCall_TypeInfo;
  if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, v1);
    v2 = UIDrawCall_TypeInfo;
  }
  return v2->static_fields->mInactiveList;
}


bool UIDrawCall__get_isClipped(UIDrawCall_o *this, const MethodInfo *method)
{
  return this->fields.mClipCount != 0;
}


BetterList_UIDrawCall__o *UIDrawCall__get_list(const MethodInfo *method)
{
  __int64 v1; // x1
  UIDrawCall_c *v2; // x0

  if ( (byte_5975177 & 1) == 0 )
  {
    sub_2213A60(&UIDrawCall_TypeInfo);
    byte_5975177 = 1;
  }
  v2 = UIDrawCall_TypeInfo;
  if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, v1);
    v2 = UIDrawCall_TypeInfo;
  }
  return v2->static_fields->mActiveList;
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

  if ( (byte_597517B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597517B = 1;
  }
  mRenderer = (UnityEngine_Object_o *)this->fields.mRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(mRenderer, 0, 0) )
    return 0;
  v5 = (UnityEngine_Renderer_o *)this->fields.mRenderer;
  if ( !v5 )
    sub_2213CDC(0, v4);
  return UnityEngine_Renderer__get_sortingOrder(v5, 0);
}


int32_t UIDrawCall__get_triangles(UIDrawCall_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mMesh; // x20

  if ( (byte_5975182 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975182 = 1;
  }
  mMesh = (UnityEngine_Object_o *)this->fields.mMesh;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mMesh, 0, 0) )
    return this->fields.mTriangles;
  else
    return 0;
}


void UIDrawCall__set_baseMaterial(UIDrawCall_o *this, UnityEngine_Material_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mMaterial; // x22
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_597517F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597517F = 1;
  }
  mMaterial = (UnityEngine_Object_o *)this->fields.mMaterial;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Inequality(mMaterial, (UnityEngine_Object_o *)value, 0) )
  {
    this->fields.mMaterial = value;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mMaterial, (int32_t)value, v6, v7, v8, v9, v10, v11);
    this->fields.mRebuildMat = 1;
  }
}


void UIDrawCall__set_mainTexture(UIDrawCall_o *this, UnityEngine_Texture_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  UnityEngine_Object_o *mDynamicMat; // x21
  __int64 v12; // x1
  UnityEngine_Material_o *v13; // x0

  if ( (byte_5975180 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975180 = 1;
  }
  this->fields.mTexture = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mTexture,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  mDynamicMat = (UnityEngine_Object_o *)this->fields.mDynamicMat;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(mDynamicMat, 0, 0) )
  {
    v13 = this->fields.mDynamicMat;
    if ( !v13 )
      sub_2213CDC(0, v12);
    UnityEngine_Material__set_mainTexture(v13, value, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIDrawCall__set_renderQueue(UIDrawCall_o *this, int32_t value, const MethodInfo *method)
{
  UnityEngine_Object_o *mDynamicMat; // x21
  __int64 v6; // x1
  UnityEngine_Material_o *v7; // x0

  if ( (byte_597517A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597517A = 1;
  }
  if ( this->fields.mRenderQueue != value )
  {
    mDynamicMat = (UnityEngine_Object_o *)this->fields.mDynamicMat;
    this->fields.mRenderQueue = value;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&value);
    if ( UnityEngine_Object__op_Inequality(mDynamicMat, 0, 0) )
    {
      v7 = this->fields.mDynamicMat;
      if ( !v7 )
        sub_2213CDC(0, v6);
      UnityEngine_Material__set_renderQueue(v7, value, 0);
    }
  }
}


void UIDrawCall__set_shader(UIDrawCall_o *this, UnityEngine_Shader_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mShader; // x22
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5975181 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975181 = 1;
  }
  mShader = (UnityEngine_Object_o *)this->fields.mShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Inequality(mShader, (UnityEngine_Object_o *)value, 0) )
  {
    this->fields.mShader = value;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mShader, (int32_t)value, v6, v7, v8, v9, v10, v11);
    this->fields.mRebuildMat = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void UIDrawCall__set_sortingOrder(UIDrawCall_o *this, int32_t value, const MethodInfo *method)
{
  UnityEngine_Object_o *mRenderer; // x21
  __int64 v6; // x1
  UnityEngine_Renderer_o *v7; // x0

  if ( (byte_597517C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597517C = 1;
  }
  mRenderer = (UnityEngine_Object_o *)this->fields.mRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&value);
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
    sub_2213CDC(v7, v6);
  }
}


void UIDrawCall_OnRenderCallback___ctor(
        UIDrawCall_OnRenderCallback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_201743C;
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
        v15 = sub_2213B30(method);
        v16 = sub_22140B4(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_2017534;
          else
            v13 = sub_20174F8;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_2017474;
        }
        else
        {
          v13 = sub_201744C;
        }
      }
      else
      {
        v13 = sub_2017420;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_20173D8;
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
  return sub_2213A14(this, &v6, callback, object);
}


void UIDrawCall_OnRenderCallback__EndInvoke(
        UIDrawCall_OnRenderCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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