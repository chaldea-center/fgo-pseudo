void BattleServantHpShiftComponent___ctor(BattleServantHpShiftComponent_o *this, const MethodInfo *method)
{
  this->fields.decagramNumber = 10;
  this->fields.imageType = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleServantHpShiftComponent__AlignShiftIcons(BattleServantHpShiftComponent_o *this, const MethodInfo *method)
{
  __int64 svtData; // x0
  _BOOL4 v4; // w25
  int32_t v5; // w20
  int32_t v6; // w26
  float shiftPhaseIconInitPosX; // s8
  struct BattleServantHpShiftComponent_ShiftIconData_array *allIconDataList; // x8
  int32_t v9; // w21
  int v10; // w27
  int32_t max_length; // w9
  __int64 v12; // x8
  UnityEngine_GameObject_o *v13; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x23
  __int64 v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int v23; // w8
  int32_t v24; // w10
  struct BattleServantHpShiftComponent_ShiftIconData_array *v25; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  Il2CppClass **v32; // x0
  BattleServantHpShiftComponent_ShiftIconData_o *v33; // x8
  UnityEngine_Object_o *iconObject; // x22
  struct BattleServantHpShiftComponent_ShiftIconData_array *v35; // x8
  BattleServantHpShiftComponent_ShiftIconData_o *v36; // x8
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x4
  UISprite_o *Component_object; // x22
  int32_t ShiftEffectIndex; // w0
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x2
  __int64 v43; // x23
  float v44; // s9
  struct BattleServantHpShiftComponent_ShiftIconData_array *v45; // x10
  __int64 v46; // x8
  __int64 v47; // x9
  float v48; // s11
  BattleServantHpShiftComponent_ShiftIconData_o *v49; // x10
  float v50; // s10
  float v51; // s12
  float v52; // s8
  struct BattleServantHpShiftComponent_ShiftIconData_array *v53; // x8
  BattleServantHpShiftComponent_ShiftIconData_o *v54; // x8
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  struct BattleServantHpShiftComponent_ShiftIconData_array *v61; // x8
  BattleServantHpShiftComponent_ShiftIconData_o *v62; // x8
  __int64 v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  __int64 v66; // x8
  __int64 v67; // x0
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF1D9C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&BattleServantHpShiftComponent_ShiftIconData_TypeInfo);
    byte_4CF1D9C = 1;
  }
  svtData = (__int64)this->fields.svtData;
  if ( !svtData )
    goto LABEL_70;
  if ( BattleServantData__GetCurrentShiftPos((BattleServantData_o *)svtData, 0) >= this->fields.decagramNumber )
  {
    svtData = (__int64)this->fields.svtData;
    if ( !svtData )
      goto LABEL_70;
    v4 = !BattleServantData__IsShiftablePhaseServant((BattleServantData_o *)svtData, 0);
  }
  else
  {
    v4 = 0;
  }
  svtData = (__int64)this->fields.svtData;
  if ( !svtData
    || ((svtData = BattleServantData__GetCurrentShiftPhaseIndex((BattleServantData_o *)svtData, 0),
         v5 = svtData,
         v6 = svtData - 1,
         (int)svtData < 1)
      ? (shiftPhaseIconInitPosX = 0.0)
      : (shiftPhaseIconInitPosX = this->fields.shiftPhaseIconInitPosX),
        (allIconDataList = this->fields.allIconDataList) == 0) )
  {
LABEL_70:
    sub_1C7BD40(svtData, method);
  }
  v9 = 0;
  v10 = -(int)svtData;
  while ( 1 )
  {
    max_length = allIconDataList->max_length;
    if ( v9 >= max_length )
      break;
    if ( v9 >= (unsigned int)max_length )
      goto LABEL_72;
    if ( !allIconDataList->m_Items[v9] )
    {
      v12 = 40;
      if ( v9 < v5 )
        v12 = 72;
      v13 = *(UnityEngine_GameObject_o **)((char *)&this->klass + v12);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v13, transform, 0, 0);
      v16 = sub_1C7BD34(BattleServantHpShiftComponent_ShiftIconData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v16, 0);
      if ( !v16 )
        goto LABEL_70;
      *(_QWORD *)(v16 + 32) = Object;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v16 + 32), (int32_t)Object, v17, v18, v19, v20, v21, v22);
      v23 = v10 + v9;
      if ( v9 >= v5 )
      {
        v24 = v6;
      }
      else
      {
        v23 = 0;
        v24 = v9;
      }
      *(_DWORD *)(v16 + 16) = v9 < v5;
      *(_DWORD *)(v16 + 20) = v23;
      *(_DWORD *)(v16 + 24) = v24;
      v25 = this->fields.allIconDataList;
      if ( !v25 )
        goto LABEL_70;
      svtData = sub_1C7BC24(v16, v25->obj.klass->_1.element_class);
      if ( !svtData )
      {
        v67 = sub_1C7BD64(0);
        sub_1C7BC10(v67, 0);
      }
      if ( (unsigned int)v9 >= LODWORD(v25->max_length) )
        goto LABEL_72;
      v32 = &v25->obj.klass + v9;
      v32[4] = (Il2CppClass *)v16;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v32 + 4), v16, v26, v27, v28, v29, v30, v31);
      allIconDataList = this->fields.allIconDataList;
      if ( !allIconDataList )
        goto LABEL_70;
    }
    if ( (unsigned int)v9 >= LODWORD(allIconDataList->max_length) )
      goto LABEL_72;
    v33 = allIconDataList->m_Items[v9];
    if ( !v33 )
      goto LABEL_70;
    iconObject = (UnityEngine_Object_o *)v33->fields.iconObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    svtData = UnityEngine_Object__op_Equality(iconObject, 0, 0);
    if ( (svtData & 1) == 0 )
    {
      v35 = this->fields.allIconDataList;
      if ( !v35 )
        goto LABEL_70;
      if ( (unsigned int)v9 >= LODWORD(v35->max_length) )
        goto LABEL_72;
      v36 = v35->m_Items[v9];
      if ( !v36 )
        goto LABEL_70;
      svtData = (__int64)v36->fields.iconObject;
      if ( !svtData )
        goto LABEL_70;
      Component_object = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)svtData,
                                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( v9 >= v5 )
      {
        ShiftEffectIndex = BattleServantHpShiftComponent__GetShiftEffectIndex(this, v9, v37);
        svtData = (__int64)BattleServantHpShiftComponent__getSpriteName(this, ShiftEffectIndex, v41);
      }
      else
      {
        svtData = (__int64)BattleServantHpShiftComponent__GetShiftPhaseIconSpriteName(this, v9 + 2, 1, 3, v38);
      }
      method = (const MethodInfo *)svtData;
      if ( !Component_object )
        goto LABEL_70;
      UISprite__set_spriteName(Component_object, (System_String_o *)svtData, 0);
      UIWidget__set_depth((UIWidget_o *)Component_object, v9 + this->fields.defaultDepth, 0);
      svtData = (__int64)BattleServantHpShiftComponent__GetShiftIconAdjustment(
                           this,
                           Component_object->fields.mSpriteName,
                           v42);
      if ( svtData )
      {
        v43 = svtData;
        UIWidget__set_width((UIWidget_o *)Component_object, *(_DWORD *)(svtData + 24), 0);
        UIWidget__set_height((UIWidget_o *)Component_object, *(_DWORD *)(v43 + 28), 0);
        svtData = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
        if ( !svtData )
          goto LABEL_70;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)svtData,
          *(UnityEngine_Vector3_o *)(v43 + 32),
          0);
        v44 = (float)*(int *)(v43 + 44);
      }
      else
      {
        v44 = 0.0;
      }
      v45 = this->fields.allIconDataList;
      v46 = 52;
      if ( v9 < v5 )
        v46 = 84;
      v47 = 48;
      if ( v9 < v5 )
        v47 = 80;
      v48 = v9 ? v44 : -v44;
      if ( !v45 )
        goto LABEL_70;
      if ( (unsigned int)v9 >= LODWORD(v45->max_length) )
        goto LABEL_72;
      v49 = v45->m_Items[v9];
      if ( !v49 )
        goto LABEL_70;
      svtData = (__int64)v49->fields.iconObject;
      if ( !svtData )
        goto LABEL_70;
      v50 = *(float *)((char *)&this->klass + v47);
      v51 = *(float *)((char *)&this->klass + v46);
      svtData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)svtData, 0);
      if ( !svtData )
        goto LABEL_70;
      v52 = shiftPhaseIconInitPosX + v48;
      v68.fields.y = v51 * (float)v9;
      v68.fields.z = 0.0;
      v68.fields.x = v52;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtData, v68, 0);
      v53 = this->fields.allIconDataList;
      if ( !v53 )
        goto LABEL_70;
      if ( (unsigned int)v9 >= LODWORD(v53->max_length) )
        goto LABEL_72;
      v54 = v53->m_Items[v9];
      if ( !v54 )
        goto LABEL_70;
      svtData = (__int64)v54->fields.iconObject;
      if ( !svtData )
        goto LABEL_70;
      shiftPhaseIconInitPosX = v52 + (float)(v44 + v50);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtData, !v4, 0);
      if ( v9 >= v6 )
      {
        v61 = this->fields.allIconDataList;
        if ( !v61 )
          goto LABEL_70;
        if ( (unsigned int)v9 >= LODWORD(v61->max_length) )
LABEL_72:
          sub_1C7BD48(svtData);
        v62 = v61->m_Items[v9];
        if ( !v62 )
          goto LABEL_70;
        svtData = (__int64)this->fields.currentShiftIconList;
        if ( !svtData )
          goto LABEL_70;
        method = (const MethodInfo *)v62->fields.iconObject;
        v63 = *(_QWORD *)(svtData + 16);
        v64 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*(_DWORD *)(svtData + 28);
        if ( !v63 )
          goto LABEL_70;
        v65 = *(int *)(svtData + 24);
        if ( (unsigned int)v65 >= *(_DWORD *)(v63 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)svtData,
            (Il2CppObject *)method,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
        }
        else
        {
          v66 = v63 + 8 * v65;
          *(_DWORD *)(svtData + 24) = v65 + 1;
          *(_QWORD *)(v66 + 32) = method;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v66 + 32), (int32_t)method, v55, v56, v57, v58, v59, v60);
        }
      }
    }
    allIconDataList = this->fields.allIconDataList;
    ++v9;
    if ( !allIconDataList )
      goto LABEL_70;
  }
}


