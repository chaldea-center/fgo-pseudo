void __fastcall BattleChangeSpecialShader___ctor(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B17530 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_Renderer__TypeInfo, v5, v6);
    byte_4B17530 = 1;
  }
  this->fields.isCheckUniqueId = 1;
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_Renderer__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.targetRendererList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleChangeSpecialShader__ChangeShader(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  UnityEngine_Object_o *v45; // x20
  BattleServantData_o *klass; // x0
  __int64 v47; // x1
  int32_t effectId; // w21
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x22
  BattleChangeSpecialShader___c_c *v53; // x8
  System_Func_object__object__o *_9__10_0; // x23
  Il2CppObject *v55; // x24
  struct BattleChangeSpecialShader___c_StaticFields *static_fields; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v63; // x0
  __int64 v64; // x1
  NpcServantDisplayTypeDetailEntity_o *v65; // x22
  System_Collections_Generic_IEnumerable_Material__o *v66; // x23
  int32_t v67; // w21
  __int64 v68; // x1
  Il2CppObject *Item; // x22
  __int64 methodPtr_low; // x10
  BattleDataDefine_c *v71; // x8
  UnityEngine_Material_o *v72; // x22
  UnityEngine_GameObject_o *ShadowEffect; // x21
  UnityEngine_Transform_o *transform; // x0
  __int64 v75; // x1
  UnityEngine_Object_o *NodeFromName; // x22
  UnityEngine_Transform_o *v77; // x23
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  System_Collections_Generic_List_object__o *v83; // x22
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  struct System_Object_array *items; // x8
  _QWORD *v91; // x9
  __int64 size; // x10
  Il2CppClass **v93; // x0
  __int64 v94; // x1
  NpcServantDisplayTypeDetailEntity_o *v95; // x21
  UnityEngine_Shader_o *v96; // x20
  System_Collections_Generic_List_object__o *targetRendererList; // x8
  UnityEngine_Texture_o *v98; // x21
  int32_t v99; // w22
  __int64 v100; // x10
  int uniqueId; // w8
  BattleServantData_o *v102; // x23
  unsigned int v103; // w26
  BattleServantData_c **v104; // x8
  UnityEngine_Material_o *v105; // x24
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v108; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v109; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1752E & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, method, v2);
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___, v8, v9);
    sub_1BCA7E0(&System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__get_Count__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__get_Item__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v20, v21);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_Texture2D___, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v26, v27);
    sub_1BCA7E0(&UnityEngine_SkinnedMeshRenderer_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_BattleChangeSpecialShader___c__ChangeShader_b__10_0__, v30, v31);
    sub_1BCA7E0(&BattleChangeSpecialShader___c_TypeInfo, v32, v33);
    sub_1BCA7E0(&StringLiteral_16346/*"_Color"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_16327/*"_ChocoTex"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_5022/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_12893/*"Shaders/ChocoMap"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_16302/*"_AddColor"*/, v42, v43);
    byte_4B1752E = 1;
  }
  entity = 0LL;
  v45 = (UnityEngine_Object_o *)BattleChangeSpecialShader__GetModelBattleActor(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
  klass = (BattleServantData_o *)UnityEngine_Object__op_Equality(v45, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) == 0 )
  {
    if ( !v45 )
      goto LABEL_68;
    if ( BattleActorControl__isShadowServant((BattleActorControl_o *)v45, 0LL) )
    {
      klass = (BattleServantData_o *)v45[19].klass;
      if ( !klass )
        goto LABEL_68;
      klass = (BattleServantData_o *)BattleServantData__TryGetDisplayTypeDetailEntity(klass, &entity, 0LL);
      if ( ((unsigned __int8)klass & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_68;
        effectId = entity->fields.effectId;
        v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                     (System_Collections_IEnumerable_o *)this->fields.targetRendererList,
                                                                     (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___);
        v53 = BattleChangeSpecialShader___c_TypeInfo;
        if ( !BattleChangeSpecialShader___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleChangeSpecialShader___c_TypeInfo, v49);
          v53 = BattleChangeSpecialShader___c_TypeInfo;
        }
        _9__10_0 = (System_Func_object__object__o *)v53->static_fields->__9__10_0;
        if ( !_9__10_0 )
        {
          if ( !v53->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v53, v49);
            v53 = BattleChangeSpecialShader___c_TypeInfo;
          }
          v55 = (Il2CppObject *)v53->static_fields->__9;
          _9__10_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                        System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo,
                                                        v49,
                                                        v50,
                                                        v51);
          System_Func_object__object____ctor(
            _9__10_0,
            v55,
            Method_BattleChangeSpecialShader___c__ChangeShader_b__10_0__,
            0LL);
          static_fields = BattleChangeSpecialShader___c_TypeInfo->static_fields;
          static_fields->__9__10_0 = (struct System_Func_SkinnedMeshRenderer__IEnumerable_Material___o *)_9__10_0;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
            (int64_t)_9__10_0,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62);
        }
        v63 = System_Linq_Enumerable__SelectMany_object__object_(
                v52,
                (System_Func_TSource__IEnumerable_TResult___o *)_9__10_0,
                (const MethodInfo_2F45FF4 *)Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
        v65 = entity;
        v66 = (System_Collections_Generic_IEnumerable_Material__o *)v63;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v64);
        BattleEffectUtility__SetShadowServantColorToMaterials(v66, v65, 0LL);
      }
      else
      {
        klass = (BattleServantData_o *)this->fields.targetRendererList;
        if ( !klass )
          goto LABEL_68;
        v67 = 0;
        while ( v67 < klass->fields.uniqueId )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)klass,
                   v67,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_Renderer__get_Item__);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v68);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
          {
            if ( Item )
            {
              methodPtr_low = LOBYTE(UnityEngine_SkinnedMeshRenderer_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
                && (UnityEngine_SkinnedMeshRenderer_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
              {
                klass = (BattleServantData_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)Item, 0LL);
                v71 = BattleDataDefine_TypeInfo;
                v72 = (UnityEngine_Material_o *)klass;
                if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v47);
                  v71 = BattleDataDefine_TypeInfo;
                }
                if ( !v72 )
                  goto LABEL_68;
                UnityEngine_Material__set_color(v72, v71->static_fields->ShadowServantDefaultColor, 0LL);
              }
            }
          }
          klass = (BattleServantData_o *)this->fields.targetRendererList;
          ++v67;
          if ( !klass )
            goto LABEL_68;
        }
        effectId = 0;
      }
      if ( this->fields.isCreateShadowAura )
      {
        klass = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !klass )
          goto LABEL_68;
        ShadowEffect = ServantAssetLoadManager__createShadowEffect((ServantAssetLoadManager_o *)klass, 0, effectId, 0LL);
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v45, 0LL);
        NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(
                                                 transform,
                                                 this->fields.shadowAuraNodeName,
                                                 0,
                                                 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v75);
        klass = (BattleServantData_o *)UnityEngine_Object__op_Equality(NodeFromName, 0LL, 0LL);
        if ( ((unsigned __int8)klass & 1) != 0 )
        {
          klass = (BattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          NodeFromName = (UnityEngine_Object_o *)klass;
        }
        if ( !ShadowEffect )
          goto LABEL_68;
        klass = (BattleServantData_o *)UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        if ( !klass )
          goto LABEL_68;
        v77 = (UnityEngine_Transform_o *)klass;
        UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)klass, (UnityEngine_Transform_o *)NodeFromName, 0LL);
        v107.fields.x = 0.0;
        v107.fields.y = 0.0;
        v107.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(v77, v107, 0LL);
        if ( !byte_4B109C6 )
        {
          sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v78, v79);
          byte_4B109C6 = 1;
        }
        UnityEngine_Transform__set_localScale(v77, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        v83 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_GameObject__TypeInfo,
                                                             v80,
                                                             v81,
                                                             v82);
        System_Collections_Generic_List_object____ctor(
          v83,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
        if ( !v83 )
          goto LABEL_68;
        items = v83->fields._items;
        v91 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v83->fields._version;
        if ( !items )
          goto LABEL_68;
        size = v83->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v83,
            (Il2CppObject *)ShadowEffect,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
        }
        else
        {
          v93 = &items->obj.klass + size;
          v83->fields._size = size + 1;
          v93[4] = (Il2CppClass *)ShadowEffect;
          sub_1BCA784((PartyOrganizationUtility_o *)(v93 + 4), (int64_t)ShadowEffect, v84, v85, v86, v87, v88, v89);
        }
        v95 = entity;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v94);
        BattleEffectUtility__SetColorToShadowEffectParticles(
          (System_Collections_Generic_List_GameObject__o *)v83,
          v95,
          0LL);
      }
    }
    if ( BattleActorControl__isChocoServant((BattleActorControl_o *)v45, 0LL) )
    {
      v96 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5022/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
      klass = (BattleServantData_o *)UnityEngine_Resources__Load_object_(
                                       (System_String_o *)StringLiteral_12893/*"Shaders/ChocoMap"*/,
                                       (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      targetRendererList = (System_Collections_Generic_List_object__o *)this->fields.targetRendererList;
      if ( targetRendererList )
      {
        v98 = (UnityEngine_Texture_o *)klass;
        v99 = 0;
        while ( 1 )
        {
          if ( v99 >= targetRendererList->fields._size )
            return;
          klass = (BattleServantData_o *)System_Collections_Generic_List_object___get_Item(
                                           targetRendererList,
                                           v99,
                                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_Renderer__get_Item__);
          if ( klass )
          {
            v100 = LOBYTE(UnityEngine_SkinnedMeshRenderer_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(klass->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v100
              && (UnityEngine_SkinnedMeshRenderer_c *)klass->klass->_2.typeHierarchy[v100 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
            {
              klass = (BattleServantData_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)klass, 0LL);
              if ( !klass )
                goto LABEL_68;
              uniqueId = klass->fields.uniqueId;
              v102 = klass;
              if ( uniqueId >= 1 )
                break;
            }
          }
LABEL_67:
          targetRendererList = (System_Collections_Generic_List_object__o *)this->fields.targetRendererList;
          ++v99;
          if ( !targetRendererList )
            goto LABEL_68;
        }
        v103 = 0;
        while ( 1 )
        {
          if ( v103 >= uniqueId )
            sub_1BCAA44(klass, v47);
          v104 = &v102->klass + (int)v103;
          v105 = (UnityEngine_Material_o *)v104[4];
          if ( !v105 )
            break;
          UnityEngine_Material__set_shader((UnityEngine_Material_o *)v104[4], v96, 0LL);
          v108.fields.r = 1.0;
          v108.fields.g = 1.0;
          v108.fields.b = 1.0;
          v108.fields.a = 1.0;
          UnityEngine_Material__SetColor(v105, (System_String_o *)StringLiteral_16346/*"_Color"*/, v108, 0LL);
          v109.fields.r = 0.0;
          v109.fields.g = 0.0;
          v109.fields.b = 0.0;
          v109.fields.a = 0.0;
          UnityEngine_Material__SetColor(v105, (System_String_o *)StringLiteral_16302/*"_AddColor"*/, v109, 0LL);
          UnityEngine_Material__SetTexture(v105, (System_String_o *)StringLiteral_16327/*"_ChocoTex"*/, v98, 0LL);
          uniqueId = v102->fields.uniqueId;
          if ( (int)++v103 >= uniqueId )
            goto LABEL_67;
        }
      }
LABEL_68:
      sub_1BCAA3C(klass, v47);
    }
  }
}


BattleActorControl_o *__fastcall BattleChangeSpecialShader__GetModelBattleActor(
        BattleChangeSpecialShader_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Object_array *Instance; // x0
  __int64 v11; // x1
  int max_length; // w8
  System_Object_array *v14; // x20
  unsigned int v15; // w22
  Il2CppClass **v16; // x8
  BattleActorControl_o *v17; // x21

  if ( (byte_4B1752F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v8, v9);
    byte_4B1752F = 1;
  }
  if ( this->fields.isNPEffect )
  {
    Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( Instance )
    {
      Instance = (System_Object_array *)Instance->m_Items[8];
      if ( Instance )
        return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)Instance,
                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    }
LABEL_20:
    sub_1BCAA3C(Instance, v11);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  Instance = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_2F97640 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
  if ( !Instance )
    goto LABEL_20;
  max_length = Instance->max_length;
  v14 = Instance;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1BCAA44(Instance, v11);
      v16 = &v14->obj.klass + (int)v15;
      v17 = (BattleActorControl_o *)v16[4];
      if ( !v17 )
        break;
      Instance = (System_Object_array *)BattleActorControl__getServantId((BattleActorControl_o *)v16[4], 0LL);
      if ( (_DWORD)Instance == this->fields.sourceServantId
        && (!this->fields.isCheckUniqueId || v17->fields.uniqueID == this->fields.targetId) )
      {
        return v17;
      }
      max_length = v14->max_length;
      if ( (int)++v15 >= max_length )
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


void __fastcall BattleChangeSpecialShader___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B17531 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleChangeSpecialShader___c_TypeInfo, v1, v2);
    byte_4B17531 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleChangeSpecialShader___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleChangeSpecialShader___c_TypeInfo->static_fields->__9 = (struct BattleChangeSpecialShader___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleChangeSpecialShader___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BattleChangeSpecialShader___c___ctor(BattleChangeSpecialShader___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_Material__o *__fastcall BattleChangeSpecialShader___c___ChangeShader_b__10_0(
        BattleChangeSpecialShader___c_o *this,
        UnityEngine_SkinnedMeshRenderer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return (System_Collections_Generic_IEnumerable_Material__o *)UnityEngine_Renderer__get_materials(
                                                                 (UnityEngine_Renderer_o *)x,
                                                                 0LL);
}