void __fastcall BattleChangeSpecialShader___ctor(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FD466 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_Renderer__TypeInfo, v6);
    byte_40FD466 = 1;
  }
  *(&this->fields.isCheckUniqueId + 4) = 1;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_Renderer__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetRendererList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleChangeSpecialShader__ChangeShader(BattleChangeSpecialShader_o *this, const MethodInfo *method)
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
  UnityEngine_Component_o *v13; // x20
  ServantAssetLoadManager_o *Instance; // x0
  UnityEngine_GameObject_o *ShadowEffect; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x22
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Transform_o *v19; // x21
  struct System_Collections_Generic_List_Renderer__o *targetRendererList; // x21
  unsigned __int64 v21; // x22
  UnityEngine_Renderer_o *v22; // x0
  __int64 v23; // x10
  UnityEngine_Material_o *material; // x21
  float v25; // s4
  float v26; // s5
  float v27; // s6
  float v28; // s7
  UnityEngine_Shader_o *v29; // x20
  UIAtlas_o *UIAtlas; // x0
  struct System_Collections_Generic_List_Renderer__o *v31; // x22
  UnityEngine_Texture_o *v32; // x21
  unsigned __int64 v33; // x24
  UnityEngine_Renderer_o *v34; // x22
  __int64 v35; // x10
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v40; // s4
  float v41; // s5
  float v42; // s6
  float v43; // s7
  __int64 v44; // x9
  UnityEngine_Material_array *materials; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  int max_length; // w8
  UnityEngine_Material_array *v49; // x22
  unsigned int v50; // w25
  Il2CppClass **v51; // x8
  UnityEngine_Material_o *v52; // x23
  BattleChangeSpecialShader_o *v53; // x0
  const MethodInfo *v54; // x1
  UnityEngine_Color_o v55; // [xsp+0h] [xbp-90h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FD464 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer__get_Item__, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_B16FFC(&UnityEngine_SkinnedMeshRenderer_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_15891, v8);
    sub_B16FFC(&StringLiteral_15875, v9);
    sub_B16FFC(&StringLiteral_4499, v10);
    sub_B16FFC(&StringLiteral_12773, v11);
    sub_B16FFC(&StringLiteral_15853, v12);
    byte_40FD464 = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  v13 = (UnityEngine_Component_o *)BattleChangeSpecialShader__GetModelBattleActor(this, method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v13, 0LL, 0LL) )
  {
    if ( !v13 )
      goto LABEL_49;
    if ( BattleActorControl__isShadowServant((BattleActorControl_o *)v13, 0LL) )
    {
      if ( this->fields.isCreateShadowAura )
      {
        Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !Instance )
          goto LABEL_49;
        ShadowEffect = ServantAssetLoadManager__createShadowEffect(Instance, 0, 0LL);
        transform = UnityEngine_Component__get_transform(v13, 0LL);
        NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(
                                                 transform,
                                                 this->fields.shadowAuraNodeName,
                                                 0,
                                                 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(NodeFromName, 0LL, 0LL) )
          NodeFromName = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !ShadowEffect )
          goto LABEL_49;
        v18 = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        if ( !v18 )
          goto LABEL_49;
        v19 = v18;
        UnityEngine_Transform__SetParent(v18, (UnityEngine_Transform_o *)NodeFromName, 0LL);
        v57.fields.x = 0.0;
        v57.fields.y = 0.0;
        v57.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(v19, v57, 0LL);
        one = UnityEngine_Vector3__get_one(0LL);
        UnityEngine_Transform__set_localScale(v19, one, 0LL);
      }
      targetRendererList = this->fields.targetRendererList;
      if ( !targetRendererList )
        goto LABEL_49;
      v21 = 0LL;
      while ( (__int64)v21 < targetRendererList->fields._size )
      {
        if ( v21 >= (unsigned int)targetRendererList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v22 = targetRendererList->fields._items->m_Items[v21];
        if ( v22 )
        {
          v23 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v22->klass->_2.bitflags2 + 1) >= (unsigned int)v23
            && (UnityEngine_SkinnedMeshRenderer_c *)v22->klass->_2.typeHierarchy[v23 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
          {
            material = UnityEngine_Renderer__get_material(v22, 0LL);
            v59.fields.r = 0.05;
            v59.fields.g = 0.05;
            v59.fields.b = 0.05;
            v59.fields.a = 1.0;
            *(_QWORD *)&v55.fields.r = 0LL;
            *(_QWORD *)&v55.fields.b = 0LL;
            UnityEngine_Color___ctor(v59, v25, v26, v27, v28, (const MethodInfo *)&v55);
            if ( !material )
              goto LABEL_49;
            UnityEngine_Material__set_color(material, v55, 0LL);
          }
        }
        targetRendererList = this->fields.targetRendererList;
        ++v21;
        if ( !targetRendererList )
LABEL_49:
          sub_B170D4();
      }
    }
    if ( BattleActorControl__isChocoServant((BattleActorControl_o *)v13, 0LL) )
    {
      v29 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4499, 0LL);
      UIAtlas = UnityEngine_Resources__Load_UIAtlas_(
                  (System_String_o *)StringLiteral_12773,
                  (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_Texture2D___);
      v31 = this->fields.targetRendererList;
      if ( !v31 )
        goto LABEL_49;
      v32 = (UnityEngine_Texture_o *)UIAtlas;
      v33 = 0LL;
      while ( 1 )
      {
        if ( (__int64)v33 >= v31->fields._size )
          return;
        if ( v33 >= (unsigned int)v31->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v34 = v31->fields._items->m_Items[v33];
        if ( v34 )
        {
          v35 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v34->klass->_2.bitflags2 + 1) >= (unsigned int)v35
            && (UnityEngine_SkinnedMeshRenderer_c *)v34->klass->_2.typeHierarchy[v35 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
          {
            white = UnityEngine_Color__get_white(0LL);
            r = white.fields.r;
            g = white.fields.g;
            b = white.fields.b;
            a = white.fields.a;
            white.fields.r = 0.0;
            white.fields.g = 0.0;
            white.fields.b = 0.0;
            white.fields.a = 0.0;
            UnityEngine_Color___ctor(white, v40, v41, v42, v43, &methoda);
            v44 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v34->klass->_2.bitflags2 + 1) < (unsigned int)v44
              || (UnityEngine_SkinnedMeshRenderer_c *)v34->klass->_2.typeHierarchy[v44 - 1] != UnityEngine_SkinnedMeshRenderer_TypeInfo )
            {
              v53 = (BattleChangeSpecialShader_o *)sub_B173C8(v34);
              BattleChangeSpecialShader__GetModelBattleActor(v53, v54);
              return;
            }
            materials = UnityEngine_Renderer__get_materials(v34, 0LL);
            if ( !materials )
              goto LABEL_49;
            max_length = materials->max_length;
            v49 = materials;
            if ( max_length >= 1 )
            {
              v50 = 0;
              do
              {
                if ( v50 >= max_length )
                {
                  sub_B17100(materials, v46, v47);
                  sub_B170A0();
                }
                v51 = &v49->obj.klass + (int)v50;
                v52 = (UnityEngine_Material_o *)v51[4];
                if ( !v52 )
                  goto LABEL_49;
                UnityEngine_Material__set_shader((UnityEngine_Material_o *)v51[4], v29, 0LL);
                v61.fields.r = r;
                v61.fields.g = g;
                v61.fields.b = b;
                v61.fields.a = a;
                UnityEngine_Material__SetColor(v52, (System_String_o *)StringLiteral_15891, v61, 0LL);
                *(_QWORD *)&v62.fields.r = methoda.methodPointer;
                *(_QWORD *)&v62.fields.b = methoda.invoker_method;
                UnityEngine_Material__SetColor(v52, (System_String_o *)StringLiteral_15853, v62, 0LL);
                UnityEngine_Material__SetTexture(v52, (System_String_o *)StringLiteral_15875, v32, 0LL);
                max_length = v49->max_length;
              }
              while ( (int)++v50 < max_length );
            }
          }
        }
        v31 = this->fields.targetRendererList;
        ++v33;
        if ( !v31 )
          goto LABEL_49;
      }
    }
  }
}