float BattleServantHpShiftComponent__CreateDecagramEffect(
        BattleServantHpShiftComponent_o *this,
        bool isSuperBoss,
        const MethodInfo *method)
{
  BattleDataDefine_c *v5; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  AssetData_o *AssetStorage; // x0
  __int64 v8; // x1
  Il2CppObject *Object_object__51713432; // x21
  float v10; // s8
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Object_o *Object; // x21
  Il2CppObject *Component_object; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4CF1DA5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BattleServantHpShiftDecagramEffectComponent___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_20185/*"hp_crystaleffect_superboss_1_1"*/);
    sub_1C7BAE8(&StringLiteral_20184/*"hp_crystaleffect_1_1"*/);
    byte_4CF1DA5 = 1;
  }
  v5 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v5 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v5->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
  if ( !AssetStorage )
    goto LABEL_24;
  Object_object__51713432 = AssetData__GetObject_object__51713432(
                              AssetStorage,
                              (System_String_o *)StringLiteral_20184/*"hp_crystaleffect_1_1"*/,
                              (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = 0.0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51713432, 0, 0) )
  {
    AssetStorage = (AssetData_o *)this->fields.shiftIconDecagramSprite;
    if ( !AssetStorage )
      goto LABEL_24;
    AssetStorage = (AssetData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)AssetStorage, 0);
    if ( !AssetStorage )
      goto LABEL_24;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)AssetStorage, 0);
    Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)this,
                                       (UnityEngine_GameObject_o *)Object_object__51713432,
                                       parent,
                                       0,
                                       0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(Object, 0, 0);
    if ( ((unsigned __int8)AssetStorage & 1) != 0 )
    {
      if ( !Object )
        goto LABEL_24;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Object,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BattleServantHpShiftDecagramEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)AssetStorage & 1) != 0 )
      {
        if ( Component_object )
        {
          Component_object[13].klass = (Il2CppClass *)this;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&Component_object[13], (int32_t)this, v14, v15, v16, v17, v18, v19);
          v10 = *((float *)&Component_object[12].monitor + 1);
          if ( isSuperBoss )
            CommonEffectComponent__Init_44251640(
              (CommonEffectComponent_o *)Component_object,
              (System_String_o *)StringLiteral_20185/*"hp_crystaleffect_superboss_1_1"*/,
              0,
              0,
              0);
          return v10;
        }
LABEL_24:
        sub_1C7BD40(AssetStorage, v8);
      }
    }
  }
  return v10;
}


float BattleServantHpShiftComponent__CreateShiftPhaseEffect(
        BattleServantHpShiftComponent_o *this,
        BattleServantHpShiftComponent_EffectData_o *effectData,
        System_Action_int__o *callBack,
        const MethodInfo *method)
{
  __int64 v7; // x20
  void *AssetNameByPrefixAndIconIndex; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x23
  float v17; // s8
  System_String_o *prefixAsset; // x24
  AssetData_o *AssetStorage; // x0
  System_String_o *prefixEffect; // x1
  AssetData_o *v21; // x22
  System_Nullable_int__o v22; // x3
  System_Nullable_int__o v23; // x4
  const MethodInfo *v24; // x5
  UnityEngine_GameObject_o *v25; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *Object; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  Il2CppObject *v34; // x19
  System_Action_o *v35; // x21
  Il2CppObject *v37; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4CF1DA4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ActionExtensions_Call_int___);
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_IndexValue_GameObject___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_TryGetComponent_BattleServantHpShiftPhaseEffectComponent___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_BattleServantHpShiftComponent___c__DisplayClass43_0__CreateShiftPhaseEffect_b__0__);
    sub_1C7BAE8(&BattleServantHpShiftComponent___c__DisplayClass43_0_TypeInfo);
    byte_4CF1DA4 = 1;
  }
  component = 0;
  v37 = 0;
  v7 = sub_1C7BD34(BattleServantHpShiftComponent___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_25;
  *(_QWORD *)(v7 + 16) = callBack;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)callBack, v10, v11, v12, v13, v14, v15);
  v16 = BasicHelper__IndexValue_object__51767468(
          (System_Collections_Generic_List_T__o *)this->fields.currentShiftIconList,
          0,
          0,
          (const MethodInfo_315E8AC *)Method_BasicHelper_IndexValue_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetNameByPrefixAndIconIndex = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, 0, 0);
  v17 = 0.0;
  if ( ((unsigned __int8)AssetNameByPrefixAndIconIndex & 1) == 0 )
  {
    if ( !effectData )
      goto LABEL_25;
    prefixAsset = effectData->fields.prefixAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage(prefixAsset, 0);
    prefixEffect = effectData->fields.prefixEffect;
    v21 = AssetStorage;
    v22 = 0;
    v23 = 0;
    AssetNameByPrefixAndIconIndex = BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
                                      this,
                                      prefixEffect,
                                      1,
                                      v22,
                                      v23,
                                      v24);
    if ( !v21 )
      goto LABEL_25;
    AssetNameByPrefixAndIconIndex = AssetData__GetObject_object__51713432(
                                      v21,
                                      (System_String_o *)AssetNameByPrefixAndIconIndex,
                                      (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
    if ( !v16 )
      goto LABEL_25;
    v25 = (UnityEngine_GameObject_o *)AssetNameByPrefixAndIconIndex;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0);
    Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v25, transform, 0, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetNameByPrefixAndIconIndex = (void *)UnityEngine_Object__op_Equality(Object, 0, 0);
    if ( ((unsigned __int8)AssetNameByPrefixAndIconIndex & 1) == 0 )
    {
      if ( !Object )
        goto LABEL_25;
      v17 = 0.0;
      if ( UnityEngine_GameObject__TryGetComponent_object_(
             (UnityEngine_GameObject_o *)Object,
             &component,
             (const MethodInfo_31C8358 *)Method_UnityEngine_GameObject_TryGetComponent_BattleServantHpShiftPhaseEffectComponent___) )
      {
        AssetNameByPrefixAndIconIndex = component;
        if ( !component )
          goto LABEL_25;
        component[13].klass = (Il2CppClass *)this;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)((char *)AssetNameByPrefixAndIconIndex + 208),
          (int32_t)this,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        if ( !component )
          goto LABEL_25;
        v17 = *((float *)&component[12].monitor + 1);
      }
      if ( !UnityEngine_GameObject__TryGetComponent_object_(
              (UnityEngine_GameObject_o *)Object,
              &v37,
              (const MethodInfo_31C8358 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
      {
        ActionExtensions__Call_int_(
          *(System_Action_T__o **)(v7 + 16),
          0,
          (const MethodInfo_30B92F0 *)Method_ActionExtensions_Call_int___);
        return v17;
      }
      v34 = v37;
      v35 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(
        v35,
        (Il2CppObject *)v7,
        Method_BattleServantHpShiftComponent___c__DisplayClass43_0__CreateShiftPhaseEffect_b__0__,
        0);
      if ( v34 )
      {
        ((void (__fastcall *)(Il2CppObject *, __int64, System_Action_o *, const MethodInfo *))v34->klass->vtable[8].methodPtr)(
          v34,
          1,
          v35,
          v34->klass->vtable[8].method);
        return v17;
      }
LABEL_25:
      sub_1C7BD40(AssetNameByPrefixAndIconIndex, v9);
    }
  }
  return v17;
}


System_Collections_IEnumerator_o *BattleServantHpShiftComponent__FadeOutShiftIcon(
        BattleServantHpShiftComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  __int64 v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CF1DA2 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_TypeInfo);
    byte_4CF1DA2 = 1;
  }
  v5 = sub_1C7BD34(BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(float *)(v5 + 40) = duration;
  return (System_Collections_IEnumerator_o *)v5;
}


System_String_o *BattleServantHpShiftComponent__GetBreakShiftIconEffectName(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  System_Nullable_int__o v6; // x3
  System_Nullable_int__o v7; // x4

  if ( (byte_4CF1D95 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20194/*"hp_iconeffect"*/);
    byte_4CF1D95 = 1;
  }
  v6 = 0;
  v7 = 0;
  return BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
           this,
           (System_String_o *)StringLiteral_20194/*"hp_iconeffect"*/,
           index,
           v6,
           v7,
           v3);
}


System_String_o *BattleServantHpShiftComponent__GetEmptyIconSpriteName(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Nullable_int__o p_overwriteImageNo; // x0
  System_Nullable_int__o v6; // x3
  System_Nullable_int__o v7; // x4
  const MethodInfo *v8; // x5
  System_Nullable_int__o overwriteImageNo; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CF1D94 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Nullable_int___ctor__);
    sub_1C7BAE8(&StringLiteral_20191/*"hp_icon"*/);
    byte_4CF1D94 = 1;
  }
  p_overwriteImageNo = (System_Nullable_int__o)&overwriteImageNo;
  overwriteImageNo = 0;
  System_Nullable_int____ctor(p_overwriteImageNo, 0, (const MethodInfo_3964C54 *)Method_System_Nullable_int___ctor__);
  v6 = overwriteImageNo;
  v7 = 0;
  return BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
           this,
           (System_String_o *)StringLiteral_20191/*"hp_icon"*/,
           index,
           v6,
           v7,
           v8);
}


System_String_o *BattleServantHpShiftComponent__GetShiftBeforeEffectName(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  System_Nullable_int__o v6; // x3
  System_Nullable_int__o v7; // x4

  if ( (byte_4CF1D96 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20195/*"hp_iconeffect_before"*/);
    byte_4CF1D96 = 1;
  }
  v6 = 0;
  v7 = 0;
  return BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
           this,
           (System_String_o *)StringLiteral_20195/*"hp_iconeffect_before"*/,
           index,
           v6,
           v7,
           v3);
}


int32_t BattleServantHpShiftComponent__GetShiftEffectIndex(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct BattleServantHpShiftComponent_ShiftIconData_array *allIconDataList; // x10
  int v4; // w9
  __int64 max_length; // x8
  BattleServantHpShiftComponent_ShiftIconData_o **i; // x9

  allIconDataList = this->fields.allIconDataList;
  if ( !allIconDataList )
    sub_1C7BD40(this, index);
  v4 = 2;
  if ( (int)allIconDataList->max_length >= 1 )
  {
    max_length = (unsigned int)allIconDataList->max_length;
    for ( i = allIconDataList->m_Items; !*i || (*i)->fields.iconType != 1; ++i )
    {
      if ( !--max_length )
      {
        v4 = 2;
        return v4 + index;
      }
    }
    v4 = 1;
  }
  return v4 + index;
}


