void __fastcall BattleChangeSpecialShader___ctor(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FF7DA & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Renderer___ctor__, method);
    sub_1B64870(&System_Collections_Generic_List_Renderer__TypeInfo, v3);
    byte_49FF7DA = 1;
  }
  this->fields.isCheckUniqueId = 1;
  v4 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v4;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.targetRendererList, (int32_t)v4, v5, v6);
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
  void *Instance; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *ShadowEffect; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x22
  UnityEngine_Transform_o *v19; // x21
  __int64 v20; // x1
  int32_t v21; // w21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Shader_o *v24; // x20
  System_Collections_Generic_List_object__o *targetRendererList; // x8
  UnityEngine_Texture_o *v26; // x21
  int32_t v27; // w22
  __int64 v28; // x10
  int v29; // w8
  _DWORD *v30; // x23
  unsigned int v31; // w26
  char *v32; // x8
  UnityEngine_Material_o *v33; // x24
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FF7D8 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Renderer__get_Count__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Renderer__get_Item__, v3);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v4);
    sub_1B64870(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_1B64870(&UnityEngine_SkinnedMeshRenderer_TypeInfo, v7);
    sub_1B64870(&StringLiteral_16112/*"_Color"*/, v8);
    sub_1B64870(&StringLiteral_16093/*"_ChocoTex"*/, v9);
    sub_1B64870(&StringLiteral_4930/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v10);
    sub_1B64870(&StringLiteral_12677/*"Shaders/ChocoMap"*/, v11);
    sub_1B64870(&StringLiteral_16068/*"_AddColor"*/, v12);
    byte_49FF7D8 = 1;
  }
  v13 = (UnityEngine_Object_o *)BattleChangeSpecialShader__GetModelBattleActor(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (void *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !v13 )
      goto LABEL_43;
    if ( BattleActorControl__isShadowServant((BattleActorControl_o *)v13, 0LL) )
    {
      if ( this->fields.isCreateShadowAura )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !Instance )
          goto LABEL_43;
        ShadowEffect = ServantAssetLoadManager__createShadowEffect((ServantAssetLoadManager_o *)Instance, 0, 0LL);
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v13, 0LL);
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
        v19 = (UnityEngine_Transform_o *)Instance;
        UnityEngine_Transform__SetParent(
          (UnityEngine_Transform_o *)Instance,
          (UnityEngine_Transform_o *)NodeFromName,
          0LL);
        v34.fields.x = 0.0;
        v34.fields.y = 0.0;
        v34.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(v19, v34, 0LL);
        if ( !byte_49F9206 )
        {
          sub_1B64870(&UnityEngine_Vector3_TypeInfo, v20);
          byte_49F9206 = 1;
        }
        UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      }
      Instance = this->fields.targetRendererList;
      if ( !Instance )
        goto LABEL_43;
      v21 = 0;
      while ( v21 < *((_DWORD *)Instance + 6) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Instance,
                 v21,
                 (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
        if ( Item )
        {
          methodPtr_low = LOBYTE(UnityEngine_SkinnedMeshRenderer_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
            && (UnityEngine_SkinnedMeshRenderer_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
          {
            Instance = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)Item, 0LL);
            if ( !Instance )
              goto LABEL_43;
            v35.fields.a = 1.0;
            v35.fields.r = 0.05;
            v35.fields.g = 0.05;
            v35.fields.b = 0.05;
            UnityEngine_Material__set_color((UnityEngine_Material_o *)Instance, v35, 0LL);
          }
        }
        Instance = this->fields.targetRendererList;
        ++v21;
        if ( !Instance )
          goto LABEL_43;
      }
    }
    if ( BattleActorControl__isChocoServant((BattleActorControl_o *)v13, 0LL) )
    {
      v24 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4930/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
      Instance = UnityEngine_Resources__Load_object_(
                   (System_String_o *)StringLiteral_12677/*"Shaders/ChocoMap"*/,
                   (const MethodInfo_2ECE384 *)Method_UnityEngine_Resources_Load_Texture2D___);
      targetRendererList = (System_Collections_Generic_List_object__o *)this->fields.targetRendererList;
      if ( targetRendererList )
      {
        v26 = (UnityEngine_Texture_o *)Instance;
        v27 = 0;
        while ( 1 )
        {
          if ( v27 >= targetRendererList->fields._size )
            return;
          Instance = System_Collections_Generic_List_object___get_Item(
                       targetRendererList,
                       v27,
                       (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
          if ( Instance )
          {
            v28 = LOBYTE(UnityEngine_SkinnedMeshRenderer_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v28
              && *(UnityEngine_SkinnedMeshRenderer_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v28 - 8) == UnityEngine_SkinnedMeshRenderer_TypeInfo )
            {
              Instance = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)Instance, 0LL);
              if ( !Instance )
                goto LABEL_43;
              v29 = *((_DWORD *)Instance + 6);
              v30 = Instance;
              if ( v29 >= 1 )
                break;
            }
          }
LABEL_42:
          targetRendererList = (System_Collections_Generic_List_object__o *)this->fields.targetRendererList;
          ++v27;
          if ( !targetRendererList )
            goto LABEL_43;
        }
        v31 = 0;
        while ( 1 )
        {
          if ( v31 >= v29 )
            sub_1B64AD4(Instance, v15);
          v32 = (char *)&v30[2 * v31];
          v33 = (UnityEngine_Material_o *)*((_QWORD *)v32 + 4);
          if ( !v33 )
            break;
          UnityEngine_Material__set_shader(*((UnityEngine_Material_o **)v32 + 4), v24, 0LL);
          v36.fields.r = 1.0;
          v36.fields.g = 1.0;
          v36.fields.b = 1.0;
          v36.fields.a = 1.0;
          UnityEngine_Material__SetColor(v33, (System_String_o *)StringLiteral_16112/*"_Color"*/, v36, 0LL);
          v37.fields.r = 0.0;
          v37.fields.g = 0.0;
          v37.fields.b = 0.0;
          v37.fields.a = 0.0;
          UnityEngine_Material__SetColor(v33, (System_String_o *)StringLiteral_16068/*"_AddColor"*/, v37, 0LL);
          UnityEngine_Material__SetTexture(v33, (System_String_o *)StringLiteral_16093/*"_ChocoTex"*/, v26, 0LL);
          v29 = v30[6];
          if ( (int)++v31 >= v29 )
            goto LABEL_42;
        }
      }
LABEL_43:
      sub_1B64ACC(Instance, v15);
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
  System_Object_array *Instance; // x0
  __int64 v7; // x1
  int max_length; // w8
  System_Object_array *v10; // x20
  unsigned int v11; // w22
  Il2CppClass **v12; // x8
  BattleActorControl_o *v13; // x21

  if ( (byte_49FF7D9 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1B64870(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, v3);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v5);
    byte_49FF7D9 = 1;
  }
  if ( this->fields.isNPEffect )
  {
    Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( Instance )
    {
      Instance = (System_Object_array *)Instance->m_Items[8];
      if ( Instance )
        return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)Instance,
                                         (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    }
LABEL_20:
    sub_1B64ACC(Instance, v7);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_2EBDE20 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
  if ( !Instance )
    goto LABEL_20;
  max_length = Instance->max_length;
  v10 = Instance;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1B64AD4(Instance, v7);
      v12 = &v10->obj.klass + (int)v11;
      v13 = (BattleActorControl_o *)v12[4];
      if ( !v13 )
        break;
      Instance = (System_Object_array *)BattleActorControl__getServantId((BattleActorControl_o *)v12[4], 0LL);
      if ( (_DWORD)Instance == this->fields.sourceServantId
        && (!this->fields.isCheckUniqueId || v13->fields.uniqueID == this->fields.targetId) )
      {
        return v13;
      }
      max_length = v10->max_length;
      if ( (int)++v11 >= max_length )
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