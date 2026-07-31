void BattleChangeSpecialShader___ctor(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_Renderer__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5939CF1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_Renderer__TypeInfo);
    byte_5939CF1 = 1;
  }
  v3 = System_Collections_Generic_List_Renderer__TypeInfo;
  this->fields.isCheckUniqueId = 1;
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v4;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetRendererList,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.shadowAuraList = (struct System_Collections_Generic_List_GameObject__o *)v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.shadowAuraList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleChangeSpecialShader__ChangeShader(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *v4; // x20
  BattleServantData_o *klass; // x0
  __int64 v6; // x1
  long double v7; // q0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x21
  BattleChangeSpecialShader___c_c *v10; // x8
  struct BattleChangeSpecialShader___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__13_0; // x22
  Il2CppObject *v13; // x23
  struct BattleChangeSpecialShader___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  System_Collections_Generic_IEnumerable_Material__o *v22; // x22
  NpcServantDisplayTypeDetailEntity_o *v23; // x21
  System_Collections_Generic_IEnumerable_TSource__o *shadowAuraNodeTransformArray; // x21
  _QWORD *v25; // x21
  __int64 v26; // x8
  __int64 v27; // x0
  __int64 v28; // x0
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *NodeFromName; // x0
  System_Collections_Generic_IEnumerable_T__o *appended; // x0
  System_Collections_Generic_IEnumerable_T__o *v32; // x21
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  System_Collections_Generic_IEnumerable_Transform__o *v35; // x23
  struct System_Collections_Generic_List_GameObject__o *shadowAuraList; // x21
  NpcServantDisplayTypeDetailEntity_o *v37; // x22
  UnityEngine_Shader_o *v38; // x20
  System_Collections_Generic_List_object__o *targetRendererList; // x8
  UnityEngine_Texture_o *v40; // x21
  int32_t v41; // w22
  __int64 v42; // x10
  int uniqueId; // w8
  BattleServantData_o *v44; // x23
  __int64 v45; // x26
  UnityEngine_Material_o *v46; // x24
  int32_t v47; // w21
  __int64 v48; // x1
  Il2CppObject *Item; // x22
  __int64 naturalAligment; // x10
  UnityEngine_Material_o *v51; // x22
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5939CEF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_Transform___);
    sub_21FFC50(&Method_BasicHelper_ExcludeNull_Transform___);
    sub_21FFC50(&BattleDataDefine_TypeInfo);
    sub_21FFC50(&BattleEffectUtility_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Append_Transform___);
    sub_21FFC50(&Method_System_Linq_Enumerable_DefaultIfEmpty_Transform___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___);
    sub_21FFC50(&Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
    sub_21FFC50(&System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Renderer__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_21FFC50(&UnityEngine_SkinnedMeshRenderer_TypeInfo);
    sub_21FFC50(&Method_BattleChangeSpecialShader___c__ChangeShader_b__13_0__);
    sub_21FFC50(&BattleChangeSpecialShader___c_TypeInfo);
    sub_21FFC50(&StringLiteral_16781/*"_Color"*/);
    sub_21FFC50(&StringLiteral_16763/*"_ChocoTex"*/);
    sub_21FFC50(&StringLiteral_5090/*"Custom/SoftEdgeUnlitCutZ_Choco"*/);
    sub_21FFC50(&StringLiteral_13350/*"Shaders/ChocoMap"*/);
    sub_21FFC50(&StringLiteral_16726/*"_AddColor"*/);
    byte_5939CEF = 1;
  }
  entity = 0;
  v4 = (UnityEngine_Object_o *)BattleChangeSpecialShader__GetModelBattleActor(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  klass = (BattleServantData_o *)UnityEngine_Object__op_Equality(v4, 0, 0);
  if ( ((unsigned __int8)klass & 1) == 0 )
  {
    if ( !v4 )
      goto LABEL_65;
    if ( BattleActorControl__isShadowServant((BattleActorControl_o *)v4, 0) )
    {
      klass = (BattleServantData_o *)v4[23].klass;
      if ( !klass )
        goto LABEL_65;
      klass = (BattleServantData_o *)BattleServantData__TryGetDisplayTypeDetailEntity(klass, &entity, 0);
      if ( ((unsigned __int8)klass & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_65;
        v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                    (System_Collections_IEnumerable_o *)this->fields.targetRendererList,
                                                                    (const MethodInfo_3855054 *)Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___);
        v10 = BattleChangeSpecialShader___c_TypeInfo;
        if ( !*(&BattleChangeSpecialShader___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BattleChangeSpecialShader___c_TypeInfo, v8);
          v10 = BattleChangeSpecialShader___c_TypeInfo;
        }
        static_fields = v10->static_fields;
        _9__13_0 = (System_Func_object__object__o *)static_fields->__9__13_0;
        if ( !_9__13_0 )
        {
          if ( !*(&v10->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v10, v8);
            static_fields = BattleChangeSpecialShader___c_TypeInfo->static_fields;
          }
          v13 = (Il2CppObject *)static_fields->__9;
          _9__13_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo);
          System_Func_object__object____ctor(
            _9__13_0,
            v13,
            Method_BattleChangeSpecialShader___c__ChangeShader_b__13_0__,
            0);
          v14 = BattleChangeSpecialShader___c_TypeInfo->static_fields;
          v14->__9__13_0 = (struct System_Func_SkinnedMeshRenderer__IEnumerable_Material___o *)_9__13_0;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v14->__9__13_0,
            (int32_t)_9__13_0,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20);
        }
        v22 = (System_Collections_Generic_IEnumerable_Material__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                                      v9,
                                                                      (System_Func_TSource__IEnumerable_TResult___o *)_9__13_0,
                                                                      (const MethodInfo_38607E4 *)Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
        v23 = entity;
        if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v21);
        BattleEffectUtility__SetShadowServantColorToMaterials(v22, v23, 0);
      }
      else
      {
        klass = (BattleServantData_o *)this->fields.targetRendererList;
        if ( !klass )
          goto LABEL_65;
        v47 = 0;
        while ( v47 < klass->fields.uniqueId )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)klass,
                   v47,
                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_Renderer__get_Item__);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
          {
            if ( Item )
            {
              naturalAligment = UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.naturalAligment;
              if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
                && (UnityEngine_SkinnedMeshRenderer_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
              {
                klass = (BattleServantData_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)Item, 0);
                v51 = (UnityEngine_Material_o *)klass;
                if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v6);
                if ( !v51 )
                  goto LABEL_65;
                UnityEngine_Material__set_color(
                  v51,
                  BattleDataDefine_TypeInfo->static_fields->ShadowServantDefaultColor,
                  0);
              }
            }
          }
          klass = (BattleServantData_o *)this->fields.targetRendererList;
          ++v47;
          if ( !klass )
            goto LABEL_65;
        }
      }
      if ( this->fields.isCreateShadowAura )
      {
        shadowAuraNodeTransformArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.shadowAuraNodeTransformArray;
        if ( !shadowAuraNodeTransformArray )
        {
          v25 = Method_System_Array_Empty_Transform___;
          v26 = *((_QWORD *)Method_System_Array_Empty_Transform___ + 7);
          if ( !v26 )
          {
            sub_2237B54(Method_System_Array_Empty_Transform___);
            v26 = v25[7];
          }
          v27 = *(_QWORD *)(v26 + 16);
          if ( (*(_WORD *)(v27 + 309) & 1) == 0 )
            v27 = sub_2237AF8(v7);
          if ( !*(_DWORD *)(v27 + 228) )
            *(__n128 *)&v7 = j_il2cpp_runtime_class_init_0(v27, v6);
          v28 = *(_QWORD *)(v25[7] + 16LL);
          if ( (*(_WORD *)(v28 + 309) & 1) == 0 )
            v28 = sub_2237AF8(v7);
          shadowAuraNodeTransformArray = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v28 + 184);
        }
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
        NodeFromName = (Il2CppObject *)TransformHelper__getNodeFromName(
                                         transform,
                                         this->fields.shadowAuraNodeName,
                                         0,
                                         0);
        appended = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Append_object_(
                                                                    shadowAuraNodeTransformArray,
                                                                    NodeFromName,
                                                                    (const MethodInfo_3834FF4 *)Method_System_Linq_Enumerable_Append_Transform___);
        v32 = BasicHelper__ExcludeNull_object_(
                appended,
                (const MethodInfo_37DD3BC *)Method_BasicHelper_ExcludeNull_Transform___);
        v33 = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        v35 = (System_Collections_Generic_IEnumerable_Transform__o *)System_Linq_Enumerable__DefaultIfEmpty_object__59018520(
                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)v32,
                                                                       v33,
                                                                       (const MethodInfo_3848D18 *)Method_System_Linq_Enumerable_DefaultIfEmpty_Transform___);
        shadowAuraList = this->fields.shadowAuraList;
        v37 = entity;
        if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v34);
        klass = (BattleServantData_o *)BattleEffectUtility__CreateShadowEffectAndAttachForEachNodes(v35, v37, 0);
        if ( !shadowAuraList )
          goto LABEL_65;
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)shadowAuraList,
          (System_Collections_Generic_IEnumerable_T__o *)klass,
          (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_GameObject__AddRange__);
      }
    }
    if ( BattleActorControl__isChocoServant((BattleActorControl_o *)v4, 0) )
    {
      v38 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5090/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0);
      klass = (BattleServantData_o *)UnityEngine_Resources__Load_object_(
                                       (System_String_o *)StringLiteral_13350/*"Shaders/ChocoMap"*/,
                                       (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_Texture2D___);
      targetRendererList = (System_Collections_Generic_List_object__o *)this->fields.targetRendererList;
      if ( targetRendererList )
      {
        v40 = (UnityEngine_Texture_o *)klass;
        v41 = 0;
        while ( 1 )
        {
          if ( v41 >= targetRendererList->fields._size )
            return;
          klass = (BattleServantData_o *)System_Collections_Generic_List_object___get_Item(
                                           targetRendererList,
                                           v41,
                                           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_Renderer__get_Item__);
          if ( klass )
          {
            v42 = UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.naturalAligment;
            if ( klass->klass->_2.naturalAligment >= (unsigned int)v42
              && (UnityEngine_SkinnedMeshRenderer_c *)klass->klass->_2.typeHierarchy[v42 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
            {
              klass = (BattleServantData_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)klass, 0);
              if ( !klass )
                goto LABEL_65;
              uniqueId = klass->fields.uniqueId;
              v44 = klass;
              if ( uniqueId >= 1 )
                break;
            }
          }
LABEL_48:
          ++v41;
          targetRendererList = (System_Collections_Generic_List_object__o *)this->fields.targetRendererList;
          if ( !targetRendererList )
            goto LABEL_65;
        }
        v45 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v45 >= uniqueId )
            sub_21FFED4(klass);
          v46 = (UnityEngine_Material_o *)*(&v44->fields.userSvtId.fields.currentCryptoKey + v45);
          if ( !v46 )
            break;
          UnityEngine_Material__set_shader(
            *((UnityEngine_Material_o **)&v44->fields.userSvtId.fields.currentCryptoKey + v45),
            v38,
            0);
          v53.fields.r = 1.0;
          v53.fields.g = 1.0;
          v53.fields.b = 1.0;
          v53.fields.a = 1.0;
          UnityEngine_Material__SetColor(v46, (System_String_o *)StringLiteral_16781/*"_Color"*/, v53, 0);
          v54.fields.r = 0.0;
          v54.fields.g = 0.0;
          v54.fields.b = 0.0;
          v54.fields.a = 0.0;
          UnityEngine_Material__SetColor(v46, (System_String_o *)StringLiteral_16726/*"_AddColor"*/, v54, 0);
          UnityEngine_Material__SetTexture(v46, (System_String_o *)StringLiteral_16763/*"_ChocoTex"*/, v40, 0);
          uniqueId = v44->fields.uniqueId;
          if ( (int)++v45 >= uniqueId )
            goto LABEL_48;
        }
      }