BattleCommonSettings_ShiftIconAdjustment_o *BattleServantHpShiftComponent__GetShiftIconAdjustment(
        BattleServantHpShiftComponent_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *shiftIconAdjustmentArray; // x19
  System_Func_object__bool__o *v15; // x20

  if ( (byte_4CF1D9A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_BattleCommonSettings_ShiftIconAdjustment___);
    sub_1C7BAE8(&System_Func_BattleCommonSettings_ShiftIconAdjustment__bool__TypeInfo);
    sub_1C7BAE8(&Method_BattleServantHpShiftComponent___c__DisplayClass32_0__GetShiftIconAdjustment_b__0__);
    sub_1C7BAE8(&BattleServantHpShiftComponent___c__DisplayClass32_0_TypeInfo);
    byte_4CF1D9A = 1;
  }
  v5 = sub_1C7BD34(BattleServantHpShiftComponent___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  *(_QWORD *)(v5 + 16) = spriteName;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)spriteName, v8, v9, v10, v11, v12, v13);
  shiftIconAdjustmentArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.shiftIconAdjustmentArray;
  if ( !shiftIconAdjustmentArray )
    return 0;
  v15 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_BattleCommonSettings_ShiftIconAdjustment__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_BattleServantHpShiftComponent___c__DisplayClass32_0__GetShiftIconAdjustment_b__0__,
    0);
  return (BattleCommonSettings_ShiftIconAdjustment_o *)System_Linq_Enumerable__FirstOrDefault_object__52006308(
                                                         shiftIconAdjustmentArray,
                                                         (System_Func_TSource__bool__o *)v15,
                                                         (const MethodInfo_3198DA4 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleCommonSettings_ShiftIconAdjustment___);
}


System_String_o *BattleServantHpShiftComponent__GetShiftIconName(
        int32_t inputImageType,
        int32_t imageNo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CF1D93 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20191/*"hp_icon"*/);
    byte_4CF1D93 = 1;
  }
  return BattleServantHpShiftComponent__MakeImageSuffixAddedStr(
           (System_String_o *)StringLiteral_20191/*"hp_icon"*/,
           inputImageType,
           imageNo,
           v3);
}


System_String_o *BattleServantHpShiftComponent__GetShiftPhaseIconSpriteName(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        int32_t inputImageNo,
        int32_t inputImageType,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  struct BattleServantData_o *svtData; // x8
  System_Collections_Generic_IEnumerable_TSource__o *OverwriteShiftIconArray_k__BackingField; // x21
  System_Func_object__bool__o *v15; // x22
  Il2CppObject *v16; // x0

  if ( (byte_4CF1D97 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShiftIcon___);
    sub_1C7BAE8(&System_Func_EnemyScriptParam_OverwriteShiftIcon__bool__TypeInfo);
    sub_1C7BAE8(&Method_BattleServantHpShiftComponent___c__DisplayClass29_0__GetShiftPhaseIconSpriteName_b__0__);
    sub_1C7BAE8(&BattleServantHpShiftComponent___c__DisplayClass29_0_TypeInfo);
    byte_4CF1D97 = 1;
  }
  v9 = sub_1C7BD34(BattleServantHpShiftComponent___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 || (*(_DWORD *)(v9 + 16) = index, (svtData = this->fields.svtData) == 0) )
    sub_1C7BD40(v10, v11);
  OverwriteShiftIconArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)svtData->fields._OverwriteShiftIconArray_k__BackingField;
  if ( OverwriteShiftIconArray_k__BackingField )
  {
    v15 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_EnemyScriptParam_OverwriteShiftIcon__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v15,
      (Il2CppObject *)v9,
      Method_BattleServantHpShiftComponent___c__DisplayClass29_0__GetShiftPhaseIconSpriteName_b__0__,
      0);
    v16 = System_Linq_Enumerable__FirstOrDefault_object__52006308(
            OverwriteShiftIconArray_k__BackingField,
            (System_Func_TSource__bool__o *)v15,
            (const MethodInfo_3198DA4 *)Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShiftIcon___);
    if ( v16 )
    {
      inputImageType = HIDWORD(v16[1].klass);
      inputImageNo = (int32_t)v16[1].monitor;
    }
  }
  return BattleServantHpShiftComponent__GetShiftIconName(inputImageType, inputImageNo, v12);
}


void BattleServantHpShiftComponent__ImportFromBattleCommonSettings(
        BattleServantHpShiftComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double inited; // q0
  GrandQuestFolderBoardItem_o *p_shiftIconAdjustmentArray; // x19
  struct BattleCommonSettings_ShiftIconAdjustment_array *shiftIconAdjustmentArray; // t1
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0
  GrandQuestFolderBoardItem_c **v16; // x8
  GrandQuestFolderBoardItem_c *v17; // x1
  BattleDataDefine_c *v18; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  Il2CppObject *v20; // x20
  _BOOL8 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  GrandQuestFolderBoardItem_c *monitor; // x1
  Il2CppObject *data; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4CF1D91 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Empty_BattleCommonSettings_ShiftIconAdjustment___);
    sub_1C7BAE8(&Method_AssetManager_TryGetAssetObject_BattleCommonSettings___);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3114/*"BattleCommonSettings"*/);
    byte_4CF1D91 = 1;
  }
  data = 0;
  shiftIconAdjustmentArray = this->fields.shiftIconAdjustmentArray;
  p_shiftIconAdjustmentArray = (GrandQuestFolderBoardItem_o *)&this->fields.shiftIconAdjustmentArray;
  if ( !shiftIconAdjustmentArray )
  {
    v12 = Method_System_Array_Empty_BattleCommonSettings_ShiftIconAdjustment___;
    v13 = *((_QWORD *)Method_System_Array_Empty_BattleCommonSettings_ShiftIconAdjustment___ + 7);
    if ( !v13 )
    {
      sub_1C51BD8(Method_System_Array_Empty_BattleCommonSettings_ShiftIconAdjustment___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C51B7C(inited);
    if ( !*(_DWORD *)(v14 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v14);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C51B7C(inited);
    v16 = *(GrandQuestFolderBoardItem_c ***)(v15 + 184);
    v17 = *v16;
    p_shiftIconAdjustmentArray->klass = *v16;
    sub_1C7BA8C(p_shiftIconAdjustmentArray, (int32_t)v17, v2, v3, v4, v5, v6, v7);
    v18 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v18 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v18->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__TryGetAssetObject_object_(
           &data,
           ASSET_BATTLE_COMMON,
           (System_String_o *)StringLiteral_3114/*"BattleCommonSettings"*/,
           (const MethodInfo_3151938 *)Method_AssetManager_TryGetAssetObject_BattleCommonSettings___) )
    {
      v20 = data;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v21 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v20, 0, 0);
      if ( !v21 )
      {
        if ( !data )
          sub_1C7BD40(v21, v22);
        monitor = (GrandQuestFolderBoardItem_c *)data[1].monitor;
        if ( monitor )
        {
          p_shiftIconAdjustmentArray->klass = monitor;
          sub_1C7BA8C(p_shiftIconAdjustmentArray, (int32_t)monitor, v23, v24, v25, v26, v27, v28);
        }
      }
    }
  }
}


bool BattleServantHpShiftComponent__IsDecagramIndex(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  return this->fields.decagramNumber - 1 == index;
}


// local variable allocation has failed, the output may be wrong!
bool BattleServantHpShiftComponent__IsIconActive(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t decagramNumber; // w8
  struct UISprite_o *shiftIconDecagramSprite; // x0
  Il2CppObject *v8; // x19

  if ( (byte_4CF1DA1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_IndexValue_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1DA1 = 1;
  }
  decagramNumber = this->fields.decagramNumber;
  if ( decagramNumber <= index )
    return 0;
  if ( decagramNumber - 1 == index )
  {
    shiftIconDecagramSprite = this->fields.shiftIconDecagramSprite;
    if ( shiftIconDecagramSprite )
      return UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)shiftIconDecagramSprite, 0);
LABEL_13:
    sub_1C7BD40(shiftIconDecagramSprite, *(_QWORD *)&index);
  }
  v8 = BasicHelper__IndexValue_object__51767468(
         (System_Collections_Generic_List_T__o *)this->fields.currentShiftIconList,
         index,
         0,
         (const MethodInfo_315E8AC *)Method_BasicHelper_IndexValue_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  shiftIconDecagramSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
  if ( ((unsigned __int8)shiftIconDecagramSprite & 1) == 0 )
    return 0;
  if ( !v8 )
    goto LABEL_13;
  return UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)v8, 0);
}


