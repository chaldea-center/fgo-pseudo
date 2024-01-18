void __fastcall BattleChangeSpecialShader___ctor(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418AD1E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_Renderer__TypeInfo, v3);
    byte_418AD1E = 1;
  }
  *(&this->fields.isCheckUniqueId + 4) = 1;
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.targetRendererList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v15; // x1
  UnityEngine_GameObject_o *ShadowEffect; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x22
  UnityEngine_Transform_o *v19; // x21
  struct System_Collections_Generic_List_Renderer__o *targetRendererList; // x21
  unsigned __int64 v21; // x22
  __int64 v22; // x10
  UnityEngine_Material_o *material; // x21
  float v24; // s4
  float v25; // s5
  float v26; // s6
  float v27; // s7
  UnityEngine_Shader_o *v28; // x20
  struct System_Collections_Generic_List_Renderer__o *v29; // x22
  UnityEngine_Texture_o *v30; // x21
  unsigned __int64 v31; // x24
  UnityEngine_Renderer_o *v32; // x22
  __int64 v33; // x10
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v38; // s4
  float v39; // s5
  float v40; // s6
  float v41; // s7
  __int64 v42; // x9
  int svtmaster; // w8
  UnityEngine_Renderer_o *v44; // x22
  unsigned int v45; // w25
  UnityEngine_Renderer_c **v46; // x8
  UnityEngine_Material_o *v47; // x23
  __int64 v48; // x0
  BattleChangeSpecialShader_o *v49; // x0
  const MethodInfo *v50; // x1
  UnityEngine_Color_o v51; // [xsp+0h] [xbp-90h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418AD1C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer__get_Item__, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_B2C35C(&UnityEngine_SkinnedMeshRenderer_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_15954/*"_Color"*/, v8);
    sub_B2C35C(&StringLiteral_15938/*"_ChocoTex"*/, v9);
    sub_B2C35C(&StringLiteral_4517/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v10);
    sub_B2C35C(&StringLiteral_12829/*"Shaders/ChocoMap"*/, v11);
    sub_B2C35C(&StringLiteral_15916/*"_AddColor"*/, v12);
    byte_418AD1C = 1;
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
        isShadowServant = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
        v19 = (UnityEngine_Transform_o *)isShadowServant;
        UnityEngine_Transform__SetParent(
          (UnityEngine_Transform_o *)isShadowServant,
          (UnityEngine_Transform_o *)NodeFromName,
          0LL);
        v53.fields.x = 0.0;
        v53.fields.y = 0.0;
        v53.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(v19, v53, 0LL);
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        isShadowServant = (ServantAssetLoadManager_o *)targetRendererList->fields._items->m_Items[v21];
        if ( isShadowServant )
        {
          v22 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
          if ( *(&isShadowServant->klass->_2.bitflags2 + 1) >= (unsigned int)v22
            && (UnityEngine_SkinnedMeshRenderer_c *)isShadowServant->klass->_2.typeHierarchy[v22 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
          {
            material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)isShadowServant, 0LL);
            v55.fields.r = 0.05;
            v55.fields.g = 0.05;
            v55.fields.b = 0.05;
            v55.fields.a = 1.0;
            *(_QWORD *)&v51.fields.r = 0LL;
            *(_QWORD *)&v51.fields.b = 0LL;
            UnityEngine_Color___ctor(v55, v24, v25, v26, v27, (const MethodInfo *)&v51);
            if ( !material )
              goto LABEL_49;
            UnityEngine_Material__set_color(material, v51, 0LL);
          }
        }
        targetRendererList = this->fields.targetRendererList;
        ++v21;
        if ( !targetRendererList )
