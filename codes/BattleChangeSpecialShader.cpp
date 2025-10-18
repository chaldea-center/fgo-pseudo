void BattleChangeSpecialShader___ctor(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C445CE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_1C37058(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_Renderer__TypeInfo);
    byte_4C445CE = 1;
  }
  this->fields.isCheckUniqueId = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.targetRendererList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.shadowAuraList = (struct System_Collections_Generic_List_GameObject__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.shadowAuraList, (int32_t)v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleChangeSpecialShader__ChangeShader(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  BattleServantData_o *klass; // x0
  long double inited; // q0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x21
  BattleChangeSpecialShader___c_c *v7; // x8
  System_Func_object__object__o *_9__13_0; // x22
  Il2CppObject *v9; // x23
  struct BattleChangeSpecialShader___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v13; // x0
  NpcServantDisplayTypeDetailEntity_o *v14; // x21
  System_Collections_Generic_IEnumerable_Material__o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *shadowAuraNodeTransformArray; // x21
  _QWORD *v17; // x21
  __int64 v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *NodeFromName; // x0
  System_Collections_Generic_IEnumerable_T__o *appended; // x0
  System_Collections_Generic_IEnumerable_T__o *v24; // x21
  Il2CppObject *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  struct System_Collections_Generic_List_GameObject__o *shadowAuraList; // x21
  NpcServantDisplayTypeDetailEntity_o *v28; // x22
  System_Collections_Generic_IEnumerable_Transform__o *v29; // x23
  UnityEngine_Shader_o *v30; // x20
  System_Collections_Generic_List_object__o *targetRendererList; // x8
  UnityEngine_Texture_o *v32; // x21
  int32_t v33; // w22
  __int64 v34; // x10
  int uniqueId; // w8
  BattleServantData_o *v36; // x23
  unsigned int v37; // w26
  BattleServantData_c **v38; // x8
  UnityEngine_Material_o *v39; // x24
  int32_t v40; // w21
  Il2CppObject *Item; // x22
  __int64 naturalAligment; // x10
  BattleDataDefine_c *v43; // x8
  UnityEngine_Material_o *v44; // x22
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C445CC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_Transform___);
    sub_1C37058(&Method_BasicHelper_ExcludeNull_Transform___);
    sub_1C37058(&BattleDataDefine_TypeInfo);
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Append_Transform___);
    sub_1C37058(&Method_System_Linq_Enumerable_DefaultIfEmpty_Transform___);
    sub_1C37058(&Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___);
    sub_1C37058(&Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
    sub_1C37058(&System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_Renderer__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C37058(&UnityEngine_SkinnedMeshRenderer_TypeInfo);
    sub_1C37058(&Method_BattleChangeSpecialShader___c__ChangeShader_b__13_0__);
    sub_1C37058(&BattleChangeSpecialShader___c_TypeInfo);
    sub_1C37058(&StringLiteral_16173/*"_Color"*/);
    sub_1C37058(&StringLiteral_16154/*"_ChocoTex"*/);
    sub_1C37058(&StringLiteral_4914/*"Custom/SoftEdgeUnlitCutZ_Choco"*/);
    sub_1C37058(&StringLiteral_12837/*"Shaders/ChocoMap"*/);
    sub_1C37058(&StringLiteral_16121/*"_AddColor"*/);
    byte_4C445CC = 1;
  }
  entity = 0;
  v3 = (UnityEngine_Object_o *)BattleChangeSpecialShader__GetModelBattleActor(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  klass = (BattleServantData_o *)UnityEngine_Object__op_Equality(v3, 0, 0);
  if ( ((unsigned __int8)klass & 1) == 0 )
  {
    if ( !v3 )
      goto LABEL_65;
    if ( BattleActorControl__isShadowServant((BattleActorControl_o *)v3, 0) )
    {
      klass = (BattleServantData_o *)v3[22].klass;
      if ( !klass )
        goto LABEL_65;
      klass = (BattleServantData_o *)BattleServantData__TryGetDisplayTypeDetailEntity(klass, &entity, 0);
      if ( ((unsigned __int8)klass & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_65;
        v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                    (System_Collections_IEnumerable_o *)this->fields.targetRendererList,
                                                                    (const MethodInfo_3116E34 *)Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___);
        v7 = BattleChangeSpecialShader___c_TypeInfo;
        if ( !BattleChangeSpecialShader___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleChangeSpecialShader___c_TypeInfo);
          v7 = BattleChangeSpecialShader___c_TypeInfo;
        }
        _9__13_0 = (System_Func_object__object__o *)v7->static_fields->__9__13_0;
        if ( !_9__13_0 )
        {
          if ( !v7->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v7);
            v7 = BattleChangeSpecialShader___c_TypeInfo;
          }
          v9 = (Il2CppObject *)v7->static_fields->__9;
          _9__13_0 = (System_Func_object__object__o *)sub_1C372A4(System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo);
          System_Func_object__object____ctor(
            _9__13_0,
            v9,
            Method_BattleChangeSpecialShader___c__ChangeShader_b__13_0__,
            0);
          static_fields = BattleChangeSpecialShader___c_TypeInfo->static_fields;
          static_fields->__9__13_0 = (struct System_Func_SkinnedMeshRenderer__IEnumerable_Material___o *)_9__13_0;
          sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v11, v12);
        }
        v13 = System_Linq_Enumerable__SelectMany_object__object_(
                v6,
                (System_Func_TSource__IEnumerable_TResult___o *)_9__13_0,
                (const MethodInfo_3121114 *)Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
        v14 = entity;
        v15 = (System_Collections_Generic_IEnumerable_Material__o *)v13;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        BattleEffectUtility__SetShadowServantColorToMaterials(v15, v14, 0);
      }
      else
      {
        klass = (BattleServantData_o *)this->fields.targetRendererList;
        if ( !klass )
          goto LABEL_65;
        v40 = 0;
        while ( v40 < klass->fields.uniqueId )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)klass,
                   v40,
                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
          {
            if ( Item )
            {
              naturalAligment = UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.naturalAligment;
              if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
                && (UnityEngine_SkinnedMeshRenderer_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
              {
                klass = (BattleServantData_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)Item, 0);
                v43 = BattleDataDefine_TypeInfo;
                v44 = (UnityEngine_Material_o *)klass;
                if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                  v43 = BattleDataDefine_TypeInfo;
                }
                if ( !v44 )
                  goto LABEL_65;
                UnityEngine_Material__set_color(v44, v43->static_fields->ShadowServantDefaultColor, 0);
              }
            }
          }
          klass = (BattleServantData_o *)this->fields.targetRendererList;
          ++v40;
          if ( !klass )
            goto LABEL_65;
        }
      }
      if ( this->fields.isCreateShadowAura )
      {
        shadowAuraNodeTransformArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.shadowAuraNodeTransformArray;
        if ( !shadowAuraNodeTransformArray )
        {
          v17 = Method_System_Array_Empty_Transform___;
          v18 = *((_QWORD *)Method_System_Array_Empty_Transform___ + 7);
          if ( !v18 )
          {
            sub_1C877C8(Method_System_Array_Empty_Transform___);
            v18 = v17[7];
          }
          v19 = *(_QWORD *)(v18 + 16);
          if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
            v19 = sub_1C8776C(inited);
          if ( !*(_DWORD *)(v19 + 224) )
            inited = j_il2cpp_runtime_class_init_0(v19);
          v20 = *(_QWORD *)(v17[7] + 16LL);
          if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
            v20 = sub_1C8776C(inited);
          shadowAuraNodeTransformArray = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v20 + 184);
        }
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0);
        NodeFromName = (Il2CppObject *)TransformHelper__getNodeFromName(
                                         transform,
                                         this->fields.shadowAuraNodeName,
                                         0,
                                         0);
        appended = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Append_object_(
                                                                    shadowAuraNodeTransformArray,
                                                                    NodeFromName,
                                                                    (const MethodInfo_30F5DE4 *)Method_System_Linq_Enumerable_Append_Transform___);
        v24 = BasicHelper__ExcludeNull_object_(
                appended,
                (const MethodInfo_30D194C *)Method_BasicHelper_ExcludeNull_Transform___);
        v25 = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        v26 = System_Linq_Enumerable__DefaultIfEmpty_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v24,
                v25,
                (const MethodInfo_310AADC *)Method_System_Linq_Enumerable_DefaultIfEmpty_Transform___);
        shadowAuraList = this->fields.shadowAuraList;
        v28 = entity;
        v29 = (System_Collections_Generic_IEnumerable_Transform__o *)v26;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        klass = (BattleServantData_o *)BattleEffectUtility__CreateShadowEffectAndAttachForEachNodes(v29, v28, 0);
        if ( !shadowAuraList )
          goto LABEL_65;
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)shadowAuraList,
          (System_Collections_Generic_IEnumerable_T__o *)klass,
          (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_GameObject__AddRange__);
      }
    }
    if ( BattleActorControl__isChocoServant((BattleActorControl_o *)v3, 0) )
    {
      v30 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4914/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0);
      klass = (BattleServantData_o *)UnityEngine_Resources__Load_object_(
                                       (System_String_o *)StringLiteral_12837/*"Shaders/ChocoMap"*/,
                                       (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_Texture2D___);
      targetRendererList = (System_Collections_Generic_List_object__o *)this->fields.targetRendererList;
      if ( targetRendererList )
      {
        v32 = (UnityEngine_Texture_o *)klass;
        v33 = 0;
        while ( 1 )
        {
          if ( v33 >= targetRendererList->fields._size )
            return;
          klass = (BattleServantData_o *)System_Collections_Generic_List_object___get_Item(
                                           targetRendererList,
                                           v33,
                                           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
          if ( klass )
          {
            v34 = UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.naturalAligment;
            if ( klass->klass->_2.naturalAligment >= (unsigned int)v34
              && (UnityEngine_SkinnedMeshRenderer_c *)klass->klass->_2.typeHierarchy[v34 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
            {
              klass = (BattleServantData_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)klass, 0);
              if ( !klass )
                goto LABEL_65;
              uniqueId = klass->fields.uniqueId;
              v36 = klass;
              if ( uniqueId >= 1 )
                break;
            }
          }
LABEL_48:
          targetRendererList = (System_Collections_Generic_List_object__o *)this->fields.targetRendererList;
          ++v33;
          if ( !targetRendererList )
            goto LABEL_65;
        }
        v37 = 0;
        while ( 1 )
        {
          if ( v37 >= uniqueId )
            sub_1C372BC(klass);
          v38 = &v36->klass + (int)v37;
          v39 = (UnityEngine_Material_o *)v38[4];
          if ( !v39 )
            break;
          UnityEngine_Material__set_shader((UnityEngine_Material_o *)v38[4], v30, 0);
          v46.fields.r = 1.0;
          v46.fields.g = 1.0;
          v46.fields.b = 1.0;
          v46.fields.a = 1.0;
          UnityEngine_Material__SetColor(v39, (System_String_o *)StringLiteral_16173/*"_Color"*/, v46, 0);
          v47.fields.r = 0.0;
          v47.fields.g = 0.0;
          v47.fields.b = 0.0;
          v47.fields.a = 0.0;
          UnityEngine_Material__SetColor(v39, (System_String_o *)StringLiteral_16121/*"_AddColor"*/, v47, 0);
          UnityEngine_Material__SetTexture(v39, (System_String_o *)StringLiteral_16154/*"_ChocoTex"*/, v32, 0);
          uniqueId = v36->fields.uniqueId;
          if ( (int)++v37 >= uniqueId )
            goto LABEL_48;
        }
      }
LABEL_65:
      sub_1C372B4(klass);
    }
  }
}