bool BattleServantHpShiftComponent__IsShiftPhaseIconActive(
        BattleServantHpShiftComponent_o *this,
        const MethodInfo *method)
{
  long double inited; // q0
  BattleServantHpShiftComponent_o *v3; // x19
  struct BattleServantHpShiftComponent_ShiftIconData_array *allIconDataList; // x10
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x8
  __int64 max_length; // x9
  BattleServantHpShiftComponent_ShiftIconData_o **m_Items; // x10
  BattleServantHpShiftComponent_ShiftIconData_o *v11; // x11

  v3 = this;
  if ( (byte_4CF1DA9 & 1) == 0 )
  {
    this = (BattleServantHpShiftComponent_o *)sub_1C7BAE8(&Method_System_Array_Empty_BattleServantHpShiftComponent_ShiftIconData___);
    byte_4CF1DA9 = 1;
  }
  allIconDataList = v3->fields.allIconDataList;
  if ( !allIconDataList )
  {
    v5 = Method_System_Array_Empty_BattleServantHpShiftComponent_ShiftIconData___;
    v6 = *((_QWORD *)Method_System_Array_Empty_BattleServantHpShiftComponent_ShiftIconData___ + 7);
    if ( !v6 )
    {
      sub_1C51BD8(Method_System_Array_Empty_BattleServantHpShiftComponent_ShiftIconData___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1C51B7C(inited);
    if ( !*(_DWORD *)(v7 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v7);
    this = *(BattleServantHpShiftComponent_o **)(v5[7] + 16LL);
    if ( (*((_BYTE *)&this[2].fields.decagramNumber + 5) & 1) == 0 )
      this = (BattleServantHpShiftComponent_o *)sub_1C51B7C(inited);
    allIconDataList = **(struct BattleServantHpShiftComponent_ShiftIconData_array ***)&this[1].fields.addPos;
    if ( !allIconDataList )
      sub_1C7BD40(this, method);
  }
  v8 = 0;
  max_length = (unsigned int)allIconDataList->max_length;
  if ( (int)allIconDataList->max_length > 0 )
  {
    v8 = 0;
    m_Items = allIconDataList->m_Items;
    do
    {
      if ( max_length == v8 )
        sub_1C7BD48(this);
      v11 = m_Items[v8];
      if ( v11 && v11->fields.iconType == 1 )
        break;
      ++v8;
    }
    while ( max_length != v8 );
  }
  return v8 < (int)max_length;
}


System_String_o *BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
        BattleServantHpShiftComponent_o *this,
        System_String_o *prefix,
        int32_t index,
        System_Nullable_int__o overwriteImageNo,
        System_Nullable_int__o overwriteImageType,
        const MethodInfo *method)
{
  unsigned __int64 v8; // x22
  __int64 v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  struct BattleServantData_o *svtData; // x8
  System_Collections_Generic_IEnumerable_TSource__o *OverwriteShiftIconArray_k__BackingField; // x25
  System_Func_object__bool__o *v17; // x22
  Il2CppObject *v18; // x0
  unsigned __int64 v19; // x1

  LODWORD(v8) = index;
  if ( (byte_4CF1D98 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShiftIcon___);
    sub_1C7BAE8(&System_Func_EnemyScriptParam_OverwriteShiftIcon__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C7BAE8(&Method_System_Nullable_int__get_HasValue__);
    sub_1C7BAE8(&Method_BattleServantHpShiftComponent___c__DisplayClass30_0__MakeAssetNameByPrefixAndIconIndex_b__0__);
    sub_1C7BAE8(&BattleServantHpShiftComponent___c__DisplayClass30_0_TypeInfo);
    byte_4CF1D98 = 1;
  }
  v11 = sub_1C7BD34(BattleServantHpShiftComponent___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 || (*(_DWORD *)(v11 + 16) = v8, (svtData = this->fields.svtData) == 0) )
    sub_1C7BD40(v12, v13);
  OverwriteShiftIconArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)svtData->fields._OverwriteShiftIconArray_k__BackingField;
  if ( OverwriteShiftIconArray_k__BackingField )
  {
    v17 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_EnemyScriptParam_OverwriteShiftIcon__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v17,
      (Il2CppObject *)v11,
      Method_BattleServantHpShiftComponent___c__DisplayClass30_0__MakeAssetNameByPrefixAndIconIndex_b__0__,
      0);
    v18 = System_Linq_Enumerable__FirstOrDefault_object__52006308(
            OverwriteShiftIconArray_k__BackingField,
            (System_Func_TSource__bool__o *)v17,
            (const MethodInfo_3198DA4 *)Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShiftIcon___);
    if ( overwriteImageNo.fields.hasValue )
    {
      v8 = HIDWORD(*(unsigned __int64 *)&overwriteImageNo);
    }
    else if ( v18 )
    {
      LODWORD(v8) = v18[1].monitor;
    }
    else
    {
      LODWORD(v8) = *(_DWORD *)(v11 + 16);
    }
    goto LABEL_15;
  }
  if ( !overwriteImageNo.fields.hasValue )
  {
    v18 = 0;
LABEL_15:
    if ( overwriteImageType.fields.hasValue )
    {
      v19 = HIDWORD(*(unsigned __int64 *)&overwriteImageType);
      return BattleServantHpShiftComponent__MakeImageSuffixAddedStr(prefix, v19, v8, v14);
    }
    if ( v18 )
    {
      LODWORD(v19) = HIDWORD(v18[1].klass);
      return BattleServantHpShiftComponent__MakeImageSuffixAddedStr(prefix, v19, v8, v14);
    }
LABEL_19:
    LODWORD(v19) = this->fields.imageType;
    return BattleServantHpShiftComponent__MakeImageSuffixAddedStr(prefix, v19, v8, v14);
  }
  v8 = HIDWORD(*(unsigned __int64 *)&overwriteImageNo);
  if ( !overwriteImageType.fields.hasValue )
    goto LABEL_19;
  v19 = HIDWORD(*(unsigned __int64 *)&overwriteImageType);
  return BattleServantHpShiftComponent__MakeImageSuffixAddedStr(prefix, v19, v8, v14);
}


System_String_o *BattleServantHpShiftComponent__MakeImageSuffixAddedStr(
        System_String_o *prefix,
        int32_t inputImageType,
        int32_t imageNo,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+8h] [xbp-38h] BYREF
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CF1D99 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25455/*"{0}_{1}_{2}"*/);
    byte_4CF1D99 = 1;
  }
  v11 = inputImageType;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v10 = imageNo;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format_64218288((System_String_o *)StringLiteral_25455/*"{0}_{1}_{2}"*/, (Il2CppObject *)prefix, v7, v8, 0);
}


float BattleServantHpShiftComponent__PlayShiftEffectBefore(
        BattleServantHpShiftComponent_o *this,
        BattleServantParamComponent_o *statusUi,
        const MethodInfo *method)
{
  BattleServantHpShiftComponent_o *v4; // x19
  struct BattleServantData_o *svtData; // x9
  int32_t shiftDeckIndex; // w8
  struct System_Int32_array *shiftDeckList; // x9
  int32_t v8; // w20
  bool v9; // w1
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_object__o *currentShiftIconList; // x0
  Il2CppObject *Item; // x21
  BattleDataDefine_c *v14; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  AssetData_o *AssetStorage; // x21
  const MethodInfo *v17; // x2
  int32_t ShiftEffectIndex; // w0
  const MethodInfo *v19; // x2
  Il2CppObject *Object_object__51713432; // x21
  UnityEngine_Transform_o *transform; // x0

  v4 = this;
  if ( (byte_4CF1DA6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    this = (BattleServantHpShiftComponent_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1DA6 = 1;
  }
  svtData = v4->fields.svtData;
  if ( !svtData )
    goto LABEL_28;
  shiftDeckIndex = svtData->fields.shiftDeckIndex;
  if ( shiftDeckIndex )
  {
    shiftDeckList = svtData->fields.shiftDeckList;
    if ( !shiftDeckList )
      goto LABEL_28;
    v8 = LODWORD(shiftDeckList->max_length) - shiftDeckIndex;
  }
  else
  {
    v8 = 0;
  }
  if ( v4->fields.decagramNumber - 1 == v8 )
  {
    if ( statusUi )
    {
      v9 = ((__int64 (__fastcall *)(BattleServantParamComponent_o *, const MethodInfo *, const MethodInfo *))statusUi->klass->vtable._9_IsSuperBossStatusUi.methodPtr)(
             statusUi,
             statusUi->klass->vtable._9_IsSuperBossStatusUi.method,
             method)
         & 1;
      return BattleServantHpShiftComponent__CreateDecagramEffect(v4, v9, v10);
    }
LABEL_28:
    sub_1C7BD40(this, statusUi);
  }
  currentShiftIconList = (System_Collections_Generic_List_object__o *)v4->fields.currentShiftIconList;
  if ( currentShiftIconList && currentShiftIconList->fields._size > v8 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             currentShiftIconList,
             v8,
             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      v14 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v14 = BattleDataDefine_TypeInfo;
      }
      ASSET_BATTLE_COMMON = v14->static_fields->ASSET_BATTLE_COMMON;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
      ShiftEffectIndex = BattleServantHpShiftComponent__GetShiftEffectIndex(v4, v8, v17);
      this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__GetShiftBeforeEffectName(
                                                  v4,
                                                  ShiftEffectIndex,
                                                  v19);
      if ( !AssetStorage )
        goto LABEL_28;
      Object_object__51713432 = AssetData__GetObject_object__51713432(
                                  AssetStorage,
                                  (System_String_o *)this,
                                  (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51713432, 0, 0) )
      {
        this = (BattleServantHpShiftComponent_o *)v4->fields.currentShiftIconList;
        if ( !this )
          goto LABEL_28;
        this = (BattleServantHpShiftComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v8,
                                                    (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !this )
          goto LABEL_28;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        BaseMonoBehaviour__createObject(
          (BaseMonoBehaviour_o *)v4,
          (UnityEngine_GameObject_o *)Object_object__51713432,
          transform,
          0,
          0);
      }
    }
  }
  return 0.0;
}


bool BattleServantHpShiftComponent__PlayShiftEffectGeneral(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        BattleServantHpShiftComponent_EffectData_o *effectData,
        BattleServantParamComponent_o *servantParam,
        float *nextAnimationTime,
        System_Action_int__o *callBack,
        const MethodInfo *method)
{
  __int64 v13; // x21
  void *AssetNameByPrefixAndIconIndex; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  char v22; // w0
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x23
  bool v26; // w21
  System_String_o *prefixAsset; // x24
  AssetData_o *AssetStorage; // x0
  System_String_o *prefixEffect; // x24
  AssetData_o *v30; // x22
  const MethodInfo *v31; // x2
  int32_t ShiftEffectIndex; // w0
  System_Nullable_int__o v33; // x3
  System_Nullable_int__o v34; // x4
  const MethodInfo *v35; // x5
  UnityEngine_GameObject_o *v36; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *Object; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  Il2CppObject *Component_object; // x19
  System_Action_o *v46; // x20
  Il2CppObject *component; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CF1DA8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ActionExtensions_Call_int___);
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_IndexValue_GameObject___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_TryGetComponent_BattleServantHpShiftPhaseEffectComponent___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_BattleServantHpShiftComponent___c__DisplayClass47_0__PlayShiftEffectGeneral_b__0__);
    sub_1C7BAE8(&BattleServantHpShiftComponent___c__DisplayClass47_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_20187/*"hp_feathereffect"*/);
    sub_1C7BAE8(&StringLiteral_20195/*"hp_iconeffect_before"*/);
    byte_4CF1DA8 = 1;
  }
  component = 0;
  v13 = sub_1C7BD34(BattleServantHpShiftComponent___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_41;
  *(_QWORD *)(v13 + 16) = callBack;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v13 + 16), (int32_t)callBack, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v13 + 24) = index;
  *nextAnimationTime = 0.0;
  if ( this->fields.decagramNumber - 1 == index )
  {
    if ( !effectData )
      goto LABEL_41;
    AssetNameByPrefixAndIconIndex = (void *)System_String__op_Equality(
                                              effectData->fields.prefixEffect,
                                              (System_String_o *)StringLiteral_20195/*"hp_iconeffect_before"*/,
                                              0);
    if ( ((unsigned __int8)AssetNameByPrefixAndIconIndex & 1) != 0 )
    {
      if ( servantParam )
      {
        v22 = ((__int64 (__fastcall *)(BattleServantParamComponent_o *, const MethodInfo *))servantParam->klass->vtable._9_IsSuperBossStatusUi.methodPtr)(
                servantParam,
                servantParam->klass->vtable._9_IsSuperBossStatusUi.method);
        *nextAnimationTime = BattleServantHpShiftComponent__CreateDecagramEffect(this, v22 & 1, v23);
        return 1;
      }
      goto LABEL_41;
    }
  }
  else if ( !effectData )
  {
    goto LABEL_41;
  }
  if ( System_String__op_Equality(effectData->fields.prefixEffect, (System_String_o *)StringLiteral_20187/*"hp_feathereffect"*/, 0) )
    *nextAnimationTime = BattleServantHpShiftComponent__CreateShiftPhaseEffect(
                           this,
                           effectData,
                           *(System_Action_int__o **)(v13 + 16),
                           v24);
  v25 = BasicHelper__IndexValue_object__51767468(
          (System_Collections_Generic_List_T__o *)this->fields.currentShiftIconList,
          *(_DWORD *)(v13 + 24),
          0,
          (const MethodInfo_315E8AC *)Method_BasicHelper_IndexValue_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v25, 0, 0) )
  {
    ActionExtensions__Call_int_(
      *(System_Action_T__o **)(v13 + 16),
      *(_DWORD *)(v13 + 24),
      (const MethodInfo_30B92F0 *)Method_ActionExtensions_Call_int___);
    return 0;
  }
  else
  {
    prefixAsset = effectData->fields.prefixAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage(prefixAsset, 0);
    prefixEffect = effectData->fields.prefixEffect;
    v30 = AssetStorage;
    ShiftEffectIndex = BattleServantHpShiftComponent__GetShiftEffectIndex(this, *(_DWORD *)(v13 + 24), v31);
    v33 = 0;
    v34 = 0;
    AssetNameByPrefixAndIconIndex = BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
                                      this,
                                      prefixEffect,
                                      ShiftEffectIndex,
                                      v33,
                                      v34,
                                      v35);
    if ( !v30 )
      goto LABEL_41;
    AssetNameByPrefixAndIconIndex = AssetData__GetObject_object__51713432(
                                      v30,
                                      (System_String_o *)AssetNameByPrefixAndIconIndex,
                                      (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
    if ( !v25 )
      goto LABEL_41;
    v36 = (UnityEngine_GameObject_o *)AssetNameByPrefixAndIconIndex;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v25, 0);
    Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v36, transform, 0, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetNameByPrefixAndIconIndex = (void *)UnityEngine_Object__op_Inequality(Object, 0, 0);
    if ( ((unsigned __int8)AssetNameByPrefixAndIconIndex & 1) != 0 )
    {
      if ( !Object )
        goto LABEL_41;
      if ( UnityEngine_GameObject__TryGetComponent_object_(
             (UnityEngine_GameObject_o *)Object,
             &component,
             (const MethodInfo_31C8358 *)Method_UnityEngine_GameObject_TryGetComponent_BattleServantHpShiftPhaseEffectComponent___) )
      {
        AssetNameByPrefixAndIconIndex = component;
        if ( !component )
          goto LABEL_41;
        component[13].klass = (Il2CppClass *)this;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)((char *)AssetNameByPrefixAndIconIndex + 208),
          (int32_t)this,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
        if ( !component )
          goto LABEL_41;
        *nextAnimationTime = *((float *)&component[12].monitor + 1);
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetNameByPrefixAndIconIndex = (void *)UnityEngine_Object__op_Inequality(Object, 0, 0);
    Component_object = 0;
    if ( ((unsigned __int8)AssetNameByPrefixAndIconIndex & 1) != 0 )
    {
      if ( !Object )
        goto LABEL_41;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Object,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      ActionExtensions__Call_int_(
        *(System_Action_T__o **)(v13 + 16),
        *(_DWORD *)(v13 + 24),
        (const MethodInfo_30B92F0 *)Method_ActionExtensions_Call_int___);
      return 1;
    }
    v46 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      v46,
      (Il2CppObject *)v13,
      Method_BattleServantHpShiftComponent___c__DisplayClass47_0__PlayShiftEffectGeneral_b__0__,
      0);
    if ( !Component_object )
LABEL_41:
      sub_1C7BD40(AssetNameByPrefixAndIconIndex, v15);
    v26 = 1;
    ((void (__fastcall *)(Il2CppObject *, __int64, System_Action_o *, const MethodInfo *))Component_object->klass->vtable[8].methodPtr)(
      Component_object,
      1,
      v46,
      Component_object->klass->vtable[8].method);
  }
  return v26;
}


