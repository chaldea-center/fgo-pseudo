void __fastcall BattleServantHpShiftComponent___ctor(BattleServantHpShiftComponent_o *this, const MethodInfo *method)
{
  LODWORD(this->fields.shiftIconClone) = 10;
  LODWORD(this->fields.iconList) = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


float __fastcall BattleServantHpShiftComponent__CreateDecagramEffect(
        BattleServantHpShiftComponent_o *this,
        bool isSuperBoss,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  BattleDataDefine_c *v24; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  AssetData_o *AssetStorage; // x0
  __int64 v27; // x1
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x21
  float v29; // s8
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Object_o *Object; // x21
  srcLineSprite_o *Component_srcLineSprite; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_42EB248 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, isSuperBoss, (_DWORD)method, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&BattleDataDefine_TypeInfo, v9, v10, v11);
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BattleServantHpShiftDecagramEffectComponent___,
      v12,
      v13,
      v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_19424/*"hp_crystaleffect_superboss_1_1"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_19423/*"hp_crystaleffect_1_1"*/, v21, v22, v23);
    byte_42EB248 = 1;
  }
  v24 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v24 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v24->static_fields->ASSET_BATTLE_COMMON;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
  if ( !AssetStorage )
    goto LABEL_29;
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 AssetStorage,
                                                                 (System_String_o *)StringLiteral_19423/*"hp_crystaleffect_1_1"*/,
                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v29 = 0.0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
  {
    AssetStorage = *(AssetData_o **)&this->fields.imageType;
    if ( !AssetStorage )
      goto LABEL_29;
    AssetStorage = (AssetData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)AssetStorage, 0LL);
    if ( !AssetStorage )
      goto LABEL_29;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)AssetStorage, 0LL);
    Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)this,
                                       Object_WarBoardWaitTimeSetting,
                                       parent,
                                       0LL,
                                       0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(Object, 0LL, 0LL);
    if ( ((unsigned __int8)AssetStorage & 1) != 0 )
    {
      if ( !Object )
        goto LABEL_29;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Object,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleServantHpShiftDecagramEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)Component_srcLineSprite,
                                      0LL,
                                      0LL);
      if ( ((unsigned __int8)AssetStorage & 1) != 0 )
      {
        if ( Component_srcLineSprite )
        {
          Component_srcLineSprite[1].fields.mcTweenAlphaP = (struct TweenAlpha_o *)this;
          sub_B5D560(
            (BattleServantConfConponent_o *)&Component_srcLineSprite[1].fields.mcTweenAlphaP,
            (System_Int32_array **)this,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38);
          v29 = *((float *)&Component_srcLineSprite[1].fields.mcLineSprite + 1);
          if ( isSuperBoss )
            CommonEffectComponent__Init_18130176(
              (CommonEffectComponent_o *)Component_srcLineSprite,
              (System_String_o *)StringLiteral_19424/*"hp_crystaleffect_superboss_1_1"*/,
              0,
              0,
              0LL);
          return v29;
        }
LABEL_29:
        sub_B5D69C(AssetStorage, v27);
      }
    }
  }
  return v29;
}


bool __fastcall BattleServantHpShiftComponent__IsDecagramIndex(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  return LODWORD(this->fields.shiftIconClone) - 1 == index;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantHpShiftComponent__IsIconActive(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t shiftIconClone; // w8
  UnityEngine_Behaviour_o *v10; // x0
  UnityEngine_Object_o *v12; // x19

  if ( (byte_42EB247 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_GameObject___, index, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EB247 = 1;
  }
  shiftIconClone = (int32_t)this->fields.shiftIconClone;
  if ( shiftIconClone <= index )
    return 0;
  if ( shiftIconClone - 1 == index )
  {
    v10 = *(UnityEngine_Behaviour_o **)&this->fields.imageType;
    if ( v10 )
      return UnityEngine_Behaviour__get_isActiveAndEnabled(v10, 0LL);
LABEL_14:
    sub_B5D69C(v10, *(_QWORD *)&index);
  }
  v12 = (UnityEngine_Object_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                  *(WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array **)&this->fields.defaultDepth,
                                  index,
                                  0LL,
                                  (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) == 0 )
    return 0;
  if ( !v12 )
    goto LABEL_14;
  return UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)v12, 0LL);
}