BattleActorControl_o *__fastcall BattleChangeSpecialShader__GetModelBattleActor(
        BattleChangeSpecialShader_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  UnityEngine_GameObject_o *webView; // x0
  BattleActorControl_o *v8; // x21
  System_Object_array *ObjectsOfType_object; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int max_length; // w8
  System_Object_array *v13; // x20
  unsigned int v14; // w22
  Il2CppClass **v15; // x8

  if ( (byte_40FD465 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_B16FFC(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v5);
    byte_40FD465 = 1;
  }
  if ( !this->fields.isNPEffect )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_19DE080 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    if ( ObjectsOfType_object )
    {
      max_length = ObjectsOfType_object->max_length;
      v13 = ObjectsOfType_object;
      if ( max_length < 1 )
        return 0LL;
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
        {
          sub_B17100(ObjectsOfType_object, v10, v11);
          sub_B170A0();
        }
        v15 = &v13->obj.klass + (int)v14;
        v8 = (BattleActorControl_o *)v15[4];
        if ( !v8 )
          break;
        ObjectsOfType_object = (System_Object_array *)BattleActorControl__getServantId(
                                                        (BattleActorControl_o *)v15[4],
                                                        0LL);
        if ( (_DWORD)ObjectsOfType_object == *(_DWORD *)&this->fields.isCheckUniqueId
          && (!*(&this->fields.isCheckUniqueId + 4) || v8->fields.uniqueID == this->fields.targetId) )
        {
          return v8;
        }
        max_length = v13->max_length;
        if ( (int)++v14 >= max_length )
          return 0LL;
      }
    }
LABEL_21:
    sub_B170D4();
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  webView = (UnityEngine_GameObject_o *)Instance->fields.webView;
  if ( !webView )
    goto LABEL_21;
  return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   webView,
                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
}


void __fastcall BattleChangeSpecialShader__SetTargetId(
        BattleChangeSpecialShader_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  this->fields.targetId = uniqueId;
}


void __fastcall BattleChangeSpecialShader__Start(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  if ( this->fields.isNPEffect )
    BattleChangeSpecialShader__ChangeShader(this, method);
}