BattleActorControl_o *BattleChangeSpecialShader__GetModelBattleActor(
        BattleChangeSpecialShader_o *this,
        const MethodInfo *method)
{
  System_Object_array *Instance; // x0
  int max_length; // w8
  System_Object_array *v6; // x20
  unsigned int v7; // w22
  Il2CppClass **v8; // x8
  BattleActorControl_o *v9; // x21

  if ( (byte_4C445CD & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C37058(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4C445CD = 1;
  }
  if ( this->fields.isNPEffect )
  {
    Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( Instance )
    {
      Instance = (System_Object_array *)Instance->m_Items[6];
      if ( Instance )
        return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)Instance,
                                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    }
LABEL_20:
    sub_1C372B4(Instance);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_3173E64 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
  if ( !Instance )
    goto LABEL_20;
  max_length = Instance->max_length;
  v6 = Instance;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1C372BC(Instance);
      v8 = &v6->obj.klass + (int)v7;
      v9 = (BattleActorControl_o *)v8[4];
      if ( !v9 )
        break;
      Instance = (System_Object_array *)BattleActorControl__getServantId((BattleActorControl_o *)v8[4], 0);
      if ( (_DWORD)Instance == this->fields.sourceServantId
        && (!this->fields.isCheckUniqueId || v9->fields.uniqueID == this->fields.targetId) )
      {
        return v9;
      }
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        return 0;
    }
    goto LABEL_20;
  }
  return 0;
}


