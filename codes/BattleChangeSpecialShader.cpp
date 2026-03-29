void BattleChangeSpecialShader___ctor(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D31FBE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_Renderer__TypeInfo);
    byte_4D31FBE = 1;
  }
  this->fields.isCheckUniqueId = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.targetRendererList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.shadowAuraList = (struct System_Collections_Generic_List_GameObject__o *)v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.shadowAuraList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleChangeSpecialShader__ChangeShader(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  BattleServantData_o *monitor; // x0
  __int64 v5; // x1
  long double inited; // q0
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x21
  BattleChangeSpecialShader___c_c *v8; // x8
  System_Func_object__object__o *_9__13_0; // x22
  Il2CppObject *v10; // x23
  struct BattleChangeSpecialShader___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v18; // x0
  NpcServantDisplayTypeDetailEntity_o *v19; // x21
  System_Collections_Generic_IEnumerable_Material__o *v20; // x22
  System_Collections_Generic_IEnumerable_TSource__o *shadowAuraNodeTransformArray; // x21
  _QWORD *v22; // x21
  __int64 v23; // x8
  __int64 v24; // x0
  __int64 v25; // x0
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *NodeFromName; // x0
  System_Collections_Generic_IEnumerable_T__o *appended; // x0
  System_Collections_Generic_IEnumerable_T__o *v29; // x21
  Il2CppObject *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  struct System_Collections_Generic_List_GameObject__o *shadowAuraList; // x21
  NpcServantDisplayTypeDetailEntity_o *v33; // x22
  System_Collections_Generic_IEnumerable_Transform__o *v34; // x23
  UnityEngine_Shader_o *v35; // x20
  System_Collections_Generic_List_object__o *targetRendererList; // x8
  UnityEngine_Texture_o *v37; // x21
  int32_t v38; // w22
  __int64 v39; // x10
  int uniqueId; // w8
  BattleServantData_o *v41; // x23
  unsigned int v42; // w26
  BattleServantData_c **v43; // x8
  UnityEngine_Material_o *v44; // x24
  int32_t v45; // w21
  Il2CppObject *Item; // x22
  __int64 naturalAligment; // x10
  BattleDataDefine_c *v48; // x8
  UnityEngine_Material_o *v49; // x22
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D31FBC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_Transform___);
    sub_1C93AD4(&Method_BasicHelper_ExcludeNull_Transform___);
    sub_1C93AD4(&BattleDataDefine_TypeInfo);
    sub_1C93AD4(&BattleEffectUtility_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Append_Transform___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_DefaultIfEmpty_Transform___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
    sub_1C93AD4(&System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Renderer__get_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C93AD4(&UnityEngine_SkinnedMeshRenderer_TypeInfo);
    sub_1C93AD4(&Method_BattleChangeSpecialShader___c__ChangeShader_b__13_0__);
    sub_1C93AD4(&BattleChangeSpecialShader___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_16273/*"_Color"*/);
    sub_1C93AD4(&StringLiteral_16254/*"_ChocoTex"*/);
    sub_1C93AD4(&StringLiteral_4934/*"Custom/SoftEdgeUnlitCutZ_Choco"*/);
    sub_1C93AD4(&StringLiteral_12935/*"Shaders/ChocoMap"*/);
    sub_1C93AD4(&StringLiteral_16219/*"_AddColor"*/);
    byte_4D31FBC = 1;
  }
  entity = 0;
  v3 = (UnityEngine_Object_o *)BattleChangeSpecialShader__GetModelBattleActor(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (BattleServantData_o *)UnityEngine_Object__op_Equality(v3, 0, 0);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !v3 )
      goto LABEL_65;
    if ( BattleActorControl__isShadowServant((BattleActorControl_o *)v3, 0) )
    {
      monitor = (BattleServantData_o *)v3[22].monitor;
      if ( !monitor )
        goto LABEL_65;
      monitor = (BattleServantData_o *)BattleServantData__TryGetDisplayTypeDetailEntity(monitor, &entity, 0);
      if ( ((unsigned __int8)monitor & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_65;
        v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                    (System_Collections_IEnumerable_o *)this->fields.targetRendererList,
                                                                    (const MethodInfo_31D3358 *)Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___);
        v8 = BattleChangeSpecialShader___c_TypeInfo;
        if ( !BattleChangeSpecialShader___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleChangeSpecialShader___c_TypeInfo);
          v8 = BattleChangeSpecialShader___c_TypeInfo;
        }
        _9__13_0 = (System_Func_object__object__o *)v8->static_fields->__9__13_0;
        if ( !_9__13_0 )
        {
          if ( !v8->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v8);
            v8 = BattleChangeSpecialShader___c_TypeInfo;
          }
          v10 = (Il2CppObject *)v8->static_fields->__9;
          _9__13_0 = (System_Func_object__object__o *)sub_1C93D20(System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo);
          System_Func_object__object____ctor(
            _9__13_0,
            v10,
            Method_BattleChangeSpecialShader___c__ChangeShader_b__13_0__,
            0);
          static_fields = BattleChangeSpecialShader___c_TypeInfo->static_fields;
          static_fields->__9__13_0 = (struct System_Func_SkinnedMeshRenderer__IEnumerable_Material___o *)_9__13_0;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__13_0,
            (int32_t)_9__13_0,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17);
        }
        v18 = System_Linq_Enumerable__SelectMany_object__object_(
                v7,
                (System_Func_TSource__IEnumerable_TResult___o *)_9__13_0,
                (const MethodInfo_31DD3D0 *)Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
        v19 = entity;
        v20 = (System_Collections_Generic_IEnumerable_Material__o *)v18;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        BattleEffectUtility__SetShadowServantColorToMaterials(v20, v19, 0);
      }
      else
      {
        monitor = (BattleServantData_o *)this->fields.targetRendererList;
        if ( !monitor )
          goto LABEL_65;
        v45 = 0;
        while ( v45 < monitor->fields.uniqueId )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)monitor,
                   v45,
                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_Renderer__get_Item__);
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
                monitor = (BattleServantData_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)Item, 0);
                v48 = BattleDataDefine_TypeInfo;
                v49 = (UnityEngine_Material_o *)monitor;
                if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                  v48 = BattleDataDefine_TypeInfo;
                }
                if ( !v49 )
                  goto LABEL_65;
                UnityEngine_Material__set_color(v49, v48->static_fields->ShadowServantDefaultColor, 0);
              }
            }
          }
          monitor = (BattleServantData_o *)this->fields.targetRendererList;
          ++v45;
          if ( !monitor )
            goto LABEL_65;
        }
      }
      if ( this->fields.isCreateShadowAura )
      {
        shadowAuraNodeTransformArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.shadowAuraNodeTransformArray;
        if ( !shadowAuraNodeTransformArray )
        {
          v22 = Method_System_Array_Empty_Transform___;
          v23 = *((_QWORD *)Method_System_Array_Empty_Transform___ + 7);
          if ( !v23 )
          {
            sub_1C69BC4(Method_System_Array_Empty_Transform___);
            v23 = v22[7];
          }
          v24 = *(_QWORD *)(v23 + 16);
          if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
            v24 = sub_1C69B68(inited);
          if ( !*(_DWORD *)(v24 + 224) )
            inited = j_il2cpp_runtime_class_init_0(v24);
          v25 = *(_QWORD *)(v22[7] + 16LL);
          if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
            v25 = sub_1C69B68(inited);
          shadowAuraNodeTransformArray = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v25 + 184);
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
                                                                    (const MethodInfo_31B2D88 *)Method_System_Linq_Enumerable_Append_Transform___);
        v29 = BasicHelper__ExcludeNull_object_(
                appended,
                (const MethodInfo_318E4CC *)Method_BasicHelper_ExcludeNull_Transform___);
        v30 = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        v31 = System_Linq_Enumerable__DefaultIfEmpty_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v29,
                v30,
                (const MethodInfo_31C6F40 *)Method_System_Linq_Enumerable_DefaultIfEmpty_Transform___);
        shadowAuraList = this->fields.shadowAuraList;
        v33 = entity;
        v34 = (System_Collections_Generic_IEnumerable_Transform__o *)v31;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        monitor = (BattleServantData_o *)BattleEffectUtility__CreateShadowEffectAndAttachForEachNodes(v34, v33, 0);
        if ( !shadowAuraList )
          goto LABEL_65;
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)shadowAuraList,
          (System_Collections_Generic_IEnumerable_T__o *)monitor,
          (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_GameObject__AddRange__);
      }
    }
    if ( BattleActorControl__isChocoServant((BattleActorControl_o *)v3, 0) )
    {
      v35 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4934/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0);
      monitor = (BattleServantData_o *)UnityEngine_Resources__Load_object_(
                                         (System_String_o *)StringLiteral_12935/*"Shaders/ChocoMap"*/,
                                         (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_Texture2D___);
      targetRendererList = (System_Collections_Generic_List_object__o *)this->fields.targetRendererList;
      if ( targetRendererList )
      {
        v37 = (UnityEngine_Texture_o *)monitor;
        v38 = 0;
        while ( 1 )
        {
          if ( v38 >= targetRendererList->fields._size )
            return;
          monitor = (BattleServantData_o *)System_Collections_Generic_List_object___get_Item(
                                             targetRendererList,
                                             v38,
                                             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_Renderer__get_Item__);
          if ( monitor )
          {
            v39 = UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.naturalAligment;
            if ( monitor->klass->_2.naturalAligment >= (unsigned int)v39
              && (UnityEngine_SkinnedMeshRenderer_c *)monitor->klass->_2.typeHierarchy[v39 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
            {
              monitor = (BattleServantData_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)monitor, 0);
              if ( !monitor )
                goto LABEL_65;
              uniqueId = monitor->fields.uniqueId;
              v41 = monitor;
              if ( uniqueId >= 1 )
                break;
            }
          }
LABEL_48:
          targetRendererList = (System_Collections_Generic_List_object__o *)this->fields.targetRendererList;
          ++v38;
          if ( !targetRendererList )
            goto LABEL_65;
        }
        v42 = 0;
        while ( 1 )
        {
          if ( v42 >= uniqueId )
            sub_1C93D34(monitor);
          v43 = &v41->klass + (int)v42;
          v44 = (UnityEngine_Material_o *)v43[4];
          if ( !v44 )
            break;
          UnityEngine_Material__set_shader((UnityEngine_Material_o *)v43[4], v35, 0);
          v51.fields.r = 1.0;
          v51.fields.g = 1.0;
          v51.fields.b = 1.0;
          v51.fields.a = 1.0;
          UnityEngine_Material__SetColor(v44, (System_String_o *)StringLiteral_16273/*"_Color"*/, v51, 0);
          v52.fields.r = 0.0;
          v52.fields.g = 0.0;
          v52.fields.b = 0.0;
          v52.fields.a = 0.0;
          UnityEngine_Material__SetColor(v44, (System_String_o *)StringLiteral_16219/*"_AddColor"*/, v52, 0);
          UnityEngine_Material__SetTexture(v44, (System_String_o *)StringLiteral_16254/*"_ChocoTex"*/, v37, 0);
          uniqueId = v41->fields.uniqueId;
          if ( (int)++v42 >= uniqueId )
            goto LABEL_48;
        }
      }
LABEL_65:
      sub_1C93D2C(monitor, v5);
    }
  }
}


