void __fastcall BattleChangeSpecialShader___ctor(BattleChangeSpecialShader_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B384F6 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Renderer___ctor__, method);
    sub_1BD3458(&System_Collections_Generic_List_Renderer__TypeInfo, v3);
    byte_4B384F6 = 1;
  }
  this->fields.isCheckUniqueId = 1;
  v4 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v4;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.targetRendererList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
  UnityEngine_Object_o *v23; // x20
  BattleServantData_o *klass; // x0
  __int64 v25; // x1
  int32_t effectId; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x22
  BattleChangeSpecialShader___c_c *v28; // x8
  System_Func_object__object__o *_9__10_0; // x23
  Il2CppObject *v30; // x24
  struct BattleChangeSpecialShader___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v38; // x0
  NpcServantDisplayTypeDetailEntity_o *v39; // x22
  System_Collections_Generic_IEnumerable_Material__o *v40; // x23
  int32_t v41; // w21
  Il2CppObject *Item; // x22
  __int64 methodPtr_low; // x10
  BattleDataDefine_c *v44; // x8
  UnityEngine_Material_o *v45; // x22
  UnityEngine_GameObject_o *ShadowEffect; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x22
  UnityEngine_Transform_o *v49; // x23
  __int64 v50; // x1
  System_Collections_Generic_List_object__o *v51; // x22
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x0
  NpcServantDisplayTypeDetailEntity_o *v62; // x21
  UnityEngine_Shader_o *v63; // x20
  System_Collections_Generic_List_object__o *targetRendererList; // x8
  UnityEngine_Texture_o *v65; // x21
  int32_t v66; // w22
  __int64 v67; // x10
  int uniqueId; // w8
  BattleServantData_o *v69; // x23
  unsigned int v70; // w26
  BattleServantData_c **v71; // x8
  UnityEngine_Material_o *v72; // x24
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B384F4 & 1) == 0 )
  {
    sub_1BD3458(&BattleDataDefine_TypeInfo, method);
    sub_1BD3458(&BattleEffectUtility_TypeInfo, v3);
    sub_1BD3458(&Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___, v4);
    sub_1BD3458(&Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___, v5);
    sub_1BD3458(&System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject___ctor__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_Renderer__get_Count__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_Renderer__get_Item__, v10);
    sub_1BD3458(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v12);
    sub_1BD3458(&Method_UnityEngine_Resources_Load_Texture2D___, v13);
    sub_1BD3458(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v14);
    sub_1BD3458(&UnityEngine_SkinnedMeshRenderer_TypeInfo, v15);
    sub_1BD3458(&Method_BattleChangeSpecialShader___c__ChangeShader_b__10_0__, v16);
    sub_1BD3458(&BattleChangeSpecialShader___c_TypeInfo, v17);
    sub_1BD3458(&StringLiteral_16365/*"_Color"*/, v18);
    sub_1BD3458(&StringLiteral_16346/*"_ChocoTex"*/, v19);
    sub_1BD3458(&StringLiteral_5030/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v20);
    sub_1BD3458(&StringLiteral_12912/*"Shaders/ChocoMap"*/, v21);
    sub_1BD3458(&StringLiteral_16321/*"_AddColor"*/, v22);
    byte_4B384F4 = 1;
  }
  entity = 0LL;
  v23 = (UnityEngine_Object_o *)BattleChangeSpecialShader__GetModelBattleActor(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  klass = (BattleServantData_o *)UnityEngine_Object__op_Equality(v23, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) == 0 )
  {
    if ( !v23 )
      goto LABEL_68;
    if ( BattleActorControl__isShadowServant((BattleActorControl_o *)v23, 0LL) )
    {
      klass = (BattleServantData_o *)v23[19].klass;
      if ( !klass )
        goto LABEL_68;
      klass = (BattleServantData_o *)BattleServantData__TryGetDisplayTypeDetailEntity(klass, &entity, 0LL);
      if ( ((unsigned __int8)klass & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_68;
        effectId = entity->fields.effectId;
        v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                     (System_Collections_IEnumerable_o *)this->fields.targetRendererList,
                                                                     (const MethodInfo_2F5A2A0 *)Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___);
        v28 = BattleChangeSpecialShader___c_TypeInfo;
        if ( !BattleChangeSpecialShader___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleChangeSpecialShader___c_TypeInfo);
          v28 = BattleChangeSpecialShader___c_TypeInfo;
        }
        _9__10_0 = (System_Func_object__object__o *)v28->static_fields->__9__10_0;
        if ( !_9__10_0 )
        {
          if ( !v28->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v28);
            v28 = BattleChangeSpecialShader___c_TypeInfo;
          }
          v30 = (Il2CppObject *)v28->static_fields->__9;
          _9__10_0 = (System_Func_object__object__o *)sub_1BD36A4(System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo);
          System_Func_object__object____ctor(
            _9__10_0,
            v30,
            Method_BattleChangeSpecialShader___c__ChangeShader_b__10_0__,
            0LL);
          static_fields = BattleChangeSpecialShader___c_TypeInfo->static_fields;
          static_fields->__9__10_0 = (struct System_Func_SkinnedMeshRenderer__IEnumerable_Material___o *)_9__10_0;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
            (int64_t)_9__10_0,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37);
        }
        v38 = System_Linq_Enumerable__SelectMany_object__object_(
                v27,
                (System_Func_TSource__IEnumerable_TResult___o *)_9__10_0,
                (const MethodInfo_2F653A0 *)Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
        v39 = entity;
        v40 = (System_Collections_Generic_IEnumerable_Material__o *)v38;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        BattleEffectUtility__SetShadowServantColorToMaterials(v40, v39, 0LL);
      }
      else
      {
        klass = (BattleServantData_o *)this->fields.targetRendererList;
        if ( !klass )
          goto LABEL_68;
        v41 = 0;
        while ( v41 < klass->fields.uniqueId )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)klass,
                   v41,
                   (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
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
                v44 = BattleDataDefine_TypeInfo;
                v45 = (UnityEngine_Material_o *)klass;
                if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                  v44 = BattleDataDefine_TypeInfo;
                }
                if ( !v45 )
                  goto LABEL_68;
                UnityEngine_Material__set_color(v45, v44->static_fields->ShadowServantDefaultColor, 0LL);
              }
            }
          }
          klass = (BattleServantData_o *)this->fields.targetRendererList;
          ++v41;
          if ( !klass )
            goto LABEL_68;
        }
        effectId = 0;
      }
      if ( this->fields.isCreateShadowAura )
      {
        klass = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !klass )
          goto LABEL_68;
        ShadowEffect = ServantAssetLoadManager__createShadowEffect((ServantAssetLoadManager_o *)klass, 0, effectId, 0LL);
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v23, 0LL);
        NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(
                                                 transform,
                                                 this->fields.shadowAuraNodeName,
                                                 0,
                                                 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        v49 = (UnityEngine_Transform_o *)klass;
        UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)klass, (UnityEngine_Transform_o *)NodeFromName, 0LL);
        v74.fields.x = 0.0;
        v74.fields.y = 0.0;
        v74.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(v49, v74, 0LL);
        if ( !byte_4B31946 )
        {
          sub_1BD3458(&UnityEngine_Vector3_TypeInfo, v50);
          byte_4B31946 = 1;
        }
        UnityEngine_Transform__set_localScale(v49, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        v51 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_GameObject__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v51,
          (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_GameObject___ctor__);
        if ( !v51 )
          goto LABEL_68;
        items = v51->fields._items;
        v59 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v51->fields._version;
        if ( !items )
          goto LABEL_68;
        size = v51->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v51,
            (Il2CppObject *)ShadowEffect,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
        }
        else
        {
          v61 = &items->obj.klass + size;
          v51->fields._size = size + 1;
          v61[4] = (Il2CppClass *)ShadowEffect;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v61 + 4), (int64_t)ShadowEffect, v52, v53, v54, v55, v56, v57);
        }
        v62 = entity;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        BattleEffectUtility__SetColorToShadowEffectParticles(
          (System_Collections_Generic_List_GameObject__o *)v51,
          v62,
          0LL);
      }
    }
    if ( BattleActorControl__isChocoServant((BattleActorControl_o *)v23, 0LL) )
    {
      v63 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5030/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
      klass = (BattleServantData_o *)UnityEngine_Resources__Load_object_(
                                       (System_String_o *)StringLiteral_12912/*"Shaders/ChocoMap"*/,
                                       (const MethodInfo_2FC6478 *)Method_UnityEngine_Resources_Load_Texture2D___);
      targetRendererList = (System_Collections_Generic_List_object__o *)this->fields.targetRendererList;
      if ( targetRendererList )
      {
        v65 = (UnityEngine_Texture_o *)klass;
        v66 = 0;
        while ( 1 )
        {
          if ( v66 >= targetRendererList->fields._size )
            return;
          klass = (BattleServantData_o *)System_Collections_Generic_List_object___get_Item(
                                           targetRendererList,
                                           v66,
                                           (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
          if ( klass )
          {
            v67 = LOBYTE(UnityEngine_SkinnedMeshRenderer_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(klass->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v67
              && (UnityEngine_SkinnedMeshRenderer_c *)klass->klass->_2.typeHierarchy[v67 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
            {
              klass = (BattleServantData_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)klass, 0LL);
              if ( !klass )
                goto LABEL_68;
              uniqueId = klass->fields.uniqueId;
              v69 = klass;
              if ( uniqueId >= 1 )
                break;
            }
          }
LABEL_67:
          targetRendererList = (System_Collections_Generic_List_object__o *)this->fields.targetRendererList;
          ++v66;
          if ( !targetRendererList )
            goto LABEL_68;
        }
        v70 = 0;
        while ( 1 )
        {
          if ( v70 >= uniqueId )
            sub_1BD36BC(klass, v25);
          v71 = &v69->klass + (int)v70;
          v72 = (UnityEngine_Material_o *)v71[4];
          if ( !v72 )
            break;
          UnityEngine_Material__set_shader((UnityEngine_Material_o *)v71[4], v63, 0LL);
          v75.fields.r = 1.0;
          v75.fields.g = 1.0;
          v75.fields.b = 1.0;
          v75.fields.a = 1.0;
          UnityEngine_Material__SetColor(v72, (System_String_o *)StringLiteral_16365/*"_Color"*/, v75, 0LL);
          v76.fields.r = 0.0;
          v76.fields.g = 0.0;
          v76.fields.b = 0.0;
          v76.fields.a = 0.0;
          UnityEngine_Material__SetColor(v72, (System_String_o *)StringLiteral_16321/*"_AddColor"*/, v76, 0LL);
          UnityEngine_Material__SetTexture(v72, (System_String_o *)StringLiteral_16346/*"_ChocoTex"*/, v65, 0LL);
          uniqueId = v69->fields.uniqueId;
          if ( (int)++v70 >= uniqueId )
            goto LABEL_67;
        }
      }
LABEL_68:
      sub_1BD36B4(klass, v25);
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

  if ( (byte_4B384F5 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1BD3458(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, v3);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v4);
    sub_1BD3458(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v5);
    byte_4B384F5 = 1;
  }
  if ( this->fields.isNPEffect )
  {
    Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( Instance )
    {
      Instance = (System_Object_array *)Instance->m_Items[8];
      if ( Instance )
        return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)Instance,
                                         (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    }
LABEL_20:
    sub_1BD36B4(Instance, v7);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_2FB6AC8 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
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
        sub_1BD36BC(Instance, v7);
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

  if ( (byte_4B384F7 & 1) == 0 )
  {
    sub_1BD3458(&BattleChangeSpecialShader___c_TypeInfo, v1);
    byte_4B384F7 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(BattleChangeSpecialShader___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleChangeSpecialShader___c_TypeInfo->static_fields->__9 = (struct BattleChangeSpecialShader___c_o *)v2;
  sub_1BD33FC(
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


System_Collections_Generic_IEnumerable_Material__o *__fastcall BattleChangeSpecialShader___c___ChangeShader_b__10_0(
        BattleChangeSpecialShader___c_o *this,
        UnityEngine_SkinnedMeshRenderer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
  return (System_Collections_Generic_IEnumerable_Material__o *)UnityEngine_Renderer__get_materials(
                                                                 (UnityEngine_Renderer_o *)x,
                                                                 0LL);
}