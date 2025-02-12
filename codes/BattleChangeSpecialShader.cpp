void __fastcall BattleChangeSpecialShader___ctor(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_List_object__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BC8E4F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Renderer___ctor__, v3);
    sub_1C1ABD4(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    sub_1C1ABD4(&System_Collections_Generic_List_Renderer__TypeInfo, v5);
    byte_4BC8E4F = 1;
  }
  this->fields.isCheckUniqueId = 1;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v6;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.targetRendererList, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.shadowAuraList = (struct System_Collections_Generic_List_GameObject__o *)v13;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.shadowAuraList, (int64_t)v13, v14, v15, v16, v17, v18, v19);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  UnityEngine_Object_o *v24; // x20
  BattleServantData_o *klass; // x0
  __int64 v26; // x1
  long double inited; // q0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21
  BattleChangeSpecialShader___c_c *v29; // x8
  System_Func_object__object__o *_9__13_0; // x22
  Il2CppObject *v31; // x23
  struct BattleChangeSpecialShader___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v39; // x0
  NpcServantDisplayTypeDetailEntity_o *v40; // x21
  System_Collections_Generic_IEnumerable_Material__o *v41; // x22
  System_Collections_Generic_IEnumerable_TSource__o *shadowAuraNodeTransformArray; // x21
  _QWORD *v43; // x21
  __int64 v44; // x8
  __int64 v45; // x0
  __int64 v46; // x0
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *NodeFromName; // x0
  System_Collections_Generic_IEnumerable_T__o *appended; // x0
  System_Collections_Generic_IEnumerable_T__o *v50; // x21
  Il2CppObject *v51; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  struct System_Collections_Generic_List_GameObject__o *shadowAuraList; // x21
  NpcServantDisplayTypeDetailEntity_o *v54; // x22
  System_Collections_Generic_IEnumerable_Transform__o *v55; // x23
  UnityEngine_Shader_o *v56; // x20
  System_Collections_Generic_List_object__o *targetRendererList; // x8
  UnityEngine_Texture_o *v58; // x21
  int32_t v59; // w22
  __int64 v60; // x10
  int uniqueId; // w8
  BattleServantData_o *v62; // x23
  unsigned int v63; // w26
  BattleServantData_c **v64; // x8
  UnityEngine_Material_o *v65; // x24
  int32_t v66; // w21
  Il2CppObject *Item; // x22
  __int64 methodPtr_low; // x10
  BattleDataDefine_c *v69; // x8
  UnityEngine_Material_o *v70; // x22
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BC8E4D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Array_Empty_Transform___, method);
    sub_1C1ABD4(&Method_BasicHelper_ExcludeNull_Transform___, v3);
    sub_1C1ABD4(&BattleDataDefine_TypeInfo, v4);
    sub_1C1ABD4(&BattleEffectUtility_TypeInfo, v5);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Append_Transform___, v6);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_DefaultIfEmpty_Transform___, v7);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___, v8);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___, v9);
    sub_1C1ABD4(&System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__AddRange__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Renderer__get_Count__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Renderer__get_Item__, v13);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v14);
    sub_1C1ABD4(&Method_UnityEngine_Resources_Load_Texture2D___, v15);
    sub_1C1ABD4(&UnityEngine_SkinnedMeshRenderer_TypeInfo, v16);
    sub_1C1ABD4(&Method_BattleChangeSpecialShader___c__ChangeShader_b__13_0__, v17);
    sub_1C1ABD4(&BattleChangeSpecialShader___c_TypeInfo, v18);
    sub_1C1ABD4(&StringLiteral_16444/*"_Color"*/, v19);
    sub_1C1ABD4(&StringLiteral_16425/*"_ChocoTex"*/, v20);
    sub_1C1ABD4(&StringLiteral_5045/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v21);
    sub_1C1ABD4(&StringLiteral_12975/*"Shaders/ChocoMap"*/, v22);
    sub_1C1ABD4(&StringLiteral_16400/*"_AddColor"*/, v23);
    byte_4BC8E4D = 1;
  }
  entity = 0LL;
  v24 = (UnityEngine_Object_o *)BattleChangeSpecialShader__GetModelBattleActor(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  klass = (BattleServantData_o *)UnityEngine_Object__op_Equality(v24, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) == 0 )
  {
    if ( !v24 )
      goto LABEL_65;
    if ( BattleActorControl__isShadowServant((BattleActorControl_o *)v24, 0LL) )
    {
      klass = (BattleServantData_o *)v24[19].klass;
      if ( !klass )
        goto LABEL_65;
      klass = (BattleServantData_o *)BattleServantData__TryGetDisplayTypeDetailEntity(klass, &entity, 0LL);
      if ( ((unsigned __int8)klass & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_65;
        v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                     (System_Collections_IEnumerable_o *)this->fields.targetRendererList,
                                                                     (const MethodInfo_2FC80C8 *)Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___);
        v29 = BattleChangeSpecialShader___c_TypeInfo;
        if ( !BattleChangeSpecialShader___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleChangeSpecialShader___c_TypeInfo);
          v29 = BattleChangeSpecialShader___c_TypeInfo;
        }
        _9__13_0 = (System_Func_object__object__o *)v29->static_fields->__9__13_0;
        if ( !_9__13_0 )
        {
          if ( !v29->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v29);
            v29 = BattleChangeSpecialShader___c_TypeInfo;
          }
          v31 = (Il2CppObject *)v29->static_fields->__9;
          _9__13_0 = (System_Func_object__object__o *)sub_1C1AE20(System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo);
          System_Func_object__object____ctor(
            _9__13_0,
            v31,
            Method_BattleChangeSpecialShader___c__ChangeShader_b__13_0__,
            0LL);
          static_fields = BattleChangeSpecialShader___c_TypeInfo->static_fields;
          static_fields->__9__13_0 = (struct System_Func_SkinnedMeshRenderer__IEnumerable_Material___o *)_9__13_0;
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
            (int64_t)_9__13_0,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38);
        }
        v39 = System_Linq_Enumerable__SelectMany_object__object_(
                v28,
                (System_Func_TSource__IEnumerable_TResult___o *)_9__13_0,
                (const MethodInfo_2FD31C8 *)Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
        v40 = entity;
        v41 = (System_Collections_Generic_IEnumerable_Material__o *)v39;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        BattleEffectUtility__SetShadowServantColorToMaterials(v41, v40, 0LL);
      }
      else
      {
        klass = (BattleServantData_o *)this->fields.targetRendererList;
        if ( !klass )
          goto LABEL_65;
        v66 = 0;
        while ( v66 < klass->fields.uniqueId )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)klass,
                   v66,
                   (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
          {
            if ( Item )
            {
              methodPtr_low = LOBYTE(UnityEngine_SkinnedMeshRenderer_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
                && (UnityEngine_SkinnedMeshRenderer_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
              {
                klass = (BattleServantData_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)Item, 0LL);
                v69 = BattleDataDefine_TypeInfo;
                v70 = (UnityEngine_Material_o *)klass;
                if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                  v69 = BattleDataDefine_TypeInfo;
                }
                if ( !v70 )
                  goto LABEL_65;
                UnityEngine_Material__set_color(v70, v69->static_fields->ShadowServantDefaultColor, 0LL);
              }
            }
          }
          klass = (BattleServantData_o *)this->fields.targetRendererList;
          ++v66;
          if ( !klass )
            goto LABEL_65;
        }
      }
      if ( this->fields.isCreateShadowAura )
      {
        shadowAuraNodeTransformArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.shadowAuraNodeTransformArray;
        if ( !shadowAuraNodeTransformArray )
        {
          v43 = Method_System_Array_Empty_Transform___;
          v44 = *((_QWORD *)Method_System_Array_Empty_Transform___ + 7);
          if ( !v44 )
          {
            sub_1C6CB0C(Method_System_Array_Empty_Transform___);
            v44 = v43[7];
          }
          v45 = *(_QWORD *)(v44 + 16);
          if ( (*(_BYTE *)(v45 + 309) & 1) == 0 )
            v45 = sub_1C6CAB0(inited);
          if ( !*(_DWORD *)(v45 + 224) )
            inited = j_il2cpp_runtime_class_init_0(v45);
          v46 = *(_QWORD *)(v43[7] + 16LL);
          if ( (*(_BYTE *)(v46 + 309) & 1) == 0 )
            v46 = sub_1C6CAB0(inited);
          shadowAuraNodeTransformArray = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v46 + 184);
        }
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v24, 0LL);
        NodeFromName = (Il2CppObject *)TransformHelper__getNodeFromName(
                                         transform,
                                         this->fields.shadowAuraNodeName,
                                         0,
                                         0LL);
        appended = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Append_object_(
                                                                    shadowAuraNodeTransformArray,
                                                                    NodeFromName,
                                                                    (const MethodInfo_2FACF44 *)Method_System_Linq_Enumerable_Append_Transform___);
        v50 = BasicHelper__ExcludeNull_object_(
                appended,
                (const MethodInfo_2F8AD50 *)Method_BasicHelper_ExcludeNull_Transform___);
        v51 = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        v52 = System_Linq_Enumerable__DefaultIfEmpty_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v50,
                v51,
                (const MethodInfo_2FBC528 *)Method_System_Linq_Enumerable_DefaultIfEmpty_Transform___);
        shadowAuraList = this->fields.shadowAuraList;
        v54 = entity;
        v55 = (System_Collections_Generic_IEnumerable_Transform__o *)v52;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        klass = (BattleServantData_o *)BattleEffectUtility__CreateShadowEffectAndAttachForEachNodes(v55, v54, 0LL);
        if ( !shadowAuraList )
          goto LABEL_65;
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)shadowAuraList,
          (System_Collections_Generic_IEnumerable_T__o *)klass,
          (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_GameObject__AddRange__);
      }
    }
    if ( BattleActorControl__isChocoServant((BattleActorControl_o *)v24, 0LL) )
    {
      v56 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5045/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
      klass = (BattleServantData_o *)UnityEngine_Resources__Load_object_(
                                       (System_String_o *)StringLiteral_12975/*"Shaders/ChocoMap"*/,
                                       (const MethodInfo_303479C *)Method_UnityEngine_Resources_Load_Texture2D___);
      targetRendererList = (System_Collections_Generic_List_object__o *)this->fields.targetRendererList;
      if ( targetRendererList )
      {
        v58 = (UnityEngine_Texture_o *)klass;
        v59 = 0;
        while ( 1 )
        {
          if ( v59 >= targetRendererList->fields._size )
            return;
          klass = (BattleServantData_o *)System_Collections_Generic_List_object___get_Item(
                                           targetRendererList,
                                           v59,
                                           (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
          if ( klass )
          {
            v60 = LOBYTE(UnityEngine_SkinnedMeshRenderer_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(klass->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v60
              && (UnityEngine_SkinnedMeshRenderer_c *)klass->klass->_2.typeHierarchy[v60 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
            {
              klass = (BattleServantData_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)klass, 0LL);
              if ( !klass )
                goto LABEL_65;
              uniqueId = klass->fields.uniqueId;
              v62 = klass;
              if ( uniqueId >= 1 )
                break;
            }
          }
LABEL_48:
          targetRendererList = (System_Collections_Generic_List_object__o *)this->fields.targetRendererList;
          ++v59;
          if ( !targetRendererList )
            goto LABEL_65;
        }
        v63 = 0;
        while ( 1 )
        {
          if ( v63 >= uniqueId )
            sub_1C1AE38(klass, v26);
          v64 = &v62->klass + (int)v63;
          v65 = (UnityEngine_Material_o *)v64[4];
          if ( !v65 )
            break;
          UnityEngine_Material__set_shader((UnityEngine_Material_o *)v64[4], v56, 0LL);
          v72.fields.r = 1.0;
          v72.fields.g = 1.0;
          v72.fields.b = 1.0;
          v72.fields.a = 1.0;
          UnityEngine_Material__SetColor(v65, (System_String_o *)StringLiteral_16444/*"_Color"*/, v72, 0LL);
          v73.fields.r = 0.0;
          v73.fields.g = 0.0;
          v73.fields.b = 0.0;
          v73.fields.a = 0.0;
          UnityEngine_Material__SetColor(v65, (System_String_o *)StringLiteral_16400/*"_AddColor"*/, v73, 0LL);
          UnityEngine_Material__SetTexture(v65, (System_String_o *)StringLiteral_16425/*"_ChocoTex"*/, v58, 0LL);
          uniqueId = v62->fields.uniqueId;
          if ( (int)++v63 >= uniqueId )
            goto LABEL_48;
        }
      }
LABEL_65:
      sub_1C1AE30(klass, v26);
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

  if ( (byte_4BC8E4E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1C1ABD4(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v5);
    byte_4BC8E4E = 1;
  }
  if ( this->fields.isNPEffect )
  {
    Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( Instance )
    {
      Instance = (System_Object_array *)Instance->m_Items[8];
      if ( Instance )
        return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)Instance,
                                         (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    }
LABEL_20:
    sub_1C1AE30(Instance, v7);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_3024DEC *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
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
        sub_1C1AE38(Instance, v7);
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


void __fastcall BattleChangeSpecialShader__OnDestroy(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_T__o *v7; // x20
  System_Action_object__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_GameObject__o *shadowAuraList; // x8
  int32_t size; // w2
  int v13; // w9

  if ( (byte_4BC8E4C & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_GameObject__TypeInfo, method);
    sub_1C1ABD4(&Method_BasicHelper_ExcludeNull_GameObject___, v3);
    sub_1C1ABD4(&Method_BasicHelper_ForEach_GameObject___, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_1C1ABD4(&Method_UnityEngine_Object_Destroy__, v6);
    byte_4BC8E4C = 1;
  }
  v7 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.shadowAuraList,
         (const MethodInfo_2F8AD50 *)Method_BasicHelper_ExcludeNull_GameObject___);
  v8 = (System_Action_object__o *)sub_1C1AE20(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(v8, 0LL, Method_UnityEngine_Object_Destroy__, 0LL);
  BasicHelper__ForEach_object_(
    v7,
    (System_Action_T__o *)v8,
    (const MethodInfo_2F8C3EC *)Method_BasicHelper_ForEach_GameObject___);
  shadowAuraList = this->fields.shadowAuraList;
  if ( !shadowAuraList )
    sub_1C1AE30(v9, v10);
  size = shadowAuraList->fields._size;
  v13 = shadowAuraList->fields._version + 1;
  shadowAuraList->fields._size = 0;
  shadowAuraList->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)shadowAuraList->fields._items, 0, size, 0LL);
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


void __fastcall BattleChangeSpecialShader___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC8E50 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleChangeSpecialShader___c_TypeInfo, v1);
    byte_4BC8E50 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(BattleChangeSpecialShader___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleChangeSpecialShader___c_TypeInfo->static_fields->__9 = (struct BattleChangeSpecialShader___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)BattleChangeSpecialShader___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall BattleChangeSpecialShader___c___ctor(BattleChangeSpecialShader___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_Material__o *__fastcall BattleChangeSpecialShader___c___ChangeShader_b__13_0(
        BattleChangeSpecialShader___c_o *this,
        UnityEngine_SkinnedMeshRenderer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return (System_Collections_Generic_IEnumerable_Material__o *)UnityEngine_Renderer__get_materials(
                                                                 (UnityEngine_Renderer_o *)x,
                                                                 0LL);
}