void BattleServantHpShiftComponent__UpdateHideInvalidIcon(
        BattleServantHpShiftComponent_o *this,
        int32_t dispMaxPos,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *currentShiftIconList; // x0
  int size; // w8
  int v7; // w26
  Il2CppObject *v8; // x21
  Il2CppObject *Component_object; // x0
  __int64 v10; // x1

  if ( (byte_4CF1D9E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_IndexValue_GameObject___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF1D9E = 1;
  }
  currentShiftIconList = (System_Collections_Generic_List_T__o *)this->fields.currentShiftIconList;
  if ( currentShiftIconList )
    size = currentShiftIconList->fields._size;
  else
    size = 0;
  if ( dispMaxPos + 1 < size )
  {
    v7 = size - 2;
    while ( 1 )
    {
      v8 = BasicHelper__IndexValue_object__51767468(
             currentShiftIconList,
             dispMaxPos + 1,
             0,
             (const MethodInfo_315E8AC *)Method_BasicHelper_IndexValue_GameObject___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
      if ( ((unsigned __int8)Component_object & 1) != 0 )
      {
        if ( !v8
          || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v8,
                                   (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0 )
        {
          sub_1C7BD40(Component_object, v10);
        }
        UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)StringLiteral_1/*""*/, 0);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v8, 0, 0);
      }
      if ( v7 == dispMaxPos )
        break;
      currentShiftIconList = (System_Collections_Generic_List_T__o *)this->fields.currentShiftIconList;
      ++dispMaxPos;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantHpShiftComponent__UpdateIcon(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        bool isEmpty,
        bool isActive,
        const MethodInfo *method)
{
  int32_t decagramNumber; // w8
  UnityEngine_Behaviour_o *shiftIconDecagramSprite; // x0
  Il2CppObject *v11; // x23
  const MethodInfo *v12; // x2
  int32_t v13; // w21
  Il2CppObject *Component_object; // x22
  const MethodInfo *v15; // x2

  if ( (byte_4CF1D9F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_IndexValue_GameObject___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1D9F = 1;
  }
  decagramNumber = this->fields.decagramNumber;
  if ( decagramNumber > index )
  {
    if ( decagramNumber - 1 == index )
    {
      shiftIconDecagramSprite = (UnityEngine_Behaviour_o *)this->fields.shiftIconDecagramSprite;
      if ( shiftIconDecagramSprite )
      {
        UnityEngine_Behaviour__set_enabled(shiftIconDecagramSprite, isActive, 0);
        return;
      }
LABEL_17:
      sub_1C7BD40(shiftIconDecagramSprite, *(_QWORD *)&index);
    }
    v11 = BasicHelper__IndexValue_object__51767468(
            (System_Collections_Generic_List_T__o *)this->fields.currentShiftIconList,
            index,
            0,
            (const MethodInfo_315E8AC *)Method_BasicHelper_IndexValue_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    shiftIconDecagramSprite = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v11,
                                                           0,
                                                           0);
    if ( ((unsigned __int8)shiftIconDecagramSprite & 1) != 0 )
    {
      if ( isEmpty )
      {
        v13 = 0;
      }
      else
      {
        shiftIconDecagramSprite = (UnityEngine_Behaviour_o *)BattleServantHpShiftComponent__GetShiftEffectIndex(
                                                               this,
                                                               index,
                                                               v12);
        v13 = (int)shiftIconDecagramSprite;
      }
      if ( !v11 )
        goto LABEL_17;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v11,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      shiftIconDecagramSprite = (UnityEngine_Behaviour_o *)BattleServantHpShiftComponent__getSpriteName(this, v13, v15);
      if ( !Component_object )
        goto LABEL_17;
      UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)shiftIconDecagramSprite, 0);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v11, isActive, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantHpShiftComponent__UpdateIconActive(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        bool isActive,
        const MethodInfo *method)
{
  int32_t decagramNumber; // w8
  struct UISprite_o *shiftIconDecagramSprite; // x0
  Il2CppObject *v9; // x20

  if ( (byte_4CF1DA0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_IndexValue_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1DA0 = 1;
  }
  decagramNumber = this->fields.decagramNumber;
  if ( decagramNumber > index )
  {
    if ( decagramNumber - 1 == index )
    {
      shiftIconDecagramSprite = this->fields.shiftIconDecagramSprite;
      if ( shiftIconDecagramSprite )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)shiftIconDecagramSprite, isActive, 0);
        return;
      }
LABEL_13:
      sub_1C7BD40(shiftIconDecagramSprite, *(_QWORD *)&index);
    }
    v9 = BasicHelper__IndexValue_object__51767468(
           (System_Collections_Generic_List_T__o *)this->fields.currentShiftIconList,
           index,
           0,
           (const MethodInfo_315E8AC *)Method_BasicHelper_IndexValue_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    shiftIconDecagramSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
    if ( ((unsigned __int8)shiftIconDecagramSprite & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_13;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, isActive, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantHpShiftComponent__UpdateIconEnabled(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        bool isEnabled,
        const MethodInfo *method)
{
  int32_t decagramNumber; // w8
  UnityEngine_Behaviour_o *shiftIconDecagramSprite; // x0
  Il2CppObject *v9; // x20
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CF1DA3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_IndexValue_GameObject___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_TryGetComponent_UISprite___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1DA3 = 1;
  }
  component = 0;
  decagramNumber = this->fields.decagramNumber;
  if ( decagramNumber > index )
  {
    if ( decagramNumber - 1 == index )
    {
      shiftIconDecagramSprite = (UnityEngine_Behaviour_o *)this->fields.shiftIconDecagramSprite;
      if ( shiftIconDecagramSprite )
      {
LABEL_6:
        UnityEngine_Behaviour__set_enabled(shiftIconDecagramSprite, isEnabled, 0);
        return;
      }
LABEL_13:
      sub_1C7BD40(shiftIconDecagramSprite, *(_QWORD *)&index);
    }
    v9 = BasicHelper__IndexValue_object__51767468(
           (System_Collections_Generic_List_T__o *)this->fields.currentShiftIconList,
           index,
           0,
           (const MethodInfo_315E8AC *)Method_BasicHelper_IndexValue_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    shiftIconDecagramSprite = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v9,
                                                           0,
                                                           0);
    if ( ((unsigned __int8)shiftIconDecagramSprite & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_13;
      if ( UnityEngine_GameObject__TryGetComponent_object_(
             (UnityEngine_GameObject_o *)v9,
             &component,
             (const MethodInfo_31C8358 *)Method_UnityEngine_GameObject_TryGetComponent_UISprite___) )
      {
        shiftIconDecagramSprite = (UnityEngine_Behaviour_o *)component;
        if ( component )
          goto LABEL_6;
        goto LABEL_13;
      }
    }
  }
}


void BattleServantHpShiftComponent__createIconList(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantHpShiftComponent_o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int v11; // w21
  _BOOL4 v12; // w23
  struct BattleServantHpShiftComponent_ShiftIconData_array *allIconDataList; // x8
  struct BattleServantHpShiftComponent_ShiftIconData_array **p_allIconDataList; // x22
  il2cpp_array_size_t max_length; // x9
  __int64 v16; // x25
  __int64 v17; // x8
  UnityEngine_Object_o *v18; // x24
  struct BattleServantHpShiftComponent_ShiftIconData_array *v19; // x8
  __int64 v20; // x8
  UnityEngine_Object_o *v21; // x24
  __int64 v22; // x10
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  BattleDataDefine_c *v29; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x23
  UISprite_o *shiftIconDecagramSprite; // x23
  const MethodInfo *v32; // x2
  struct BattleServantHpShiftComponent_ShiftIconData_array *v33; // x9
  __int64 v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_Collections_Generic_List_object__o *v41; // x21
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  const MethodInfo *v48; // x1
  UIAtlas_o *atlas; // [xsp+8h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_4CF1D9B & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&BattleServantHpShiftComponent_ShiftIconData___TypeInfo);
    this = (BattleServantHpShiftComponent_o *)sub_1C7BAE8(&StringLiteral_3109/*"BattleAssetUIAtlas"*/);
    byte_4CF1D9B = 1;
  }
  atlas = 0;
  if ( !svtData )
    goto LABEL_44;
  this = (BattleServantHpShiftComponent_o *)BattleServantData__GetDisplayShiftIconCount(svtData, 0);
  v11 = (int)this;
  if ( (int)this < v4->fields.decagramNumber
    || (this = (BattleServantHpShiftComponent_o *)BattleServantData__IsShiftablePhaseServant(svtData, 0),
        ((unsigned __int8)this & 1) != 0) )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    v11 = v4->fields.decagramNumber - 1;
  }
  p_allIconDataList = &v4->fields.allIconDataList;
  allIconDataList = v4->fields.allIconDataList;
  if ( allIconDataList )
  {
    max_length = allIconDataList->max_length;
    if ( v11 == (_DWORD)max_length && svtData->fields.shiftDeckPhaseIndex == v4->fields.shiftDeckPhaseIndex )
      return;
    if ( (int)max_length >= 1 )
    {
      v16 = 4;
      do
      {
        if ( v16 - 4 >= (unsigned __int64)(unsigned int)max_length )
LABEL_45:
          sub_1C7BD48(this);
        v17 = *((_QWORD *)&allIconDataList->obj.klass + v16);
        if ( v17 )
        {
          v18 = *(UnityEngine_Object_o **)(v17 + 32);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (BattleServantHpShiftComponent_o *)UnityEngine_Object__op_Inequality(v18, 0, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v19 = *p_allIconDataList;
            if ( !*p_allIconDataList )
              goto LABEL_44;
            if ( v16 - 4 >= (unsigned __int64)LODWORD(v19->max_length) )
              goto LABEL_45;
            v20 = *((_QWORD *)&v19->obj.klass + v16);
            if ( !v20 )
              goto LABEL_44;
            v21 = *(UnityEngine_Object_o **)(v20 + 32);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_71870148(v21, 0);
          }
        }
        allIconDataList = *p_allIconDataList;
        if ( !*p_allIconDataList )
          goto LABEL_44;
        LODWORD(max_length) = allIconDataList->max_length;
        v22 = v16 - 3;
        ++v16;
      }
      while ( v22 < (int)max_length );
    }
    *p_allIconDataList = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->fields.allIconDataList, 0, v5, v6, v7, v8, v9, v10);
  }
  this = (BattleServantHpShiftComponent_o *)v4->fields.shiftIconDecagramSprite;
  if ( !this )
    goto LABEL_44;
  this = (BattleServantHpShiftComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12, 0);
  if ( !v12 )
    goto LABEL_39;
  v29 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v29 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v29->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_3109/*"BattleAssetUIAtlas"*/, 0) )
    goto LABEL_39;
  this = (BattleServantHpShiftComponent_o *)v4->fields.shiftIconDecagramSprite;
  if ( !this
    || (UISprite__set_atlas((UISprite_o *)this, atlas, 0),
        shiftIconDecagramSprite = v4->fields.shiftIconDecagramSprite,
        this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(
                                                    v4,
                                                    v4->fields.decagramNumber + 1,
                                                    v32),
        !shiftIconDecagramSprite)
    || (UISprite__set_spriteName(shiftIconDecagramSprite, (System_String_o *)this, 0),
        (this = (BattleServantHpShiftComponent_o *)v4->fields.shiftIconDecagramSprite) == 0) )
  {
LABEL_44:
    sub_1C7BD40(this, svtData);
  }
  ((void (__fastcall *)(BattleServantHpShiftComponent_o *, void *))this->klass[2]._1.parent)(
    this,
    this->klass[2]._1.generic_class);
LABEL_39:
  if ( v11 >= 1 )
  {
    v33 = v4->fields.allIconDataList;
    v4->fields.shiftDeckPhaseIndex = svtData->fields.shiftDeckPhaseIndex;
    if ( !v33 )
    {
      v34 = sub_1C7BB90(BattleServantHpShiftComponent_ShiftIconData___TypeInfo, (unsigned int)v11);
      *p_allIconDataList = (struct BattleServantHpShiftComponent_ShiftIconData_array *)v34;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->fields.allIconDataList, v34, v35, v36, v37, v38, v39, v40);
    }
    v4->fields.currentShiftIconList = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->fields.currentShiftIconList, 0, v23, v24, v25, v26, v27, v28);
    v41 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v41,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    v4->fields.currentShiftIconList = (struct System_Collections_Generic_List_GameObject__o *)v41;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&v4->fields.currentShiftIconList,
      (int32_t)v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    BattleServantHpShiftComponent__AlignShiftIcons(v4, v48);
  }
}


System_String_o *BattleServantHpShiftComponent__getSpriteName(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  System_Nullable_int__o v6; // x3
  System_Nullable_int__o v7; // x4

  if ( (byte_4CF1D92 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20191/*"hp_icon"*/);
    byte_4CF1D92 = 1;
  }
  v6 = 0;
  v7 = 0;
  return BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
           this,
           (System_String_o *)StringLiteral_20191/*"hp_icon"*/,
           index,
           v6,
           v7,
           v3);
}


