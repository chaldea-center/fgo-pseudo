void __fastcall BattleChangeSpecialShader___ctor(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20

  if ( (byte_421143D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_Renderer__TypeInfo, v4);
    byte_421143D = 1;
  }
  *(&this->fields.isCheckUniqueId + 4) = 1;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_Renderer__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v5;
  sub_B0D840(&this->fields.targetRendererList, v5);
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
  UnityEngine_Object_o *v13; // x20
  ServantAssetLoadManager_o *isShadowServant; // x0
  UnityEngine_GameObject_o *ShadowEffect; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x22
  UnityEngine_Transform_o *v18; // x21
  struct System_Collections_Generic_List_Renderer__o *targetRendererList; // x21
  unsigned __int64 v20; // x22
  __int64 v21; // x10
  UnityEngine_Material_o *material; // x21
  float v23; // s4
  float v24; // s5
  float v25; // s6
  float v26; // s7
  UnityEngine_Shader_o *v27; // x20
  struct System_Collections_Generic_List_Renderer__o *v28; // x22
  UnityEngine_Texture_o *v29; // x21
  unsigned __int64 v30; // x24
  UnityEngine_Renderer_o *v31; // x22
  __int64 v32; // x10
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v37; // s4
  float v38; // s5
  float v39; // s6
  float v40; // s7
  __int64 v41; // x9
  int svtmaster; // w8
  UnityEngine_Renderer_o *v43; // x22
  unsigned int v44; // w25
  UnityEngine_Renderer_c **v45; // x8
  UnityEngine_Material_o *v46; // x23
  __int64 v47; // x0
  BattleChangeSpecialShader_o *v48; // x0
  const MethodInfo *v49; // x1
  UnityEngine_Color_o v50; // [xsp+0h] [xbp-90h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_421143B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer__get_Item__, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_B0D8A4(&UnityEngine_SkinnedMeshRenderer_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_16002/*"_Color"*/, v8);
    sub_B0D8A4(&StringLiteral_15986/*"_ChocoTex"*/, v9);
    sub_B0D8A4(&StringLiteral_4532/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v10);
    sub_B0D8A4(&StringLiteral_12873/*"Shaders/ChocoMap"*/, v11);
    sub_B0D8A4(&StringLiteral_15963/*"_AddColor"*/, v12);
    byte_421143B = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  v13 = (UnityEngine_Object_o *)BattleChangeSpecialShader__GetModelBattleActor(this, method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  isShadowServant = (ServantAssetLoadManager_o *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)isShadowServant & 1) == 0 )
  {
    if ( !v13 )
      goto LABEL_49;
    isShadowServant = (ServantAssetLoadManager_o *)BattleActorControl__isShadowServant((BattleActorControl_o *)v13, 0LL);
    if ( ((unsigned __int8)isShadowServant & 1) != 0 )
    {
      if ( this->fields.isCreateShadowAura )
      {
        isShadowServant = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !isShadowServant )
          goto LABEL_49;
        ShadowEffect = ServantAssetLoadManager__createShadowEffect(isShadowServant, 0, 0LL);
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v13, 0LL);
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
        v18 = (UnityEngine_Transform_o *)isShadowServant;
        UnityEngine_Transform__SetParent(
          (UnityEngine_Transform_o *)isShadowServant,
          (UnityEngine_Transform_o *)NodeFromName,
          0LL);
        v52.fields.x = 0.0;
        v52.fields.y = 0.0;
        v52.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(v18, v52, 0LL);
        one = UnityEngine_Vector3__get_one(0LL);
        UnityEngine_Transform__set_localScale(v18, one, 0LL);
      }
      targetRendererList = this->fields.targetRendererList;
      if ( !targetRendererList )
        goto LABEL_49;
      v20 = 0LL;
      while ( (__int64)v20 < targetRendererList->fields._size )
      {
        if ( v20 >= (unsigned int)targetRendererList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        isShadowServant = (ServantAssetLoadManager_o *)targetRendererList->fields._items->m_Items[v20];
        if ( isShadowServant )
        {
          v21 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
          if ( *(&isShadowServant->klass->_2.bitflags2 + 1) >= (unsigned int)v21
            && (UnityEngine_SkinnedMeshRenderer_c *)isShadowServant->klass->_2.typeHierarchy[v21 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
          {
            material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)isShadowServant, 0LL);
            v54.fields.r = 0.05;
            v54.fields.g = 0.05;
            v54.fields.b = 0.05;
            v54.fields.a = 1.0;
            *(_QWORD *)&v50.fields.r = 0LL;
            *(_QWORD *)&v50.fields.b = 0LL;
            UnityEngine_Color___ctor(v54, v23, v24, v25, v26, (const MethodInfo *)&v50);
            if ( !material )
              goto LABEL_49;
            UnityEngine_Material__set_color(material, v50, 0LL);
          }
        }
        targetRendererList = this->fields.targetRendererList;
        ++v20;
        if ( !targetRendererList )
LABEL_49:
          sub_B0D97C(isShadowServant);
      }
    }
    if ( BattleActorControl__isChocoServant((BattleActorControl_o *)v13, 0LL) )
    {
      v27 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4532/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
      isShadowServant = (ServantAssetLoadManager_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                       (System_String_o *)StringLiteral_12873/*"Shaders/ChocoMap"*/,
                                                       (const MethodInfo_204DCF8 *)Method_UnityEngine_Resources_Load_Texture2D___);
      v28 = this->fields.targetRendererList;
      if ( !v28 )
        goto LABEL_49;
      v29 = (UnityEngine_Texture_o *)isShadowServant;
      v30 = 0LL;
      while ( 1 )
      {
        if ( (__int64)v30 >= v28->fields._size )
          return;
        if ( v30 >= (unsigned int)v28->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v31 = v28->fields._items->m_Items[v30];
        if ( v31 )
        {
          v32 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v31->klass->_2.bitflags2 + 1) >= (unsigned int)v32
            && (UnityEngine_SkinnedMeshRenderer_c *)v31->klass->_2.typeHierarchy[v32 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
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
            UnityEngine_Color___ctor(white, v37, v38, v39, v40, &methoda);
            v41 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v31->klass->_2.bitflags2 + 1) < (unsigned int)v41
              || (UnityEngine_SkinnedMeshRenderer_c *)v31->klass->_2.typeHierarchy[v41 - 1] != UnityEngine_SkinnedMeshRenderer_TypeInfo )
            {
              v48 = (BattleChangeSpecialShader_o *)sub_B0DC70(v31);
              BattleChangeSpecialShader__GetModelBattleActor(v48, v49);
              return;
            }
            isShadowServant = (ServantAssetLoadManager_o *)UnityEngine_Renderer__get_materials(v31, 0LL);
            if ( !isShadowServant )
              goto LABEL_49;
            svtmaster = (int)isShadowServant->fields.svtmaster;
            v43 = (UnityEngine_Renderer_o *)isShadowServant;
            if ( svtmaster >= 1 )
            {
              v44 = 0;
              do
              {
                if ( v44 >= svtmaster )
                {
                  v47 = sub_B0D9A8(isShadowServant);
                  sub_B0D948(v47, 0LL);
                }
                v45 = &v43->klass + (int)v44;
                v46 = (UnityEngine_Material_o *)v45[4];
                if ( !v46 )
                  goto LABEL_49;
                UnityEngine_Material__set_shader((UnityEngine_Material_o *)v45[4], v27, 0LL);
                v56.fields.r = r;
                v56.fields.g = g;
                v56.fields.b = b;
                v56.fields.a = a;
                UnityEngine_Material__SetColor(v46, (System_String_o *)StringLiteral_16002/*"_Color"*/, v56, 0LL);
                *(_QWORD *)&v57.fields.r = methoda.methodPointer;
                *(_QWORD *)&v57.fields.b = methoda.invoker_method;
                UnityEngine_Material__SetColor(v46, (System_String_o *)StringLiteral_15963/*"_AddColor"*/, v57, 0LL);
                UnityEngine_Material__SetTexture(v46, (System_String_o *)StringLiteral_15986/*"_ChocoTex"*/, v29, 0LL);
                svtmaster = (int)v43[1].klass;
              }
              while ( (int)++v44 < svtmaster );
            }
          }
        }
        v28 = this->fields.targetRendererList;
        ++v30;
        if ( !v28 )
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
  void *ObjectsOfType_object; // x0
  BattleActorControl_o *v7; // x21
  int v8; // w8
  _DWORD *v9; // x20
  unsigned int v10; // w22
  char *v11; // x8
  __int64 v13; // x0

  if ( (byte_421143C & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_B0D8A4(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v5);
    byte_421143C = 1;
  }
  if ( !this->fields.isNPEffect )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_204A7F8 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    if ( ObjectsOfType_object )
    {
      v8 = *((_DWORD *)ObjectsOfType_object + 6);
      v9 = ObjectsOfType_object;
      if ( v8 < 1 )
        return 0LL;
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= v8 )
        {
          v13 = sub_B0D9A8(ObjectsOfType_object);
          sub_B0D948(v13, 0LL);
        }
        v11 = (char *)&v9[2 * v10];
        v7 = (BattleActorControl_o *)*((_QWORD *)v11 + 4);
        if ( !v7 )
          break;
        ObjectsOfType_object = (void *)BattleActorControl__getServantId(*((BattleActorControl_o **)v11 + 4), 0LL);
        if ( (_DWORD)ObjectsOfType_object == *(_DWORD *)&this->fields.isCheckUniqueId
          && (!*(&this->fields.isCheckUniqueId + 4) || v7->fields.uniqueID == this->fields.targetId) )
        {
          return v7;
        }
        v8 = v9[6];
        if ( (int)++v10 >= v8 )
          return 0LL;
      }
    }
LABEL_21:
    sub_B0D97C(ObjectsOfType_object);
  }
  ObjectsOfType_object = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !ObjectsOfType_object )
    goto LABEL_21;
  ObjectsOfType_object = (void *)*((_QWORD *)ObjectsOfType_object + 11);
  if ( !ObjectsOfType_object )
    goto LABEL_21;
  return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   (UnityEngine_GameObject_o *)ObjectsOfType_object,
                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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