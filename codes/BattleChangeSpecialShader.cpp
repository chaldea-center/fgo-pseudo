void __fastcall BattleChangeSpecialShader___ctor(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5C467 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_Renderer__TypeInfo);
    byte_4A5C467 = 1;
  }
  this->fields.isCheckUniqueId = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetRendererList, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleChangeSpecialShader__ChangeShader(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  void *Instance; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *ShadowEffect; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x22
  UnityEngine_Transform_o *v9; // x21
  int32_t v10; // w21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Shader_o *v13; // x20
  System_Collections_Generic_List_object__o *targetRendererList; // x8
  UnityEngine_Texture_o *v15; // x21
  int32_t v16; // w22
  __int64 v17; // x10
  int v18; // w8
  _DWORD *v19; // x23
  unsigned int v20; // w26
  char *v21; // x8
  UnityEngine_Material_o *v22; // x24
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5C465 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&UnityEngine_SkinnedMeshRenderer_TypeInfo);
    sub_1B885B0(&StringLiteral_16179/*"_Color"*/);
    sub_1B885B0(&StringLiteral_16160/*"_ChocoTex"*/);
    sub_1B885B0(&StringLiteral_4953/*"Custom/SoftEdgeUnlitCutZ_Choco"*/);
    sub_1B885B0(&StringLiteral_12735/*"Shaders/ChocoMap"*/);
    sub_1B885B0(&StringLiteral_16135/*"_AddColor"*/);
    byte_4A5C465 = 1;
  }
  v3 = (UnityEngine_Object_o *)BattleChangeSpecialShader__GetModelBattleActor(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (void *)UnityEngine_Object__op_Equality(v3, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !v3 )
      goto LABEL_43;
    if ( BattleActorControl__isShadowServant((BattleActorControl_o *)v3, 0LL) )
    {
      if ( this->fields.isCreateShadowAura )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !Instance )
          goto LABEL_43;
        ShadowEffect = ServantAssetLoadManager__createShadowEffect((ServantAssetLoadManager_o *)Instance, 0, 0LL);
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0LL);
        NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(
                                                 transform,
                                                 this->fields.shadowAuraNodeName,
                                                 0,
                                                 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (void *)UnityEngine_Object__op_Equality(NodeFromName, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          NodeFromName = (UnityEngine_Object_o *)Instance;
        }
        if ( !ShadowEffect )
          goto LABEL_43;
        Instance = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        if ( !Instance )
          goto LABEL_43;
        v9 = (UnityEngine_Transform_o *)Instance;
        UnityEngine_Transform__SetParent(
          (UnityEngine_Transform_o *)Instance,
          (UnityEngine_Transform_o *)NodeFromName,
          0LL);
        v23.fields.x = 0.0;
        v23.fields.y = 0.0;
        v23.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(v9, v23, 0LL);
        if ( !byte_4A55CE6 )
        {
          sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE6 = 1;
        }
        UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      }
      Instance = this->fields.targetRendererList;
      if ( !Instance )
        goto LABEL_43;
      v10 = 0;
      while ( v10 < *((_DWORD *)Instance + 6) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Instance,
                 v10,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
        if ( Item )
        {
          methodPtr_low = LOBYTE(UnityEngine_SkinnedMeshRenderer_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
            && (UnityEngine_SkinnedMeshRenderer_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
          {
            Instance = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)Item, 0LL);
            if ( !Instance )
              goto LABEL_43;
            v24.fields.a = 1.0;
            v24.fields.r = 0.05;
            v24.fields.g = 0.05;
            v24.fields.b = 0.05;
            UnityEngine_Material__set_color((UnityEngine_Material_o *)Instance, v24, 0LL);
          }
        }
        Instance = this->fields.targetRendererList;
        ++v10;
        if ( !Instance )
          goto LABEL_43;
      }
    }
    if ( BattleActorControl__isChocoServant((BattleActorControl_o *)v3, 0LL) )
    {
      v13 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4953/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
      Instance = UnityEngine_Resources__Load_object_(
                   (System_String_o *)StringLiteral_12735/*"Shaders/ChocoMap"*/,
                   (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      targetRendererList = (System_Collections_Generic_List_object__o *)this->fields.targetRendererList;
      if ( targetRendererList )
      {
        v15 = (UnityEngine_Texture_o *)Instance;
        v16 = 0;
        while ( 1 )
        {
          if ( v16 >= targetRendererList->fields._size )
            return;
          Instance = System_Collections_Generic_List_object___get_Item(
                       targetRendererList,
                       v16,
                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
          if ( Instance )
          {
            v17 = LOBYTE(UnityEngine_SkinnedMeshRenderer_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v17
              && *(UnityEngine_SkinnedMeshRenderer_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v17 - 8) == UnityEngine_SkinnedMeshRenderer_TypeInfo )
            {
              Instance = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)Instance, 0LL);
              if ( !Instance )
                goto LABEL_43;
              v18 = *((_DWORD *)Instance + 6);
              v19 = Instance;
              if ( v18 >= 1 )
                break;
            }
          }
LABEL_42:
          targetRendererList = (System_Collections_Generic_List_object__o *)this->fields.targetRendererList;
          ++v16;
          if ( !targetRendererList )
            goto LABEL_43;
        }
        v20 = 0;
        while ( 1 )
        {
          if ( v20 >= v18 )
            sub_1B88814(Instance, v5);
          v21 = (char *)&v19[2 * v20];
          v22 = (UnityEngine_Material_o *)*((_QWORD *)v21 + 4);
          if ( !v22 )
            break;
          UnityEngine_Material__set_shader(*((UnityEngine_Material_o **)v21 + 4), v13, 0LL);
          v25.fields.r = 1.0;
          v25.fields.g = 1.0;
          v25.fields.b = 1.0;
          v25.fields.a = 1.0;
          UnityEngine_Material__SetColor(v22, (System_String_o *)StringLiteral_16179/*"_Color"*/, v25, 0LL);
          v26.fields.r = 0.0;
          v26.fields.g = 0.0;
          v26.fields.b = 0.0;
          v26.fields.a = 0.0;
          UnityEngine_Material__SetColor(v22, (System_String_o *)StringLiteral_16135/*"_AddColor"*/, v26, 0LL);
          UnityEngine_Material__SetTexture(v22, (System_String_o *)StringLiteral_16160/*"_ChocoTex"*/, v15, 0LL);
          v18 = v19[6];
          if ( (int)++v20 >= v18 )
            goto LABEL_42;
        }
      }
LABEL_43:
      sub_1B8880C(Instance, v5);
    }
  }
}