void BattleServantHpShiftComponent__playShiftEffect(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantHpShiftComponent_o *v4; // x19
  int32_t shiftDeckIndex; // w8
  struct System_Int32_array *shiftDeckList; // x9
  int32_t v7; // w20
  System_Collections_Generic_List_object__o *currentShiftIconList; // x0
  Il2CppObject *Item; // x21
  BattleDataDefine_c *v10; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  AssetData_o *AssetStorage; // x21
  const MethodInfo *v13; // x2
  int32_t ShiftEffectIndex; // w0
  const MethodInfo *v15; // x2
  Il2CppObject *Object_object__51713432; // x21
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x21
  const MethodInfo *v19; // x2
  int32_t v20; // w0
  const MethodInfo *v21; // x2

  v4 = this;
  if ( (byte_4CF1DA7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    this = (BattleServantHpShiftComponent_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1DA7 = 1;
  }
  if ( !svtData )
    goto LABEL_29;
  shiftDeckIndex = svtData->fields.shiftDeckIndex;
  if ( shiftDeckIndex )
  {
    shiftDeckList = svtData->fields.shiftDeckList;
    if ( !shiftDeckList )
      goto LABEL_29;
    v7 = LODWORD(shiftDeckList->max_length) - shiftDeckIndex;
  }
  else
  {
    v7 = 0;
  }
  currentShiftIconList = (System_Collections_Generic_List_object__o *)v4->fields.currentShiftIconList;
  if ( currentShiftIconList && currentShiftIconList->fields._size > v7 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             currentShiftIconList,
             v7,
             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      v10 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v10 = BattleDataDefine_TypeInfo;
      }
      ASSET_BATTLE_COMMON = v10->static_fields->ASSET_BATTLE_COMMON;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
      ShiftEffectIndex = BattleServantHpShiftComponent__GetShiftEffectIndex(v4, v7, v13);
      this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__GetBreakShiftIconEffectName(
                                                  v4,
                                                  ShiftEffectIndex,
                                                  v15);
      if ( AssetStorage )
      {
        Object_object__51713432 = AssetData__GetObject_object__51713432(
                                    AssetStorage,
                                    (System_String_o *)this,
                                    (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51713432, 0, 0) )
        {
          this = (BattleServantHpShiftComponent_o *)v4->fields.currentShiftIconList;
          if ( !this )
            goto LABEL_29;
          this = (BattleServantHpShiftComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      v7,
                                                      (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !this )
            goto LABEL_29;
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
          BaseMonoBehaviour__createObject(
            (BaseMonoBehaviour_o *)v4,
            (UnityEngine_GameObject_o *)Object_object__51713432,
            transform,
            0,
            0);
        }
        this = (BattleServantHpShiftComponent_o *)v4->fields.currentShiftIconList;
        if ( this )
        {
          this = (BattleServantHpShiftComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      v7,
                                                      (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( this )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            v20 = BattleServantHpShiftComponent__GetShiftEffectIndex(v4, v7, v19);
            this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__GetEmptyIconSpriteName(
                                                        v4,
                                                        v20,
                                                        v21);
            if ( Component_object )
            {
              UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)this, 0);
              return;
            }
          }
        }
      }
LABEL_29:
      sub_1C7BD40(this, svtData);
    }
  }
}