LABEL_49:
          sub_B2C434(isShadowServant, v15);
      }
    }
    if ( BattleActorControl__isChocoServant((BattleActorControl_o *)v13, 0LL) )
    {
      v28 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4517/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
      isShadowServant = (ServantAssetLoadManager_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                       (System_String_o *)StringLiteral_12829/*"Shaders/ChocoMap"*/,
                                                       (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_Texture2D___);
      v29 = this->fields.targetRendererList;
      if ( !v29 )
        goto LABEL_49;
      v30 = (UnityEngine_Texture_o *)isShadowServant;
      v31 = 0LL;
      while ( 1 )
      {
        if ( (__int64)v31 >= v29->fields._size )
          return;
        if ( v31 >= (unsigned int)v29->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v32 = v29->fields._items->m_Items[v31];
        if ( v32 )
        {
          v33 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v32->klass->_2.bitflags2 + 1) >= (unsigned int)v33
            && (UnityEngine_SkinnedMeshRenderer_c *)v32->klass->_2.typeHierarchy[v33 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
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
            UnityEngine_Color___ctor(white, v38, v39, v40, v41, &methoda);
            v42 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v32->klass->_2.bitflags2 + 1) < (unsigned int)v42
              || (UnityEngine_SkinnedMeshRenderer_c *)v32->klass->_2.typeHierarchy[v42 - 1] != UnityEngine_SkinnedMeshRenderer_TypeInfo )
            {
              sub_B2C728(v32);
              BattleChangeSpecialShader__GetModelBattleActor(v49, v50);
              return;
            }
            isShadowServant = (ServantAssetLoadManager_o *)UnityEngine_Renderer__get_materials(v32, 0LL);
            if ( !isShadowServant )
              goto LABEL_49;
            svtmaster = (int)isShadowServant->fields.svtmaster;
            v44 = (UnityEngine_Renderer_o *)isShadowServant;
            if ( svtmaster >= 1 )
            {
              v45 = 0;
              do
              {
                if ( v45 >= svtmaster )
                {
                  v48 = sub_B2C460(isShadowServant);
                  sub_B2C400(v48, 0LL);
                }
                v46 = &v44->klass + (int)v45;
                v47 = (UnityEngine_Material_o *)v46[4];
                if ( !v47 )
                  goto LABEL_49;
                UnityEngine_Material__set_shader((UnityEngine_Material_o *)v46[4], v28, 0LL);
                v57.fields.r = r;
                v57.fields.g = g;
                v57.fields.b = b;
                v57.fields.a = a;
                UnityEngine_Material__SetColor(v47, (System_String_o *)StringLiteral_15954/*"_Color"*/, v57, 0LL);
                *(_QWORD *)&v58.fields.r = methoda.methodPointer;
                *(_QWORD *)&v58.fields.b = methoda.invoker_method;
                UnityEngine_Material__SetColor(v47, (System_String_o *)StringLiteral_15916/*"_AddColor"*/, v58, 0LL);
                UnityEngine_Material__SetTexture(v47, (System_String_o *)StringLiteral_15938/*"_ChocoTex"*/, v30, 0LL);
                svtmaster = (int)v44[1].klass;
              }
              while ( (int)++v45 < svtmaster );
            }
          }
        }
        v29 = this->fields.targetRendererList;
        ++v31;
        if ( !v29 )
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
  __int64 v7; // x1
  BattleActorControl_o *v8; // x21
  int v9; // w8
  _DWORD *v10; // x20
  unsigned int v11; // w22
  char *v12; // x8
  __int64 v14; // x0

  if ( (byte_418AD1D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_B2C35C(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v5);
    byte_418AD1D = 1;
  }
  if ( !this->fields.isNPEffect )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_2095CAC *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    if ( ObjectsOfType_object )
    {
      v9 = *((_DWORD *)ObjectsOfType_object + 6);
      v10 = ObjectsOfType_object;
      if ( v9 < 1 )
        return 0LL;
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= v9 )
        {
          v14 = sub_B2C460(ObjectsOfType_object);
          sub_B2C400(v14, 0LL);
        }
        v12 = (char *)&v10[2 * v11];
        v8 = (BattleActorControl_o *)*((_QWORD *)v12 + 4);
        if ( !v8 )
          break;
        ObjectsOfType_object = (void *)BattleActorControl__getServantId(*((BattleActorControl_o **)v12 + 4), 0LL);
        if ( (_DWORD)ObjectsOfType_object == *(_DWORD *)&this->fields.isCheckUniqueId
          && (!*(&this->fields.isCheckUniqueId + 4) || v8->fields.uniqueID == this->fields.targetId) )
        {
          return v8;
        }
        v9 = v10[6];
        if ( (int)++v11 >= v9 )
          return 0LL;
      }
    }
LABEL_21:
    sub_B2C434(ObjectsOfType_object, v7);
  }
  ObjectsOfType_object = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !ObjectsOfType_object )
    goto LABEL_21;
  ObjectsOfType_object = (void *)*((_QWORD *)ObjectsOfType_object + 11);
  if ( !ObjectsOfType_object )
    goto LABEL_21;
  return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   (UnityEngine_GameObject_o *)ObjectsOfType_object,
                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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