BattleActorControl_o *__fastcall BattleChangeSpecialShader__GetModelBattleActor(
        BattleChangeSpecialShader_o *this,
        const MethodInfo *method)
{
  System_Object_array *Instance; // x0
  __int64 v4; // x1
  int max_length; // w8
  System_Object_array *v7; // x20
  unsigned int v8; // w22
  Il2CppClass **v9; // x8
  BattleActorControl_o *v10; // x21

  if ( (byte_4A5C466 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4A5C466 = 1;
  }
  if ( this->fields.isNPEffect )
  {
    Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( Instance )
    {
      Instance = (System_Object_array *)Instance->m_Items[8];
      if ( Instance )
        return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)Instance,
                                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    }
LABEL_20:
    sub_1B8880C(Instance, v4);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_2F03700 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
  if ( !Instance )
    goto LABEL_20;
  max_length = Instance->max_length;
  v7 = Instance;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1B88814(Instance, v4);
      v9 = &v7->obj.klass + (int)v8;
      v10 = (BattleActorControl_o *)v9[4];
      if ( !v10 )
        break;
      Instance = (System_Object_array *)BattleActorControl__getServantId((BattleActorControl_o *)v9[4], 0LL);
      if ( (_DWORD)Instance == this->fields.sourceServantId
        && (!this->fields.isCheckUniqueId || v10->fields.uniqueID == this->fields.targetId) )
      {
        return v10;
      }
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return 0LL;
    }
    goto LABEL_20;
  }
  return 0LL;
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