int32_t BattleServantHpShiftComponent__setInitValue(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        bool isWaitShiftPhaseEffect,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *shiftIconClone; // x0
  Il2CppObject *Component_object; // x0
  BattleDataDefine_c *v15; // x8
  UISprite_o *v16; // x22
  System_String_o *ASSET_BATTLE_COMMON; // x23
  const MethodInfo *v18; // x2
  System_String_o *SpriteName; // x0
  UnityEngine_Object_o *shiftPhaseIconClone; // x22
  const MethodInfo *v21; // x2
  Il2CppObject *v22; // x0
  UnityEngine_Object_o *v23; // x23
  UISprite_o *v24; // x22
  const MethodInfo *v25; // x4
  System_String_o *ShiftPhaseIconSpriteName; // x0
  const MethodInfo *v27; // x3
  int32_t MaxShiftIconPos; // w0
  const MethodInfo *v29; // x2
  UIAtlas_o *atlas; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CF1D90 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3109/*"BattleAssetUIAtlas"*/);
    byte_4CF1D90 = 1;
  }
  atlas = 0;
  this->fields.svtData = svtData;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtData,
    (int32_t)svtData,
    isWaitShiftPhaseEffect,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  BattleServantHpShiftComponent__ImportFromBattleCommonSettings(this, v11);
  shiftIconClone = this->fields.shiftIconClone;
  if ( !shiftIconClone )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       shiftIconClone,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v15 = BattleDataDefine_TypeInfo;
  v16 = (UISprite_o *)Component_object;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v15 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v15->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  shiftIconClone = (UnityEngine_GameObject_o *)AssetManager__TryGetUIAtlas(
                                                 &atlas,
                                                 ASSET_BATTLE_COMMON,
                                                 (System_String_o *)StringLiteral_3109/*"BattleAssetUIAtlas"*/,
                                                 0);
  if ( ((unsigned __int8)shiftIconClone & 1) != 0 )
  {
    if ( !v16 )
      goto LABEL_27;
    UISprite__set_atlas(v16, atlas, 0);
    SpriteName = BattleServantHpShiftComponent__getSpriteName(this, 0, v18);
    UISprite__set_spriteName(v16, SpriteName, 0);
    this->fields.defaultDepth = v16->fields.mDepth;
  }
  shiftIconClone = this->fields.shiftIconClone;
  if ( !shiftIconClone )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(shiftIconClone, 0, 0);
  shiftPhaseIconClone = (UnityEngine_Object_o *)this->fields.shiftPhaseIconClone;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shiftPhaseIconClone, 0, 0) )
  {
    shiftIconClone = this->fields.shiftPhaseIconClone;
    if ( !shiftIconClone )
      goto LABEL_27;
    v22 = UnityEngine_GameObject__GetComponent_object_(
            shiftIconClone,
            (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v23 = (UnityEngine_Object_o *)atlas;
    v24 = (UISprite_o *)v22;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    shiftIconClone = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v23, 0, 0);
    if ( ((unsigned __int8)shiftIconClone & 1) != 0 )
    {
      if ( !v24 )
        goto LABEL_27;
      UISprite__set_atlas(v24, atlas, 0);
      ShiftPhaseIconSpriteName = BattleServantHpShiftComponent__GetShiftPhaseIconSpriteName(this, 0, 1, 3, v25);
      UISprite__set_spriteName(v24, ShiftPhaseIconSpriteName, 0);
      this->fields.defaultDepth = v24->fields.mDepth;
    }
    shiftIconClone = this->fields.shiftPhaseIconClone;
    if ( shiftIconClone )
    {
      UnityEngine_GameObject__SetActive(shiftIconClone, 0, 0);
      goto LABEL_23;
    }
LABEL_27:
    sub_1C7BD40(shiftIconClone, v12);
  }
LABEL_23:
  BattleServantHpShiftComponent__createIconList(this, svtData, v21);
  BattleServantHpShiftComponent__setValue(this, svtData, isWaitShiftPhaseEffect, v27);
  if ( !svtData )
    goto LABEL_27;
  if ( svtData->fields.lowLimitShift >= 1 )
  {
    MaxShiftIconPos = BattleServantData__GetMaxShiftIconPos(svtData, 0);
    BattleServantHpShiftComponent__UpdateHideInvalidIcon(this, MaxShiftIconPos, v29);
  }
  return 0;
}


void BattleServantHpShiftComponent__setValue(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        bool isWaitShiftPhaseEffect,
        const MethodInfo *method)
{
  BattleServantHpShiftComponent_o *v6; // x19
  int32_t CurrentShiftPhaseIndex; // w20
  _BOOL4 v8; // w23
  int32_t decagramNumber; // w22
  int v10; // w24
  struct BattleServantHpShiftComponent_ShiftIconData_array *allIconDataList; // x8
  bool v12; // w9
  unsigned int v13; // w25
  bool v14; // w21
  bool v15; // w22
  unsigned int max_length; // w9
  BattleServantHpShiftComponent_ShiftIconData_o *v17; // x8
  UnityEngine_Object_o *iconObject; // x23
  struct BattleServantHpShiftComponent_ShiftIconData_array *v19; // x8
  BattleServantHpShiftComponent_ShiftIconData_o *v20; // x8
  Il2CppObject *Component_object; // x23
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x4
  struct BattleServantHpShiftComponent_ShiftIconData_array *v24; // x8
  BattleServantHpShiftComponent_ShiftIconData_o *v25; // x8
  struct BattleServantHpShiftComponent_ShiftIconData_array *v26; // x8
  BattleServantHpShiftComponent_ShiftIconData_o *v27; // x8
  bool v28; // w1
  int shiftIconIndex; // w8
  int32_t v30; // w1
  struct BattleServantHpShiftComponent_ShiftIconData_array *v31; // x8
  BattleServantHpShiftComponent_ShiftIconData_o *v32; // x8

  v6 = this;
  if ( (byte_4CF1D9D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    this = (BattleServantHpShiftComponent_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1D9D = 1;
  }
  if ( v6->fields.allIconDataList )
  {
    if ( !svtData
      || (CurrentShiftPhaseIndex = BattleServantData__GetCurrentShiftPhaseIndex(svtData, 0),
          v8 = CurrentShiftPhaseIndex > 0,
          this = (BattleServantHpShiftComponent_o *)BattleServantData__GetCurrentShiftPos(svtData, 0),
          !v6->fields.shiftIconDecagramSprite)
      || (decagramNumber = v6->fields.decagramNumber,
          v10 = (_DWORD)this - v8,
          UnityEngine_Behaviour__set_enabled(
            (UnityEngine_Behaviour_o *)v6->fields.shiftIconDecagramSprite,
            (int)this - v8 >= decagramNumber && CurrentShiftPhaseIndex < 1,
            0),
          (allIconDataList = v6->fields.allIconDataList) == 0) )
    {
LABEL_42:
      sub_1C7BD40(this, svtData);
    }
    v12 = !isWaitShiftPhaseEffect;
    v13 = 0;
    v14 = CurrentShiftPhaseIndex > 0 || v10 < decagramNumber;
    v15 = v12;
    while ( 1 )
    {
      max_length = allIconDataList->max_length;
      if ( (int)v13 >= (int)max_length )
        break;
      if ( v13 >= max_length )
        goto LABEL_44;
      v17 = allIconDataList->m_Items[v13];
      if ( !v17 )
        goto LABEL_42;
      iconObject = (UnityEngine_Object_o *)v17->fields.iconObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleServantHpShiftComponent_o *)UnityEngine_Object__op_Inequality(iconObject, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v19 = v6->fields.allIconDataList;
        if ( !v19 )
          goto LABEL_42;
        if ( v13 >= LODWORD(v19->max_length) )
          goto LABEL_44;
        v20 = v19->m_Items[v13];
        if ( !v20 )
          goto LABEL_42;
        this = (BattleServantHpShiftComponent_o *)v20->fields.iconObject;
        if ( !this )
          goto LABEL_42;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleServantHpShiftComponent_o *)UnityEngine_Object__op_Equality(
                                                    (UnityEngine_Object_o *)Component_object,
                                                    0,
                                                    0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v24 = v6->fields.allIconDataList;
          if ( !v24 )
            goto LABEL_42;
          if ( v13 >= LODWORD(v24->max_length) )
LABEL_44:
            sub_1C7BD48(this);
          v25 = v24->m_Items[v13];
          if ( !v25 )
            goto LABEL_42;
          if ( v25->fields.iconType == 1 )
          {
            this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__GetShiftPhaseIconSpriteName(
                                                        v6,
                                                        v13 + 2,
                                                        1,
                                                        3,
                                                        v23);
            if ( !Component_object )
              goto LABEL_42;
            UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)this, 0);
            v26 = v6->fields.allIconDataList;
            if ( !v26 )
              goto LABEL_42;
            if ( v13 >= LODWORD(v26->max_length) )
              goto LABEL_44;
            v27 = v26->m_Items[v13];
            if ( !v27 )
              goto LABEL_42;
            this = (BattleServantHpShiftComponent_o *)v27->fields.iconObject;
            if ( !this )
              goto LABEL_42;
            v28 = v27->fields.shiftPhaseIconIndex < CurrentShiftPhaseIndex;
          }
          else
          {
            shiftIconIndex = v25->fields.shiftIconIndex;
            v30 = shiftIconIndex + 2;
            if ( shiftIconIndex >= v10 )
            {
              this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__GetEmptyIconSpriteName(
                                                          v6,
                                                          v30,
                                                          v22);
              if ( !Component_object )
                goto LABEL_42;
            }
            else
            {
              this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(v6, v30, v22);
              if ( !Component_object )
                goto LABEL_42;
            }
            UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)this, 0);
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, v15, 0);
            v31 = v6->fields.allIconDataList;
            if ( !v31 )
              goto LABEL_42;
            if ( v13 >= LODWORD(v31->max_length) )
              goto LABEL_44;
            v32 = v31->m_Items[v13];
            if ( !v32 )
              goto LABEL_42;
            this = (BattleServantHpShiftComponent_o *)v32->fields.iconObject;
            if ( !this )
              goto LABEL_42;
            v28 = v14;
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v28, 0);
        }
      }
      allIconDataList = v6->fields.allIconDataList;
      ++v13;
      if ( !allIconDataList )
        goto LABEL_42;
    }
  }
}