LABEL_65:
      sub_21FFECC(klass, v6);
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

  if ( (byte_5939CF0 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_21FFC50(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_5939CF0 = 1;
  }
  if ( this->fields.isNPEffect )
  {
    Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( Instance )
    {
      Instance = (System_Object_array *)Instance->m_Items[6];
      if ( Instance )
        return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)Instance,
                                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    }
LABEL_20:
    sub_21FFECC(Instance, v4);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  Instance = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_38BFEC0 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
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
        sub_21FFED4(Instance);
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

  if ( (byte_5939CEE & 1) == 0 )
  {
    sub_21FFC50(&System_Action_GameObject__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ExcludeNull_GameObject___);
    sub_21FFC50(&Method_BasicHelper_ForEach_GameObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_21FFC50(&Method_UnityEngine_Object_Destroy__);
    byte_5939CEE = 1;
  }
  v3 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.shadowAuraList,
         (const MethodInfo_37DD3BC *)Method_BasicHelper_ExcludeNull_GameObject___);
  v4 = (System_Action_object__o *)sub_21FFEBC(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(v4, 0, Method_UnityEngine_Object_Destroy__, 0);
  BasicHelper__ForEach_object_(
    v3,
    (System_Action_T__o *)v4,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_GameObject___);
  shadowAuraList = this->fields.shadowAuraList;
  if ( !shadowAuraList )
    sub_21FFECC(v5, v6);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5939CF2 & 1) == 0 )
  {
    sub_21FFC50(&BattleChangeSpecialShader___c_TypeInfo);
    byte_5939CF2 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BattleChangeSpecialShader___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleChangeSpecialShader___c_TypeInfo->static_fields->__9 = (struct BattleChangeSpecialShader___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleChangeSpecialShader___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, 0);
  return (System_Collections_Generic_IEnumerable_Material__o *)UnityEngine_Renderer__get_materials(
                                                                 (UnityEngine_Renderer_o *)x,
                                                                 0);
}