bool __fastcall BattleServantHpShiftComponent__PlayShiftEffectGeneral(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        BattleServantHpShiftComponent_EffectData_o *effectData,
        BattleServantParamComponent_o *servantParam,
        float *nextAnimationTime,
        System_Action_int__o *callBack,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  __int64 v46; // x20
  System_String_o *Object_WarBoardWaitTimeSetting; // x0
  __int64 v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  const MethodInfo *v55; // x2
  __int64 v56; // x10
  bool v57; // w1
  UnityEngine_Object_o *v58; // x22
  bool v59; // w20
  System_String_o *prefixAsset; // x23
  AssetData_o *AssetStorage; // x0
  Il2CppObject *prefixEffect; // x21
  AssetData_o *v63; // x23
  Il2CppObject *v64; // x0
  UnityEngine_GameObject_o *v65; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *Object; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  System_Action_o *v69; // x21
  int v71; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42EB24B & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_int___, index, (_DWORD)effectData, servantParam);
    sub_B5D5C4(&System_Action_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, v16, v17, v18);
    sub_B5D5C4(&AssetManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_BasicHelper_IndexValue_GameObject___, v22, v23, v24);
    sub_B5D5C4(&BattleServantSuperBossParamComponent_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v28, v29, v30);
    sub_B5D5C4(&int_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v34, v35, v36);
    sub_B5D5C4(
      &Method_BattleServantHpShiftComponent___c__DisplayClass20_0__PlayShiftEffectGeneral_b__0__,
      v37,
      v38,
      v39);
    sub_B5D5C4(&BattleServantHpShiftComponent___c__DisplayClass20_0_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_19432/*"hp_iconeffect_before_1_"*/, v43, v44, v45);
    byte_42EB24B = 1;
  }
  v46 = sub_B5D694(BattleServantHpShiftComponent___c__DisplayClass20_0_TypeInfo);
  BattleServantHpShiftComponent___c__DisplayClass20_0___ctor(
    (BattleServantHpShiftComponent___c__DisplayClass20_0_o *)v46,
    0LL);
  if ( !v46 )
    goto LABEL_39;
  *(_QWORD *)(v46 + 16) = callBack;
  sub_B5D560((BattleServantConfConponent_o *)(v46 + 16), (System_Int32_array **)callBack, v49, v50, v51, v52, v53, v54);
  *(_DWORD *)(v46 + 24) = index;
  *nextAnimationTime = 0.0;
  v48 = *(unsigned int *)(v46 + 24);
  if ( LODWORD(this->fields.shiftIconClone) - 1 == (_DWORD)v48 )
  {
    if ( !effectData )
      goto LABEL_39;
    if ( System_String__op_Equality(effectData->fields.prefixEffect, (System_String_o *)StringLiteral_19432/*"hp_iconeffect_before_1_"*/, 0LL) )
    {
      v57 = servantParam
         && (v56 = *(&BattleServantSuperBossParamComponent_TypeInfo->_2.bitflags2 + 1),
             *(&servantParam->klass->_2.bitflags2 + 1) >= (unsigned int)v56)
         && servantParam->klass->_2.typeHierarchy[v56 - 1] == (Il2CppClass *)BattleServantSuperBossParamComponent_TypeInfo;
      *nextAnimationTime = BattleServantHpShiftComponent__CreateDecagramEffect(this, v57, v55);
      return 1;
    }
    LODWORD(v48) = *(_DWORD *)(v46 + 24);
  }
  v58 = (UnityEngine_Object_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                  *(WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array **)&this->fields.defaultDepth,
                                  v48,
                                  0LL,
                                  (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Object_WarBoardWaitTimeSetting = (System_String_o *)UnityEngine_Object__op_Equality(v58, 0LL, 0LL);
  if ( ((unsigned __int8)Object_WarBoardWaitTimeSetting & 1) == 0 )
  {
    if ( effectData )
    {
      prefixAsset = effectData->fields.prefixAsset;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetStorage = AssetManager__getAssetStorage(prefixAsset, 0LL);
      prefixEffect = (Il2CppObject *)effectData->fields.prefixEffect;
      v63 = AssetStorage;
      v71 = *(_DWORD *)(v46 + 24) + 2;
      v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
      Object_WarBoardWaitTimeSetting = System_String__Concat(prefixEffect, v64, 0LL);
      if ( v63 )
      {
        Object_WarBoardWaitTimeSetting = (System_String_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                              v63,
                                                              Object_WarBoardWaitTimeSetting,
                                                              (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
        if ( v58 )
        {
          v65 = (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v58, 0LL);
          Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)this,
                                             v65,
                                             transform,
                                             0LL,
                                             0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Object_WarBoardWaitTimeSetting = (System_String_o *)UnityEngine_Object__op_Inequality(Object, 0LL, 0LL);
          Component_srcLineSprite = 0LL;
          if ( ((unsigned __int8)Object_WarBoardWaitTimeSetting & 1) != 0 )
          {
            if ( !Object )
              goto LABEL_39;
            Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)Object,
                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
          {
            ActionExtensions__Call_int_(
              *(System_Action_T__o **)(v46 + 16),
              *(_DWORD *)(v46 + 24),
              (const MethodInfo_2CECD28 *)Method_ActionExtensions_Call_int___);
            return 1;
          }
          v69 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v69,
            (Il2CppObject *)v46,
            Method_BattleServantHpShiftComponent___c__DisplayClass20_0__PlayShiftEffectGeneral_b__0__,
            0LL);
          if ( Component_srcLineSprite )
          {
            v59 = 1;
            ((void (__fastcall *)(UnityEngine_Object_o *, __int64, System_Action_o *, Il2CppClass *))Component_srcLineSprite->klass[1]._1.castClass)(
              Component_srcLineSprite,
              1LL,
              v69,
              Component_srcLineSprite->klass[1]._1.declaringType);
            return v59;
          }
        }
      }
    }
LABEL_39:
    sub_B5D69C(Object_WarBoardWaitTimeSetting, v48);
  }
  return 0;
}


void __fastcall BattleServantHpShiftComponent__UpdateHideInvalidIcon(
        BattleServantHpShiftComponent_o *this,
        int32_t dispMaxPos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *v15; // x0
  int max_length; // w21
  int i; // w22
  UnityEngine_Object_o *v18; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v20; // x1

  if ( (byte_42EB244 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_GameObject___, dispMaxPos, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    byte_42EB244 = 1;
  }
  v15 = *(WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array **)&this->fields.defaultDepth;
  if ( v15 )
    max_length = v15->max_length;
  else
    max_length = 0;
  if ( dispMaxPos + 1 < max_length )
  {
    for ( i = dispMaxPos + 2; ; ++i )
    {
      v18 = (UnityEngine_Object_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                      v15,
                                      i - 1,
                                      0LL,
                                      (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_GameObject___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v18
          || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          (UnityEngine_GameObject_o *)v18,
                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0LL )
        {
          sub_B5D69C(Component_srcLineSprite, v20);
        }
        UISprite__set_spriteName((UISprite_o *)Component_srcLineSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v18, 0, 0LL);
      }
      if ( i >= max_length )
        break;
      v15 = *(WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array **)&this->fields.defaultDepth;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantHpShiftComponent__UpdateIcon(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        bool isEmpty,
        bool isActive,
        const MethodInfo *method)
{
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int32_t shiftIconClone; // w8
  System_String_o *SpriteName; // x0
  UnityEngine_Object_o *v17; // x23
  int32_t v18; // w22
  UISprite_o *Component_srcLineSprite; // x21
  const MethodInfo *v20; // x2

  if ( (byte_42EB245 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_GameObject___, index, isEmpty, isActive);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42EB245 = 1;
  }
  shiftIconClone = (int32_t)this->fields.shiftIconClone;
  if ( shiftIconClone > index )
  {
    if ( shiftIconClone - 1 == index )
    {
      SpriteName = *(System_String_o **)&this->fields.imageType;
      if ( SpriteName )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SpriteName, isActive, 0LL);
        return;
      }
LABEL_18:
      sub_B5D69C(SpriteName, *(_QWORD *)&index);
    }
    v17 = (UnityEngine_Object_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                    *(WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array **)&this->fields.defaultDepth,
                                    index,
                                    0LL,
                                    (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_GameObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    SpriteName = (System_String_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
    if ( ((unsigned __int8)SpriteName & 1) != 0 )
    {
      if ( !v17 )
        goto LABEL_18;
      v18 = isEmpty ? 0 : index + 2;
      Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                (UnityEngine_GameObject_o *)v17,
                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      SpriteName = BattleServantHpShiftComponent__getSpriteName(this, v18, v20);
      if ( !Component_srcLineSprite )
        goto LABEL_18;
      UISprite__set_spriteName(Component_srcLineSprite, SpriteName, 0LL);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v17, isActive, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantHpShiftComponent__UpdateIconActive(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        bool isActive,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int32_t shiftIconClone; // w8
  UnityEngine_Behaviour_o *v11; // x0
  UnityEngine_Object_o *v12; // x20

  if ( (byte_42EB246 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_GameObject___, index, isActive, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42EB246 = 1;
  }
  shiftIconClone = (int32_t)this->fields.shiftIconClone;
  if ( shiftIconClone > index )
  {
    if ( shiftIconClone - 1 == index )
    {
      v11 = *(UnityEngine_Behaviour_o **)&this->fields.imageType;
      if ( v11 )
      {
        UnityEngine_Behaviour__set_enabled(v11, isActive, 0LL);
        return;
      }
LABEL_14:
      sub_B5D69C(v11, *(_QWORD *)&index);
    }
    v12 = (UnityEngine_Object_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                    *(WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array **)&this->fields.defaultDepth,
                                    index,
                                    0LL,
                                    (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_GameObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
    if ( ((unsigned __int8)v11 & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_14;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v12, isActive, 0LL);
    }
  }
}


void __fastcall BattleServantHpShiftComponent__createIconList(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleServantHpShiftComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x8
  __int64 *p_defaultDepth; // x20
  int v29; // w22
  int shiftIconClone; // w10
  struct UnityEngine_GameObject_o **p_shiftIconClone; // x26
  __int64 v32; // x9
  unsigned int v33; // w23
  _BOOL4 v34; // w24
  unsigned __int64 v35; // x27
  UnityEngine_Object_o *v36; // x25
  int v37; // w8
  BattleDataDefine_c *v38; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x24
  UISprite_o *v40; // x24
  const MethodInfo *v41; // x2
  __int64 v42; // x8
  int v43; // w24
  int v44; // w21
  System_Int32_array **v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UnityEngine_Object_c **v52; // x26
  const MethodInfo_1CC439C **v53; // x27
  __int64 v54; // x23
  __int64 v55; // x25
  int v56; // w9
  unsigned int v57; // w28
  UnityEngine_Object_c *v58; // x0
  UnityEngine_Object_o *v59; // x22
  int v60; // w21
  const MethodInfo_1CC439C **v61; // x24
  UnityEngine_Object_c **v62; // x27
  _DWORD *v63; // x26
  UnityEngine_GameObject_o *addPos; // x22
  UnityEngine_Transform_o *transform; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x22
  __int64 v73; // x8
  UISprite_o *Component_srcLineSprite; // x22
  const MethodInfo *v75; // x2
  __int64 v76; // x8
  __int64 v77; // x8
  __int64 v78; // x0
  __int64 v79; // x0
  int v80; // [xsp+Ch] [xbp-64h]
  UIAtlas_o *atlas; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42EB242 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)svtData, (_DWORD)method, v3);
    sub_B5D5C4(&BattleDataDefine_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    this = (BattleServantHpShiftComponent_o *)sub_B5D5C4(&StringLiteral_2825/*"BattleAssetUIAtlas"*/, v18, v19, v20);
    byte_42EB242 = 1;
  }
  atlas = 0LL;
  if ( !svtData )
    goto LABEL_63;
  this = (BattleServantHpShiftComponent_o *)BattleServantData__GetMaxShiftIconCount(svtData, 0LL);
  p_defaultDepth = (__int64 *)&v5->fields.defaultDepth;
  v27 = *(_QWORD *)&v5->fields.defaultDepth;
  v29 = (int)this;
  if ( v27 )
  {
    if ( (_DWORD)this == *(_DWORD *)(v27 + 24) )
      return;
    p_shiftIconClone = &v5->fields.shiftIconClone;
    shiftIconClone = (int)v5->fields.shiftIconClone;
    v32 = *(_QWORD *)(v27 + 24);
    if ( (int)this < shiftIconClone )
      v33 = (unsigned int)this;
    else
      v33 = shiftIconClone - 1;
    v34 = (int)this >= shiftIconClone;
    if ( v33 != (_DWORD)v32 )
    {
      if ( (int)v32 >= 1 )
      {
        v35 = 0LL;
        while ( 1 )
        {
          if ( v35 >= (unsigned int)v32 )
          {
LABEL_65:
            v78 = sub_B5D6C8(this);
            sub_B5D668(v78, 0LL);
          }
          v36 = *(UnityEngine_Object_o **)(v27 + 8 * v35 + 32);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_35620236(v36, 0LL);
          v27 = *p_defaultDepth;
          if ( !*p_defaultDepth )
            break;
          LODWORD(v32) = *(_DWORD *)(v27 + 24);
          if ( (__int64)++v35 >= (int)v32 )
            goto LABEL_18;
        }
LABEL_63:
        sub_B5D69C(this, svtData);
      }
LABEL_18:
      *p_defaultDepth = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&v5->fields.defaultDepth, 0LL, v21, v22, v23, v24, v25, v26);
    }
  }
  else
  {
    p_shiftIconClone = &v5->fields.shiftIconClone;
    v37 = (int)v5->fields.shiftIconClone;
    v34 = (int)this >= v37;
    if ( (int)this < v37 )
      v33 = (unsigned int)this;
    else
      v33 = v37 - 1;
  }
  this = *(BattleServantHpShiftComponent_o **)&v5->fields.imageType;
  if ( !this )
    goto LABEL_63;
  this = (BattleServantHpShiftComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v34, 0LL);
  if ( v34 )
  {
    v38 = BattleDataDefine_TypeInfo;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v38 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v38->static_fields->ASSET_BATTLE_COMMON;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_2825/*"BattleAssetUIAtlas"*/, 0LL) )
    {
      this = *(BattleServantHpShiftComponent_o **)&v5->fields.imageType;
      if ( !this )
        goto LABEL_63;
      UISprite__set_atlas((UISprite_o *)this, atlas, 0LL);
      v40 = *(UISprite_o **)&v5->fields.imageType;
      this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(
                                                  v5,
                                                  LODWORD(v5->fields.shiftIconClone) + 1,
                                                  v41);
      if ( !v40 )
        goto LABEL_63;
      UISprite__set_spriteName(v40, (System_String_o *)this, 0LL);
      this = *(BattleServantHpShiftComponent_o **)&v5->fields.imageType;
      if ( !this )
        goto LABEL_63;
      ((void (__fastcall *)(BattleServantHpShiftComponent_o *, void *))this->klass[2]._1.typeMetadataHandle)(
        this,
        this->klass[2]._1.interopData);
    }
  }
  if ( v29 >= 1 )
  {
    this = (BattleServantHpShiftComponent_o *)BattleServantData__GetCurrentShiftPos(svtData, 0LL);
    v42 = *p_defaultDepth;
    v43 = *(_DWORD *)p_shiftIconClone;
    v44 = (int)this;
    if ( !*p_defaultDepth )
    {
      v45 = (System_Int32_array **)sub_B5D5DC(UnityEngine_GameObject___TypeInfo, v33);
      *p_defaultDepth = (__int64)v45;
      sub_B5D560((BattleServantConfConponent_o *)&v5->fields.defaultDepth, v45, v46, v47, v48, v49, v50, v51);
      v42 = *p_defaultDepth;
      if ( !*p_defaultDepth )
        goto LABEL_63;
    }
    v52 = &UnityEngine_Object_TypeInfo;
    v53 = (const MethodInfo_1CC439C **)&Method_UnityEngine_GameObject_GetComponent_UISprite___;
    v54 = 4LL;
    v55 = 8LL;
    v80 = v44;
    while ( 1 )
    {
      v56 = *(_DWORD *)(v42 + 24);
      v57 = v54 - 4;
      if ( (int)v54 - 4 >= v56 )
        break;
      if ( v57 >= v56 )
        goto LABEL_65;
      v58 = *v52;
      v59 = *(UnityEngine_Object_o **)(v42 + 8 * v54);
      if ( (BYTE3((*v52)->vtable._0_Equals.methodPtr) & 4) != 0 && !v58->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v58);
      this = (BattleServantHpShiftComponent_o *)UnityEngine_Object__op_Equality(v59, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v60 = v43;
        v61 = v53;
        v62 = v52;
        v63 = *(_DWORD **)&v5->fields.defaultDepth;
        addPos = (UnityEngine_GameObject_o *)v5->fields.addPos;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0LL);
        this = (BattleServantHpShiftComponent_o *)BaseMonoBehaviour__createObject(
                                                    (BaseMonoBehaviour_o *)v5,
                                                    addPos,
                                                    transform,
                                                    0LL,
                                                    0LL);
        if ( !v63 )
          goto LABEL_63;
        v72 = (System_Int32_array **)this;
        if ( this )
        {
          this = (BattleServantHpShiftComponent_o *)sub_B5D684(this, *(_QWORD *)(*(_QWORD *)v63 + 64LL));
          if ( !this )
          {
            v79 = sub_B5D6BC(0LL);
            sub_B5D668(v79, 0LL);
          }
        }
        if ( v57 >= v63[6] )
          goto LABEL_65;
        *(_QWORD *)&v63[2 * v54] = v72;
        sub_B5D560((BattleServantConfConponent_o *)&v63[v55], v72, v66, v67, v68, v69, v70, v71);
        v52 = v62;
        v53 = v61;
        v43 = v60;
        v44 = v80;
        p_defaultDepth = (__int64 *)&v5->fields.defaultDepth;
      }
      v73 = *p_defaultDepth;
      if ( !*p_defaultDepth )
        goto LABEL_63;
      if ( v57 >= *(_DWORD *)(v73 + 24) )
        goto LABEL_65;
      this = *(BattleServantHpShiftComponent_o **)(v73 + 8 * v54);
      if ( this )
      {
        Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  (UnityEngine_GameObject_o *)this,
                                                  *v53);
        this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(v5, (int)v54 - 2, v75);
        if ( Component_srcLineSprite )
        {
          UISprite__set_spriteName(Component_srcLineSprite, (System_String_o *)this, 0LL);
          UIWidget__set_depth((UIWidget_o *)Component_srcLineSprite, v54 + LODWORD(v5[1].klass) - 4, 0LL);
          v76 = *(_QWORD *)&v5->fields.defaultDepth;
          if ( v76 )
          {
            if ( v57 >= *(_DWORD *)(v76 + 24) )
              goto LABEL_65;
            this = *(BattleServantHpShiftComponent_o **)(v76 + 8 * v54);
            if ( this )
            {
              this = (BattleServantHpShiftComponent_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0LL);
              if ( this )
              {
                v82.fields.y = *((float *)&v5->fields.shiftIconDecagramSprite + 1) * (float)(int)v57;
                v82.fields.x = *(float *)&v5->fields.shiftIconDecagramSprite * (float)(int)v57;
                v82.fields.z = 0.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v82, 0LL);
                v77 = *(_QWORD *)&v5->fields.defaultDepth;
                if ( v77 )
                {
                  if ( v57 >= *(_DWORD *)(v77 + 24) )
                    goto LABEL_65;
                  this = *(BattleServantHpShiftComponent_o **)(v77 + 8 * v54);
                  if ( this )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v44 < v43, 0LL);
                    v42 = *p_defaultDepth;
                    ++v54;
                    v55 += 2LL;
                    if ( *p_defaultDepth )
                      continue;
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_63;
    }
  }
}


System_String_o *__fastcall BattleServantHpShiftComponent__getSpriteName(
        BattleServantHpShiftComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Object_array *v23; // x20
  __int64 v24; // x0
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x19
  __int64 v48; // x0
  __int64 v49; // x0
  int32_t v50; // [xsp+8h] [xbp-28h] BYREF
  int iconList; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EB241 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, count, (_DWORD)method, v3);
    sub_B5D5C4(&object___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_19429/*"hp_icon_"*/, v12, v13, v14);
    byte_42EB241 = 1;
  }
  v15 = sub_B5D5DC(object___TypeInfo, 4LL);
  if ( !v15 )
    sub_B5D69C(0LL, v16);
  v23 = (System_Object_array *)v15;
  v24 = StringLiteral_19429/*"hp_icon_"*/;
  if ( StringLiteral_19429/*"hp_icon_"*/ )
  {
    v24 = sub_B5D684(StringLiteral_19429/*"hp_icon_"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_22;
    v25 = (System_Int32_array **)StringLiteral_19429/*"hp_icon_"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( !v23->max_length )
    goto LABEL_21;
  v23->m_Items[0] = (Il2CppObject *)v25;
  sub_B5D560((BattleServantConfConponent_o *)v23->m_Items, v25, v17, v18, v19, v20, v21, v22);
  iconList = (int)this->fields.iconList;
  v24 = j_il2cpp_value_box_0(int_TypeInfo, &iconList);
  v32 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = sub_B5D684(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_22;
  }
  if ( v23->max_length <= 1 )
    goto LABEL_21;
  v23->m_Items[1] = (Il2CppObject *)v32;
  sub_B5D560((BattleServantConfConponent_o *)&v23->m_Items[1], v32, v26, v27, v28, v29, v30, v31);
  v24 = StringLiteral_16096/*"_"*/;
  if ( StringLiteral_16096/*"_"*/ )
  {
    v24 = sub_B5D684(StringLiteral_16096/*"_"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_22;
    v39 = (System_Int32_array **)StringLiteral_16096/*"_"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v23->max_length <= 2 )
    goto LABEL_21;
  v23->m_Items[2] = (Il2CppObject *)v39;
  sub_B5D560((BattleServantConfConponent_o *)&v23->m_Items[2], v39, v33, v34, v35, v36, v37, v38);
  v50 = count;
  v24 = j_il2cpp_value_box_0(int_TypeInfo, &v50);
  v46 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = sub_B5D684(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
    {
LABEL_22:
      v49 = sub_B5D6BC(v24);
      sub_B5D668(v49, 0LL);
    }
  }
  if ( v23->max_length <= 3 )
  {
LABEL_21:
    v48 = sub_B5D6C8(v24);
    sub_B5D668(v48, 0LL);
  }
  v23->m_Items[3] = (Il2CppObject *)v46;
  sub_B5D560((BattleServantConfConponent_o *)&v23->m_Items[3], v46, v40, v41, v42, v43, v44, v45);
  return System_String__Concat_44587572(v23, 0LL);
}


void __fastcall BattleServantHpShiftComponent__playShiftEffect(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleServantHpShiftComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  struct System_Int32_array *shiftDeckList; // x9
  __int64 v25; // x8
  il2cpp_array_size_t max_length; // w11
  unsigned int v27; // w9
  signed int v28; // w21
  UnityEngine_Object_o *v29; // x20
  BattleDataDefine_c *v30; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x20
  Il2CppObject *v33; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20
  __int64 v35; // x8
  UnityEngine_Transform_o *transform; // x0
  __int64 v37; // x8
  UISprite_o *Component_srcLineSprite; // x20
  const MethodInfo *v39; // x2
  __int64 v40; // x0
  int v41; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_42EB24A & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)svtData, (_DWORD)method, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&BattleDataDefine_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v12, v13, v14);
    sub_B5D5C4(&int_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    this = (BattleServantHpShiftComponent_o *)sub_B5D5C4(&StringLiteral_19431/*"hp_iconeffect_1_"*/, v21, v22, v23);
    byte_42EB24A = 1;
  }
  if ( !svtData )
    goto LABEL_33;
  shiftDeckList = svtData->fields.shiftDeckList;
  if ( !shiftDeckList )
    goto LABEL_33;
  v25 = *(_QWORD *)&v5->fields.defaultDepth;
  if ( v25 )
  {
    max_length = shiftDeckList->max_length;
    v27 = *(_DWORD *)(v25 + 24);
    v28 = max_length - svtData->fields.shiftDeckIndex;
    if ( v28 < (int)v27 )
    {
      if ( v28 >= v27 )
        goto LABEL_34;
      v29 = *(UnityEngine_Object_o **)(v25 + 8LL * v28 + 32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(v29, 0LL, 0LL) )
      {
        v30 = BattleDataDefine_TypeInfo;
        if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleDataDefine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
          v30 = BattleDataDefine_TypeInfo;
        }
        ASSET_BATTLE_COMMON = v30->static_fields->ASSET_BATTLE_COMMON;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
        v41 = v28 + 2;
        v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
        this = (BattleServantHpShiftComponent_o *)System_String__Concat((Il2CppObject *)StringLiteral_19431/*"hp_iconeffect_1_"*/, v33, 0LL);
        if ( !AssetStorage )
          goto LABEL_33;
        Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   (System_String_o *)this,
                                                                   (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattleServantHpShiftComponent_o *)UnityEngine_Object__op_Inequality(
                                                    Object_WarBoardWaitTimeSetting,
                                                    0LL,
                                                    0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v35 = *(_QWORD *)&v5->fields.defaultDepth;
          if ( !v35 )
            goto LABEL_33;
          if ( (unsigned int)v28 >= *(_DWORD *)(v35 + 24) )
            goto LABEL_34;
          this = *(BattleServantHpShiftComponent_o **)(v35 + 8LL * v28 + 32);
          if ( !this )
            goto LABEL_33;
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          this = (BattleServantHpShiftComponent_o *)BaseMonoBehaviour__createObject(
                                                      (BaseMonoBehaviour_o *)v5,
                                                      (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
                                                      transform,
                                                      0LL,
                                                      0LL);
        }
        v37 = *(_QWORD *)&v5->fields.defaultDepth;
        if ( !v37 )
          goto LABEL_33;
        if ( (unsigned int)v28 < *(_DWORD *)(v37 + 24) )
        {
          this = *(BattleServantHpShiftComponent_o **)(v37 + 8LL * v28 + 32);
          if ( this )
          {
            Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(v5, 0, v39);
            if ( Component_srcLineSprite )
            {
              UISprite__set_spriteName(Component_srcLineSprite, (System_String_o *)this, 0LL);
              return;
            }
          }
LABEL_33:
          sub_B5D69C(this, svtData);
        }
LABEL_34:
        v40 = sub_B5D6C8(this);
        sub_B5D668(v40, 0LL);
      }
    }
  }
}


float __fastcall BattleServantHpShiftComponent__playShiftEffectBefore(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleServantHpShiftComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct System_Int32_array *shiftDeckList; // x8
  int v22; // w21
  bool IsSuperBossUi; // w0
  const MethodInfo *v24; // x2
  __int64 v26; // x8
  int v27; // w9
  UnityEngine_Object_o *v28; // x20
  BattleDataDefine_c *v29; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x20
  Il2CppObject *v32; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20
  __int64 v34; // x8
  UnityEngine_Transform_o *transform; // x0
  __int64 v36; // x0
  int v37; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_42EB249 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)svtData, (_DWORD)method, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&BattleDataDefine_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    this = (BattleServantHpShiftComponent_o *)sub_B5D5C4(&StringLiteral_19432/*"hp_iconeffect_before_1_"*/, v18, v19, v20);
    byte_42EB249 = 1;
  }
  if ( !svtData )
    goto LABEL_30;
  shiftDeckList = svtData->fields.shiftDeckList;
  if ( !shiftDeckList )
    goto LABEL_30;
  v22 = shiftDeckList->max_length - svtData->fields.shiftDeckIndex;
  if ( LODWORD(v5->fields.shiftIconClone) - 1 == v22 )
  {
    IsSuperBossUi = BattleServantData__get_IsSuperBossUi(svtData, 0LL);
    return BattleServantHpShiftComponent__CreateDecagramEffect(v5, IsSuperBossUi, v24);
  }
  v26 = *(_QWORD *)&v5->fields.defaultDepth;
  if ( v26 )
  {
    v27 = *(_DWORD *)(v26 + 24);
    if ( v22 < v27 )
    {
      if ( v22 < (unsigned int)v27 )
      {
        v28 = *(UnityEngine_Object_o **)(v26 + 8LL * v22 + 32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(v28, 0LL, 0LL) )
          return 0.0;
        v29 = BattleDataDefine_TypeInfo;
        if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleDataDefine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
          v29 = BattleDataDefine_TypeInfo;
        }
        ASSET_BATTLE_COMMON = v29->static_fields->ASSET_BATTLE_COMMON;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
        v37 = v22 + 2;
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
        this = (BattleServantHpShiftComponent_o *)System_String__Concat((Il2CppObject *)StringLiteral_19432/*"hp_iconeffect_before_1_"*/, v32, 0LL);
        if ( !AssetStorage )
          goto LABEL_30;
        Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   (System_String_o *)this,
                                                                   (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattleServantHpShiftComponent_o *)UnityEngine_Object__op_Inequality(
                                                    Object_WarBoardWaitTimeSetting,
                                                    0LL,
                                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0.0;
        v34 = *(_QWORD *)&v5->fields.defaultDepth;
        if ( !v34 )
          goto LABEL_30;
        if ( (unsigned int)v22 < *(_DWORD *)(v34 + 24) )
        {
          this = *(BattleServantHpShiftComponent_o **)(v34 + 8LL * v22 + 32);
          if ( this )
          {
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            BaseMonoBehaviour__createObject(
              (BaseMonoBehaviour_o *)v5,
              (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
              transform,
              0LL,
              0LL);
            return 0.0;
          }
LABEL_30:
          sub_B5D69C(this, svtData);
        }
      }
      v36 = sub_B5D6C8(this);
      sub_B5D668(v36, 0LL);
    }
  }
  return 0.0;
}


int32_t __fastcall BattleServantHpShiftComponent__setInitValue(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct UnityEngine_Vector2_o addPos; // x0
  UISprite_o *Component_srcLineSprite; // x21
  BattleDataDefine_c *v17; // x8
  System_String_o *ASSET_BATTLE_COMMON; // x22
  const MethodInfo *v19; // x2
  System_String_o *SpriteName; // x0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  int32_t MaxShiftIconPos; // w0
  const MethodInfo *v24; // x2
  UIAtlas_o *atlas; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EB240 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)svtData, (_DWORD)method, v3);
    sub_B5D5C4(&BattleDataDefine_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_2825/*"BattleAssetUIAtlas"*/, v12, v13, v14);
    byte_42EB240 = 1;
  }
  atlas = 0LL;
  addPos = this->fields.addPos;
  if ( !*(_QWORD *)&addPos )
    goto LABEL_18;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            *(UnityEngine_GameObject_o **)&addPos,
                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v17 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v17 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v17->static_fields->ASSET_BATTLE_COMMON;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  addPos = (struct UnityEngine_Vector2_o)AssetManager__TryGetUIAtlas(
                                           &atlas,
                                           ASSET_BATTLE_COMMON,
                                           (System_String_o *)StringLiteral_2825/*"BattleAssetUIAtlas"*/,
                                           0LL);
  if ( (LOBYTE(addPos.fields.x) & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_18;
    UISprite__set_atlas(Component_srcLineSprite, atlas, 0LL);
    SpriteName = BattleServantHpShiftComponent__getSpriteName(this, 0, v19);
    UISprite__set_spriteName(Component_srcLineSprite, SpriteName, 0LL);
    LODWORD(this[1].klass) = Component_srcLineSprite->fields.mDepth;
  }
  addPos = this->fields.addPos;
  if ( !*(_QWORD *)&addPos
    || (UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&addPos, 0, 0LL),
        BattleServantHpShiftComponent__createIconList(this, svtData, v21),
        BattleServantHpShiftComponent__setValue(this, svtData, v22),
        !svtData) )
  {
LABEL_18:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(addPos, svtData);
  }
  if ( svtData->fields.lowLimitShift >= 1 )
  {
    MaxShiftIconPos = BattleServantData__GetMaxShiftIconPos(svtData, 0LL);
    BattleServantHpShiftComponent__UpdateHideInvalidIcon(this, MaxShiftIconPos, v24);
  }
  return 0;
}


void __fastcall BattleServantHpShiftComponent__setValue(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleServantHpShiftComponent_o *v5; // x19
  int shiftIconClone; // w21
  int v7; // w20
  __int64 v8; // x8
  __int64 v9; // x23
  bool v10; // w21
  int v11; // w9
  unsigned int v12; // w25
  const MethodInfo *v13; // x2
  UISprite_o *Component_srcLineSprite; // x22
  int32_t v15; // w1
  BattleServantHpShiftComponent_o *v16; // x0
  __int64 v17; // x8
  __int64 v18; // x0

  v5 = this;
  if ( (byte_42EB243 & 1) == 0 )
  {
    this = (BattleServantHpShiftComponent_o *)sub_B5D5C4(
                                                &Method_UnityEngine_GameObject_GetComponent_UISprite___,
                                                (_DWORD)svtData,
                                                (_DWORD)method,
                                                v3);
    byte_42EB243 = 1;
  }
  if ( *(_QWORD *)&v5->fields.defaultDepth )
  {
    if ( !svtData
      || (this = (BattleServantHpShiftComponent_o *)BattleServantData__GetCurrentShiftPos(svtData, 0LL),
          !*(_QWORD *)&v5->fields.imageType)
      || (shiftIconClone = (int)v5->fields.shiftIconClone,
          v7 = (int)this,
          UnityEngine_Behaviour__set_enabled(
            *(UnityEngine_Behaviour_o **)&v5->fields.imageType,
            (int)this >= shiftIconClone,
            0LL),
          (v8 = *(_QWORD *)&v5->fields.defaultDepth) == 0) )
    {
LABEL_19:
      sub_B5D69C(this, svtData);
    }
    v9 = 4LL;
    v10 = v7 < shiftIconClone;
    while ( 1 )
    {
      v11 = *(_DWORD *)(v8 + 24);
      v12 = v9 - 4;
      if ( (int)v9 - 4 >= v11 )
        break;
      if ( v12 >= v11 )
        goto LABEL_21;
      this = *(BattleServantHpShiftComponent_o **)(v8 + 8 * v9);
      if ( this )
      {
        Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  (UnityEngine_GameObject_o *)this,
                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( (int)v12 >= v7 )
        {
          v16 = v5;
          v15 = 0;
        }
        else
        {
          v15 = v9 - 2;
          v16 = v5;
        }
        this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(v16, v15, v13);
        if ( Component_srcLineSprite )
        {
          UISprite__set_spriteName(Component_srcLineSprite, (System_String_o *)this, 0LL);
          v17 = *(_QWORD *)&v5->fields.defaultDepth;
          if ( v17 )
          {
            if ( v12 >= *(_DWORD *)(v17 + 24) )
            {
LABEL_21:
              v18 = sub_B5D6C8(this);
              sub_B5D668(v18, 0LL);
            }
            this = *(BattleServantHpShiftComponent_o **)(v17 + 8 * v9);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v10, 0LL);
              v8 = *(_QWORD *)&v5->fields.defaultDepth;
              ++v9;
              if ( v8 )
                continue;
            }
          }
        }
      }
      goto LABEL_19;
    }
  }
}


void __fastcall BattleServantHpShiftComponent_EffectData___ctor(
        BattleServantHpShiftComponent_EffectData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleDataDefine_c *v5; // x0

  if ( (byte_42E60F0 & 1) == 0 )
  {
    sub_B5D5C4(&BattleDataDefine_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E60F0 = 1;
  }
  v5 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v5 = BattleDataDefine_TypeInfo;
  }
  this->fields.prefixAsset = v5->static_fields->ASSET_BATTLE_COMMON;
  sub_B5D560(&this->fields);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantHpShiftComponent___c__DisplayClass20_0___ctor(
        BattleServantHpShiftComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantHpShiftComponent___c__DisplayClass20_0___PlayShiftEffectGeneral_b__0(
        BattleServantHpShiftComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E60EF & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_int___, (_DWORD)method, v2, v3);
    byte_42E60EF = 1;
  }
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callBack,
    this->fields.index,
    (const MethodInfo_2CECD28 *)Method_ActionExtensions_Call_int___);
}