void BattleServantHpShiftComponent_EffectData___ctor(
        BattleServantHpShiftComponent_EffectData_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleDataDefine_c *v9; // x0
  struct System_String_o *ASSET_BATTLE_COMMON; // x1

  if ( (byte_4CF1DAA & 1) == 0 )
  {
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    byte_4CF1DAA = 1;
  }
  v9 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v9 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v9->static_fields->ASSET_BATTLE_COMMON;
  this->fields.prefixAsset = ASSET_BATTLE_COMMON;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)ASSET_BATTLE_COMMON, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleServantHpShiftComponent_ShiftIconData___ctor(
        BattleServantHpShiftComponent_ShiftIconData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleServantHpShiftComponent__FadeOutShiftIcon_d__41___ctor(
        BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleServantHpShiftComponent__FadeOutShiftIcon_d__41__MoveNext(
        BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_o *this,
        const MethodInfo *method)
{
  BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_o *v2; // x19
  int32_t _1__state; // w8
  struct BattleServantHpShiftComponent_o *_4__this; // x24
  System_Collections_Generic_List_object__o *v5; // x21
  BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_o **p_targetSprites_5__2; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Collections_Generic_List_float__o *v13; // x22
  BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_o **p_startAlphas_5__3; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w22
  Il2CppObject *Item; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 _2__current_low; // x10
  __int64 v32; // x8
  float v33; // s0
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  float elapsedTime_5__4; // s8
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  float deltaTime; // s0
  float duration; // s1
  float v46; // s0
  float v47; // s0
  float v48; // s1
  float v49; // s0
  int32_t v50; // w20
  float v51; // s9
  UIWidget_o *v52; // x21
  float v53; // s0
  Il2CppObject *current; // x19
  _BOOL8 v55; // x0
  __int64 v56; // x1
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4CF1DAD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_TryGetComponent_UISprite___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_float__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UISprite__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_float___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UISprite___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_float__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_float__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_UISprite__TypeInfo);
    this = (BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1DAD = 1;
  }
  component = 0;
  memset(&v59, 0, sizeof(v59));
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    elapsedTime_5__4 = v2->fields._elapsedTime_5__4;
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_48;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)_4__this->fields.currentShiftIconList, 0)
      || v2->fields.duration <= 0.0 )
    {
      return 0;
    }
    v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UISprite__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UISprite___ctor__);
    v2->fields._targetSprites_5__2 = (struct System_Collections_Generic_List_UISprite__o *)v5;
    p_targetSprites_5__2 = (BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_o **)&v2->fields._targetSprites_5__2;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields._targetSprites_5__2, (int32_t)v5, v7, v8, v9, v10, v11, v12);
    v13 = (System_Collections_Generic_List_float__o *)sub_1C7BD34(System_Collections_Generic_List_float__TypeInfo);
    System_Collections_Generic_List_float____ctor(
      v13,
      (const MethodInfo_3861870 *)Method_System_Collections_Generic_List_float___ctor__);
    v2->fields._startAlphas_5__3 = v13;
    p_startAlphas_5__3 = (BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_o **)&v2->fields._startAlphas_5__3;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&v2->fields._startAlphas_5__3,
      (int32_t)v13,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    this = (BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_o *)_4__this->fields.currentShiftIconList;
    if ( !this )
      goto LABEL_48;
    v21 = 0;
    while ( v21 < SLODWORD(this->fields.__2__current) )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v21,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
      {
        this = (BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_o *)_4__this->fields.currentShiftIconList;
        if ( !this )
          goto LABEL_48;
        this = (BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_o *)System_Collections_Generic_List_object___get_Item(
                                                                            (System_Collections_Generic_List_object__o *)this,
                                                                            v21,
                                                                            (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !this )
          goto LABEL_48;
        if ( UnityEngine_GameObject__TryGetComponent_object_(
               (UnityEngine_GameObject_o *)this,
               &component,
               (const MethodInfo_31C8358 *)Method_UnityEngine_GameObject_TryGetComponent_UISprite___) )
        {
          if ( v21 )
          {
            this = *p_targetSprites_5__2;
            if ( !*p_targetSprites_5__2 )
              goto LABEL_48;
            method = (const MethodInfo *)component;
            v29 = *(_QWORD *)&this->fields.__1__state;
            v30 = Method_System_Collections_Generic_List_UISprite__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v29 )
              goto LABEL_48;
            _2__current_low = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)_2__current_low >= *(_DWORD *)(v29 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)method,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v32 = v29 + 8 * _2__current_low;
              LODWORD(this->fields.__2__current) = _2__current_low + 1;
              *(_QWORD *)(v32 + 32) = method;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v32 + 32), (int32_t)method, v23, v24, v25, v26, v27, v28);
            }
            if ( !component )
              goto LABEL_48;
            this = *p_startAlphas_5__3;
            if ( !*p_startAlphas_5__3 )
              goto LABEL_48;
            v33 = *(float *)&component[10].klass;
            v34 = *(_QWORD *)&this->fields.__1__state;
            v35 = Method_System_Collections_Generic_List_float__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v34 )
              goto LABEL_48;
            v36 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
            {
              System_Collections_Generic_List_float___AddWithResize(
                (System_Collections_Generic_List_float__o *)this,
                v33,
                *(const MethodInfo_38620CC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(this->fields.__2__current) = v36 + 1;
              *(float *)(v34 + 4 * v36 + 32) = v33;
            }
          }
          else
          {
            this = (BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_o *)component;
            if ( !component )
              goto LABEL_48;
            v61.fields.r = *((float *)&component[9].klass + 1);
            v61.fields.g = *(float *)&component[9].monitor;
            v61.fields.b = *((float *)&component[9].monitor + 1);
            v61.fields.a = 0.0;
            UIWidget__set_color((UIWidget_o *)component, v61, 0);
          }
        }
      }
      this = (BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_o *)_4__this->fields.currentShiftIconList;
      ++v21;
      if ( !this )
        goto LABEL_48;
    }
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*p_targetSprites_5__2, 0) )
      return 0;
    v2->fields._elapsedTime_5__4 = 0.0;
    elapsedTime_5__4 = 0.0;
  }
  if ( elapsedTime_5__4 >= v2->fields.duration )
  {
    this = (BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_o *)v2->fields._targetSprites_5__2;
    if ( !this )
      goto LABEL_48;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v59,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v59,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__) )
    {
      current = v59.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v55 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
      if ( !v55 )
      {
        if ( !current )
          sub_1C7BD40(v55, v56);
        v63.fields.r = *((float *)&current[9].klass + 1);
        v63.fields.g = *(float *)&current[9].monitor;
        v63.fields.b = *((float *)&current[9].monitor + 1);
        v63.fields.a = 0.0;
        UIWidget__set_color((UIWidget_o *)current, v63, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v59,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
    return 0;
  }
  deltaTime = UnityEngine_Time__get_deltaTime(0);
  duration = v2->fields.duration;
  v46 = elapsedTime_5__4 + deltaTime;
  this = (BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_o *)v2->fields._targetSprites_5__2;
  v2->fields._elapsedTime_5__4 = v46;
  v47 = v46 / duration;
  v48 = fminf(v47, 1.0);
  if ( v47 < 0.0 )
    v49 = 0.0;
  else
    v49 = v48;
  if ( !this )
LABEL_48:
    sub_1C7BD40(this, method);
  v50 = 0;
  v51 = fmaxf(v49, 0.0);
  while ( v50 < SLODWORD(this->fields.__2__current) )
  {
    v52 = (UIWidget_o *)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)this,
                          v50,
                          (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UISprite__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v52, 0, 0) )
    {
      this = (BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_o *)v2->fields._startAlphas_5__3;
      if ( !this )
        goto LABEL_48;
      v53 = System_Collections_Generic_List_float___get_Item(
              (System_Collections_Generic_List_float__o *)this,
              v50,
              (const MethodInfo_3861DD4 *)Method_System_Collections_Generic_List_float__get_Item__);
      if ( !v52 )
        goto LABEL_48;
      v62.fields.g = v52->fields.mColor.fields.g;
      v62.fields.b = v52->fields.mColor.fields.b;
      v62.fields.a = v53 + (float)(v51 * (float)(0.0 - v53));
      v62.fields.r = v52->fields.mColor.fields.r;
      UIWidget__set_color(v52, v62, 0);
    }
    this = (BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_o *)v2->fields._targetSprites_5__2;
    ++v50;
    if ( !this )
      goto LABEL_48;
  }
  v2->fields.__2__current = 0;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1C7BA8C(p__2__current, 0, v38, v39, v40, v41, v42, v43);
  result = 1;
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
  return result;
}


Il2CppObject *BattleServantHpShiftComponent__FadeOutShiftIcon_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleServantHpShiftComponent__FadeOutShiftIcon_d__41__System_Collections_IEnumerator_Reset(
        BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *BattleServantHpShiftComponent__FadeOutShiftIcon_d__41__System_Collections_IEnumerator_get_Current(
        BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleServantHpShiftComponent__FadeOutShiftIcon_d__41__System_IDisposable_Dispose(
        BattleServantHpShiftComponent__FadeOutShiftIcon_d__41_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleServantHpShiftComponent___c__DisplayClass29_0___ctor(
        BattleServantHpShiftComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleServantHpShiftComponent___c__DisplayClass29_0___GetShiftPhaseIconSpriteName_b__0(
        BattleServantHpShiftComponent___c__DisplayClass29_0_o *this,
        EnemyScriptParam_OverwriteShiftIcon_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields.index == this->fields.index - 1;
}


void BattleServantHpShiftComponent___c__DisplayClass30_0___ctor(
        BattleServantHpShiftComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleServantHpShiftComponent___c__DisplayClass30_0___MakeAssetNameByPrefixAndIconIndex_b__0(
        BattleServantHpShiftComponent___c__DisplayClass30_0_o *this,
        EnemyScriptParam_OverwriteShiftIcon_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields.index == this->fields.index - 1;
}


void BattleServantHpShiftComponent___c__DisplayClass32_0___ctor(
        BattleServantHpShiftComponent___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleServantHpShiftComponent___c__DisplayClass32_0___GetShiftIconAdjustment_b__0(
        BattleServantHpShiftComponent___c__DisplayClass32_0_o *this,
        BattleCommonSettings_ShiftIconAdjustment_o *x,
        const MethodInfo *method)
{
  System_String_o *SpriteName; // x0

  if ( !x )
    sub_1C7BD40(this, 0);
  SpriteName = BattleCommonSettings_ShiftIconAdjustment__get_SpriteName(x, 0);
  return System_String__op_Equality(SpriteName, this->fields.spriteName, 0);
}


void BattleServantHpShiftComponent___c__DisplayClass43_0___ctor(
        BattleServantHpShiftComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleServantHpShiftComponent___c__DisplayClass43_0___CreateShiftPhaseEffect_b__0(
        BattleServantHpShiftComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CF1DAB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ActionExtensions_Call_int___);
    byte_4CF1DAB = 1;
  }
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callBack,
    0,
    (const MethodInfo_30B92F0 *)Method_ActionExtensions_Call_int___);
}


void BattleServantHpShiftComponent___c__DisplayClass47_0___ctor(
        BattleServantHpShiftComponent___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleServantHpShiftComponent___c__DisplayClass47_0___PlayShiftEffectGeneral_b__0(
        BattleServantHpShiftComponent___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CF1DAC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ActionExtensions_Call_int___);
    byte_4CF1DAC = 1;
  }
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callBack,
    this->fields.index,
    (const MethodInfo_30B92F0 *)Method_ActionExtensions_Call_int___);
}