void __fastcall BattleChangeSpecialShader___ctor(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20

  if ( (byte_42E5370 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_Renderer__TypeInfo, v5, v6, v7);
    byte_42E5370 = 1;
  }
  *(&this->fields.isCheckUniqueId + 4) = 1;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v8;
  sub_B5D560(&this->fields.targetRendererList);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleChangeSpecialShader__ChangeShader(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  UnityEngine_Object_o *v35; // x20
  ServantAssetLoadManager_o *isShadowServant; // x0
  __int64 v37; // x1
  UnityEngine_GameObject_o *ShadowEffect; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x22
  UnityEngine_Transform_o *v41; // x21
  struct System_Collections_Generic_List_Renderer__o *targetRendererList; // x21
  unsigned __int64 v43; // x22
  __int64 v44; // x10
  UnityEngine_Material_o *material; // x21
  float v46; // s4
  float v47; // s5
  float v48; // s6
  float v49; // s7
  UnityEngine_Shader_o *v50; // x20
  struct System_Collections_Generic_List_Renderer__o *v51; // x22
  UnityEngine_Texture_o *v52; // x21
  unsigned __int64 v53; // x24
  UnityEngine_Renderer_o *v54; // x22
  __int64 v55; // x10
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v60; // s4
  float v61; // s5
  float v62; // s6
  float v63; // s7
  __int64 v64; // x9
  int svtmaster; // w8
  UnityEngine_Renderer_o *v66; // x22
  unsigned int v67; // w25
  UnityEngine_Renderer_c **v68; // x8
  UnityEngine_Material_o *v69; // x23
  __int64 v70; // x0
  BattleChangeSpecialShader_o *v71; // x0
  const MethodInfo *v72; // x1
  UnityEngine_Color_o v73; // [xsp+0h] [xbp-90h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v79; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E536E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer__get_Item__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_Texture2D___, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_SkinnedMeshRenderer_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_16146/*"_Color"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_16130/*"_ChocoTex"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_4588/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_12985/*"Shaders/ChocoMap"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_16107/*"_AddColor"*/, v32, v33, v34);
    byte_42E536E = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  v35 = (UnityEngine_Object_o *)BattleChangeSpecialShader__GetModelBattleActor(this, method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  isShadowServant = (ServantAssetLoadManager_o *)UnityEngine_Object__op_Equality(v35, 0LL, 0LL);
  if ( ((unsigned __int8)isShadowServant & 1) == 0 )
  {
    if ( !v35 )
      goto LABEL_49;
    isShadowServant = (ServantAssetLoadManager_o *)BattleActorControl__isShadowServant((BattleActorControl_o *)v35, 0LL);
    if ( ((unsigned __int8)isShadowServant & 1) != 0 )
    {
      if ( this->fields.isCreateShadowAura )
      {
        isShadowServant = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !isShadowServant )
          goto LABEL_49;
        ShadowEffect = ServantAssetLoadManager__createShadowEffect(isShadowServant, 0, 0LL);
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v35, 0LL);
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
        isShadowServant = (ServantAssetLoadManager_o *)UnityEngine_Object__op_Equality(NodeFromName, 0LL, 0LL);
        if ( ((unsigned __int8)isShadowServant & 1) != 0 )
        {
          isShadowServant = (ServantAssetLoadManager_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          NodeFromName = (UnityEngine_Object_o *)isShadowServant;
        }
        if ( !ShadowEffect )
          goto LABEL_49;
        isShadowServant = (ServantAssetLoadManager_o *)UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        if ( !isShadowServant )
          goto LABEL_49;
        v41 = (UnityEngine_Transform_o *)isShadowServant;
        UnityEngine_Transform__SetParent(
          (UnityEngine_Transform_o *)isShadowServant,
          (UnityEngine_Transform_o *)NodeFromName,
          0LL);
        v75.fields.x = 0.0;
        v75.fields.y = 0.0;
        v75.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(v41, v75, 0LL);
        one = UnityEngine_Vector3__get_one(0LL);
        UnityEngine_Transform__set_localScale(v41, one, 0LL);
      }
      targetRendererList = this->fields.targetRendererList;
      if ( !targetRendererList )
        goto LABEL_49;
      v43 = 0LL;
      while ( (__int64)v43 < targetRendererList->fields._size )
      {
        if ( v43 >= (unsigned int)targetRendererList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        isShadowServant = (ServantAssetLoadManager_o *)targetRendererList->fields._items->m_Items[v43];
        if ( isShadowServant )
        {
          v44 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
          if ( *(&isShadowServant->klass->_2.bitflags2 + 1) >= (unsigned int)v44
            && (UnityEngine_SkinnedMeshRenderer_c *)isShadowServant->klass->_2.typeHierarchy[v44 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
          {
            material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)isShadowServant, 0LL);
            v77.fields.r = 0.05;
            v77.fields.g = 0.05;
            v77.fields.b = 0.05;
            v77.fields.a = 1.0;
            *(_QWORD *)&v73.fields.r = 0LL;
            *(_QWORD *)&v73.fields.b = 0LL;
            UnityEngine_Color___ctor(v77, v46, v47, v48, v49, (const MethodInfo *)&v73);
            if ( !material )
              goto LABEL_49;
            UnityEngine_Material__set_color(material, v73, 0LL);
          }
        }
        targetRendererList = this->fields.targetRendererList;
        ++v43;
        if ( !targetRendererList )
LABEL_49:
          sub_B5D69C(isShadowServant, v37);
      }
    }
    if ( BattleActorControl__isChocoServant((BattleActorControl_o *)v35, 0LL) )
    {
      v50 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4588/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
      isShadowServant = (ServantAssetLoadManager_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                       (System_String_o *)StringLiteral_12985/*"Shaders/ChocoMap"*/,
                                                       (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_Texture2D___);
      v51 = this->fields.targetRendererList;
      if ( !v51 )
        goto LABEL_49;
      v52 = (UnityEngine_Texture_o *)isShadowServant;
      v53 = 0LL;
      while ( 1 )
      {
        if ( (__int64)v53 >= v51->fields._size )
          return;
        if ( v53 >= (unsigned int)v51->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v54 = v51->fields._items->m_Items[v53];
        if ( v54 )
        {
          v55 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v54->klass->_2.bitflags2 + 1) >= (unsigned int)v55
            && (UnityEngine_SkinnedMeshRenderer_c *)v54->klass->_2.typeHierarchy[v55 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
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
            UnityEngine_Color___ctor(white, v60, v61, v62, v63, &methoda);
            v64 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v54->klass->_2.bitflags2 + 1) < (unsigned int)v64
              || (UnityEngine_SkinnedMeshRenderer_c *)v54->klass->_2.typeHierarchy[v64 - 1] != UnityEngine_SkinnedMeshRenderer_TypeInfo )
            {
              v71 = (BattleChangeSpecialShader_o *)sub_B5D990(v54);
              BattleChangeSpecialShader__GetModelBattleActor(v71, v72);
              return;
            }
            isShadowServant = (ServantAssetLoadManager_o *)UnityEngine_Renderer__get_materials(v54, 0LL);
            if ( !isShadowServant )
              goto LABEL_49;
            svtmaster = (int)isShadowServant->fields.svtmaster;
            v66 = (UnityEngine_Renderer_o *)isShadowServant;
            if ( svtmaster >= 1 )
            {
              v67 = 0;
              do
              {
                if ( v67 >= svtmaster )
                {
                  v70 = sub_B5D6C8(isShadowServant);
                  sub_B5D668(v70, 0LL);
                }
                v68 = &v66->klass + (int)v67;
                v69 = (UnityEngine_Material_o *)v68[4];
                if ( !v69 )
                  goto LABEL_49;
                UnityEngine_Material__set_shader((UnityEngine_Material_o *)v68[4], v50, 0LL);
                v79.fields.r = r;
                v79.fields.g = g;
                v79.fields.b = b;
                v79.fields.a = a;
                UnityEngine_Material__SetColor(v69, (System_String_o *)StringLiteral_16146/*"_Color"*/, v79, 0LL);
                *(_QWORD *)&v80.fields.r = methoda.methodPointer;
                *(_QWORD *)&v80.fields.b = methoda.invoker_method;
                UnityEngine_Material__SetColor(v69, (System_String_o *)StringLiteral_16107/*"_AddColor"*/, v80, 0LL);
                UnityEngine_Material__SetTexture(v69, (System_String_o *)StringLiteral_16130/*"_ChocoTex"*/, v52, 0LL);
                svtmaster = (int)v66[1].klass;
              }
              while ( (int)++v67 < svtmaster );
            }
          }
        }
        v51 = this->fields.targetRendererList;
        ++v53;
        if ( !v51 )
          goto LABEL_49;
      }
    }
  }
}


BattleActorControl_o *__fastcall BattleChangeSpecialShader__GetModelBattleActor(
        BattleChangeSpecialShader_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  void *ObjectsOfType_object; // x0
  __int64 v15; // x1
  BattleActorControl_o *v16; // x21
  int v17; // w8
  _DWORD *v18; // x20
  unsigned int v19; // w22
  char *v20; // x8
  __int64 v22; // x0

  if ( (byte_42E536F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v11, v12, v13);
    byte_42E536F = 1;
  }
  if ( !this->fields.isNPEffect )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_1E6614C *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    if ( ObjectsOfType_object )
    {
      v17 = *((_DWORD *)ObjectsOfType_object + 6);
      v18 = ObjectsOfType_object;
      if ( v17 < 1 )
        return 0LL;
      v19 = 0;
      while ( 1 )
      {
        if ( v19 >= v17 )
        {
          v22 = sub_B5D6C8(ObjectsOfType_object);
          sub_B5D668(v22, 0LL);
        }
        v20 = (char *)&v18[2 * v19];
        v16 = (BattleActorControl_o *)*((_QWORD *)v20 + 4);
        if ( !v16 )
          break;
        ObjectsOfType_object = (void *)BattleActorControl__getServantId(*((BattleActorControl_o **)v20 + 4), 0LL);
        if ( (_DWORD)ObjectsOfType_object == *(_DWORD *)&this->fields.isCheckUniqueId
          && (!*(&this->fields.isCheckUniqueId + 4) || v16->fields.uniqueID == this->fields.targetId) )
        {
          return v16;
        }
        v17 = v18[6];
        if ( (int)++v19 >= v17 )
          return 0LL;
      }
    }
LABEL_21:
    sub_B5D69C(ObjectsOfType_object, v15);
  }
  ObjectsOfType_object = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !ObjectsOfType_object )
    goto LABEL_21;
  ObjectsOfType_object = (void *)*((_QWORD *)ObjectsOfType_object + 11);
  if ( !ObjectsOfType_object )
    goto LABEL_21;
  return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   (UnityEngine_GameObject_o *)ObjectsOfType_object,
                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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