BattleActorControl_o *BattleChangeSpecialShader__GetModelBattleActor(
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

  if ( (byte_4D31FBD & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C93AD4(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4D31FBD = 1;
  }
  if ( this->fields.isNPEffect )
  {
    Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( Instance )
    {
      Instance = (System_Object_array *)Instance->m_Items[6];
      if ( Instance )
        return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)Instance,
                                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    }
LABEL_20:
    sub_1C93D2C(Instance, v4);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_3230D10 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
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
        sub_1C93D34(Instance);
      v9 = &v7->obj.klass + (int)v8;
      v10 = (BattleActorControl_o *)v9[4];
      if ( !v10 )
        break;
      Instance = (System_Object_array *)BattleActorControl__getServantId((BattleActorControl_o *)v9[4], 0);
      if ( (_DWORD)Instance == this->fields.sourceServantId
        && (!this->fields.isCheckUniqueId || v10->fields.uniqueID == this->fields.targetId) )
      {
        return v10;
      }
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
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
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *shadowAuraList; // x8
  int32_t size; // w2
  int v9; // w9

  if ( (byte_4D31FBB & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_GameObject__TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ExcludeNull_GameObject___);
    sub_1C93AD4(&Method_BasicHelper_ForEach_GameObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C93AD4(&Method_UnityEngine_Object_Destroy__);
    byte_4D31FBB = 1;
  }
  v3 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.shadowAuraList,
         (const MethodInfo_318E4CC *)Method_BasicHelper_ExcludeNull_GameObject___);
  v4 = (System_Action_object__o *)sub_1C93D20(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(v4, 0, Method_UnityEngine_Object_Destroy__, 0);
  BasicHelper__ForEach_object_(
    v3,
    (System_Action_T__o *)v4,
    (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_GameObject___);
  shadowAuraList = this->fields.shadowAuraList;
  if ( !shadowAuraList )
    sub_1C93D2C(v5, v6);
  size = shadowAuraList->fields._size;
  v9 = shadowAuraList->fields._version + 1;
  shadowAuraList->fields._size = 0;
  shadowAuraList->fields._version = v9;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D31FBF & 1) == 0 )
  {
    sub_1C93AD4(&BattleChangeSpecialShader___c_TypeInfo);
    byte_4D31FBF = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(BattleChangeSpecialShader___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleChangeSpecialShader___c_TypeInfo->static_fields->__9 = (struct BattleChangeSpecialShader___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)BattleChangeSpecialShader___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C93D2C(this, 0);
  return (System_Collections_Generic_IEnumerable_Material__o *)UnityEngine_Renderer__get_materials(
                                                                 (UnityEngine_Renderer_o *)x,
                                                                 0);
}