void BattleChangeSpecialShader__OnDestroy(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v3; // x20
  System_Action_object__o *v4; // x21
  __int64 v5; // x0
  struct System_Collections_Generic_List_GameObject__o *shadowAuraList; // x8
  int32_t size; // w2
  int v8; // w9

  if ( (byte_4C445CB & 1) == 0 )
  {
    sub_1C37058(&System_Action_GameObject__TypeInfo);
    sub_1C37058(&Method_BasicHelper_ExcludeNull_GameObject___);
    sub_1C37058(&Method_BasicHelper_ForEach_GameObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C37058(&Method_UnityEngine_Object_Destroy__);
    byte_4C445CB = 1;
  }
  v3 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.shadowAuraList,
         (const MethodInfo_30D194C *)Method_BasicHelper_ExcludeNull_GameObject___);
  v4 = (System_Action_object__o *)sub_1C372A4(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(v4, 0, Method_UnityEngine_Object_Destroy__, 0);
  BasicHelper__ForEach_object_(
    v3,
    (System_Action_T__o *)v4,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_GameObject___);
  shadowAuraList = this->fields.shadowAuraList;
  if ( !shadowAuraList )
    sub_1C372B4(v5);
  size = shadowAuraList->fields._size;
  v8 = shadowAuraList->fields._version + 1;
  shadowAuraList->fields._size = 0;
  shadowAuraList->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)shadowAuraList->fields._items, 0, size, 0);
}


void BattleChangeSpecialShader__SetTargetId(
        BattleChangeSpecialShader_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  this->fields.targetId = uniqueId;
}


void BattleChangeSpecialShader__Start(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  if ( this->fields.isNPEffect )
    BattleChangeSpecialShader__ChangeShader(this, method);
}


void BattleChangeSpecialShader___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C445CF & 1) == 0 )
  {
    sub_1C37058(&BattleChangeSpecialShader___c_TypeInfo);
    byte_4C445CF = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BattleChangeSpecialShader___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleChangeSpecialShader___c_TypeInfo->static_fields->__9 = (struct BattleChangeSpecialShader___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)BattleChangeSpecialShader___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleChangeSpecialShader___c___ctor(BattleChangeSpecialShader___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_Material__o *BattleChangeSpecialShader___c___ChangeShader_b__13_0(
        BattleChangeSpecialShader___c_o *this,
        UnityEngine_SkinnedMeshRenderer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return (System_Collections_Generic_IEnumerable_Material__o *)UnityEngine_Renderer__get_materials(
                                                                 (UnityEngine_Renderer_o *)x,
                                                                 0);
}