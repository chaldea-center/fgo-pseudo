void __fastcall BattleChangeSpecialShader___ctor(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20

  if ( (byte_42ACC2B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_B52984(&System_Collections_Generic_List_Renderer__TypeInfo);
    byte_42ACC2B = 1;
  }
  *(&this->fields.isCheckUniqueId + 4) = 1;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v3;
  sub_B52920(&this->fields.targetRendererList);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleChangeSpecialShader__ChangeShader(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  ServantAssetLoadManager_o *isShadowServant; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *ShadowEffect; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x22
  UnityEngine_Transform_o *v9; // x21
  struct System_Collections_Generic_List_Renderer__o *targetRendererList; // x21
  unsigned __int64 v11; // x22
  __int64 v12; // x10
  UnityEngine_Material_o *material; // x21
  float v14; // s4
  float v15; // s5
  float v16; // s6
  float v17; // s7
  UnityEngine_Shader_o *v18; // x20
  struct System_Collections_Generic_List_Renderer__o *v19; // x22
  UnityEngine_Texture_o *v20; // x21
  unsigned __int64 v21; // x24
  UnityEngine_Renderer_o *v22; // x22
  __int64 v23; // x10
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v28; // s4
  float v29; // s5
  float v30; // s6
  float v31; // s7
  __int64 v32; // x9
  int svtmaster; // w8
  UnityEngine_Renderer_o *v34; // x22
  unsigned int v35; // w25
  UnityEngine_Renderer_c **v36; // x8
  UnityEngine_Material_o *v37; // x23
  __int64 v38; // x0
  BattleChangeSpecialShader_o *v39; // x0
  const MethodInfo *v40; // x1
  UnityEngine_Color_o v41; // [xsp+0h] [xbp-90h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42ACC29 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_Renderer__get_Item__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_B52984(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B52984(&UnityEngine_SkinnedMeshRenderer_TypeInfo);
    sub_B52984(&StringLiteral_16061/*"_Color"*/);
    sub_B52984(&StringLiteral_16045/*"_ChocoTex"*/);
    sub_B52984(&StringLiteral_4555/*"Custom/SoftEdgeUnlitCutZ_Choco"*/);
    sub_B52984(&StringLiteral_12926/*"Shaders/ChocoMap"*/);
    sub_B52984(&StringLiteral_16022/*"_AddColor"*/);
    byte_42ACC29 = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  v3 = (UnityEngine_Object_o *)BattleChangeSpecialShader__GetModelBattleActor(this, method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  isShadowServant = (ServantAssetLoadManager_o *)UnityEngine_Object__op_Equality(v3, 0LL, 0LL);
  if ( ((unsigned __int8)isShadowServant & 1) == 0 )
  {
    if ( !v3 )
      goto LABEL_49;
    isShadowServant = (ServantAssetLoadManager_o *)BattleActorControl__isShadowServant((BattleActorControl_o *)v3, 0LL);
    if ( ((unsigned __int8)isShadowServant & 1) != 0 )
    {
      if ( this->fields.isCreateShadowAura )
      {
        isShadowServant = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !isShadowServant )
          goto LABEL_49;
        ShadowEffect = ServantAssetLoadManager__createShadowEffect(isShadowServant, 0, 0LL);
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0LL);
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
        v9 = (UnityEngine_Transform_o *)isShadowServant;
        UnityEngine_Transform__SetParent(
          (UnityEngine_Transform_o *)isShadowServant,
          (UnityEngine_Transform_o *)NodeFromName,
          0LL);
        v43.fields.x = 0.0;
        v43.fields.y = 0.0;
        v43.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(v9, v43, 0LL);
        one = UnityEngine_Vector3__get_one(0LL);
        UnityEngine_Transform__set_localScale(v9, one, 0LL);
      }
      targetRendererList = this->fields.targetRendererList;
      if ( !targetRendererList )
        goto LABEL_49;
      v11 = 0LL;
      while ( (__int64)v11 < targetRendererList->fields._size )
      {
        if ( v11 >= (unsigned int)targetRendererList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        isShadowServant = (ServantAssetLoadManager_o *)targetRendererList->fields._items->m_Items[v11];
        if ( isShadowServant )
        {
          v12 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
          if ( *(&isShadowServant->klass->_2.bitflags2 + 1) >= (unsigned int)v12
            && (UnityEngine_SkinnedMeshRenderer_c *)isShadowServant->klass->_2.typeHierarchy[v12 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
          {
            material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)isShadowServant, 0LL);
            v45.fields.r = 0.05;
            v45.fields.g = 0.05;
            v45.fields.b = 0.05;
            v45.fields.a = 1.0;
            *(_QWORD *)&v41.fields.r = 0LL;
            *(_QWORD *)&v41.fields.b = 0LL;
            UnityEngine_Color___ctor(v45, v14, v15, v16, v17, (const MethodInfo *)&v41);
            if ( !material )
              goto LABEL_49;
            UnityEngine_Material__set_color(material, v41, 0LL);
          }
        }
        targetRendererList = this->fields.targetRendererList;
        ++v11;
        if ( !targetRendererList )
LABEL_49:
          sub_B52A5C(isShadowServant, v5);
      }
    }
    if ( BattleActorControl__isChocoServant((BattleActorControl_o *)v3, 0LL) )
    {
      v18 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4555/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
      isShadowServant = (ServantAssetLoadManager_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                       (System_String_o *)StringLiteral_12926/*"Shaders/ChocoMap"*/,
                                                       (const MethodInfo_1F7452C *)Method_UnityEngine_Resources_Load_Texture2D___);
      v19 = this->fields.targetRendererList;
      if ( !v19 )
        goto LABEL_49;
      v20 = (UnityEngine_Texture_o *)isShadowServant;
      v21 = 0LL;
      while ( 1 )
      {
        if ( (__int64)v21 >= v19->fields._size )
          return;
        if ( v21 >= (unsigned int)v19->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v22 = v19->fields._items->m_Items[v21];
        if ( v22 )
        {
          v23 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v22->klass->_2.bitflags2 + 1) >= (unsigned int)v23
            && (UnityEngine_SkinnedMeshRenderer_c *)v22->klass->_2.typeHierarchy[v23 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
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
            UnityEngine_Color___ctor(white, v28, v29, v30, v31, &methoda);
            v32 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v32
              || (UnityEngine_SkinnedMeshRenderer_c *)v22->klass->_2.typeHierarchy[v32 - 1] != UnityEngine_SkinnedMeshRenderer_TypeInfo )
            {
              v39 = (BattleChangeSpecialShader_o *)sub_B52D50(v22);
              BattleChangeSpecialShader__GetModelBattleActor(v39, v40);
              return;
            }
            isShadowServant = (ServantAssetLoadManager_o *)UnityEngine_Renderer__get_materials(v22, 0LL);
            if ( !isShadowServant )
              goto LABEL_49;
            svtmaster = (int)isShadowServant->fields.svtmaster;
            v34 = (UnityEngine_Renderer_o *)isShadowServant;
            if ( svtmaster >= 1 )
            {
              v35 = 0;
              do
              {
                if ( v35 >= svtmaster )
                {
                  v38 = sub_B52A88(isShadowServant);
                  sub_B52A28(v38, 0LL);
                }
                v36 = &v34->klass + (int)v35;
                v37 = (UnityEngine_Material_o *)v36[4];
                if ( !v37 )
                  goto LABEL_49;
                UnityEngine_Material__set_shader((UnityEngine_Material_o *)v36[4], v18, 0LL);
                v47.fields.r = r;
                v47.fields.g = g;
                v47.fields.b = b;
                v47.fields.a = a;
                UnityEngine_Material__SetColor(v37, (System_String_o *)StringLiteral_16061/*"_Color"*/, v47, 0LL);
                *(_QWORD *)&v48.fields.r = methoda.methodPointer;
                *(_QWORD *)&v48.fields.b = methoda.invoker_method;
                UnityEngine_Material__SetColor(v37, (System_String_o *)StringLiteral_16022/*"_AddColor"*/, v48, 0LL);
                UnityEngine_Material__SetTexture(v37, (System_String_o *)StringLiteral_16045/*"_ChocoTex"*/, v20, 0LL);
                svtmaster = (int)v34[1].klass;
              }
              while ( (int)++v35 < svtmaster );
            }
          }
        }
        v19 = this->fields.targetRendererList;
        ++v21;
        if ( !v19 )
          goto LABEL_49;
      }
    }
  }
}


BattleActorControl_o *__fastcall BattleChangeSpecialShader__GetModelBattleActor(
        BattleChangeSpecialShader_o *this,
        const MethodInfo *method)
{
  void *ObjectsOfType_object; // x0
  __int64 v4; // x1
  BattleActorControl_o *v5; // x21
  int v6; // w8
  _DWORD *v7; // x20
  unsigned int v8; // w22
  char *v9; // x8
  __int64 v11; // x0

  if ( (byte_42ACC2A & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B52984(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_42ACC2A = 1;
  }
  if ( !this->fields.isNPEffect )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_1F7102C *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    if ( ObjectsOfType_object )
    {
      v6 = *((_DWORD *)ObjectsOfType_object + 6);
      v7 = ObjectsOfType_object;
      if ( v6 < 1 )
        return 0LL;
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= v6 )
        {
          v11 = sub_B52A88(ObjectsOfType_object);
          sub_B52A28(v11, 0LL);
        }
        v9 = (char *)&v7[2 * v8];
        v5 = (BattleActorControl_o *)*((_QWORD *)v9 + 4);
        if ( !v5 )
          break;
        ObjectsOfType_object = (void *)BattleActorControl__getServantId(*((BattleActorControl_o **)v9 + 4), 0LL);
        if ( (_DWORD)ObjectsOfType_object == *(_DWORD *)&this->fields.isCheckUniqueId
          && (!*(&this->fields.isCheckUniqueId + 4) || v5->fields.uniqueID == this->fields.targetId) )
        {
          return v5;
        }
        v6 = v7[6];
        if ( (int)++v8 >= v6 )
          return 0LL;
      }
    }
LABEL_21:
    sub_B52A5C(ObjectsOfType_object, v4);
  }
  ObjectsOfType_object = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !ObjectsOfType_object )
    goto LABEL_21;
  ObjectsOfType_object = (void *)*((_QWORD *)ObjectsOfType_object + 11);
  if ( !ObjectsOfType_object )
    goto LABEL_21;
  return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   (UnityEngine_GameObject_o *)ObjectsOfType_object,
                                   (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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