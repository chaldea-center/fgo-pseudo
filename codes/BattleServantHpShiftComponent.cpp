void __fastcall BattleServantHpShiftComponent___ctor(BattleServantHpShiftComponent_o *this, const MethodInfo *method)
{
  LODWORD(this->fields.shiftIconClone) = 10;
  LODWORD(this->fields.iconList) = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BattleServantHpShiftComponent__CreateDecagramEffect(
        BattleServantHpShiftComponent_o *this,
        bool isSuperBoss,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleDataDefine_c *v11; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  AssetData_o *AssetStorage; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x21
  float v15; // s8
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Object_o *Object; // x21
  srcLineSprite_o *Component_srcLineSprite; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_421724A & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, isSuperBoss);
    sub_B0D8A4(&AssetManager_TypeInfo, v5);
    sub_B0D8A4(&BattleDataDefine_TypeInfo, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleServantHpShiftDecagramEffectComponent___, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_19242/*"hp_crystaleffect_superboss_1_1"*/, v9);
    sub_B0D8A4(&StringLiteral_19241/*"hp_crystaleffect_1_1"*/, v10);
    byte_421724A = 1;
  }
  v11 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v11 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v11->static_fields->ASSET_BATTLE_COMMON;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
  if ( !AssetStorage )
    goto LABEL_29;
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 AssetStorage,
                                                                 (System_String_o *)StringLiteral_19241/*"hp_crystaleffect_1_1"*/,
                                                                 (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = 0.0;
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
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleServantHpShiftDecagramEffectComponent___);
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
          sub_B0D840(
            (BattleServantConfConponent_o *)&Component_srcLineSprite[1].fields.mcTweenAlphaP,
            (System_Int32_array **)this,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          v15 = *((float *)&Component_srcLineSprite[1].fields.mcLineSprite + 1);
          if ( isSuperBoss )
            CommonEffectComponent__Init_16945024(
              (CommonEffectComponent_o *)Component_srcLineSprite,
              (System_String_o *)StringLiteral_19242/*"hp_crystaleffect_superboss_1_1"*/,
              0,
              0,
              0LL);
          return v15;
        }
LABEL_29:
        sub_B0D97C(AssetStorage);
      }
    }
  }
  return v15;
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
  __int64 v5; // x1
  int32_t shiftIconClone; // w8
  UnityEngine_Behaviour_o *v7; // x0
  UnityEngine_Object_o *v9; // x19

  if ( (byte_4217249 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_GameObject___, *(_QWORD *)&index);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4217249 = 1;
  }
  shiftIconClone = (int32_t)this->fields.shiftIconClone;
  if ( shiftIconClone <= index )
    return 0;
  if ( shiftIconClone - 1 == index )
  {
    v7 = *(UnityEngine_Behaviour_o **)&this->fields.imageType;
    if ( v7 )
      return UnityEngine_Behaviour__get_isActiveAndEnabled(v7, 0LL);
LABEL_14:
    sub_B0D97C(v7);
  }
  v9 = (UnityEngine_Object_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                 *(WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array **)&this->fields.defaultDepth,
                                 index,
                                 0LL,
                                 (const MethodInfo_1709498 *)Method_BasicHelper_IndexValue_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) == 0 )
    return 0;
  if ( !v9 )
    goto LABEL_14;
  return UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantHpShiftComponent__PlayShiftEffectGeneral(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        BattleServantHpShiftComponent_EffectData_o *effectData,
        BattleServantParamComponent_o *servantParam,
        float *nextAnimationTime,
        System_Action_int__o *callBack,
        const MethodInfo *method)
{
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
  __int64 v24; // x20
  System_String_o *Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int32_t v32; // w1
  const MethodInfo *v33; // x2
  __int64 v34; // x10
  bool v35; // w1
  UnityEngine_Object_o *v36; // x22
  bool v37; // w20
  System_String_o *prefixAsset; // x23
  AssetData_o *AssetStorage; // x0
  Il2CppObject *prefixEffect; // x21
  AssetData_o *v41; // x23
  Il2CppObject *v42; // x0
  UnityEngine_GameObject_o *v43; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *Object; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  __int64 v47; // x1
  __int64 v48; // x2
  System_Action_o *v49; // x21
  int v51; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_421724D & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_int___, *(_QWORD *)&index);
    sub_B0D8A4(&System_Action_TypeInfo, v13);
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, v14);
    sub_B0D8A4(&AssetManager_TypeInfo, v15);
    sub_B0D8A4(&Method_BasicHelper_IndexValue_GameObject___, v16);
    sub_B0D8A4(&BattleServantSuperBossParamComponent_TypeInfo, v17);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v18);
    sub_B0D8A4(&int_TypeInfo, v19);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v20);
    sub_B0D8A4(&Method_BattleServantHpShiftComponent___c__DisplayClass20_0__PlayShiftEffectGeneral_b__0__, v21);
    sub_B0D8A4(&BattleServantHpShiftComponent___c__DisplayClass20_0_TypeInfo, v22);
    sub_B0D8A4(&StringLiteral_19250/*"hp_iconeffect_before_1_"*/, v23);
    byte_421724D = 1;
  }
  v24 = sub_B0D974(BattleServantHpShiftComponent___c__DisplayClass20_0_TypeInfo, *(_QWORD *)&index, effectData);
  BattleServantHpShiftComponent___c__DisplayClass20_0___ctor(
    (BattleServantHpShiftComponent___c__DisplayClass20_0_o *)v24,
    0LL);
  if ( !v24 )
    goto LABEL_39;
  *(_QWORD *)(v24 + 16) = callBack;
  sub_B0D840((BattleServantConfConponent_o *)(v24 + 16), (System_Int32_array **)callBack, v26, v27, v28, v29, v30, v31);
  *(_DWORD *)(v24 + 24) = index;
  *nextAnimationTime = 0.0;
  v32 = *(_DWORD *)(v24 + 24);
  if ( LODWORD(this->fields.shiftIconClone) - 1 == v32 )
  {
    if ( !effectData )
      goto LABEL_39;
    if ( System_String__op_Equality(effectData->fields.prefixEffect, (System_String_o *)StringLiteral_19250/*"hp_iconeffect_before_1_"*/, 0LL) )
    {
      v35 = servantParam
         && (v34 = *(&BattleServantSuperBossParamComponent_TypeInfo->_2.bitflags2 + 1),
             *(&servantParam->klass->_2.bitflags2 + 1) >= (unsigned int)v34)
         && servantParam->klass->_2.typeHierarchy[v34 - 1] == (Il2CppClass *)BattleServantSuperBossParamComponent_TypeInfo;
      *nextAnimationTime = BattleServantHpShiftComponent__CreateDecagramEffect(this, v35, v33);
      return 1;
    }
    v32 = *(_DWORD *)(v24 + 24);
  }
  v36 = (UnityEngine_Object_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                  *(WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array **)&this->fields.defaultDepth,
                                  v32,
                                  0LL,
                                  (const MethodInfo_1709498 *)Method_BasicHelper_IndexValue_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Object_WarBoardWaitTimeSetting = (System_String_o *)UnityEngine_Object__op_Equality(v36, 0LL, 0LL);
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
      v41 = AssetStorage;
      v51 = *(_DWORD *)(v24 + 24) + 2;
      v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
      Object_WarBoardWaitTimeSetting = System_String__Concat(prefixEffect, v42, 0LL);
      if ( v41 )
      {
        Object_WarBoardWaitTimeSetting = (System_String_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                              v41,
                                                              Object_WarBoardWaitTimeSetting,
                                                              (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
        if ( v36 )
        {
          v43 = (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v36, 0LL);
          Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)this,
                                             v43,
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
                                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
          {
            ActionExtensions__Call_int_(
              *(System_Action_T__o **)(v24 + 16),
              *(_DWORD *)(v24 + 24),
              (const MethodInfo_2D96680 *)Method_ActionExtensions_Call_int___);
            return 1;
          }
          v49 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v47, v48);
          System_Action___ctor(
            v49,
            (Il2CppObject *)v24,
            Method_BattleServantHpShiftComponent___c__DisplayClass20_0__PlayShiftEffectGeneral_b__0__,
            0LL);
          if ( Component_srcLineSprite )
          {
            v37 = 1;
            ((void (__fastcall *)(UnityEngine_Object_o *, __int64, System_Action_o *, Il2CppClass *))Component_srcLineSprite->klass[1]._1.castClass)(
              Component_srcLineSprite,
              1LL,
              v49,
              Component_srcLineSprite->klass[1]._1.declaringType);
            return v37;
          }
        }
      }
    }
LABEL_39:
    sub_B0D97C(Object_WarBoardWaitTimeSetting);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantHpShiftComponent__UpdateHideInvalidIcon(
        BattleServantHpShiftComponent_o *this,
        int32_t dispMaxPos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *v8; // x0
  int max_length; // w21
  int i; // w22
  UnityEngine_Object_o *v11; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0

  if ( (byte_4217246 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_GameObject___, *(_QWORD *)&dispMaxPos);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_4217246 = 1;
  }
  v8 = *(WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array **)&this->fields.defaultDepth;
  if ( v8 )
    max_length = v8->max_length;
  else
    max_length = 0;
  if ( dispMaxPos + 1 < max_length )
  {
    for ( i = dispMaxPos + 2; ; ++i )
    {
      v11 = (UnityEngine_Object_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                      v8,
                                      i - 1,
                                      0LL,
                                      (const MethodInfo_1709498 *)Method_BasicHelper_IndexValue_GameObject___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v11
          || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          (UnityEngine_GameObject_o *)v11,
                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0LL )
        {
          sub_B0D97C(Component_srcLineSprite);
        }
        UISprite__set_spriteName((UISprite_o *)Component_srcLineSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v11, 0, 0LL);
      }
      if ( i >= max_length )
        break;
      v8 = *(WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array **)&this->fields.defaultDepth;
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
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t shiftIconClone; // w8
  System_String_o *SpriteName; // x0
  UnityEngine_Object_o *v13; // x23
  int32_t v14; // w22
  UISprite_o *Component_srcLineSprite; // x21
  const MethodInfo *v16; // x2

  if ( (byte_4217247 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_GameObject___, *(_QWORD *)&index);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    byte_4217247 = 1;
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
      sub_B0D97C(SpriteName);
    }
    v13 = (UnityEngine_Object_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                    *(WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array **)&this->fields.defaultDepth,
                                    index,
                                    0LL,
                                    (const MethodInfo_1709498 *)Method_BasicHelper_IndexValue_GameObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    SpriteName = (System_String_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
    if ( ((unsigned __int8)SpriteName & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_18;
      v14 = isEmpty ? 0 : index + 2;
      Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                (UnityEngine_GameObject_o *)v13,
                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      SpriteName = BattleServantHpShiftComponent__getSpriteName(this, v14, v16);
      if ( !Component_srcLineSprite )
        goto LABEL_18;
      UISprite__set_spriteName(Component_srcLineSprite, SpriteName, 0LL);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13, isActive, 0LL);
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
  __int64 v7; // x1
  int32_t shiftIconClone; // w8
  UnityEngine_Behaviour_o *v9; // x0
  UnityEngine_Object_o *v10; // x20

  if ( (byte_4217248 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_GameObject___, *(_QWORD *)&index);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4217248 = 1;
  }
  shiftIconClone = (int32_t)this->fields.shiftIconClone;
  if ( shiftIconClone > index )
  {
    if ( shiftIconClone - 1 == index )
    {
      v9 = *(UnityEngine_Behaviour_o **)&this->fields.imageType;
      if ( v9 )
      {
        UnityEngine_Behaviour__set_enabled(v9, isActive, 0LL);
        return;
      }
LABEL_14:
      sub_B0D97C(v9);
    }
    v10 = (UnityEngine_Object_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                    *(WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array **)&this->fields.defaultDepth,
                                    index,
                                    0LL,
                                    (const MethodInfo_1709498 *)Method_BasicHelper_IndexValue_GameObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
    if ( ((unsigned __int8)v9 & 1) != 0 )
    {
      if ( !v10 )
        goto LABEL_14;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v10, isActive, 0LL);
    }
  }
}


void __fastcall BattleServantHpShiftComponent__createIconList(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantHpShiftComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x8
  __int64 *p_defaultDepth; // x20
  int v18; // w22
  int shiftIconClone; // w10
  struct UnityEngine_GameObject_o **p_shiftIconClone; // x26
  __int64 v21; // x9
  unsigned int v22; // w23
  _BOOL4 v23; // w24
  unsigned __int64 v24; // x27
  UnityEngine_Object_o *v25; // x25
  int v26; // w8
  BattleDataDefine_c *v27; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x24
  UISprite_o *v29; // x24
  const MethodInfo *v30; // x2
  __int64 v31; // x8
  int v32; // w24
  int v33; // w21
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_Object_c **v41; // x26
  const MethodInfo_1B62BA8 **v42; // x27
  __int64 v43; // x23
  __int64 v44; // x25
  int v45; // w9
  unsigned int v46; // w28
  UnityEngine_Object_c *v47; // x0
  UnityEngine_Object_o *v48; // x22
  int v49; // w21
  const MethodInfo_1B62BA8 **v50; // x24
  UnityEngine_Object_c **v51; // x27
  _DWORD *v52; // x26
  UnityEngine_GameObject_o *addPos; // x22
  UnityEngine_Transform_o *transform; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x22
  __int64 v62; // x8
  UISprite_o *Component_srcLineSprite; // x22
  const MethodInfo *v64; // x2
  __int64 v65; // x8
  __int64 v66; // x8
  __int64 v67; // x0
  __int64 v68; // x0
  int v69; // [xsp+Ch] [xbp-64h]
  UIAtlas_o *atlas; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4217244 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, svtData);
    sub_B0D8A4(&BattleDataDefine_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    this = (BattleServantHpShiftComponent_o *)sub_B0D8A4(&StringLiteral_2781/*"BattleAssetUIAtlas"*/, v9);
    byte_4217244 = 1;
  }
  atlas = 0LL;
  if ( !svtData )
    goto LABEL_63;
  this = (BattleServantHpShiftComponent_o *)BattleServantData__GetMaxShiftIconCount(svtData, 0LL);
  p_defaultDepth = (__int64 *)&v4->fields.defaultDepth;
  v16 = *(_QWORD *)&v4->fields.defaultDepth;
  v18 = (int)this;
  if ( v16 )
  {
    if ( (_DWORD)this == *(_DWORD *)(v16 + 24) )
      return;
    p_shiftIconClone = &v4->fields.shiftIconClone;
    shiftIconClone = (int)v4->fields.shiftIconClone;
    v21 = *(_QWORD *)(v16 + 24);
    if ( (int)this < shiftIconClone )
      v22 = (unsigned int)this;
    else
      v22 = shiftIconClone - 1;
    v23 = (int)this >= shiftIconClone;
    if ( v22 != (_DWORD)v21 )
    {
      if ( (int)v21 >= 1 )
      {
        v24 = 0LL;
        while ( 1 )
        {
          if ( v24 >= (unsigned int)v21 )
          {
LABEL_65:
            v67 = sub_B0D9A8(this);
            sub_B0D948(v67, 0LL);
          }
          v25 = *(UnityEngine_Object_o **)(v16 + 8 * v24 + 32);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_34935276(v25, 0LL);
          v16 = *p_defaultDepth;
          if ( !*p_defaultDepth )
            break;
          LODWORD(v21) = *(_DWORD *)(v16 + 24);
          if ( (__int64)++v24 >= (int)v21 )
            goto LABEL_18;
        }
LABEL_63:
        sub_B0D97C(this);
      }
LABEL_18:
      *p_defaultDepth = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&v4->fields.defaultDepth, 0LL, v10, v11, v12, v13, v14, v15);
    }
  }
  else
  {
    p_shiftIconClone = &v4->fields.shiftIconClone;
    v26 = (int)v4->fields.shiftIconClone;
    v23 = (int)this >= v26;
    if ( (int)this < v26 )
      v22 = (unsigned int)this;
    else
      v22 = v26 - 1;
  }
  this = *(BattleServantHpShiftComponent_o **)&v4->fields.imageType;
  if ( !this )
    goto LABEL_63;
  this = (BattleServantHpShiftComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v23, 0LL);
  if ( v23 )
  {
    v27 = BattleDataDefine_TypeInfo;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v27 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v27->static_fields->ASSET_BATTLE_COMMON;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_2781/*"BattleAssetUIAtlas"*/, 0LL) )
    {
      this = *(BattleServantHpShiftComponent_o **)&v4->fields.imageType;
      if ( !this )
        goto LABEL_63;
      UISprite__set_atlas((UISprite_o *)this, atlas, 0LL);
      v29 = *(UISprite_o **)&v4->fields.imageType;
      this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(
                                                  v4,
                                                  LODWORD(v4->fields.shiftIconClone) + 1,
                                                  v30);
      if ( !v29 )
        goto LABEL_63;
      UISprite__set_spriteName(v29, (System_String_o *)this, 0LL);
      this = *(BattleServantHpShiftComponent_o **)&v4->fields.imageType;
      if ( !this )
        goto LABEL_63;
      ((void (__fastcall *)(BattleServantHpShiftComponent_o *, void *))this->klass[2]._1.typeMetadataHandle)(
        this,
        this->klass[2]._1.interopData);
    }
  }
  if ( v18 >= 1 )
  {
    this = (BattleServantHpShiftComponent_o *)BattleServantData__GetCurrentShiftPos(svtData, 0LL);
    v31 = *p_defaultDepth;
    v32 = *(_DWORD *)p_shiftIconClone;
    v33 = (int)this;
    if ( !*p_defaultDepth )
    {
      v34 = (System_Int32_array **)sub_B0D8BC(UnityEngine_GameObject___TypeInfo, v22);
      *p_defaultDepth = (__int64)v34;
      sub_B0D840((BattleServantConfConponent_o *)&v4->fields.defaultDepth, v34, v35, v36, v37, v38, v39, v40);
      v31 = *p_defaultDepth;
      if ( !*p_defaultDepth )
        goto LABEL_63;
    }
    v41 = &UnityEngine_Object_TypeInfo;
    v42 = (const MethodInfo_1B62BA8 **)&Method_UnityEngine_GameObject_GetComponent_UISprite___;
    v43 = 4LL;
    v44 = 8LL;
    v69 = v33;
    while ( 1 )
    {
      v45 = *(_DWORD *)(v31 + 24);
      v46 = v43 - 4;
      if ( (int)v43 - 4 >= v45 )
        break;
      if ( v46 >= v45 )
        goto LABEL_65;
      v47 = *v41;
      v48 = *(UnityEngine_Object_o **)(v31 + 8 * v43);
      if ( (BYTE3((*v41)->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v47);
      this = (BattleServantHpShiftComponent_o *)UnityEngine_Object__op_Equality(v48, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v49 = v32;
        v50 = v42;
        v51 = v41;
        v52 = *(_DWORD **)&v4->fields.defaultDepth;
        addPos = (UnityEngine_GameObject_o *)v4->fields.addPos;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
        this = (BattleServantHpShiftComponent_o *)BaseMonoBehaviour__createObject(
                                                    (BaseMonoBehaviour_o *)v4,
                                                    addPos,
                                                    transform,
                                                    0LL,
                                                    0LL);
        if ( !v52 )
          goto LABEL_63;
        v61 = (System_Int32_array **)this;
        if ( this )
        {
          this = (BattleServantHpShiftComponent_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v52 + 64LL));
          if ( !this )
          {
            v68 = sub_B0D99C(0LL);
            sub_B0D948(v68, 0LL);
          }
        }
        if ( v46 >= v52[6] )
          goto LABEL_65;
        *(_QWORD *)&v52[2 * v43] = v61;
        sub_B0D840((BattleServantConfConponent_o *)&v52[v44], v61, v55, v56, v57, v58, v59, v60);
        v41 = v51;
        v42 = v50;
        v32 = v49;
        v33 = v69;
        p_defaultDepth = (__int64 *)&v4->fields.defaultDepth;
      }
      v62 = *p_defaultDepth;
      if ( !*p_defaultDepth )
        goto LABEL_63;
      if ( v46 >= *(_DWORD *)(v62 + 24) )
        goto LABEL_65;
      this = *(BattleServantHpShiftComponent_o **)(v62 + 8 * v43);
      if ( this )
      {
        Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  (UnityEngine_GameObject_o *)this,
                                                  *v42);
        this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(v4, (int)v43 - 2, v64);
        if ( Component_srcLineSprite )
        {
          UISprite__set_spriteName(Component_srcLineSprite, (System_String_o *)this, 0LL);
          UIWidget__set_depth((UIWidget_o *)Component_srcLineSprite, v43 + LODWORD(v4[1].klass) - 4, 0LL);
          v65 = *(_QWORD *)&v4->fields.defaultDepth;
          if ( v65 )
          {
            if ( v46 >= *(_DWORD *)(v65 + 24) )
              goto LABEL_65;
            this = *(BattleServantHpShiftComponent_o **)(v65 + 8 * v43);
            if ( this )
            {
              this = (BattleServantHpShiftComponent_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0LL);
              if ( this )
              {
                v71.fields.y = *((float *)&v4->fields.shiftIconDecagramSprite + 1) * (float)(int)v46;
                v71.fields.x = *(float *)&v4->fields.shiftIconDecagramSprite * (float)(int)v46;
                v71.fields.z = 0.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v71, 0LL);
                v66 = *(_QWORD *)&v4->fields.defaultDepth;
                if ( v66 )
                {
                  if ( v46 >= *(_DWORD *)(v66 + 24) )
                    goto LABEL_65;
                  this = *(BattleServantHpShiftComponent_o **)(v66 + 8 * v43);
                  if ( this )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v33 < v32, 0LL);
                    v31 = *p_defaultDepth;
                    ++v43;
                    v44 += 2LL;
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleServantHpShiftComponent__getSpriteName(
        BattleServantHpShiftComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Object_array *v15; // x20
  __int64 v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x19
  __int64 v40; // x0
  __int64 v41; // x0
  int32_t v42; // [xsp+8h] [xbp-28h] BYREF
  int iconList; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4217243 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&count);
    sub_B0D8A4(&object___TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v6);
    sub_B0D8A4(&StringLiteral_19247/*"hp_icon_"*/, v7);
    byte_4217243 = 1;
  }
  v8 = sub_B0D8BC(object___TypeInfo, 4LL);
  if ( !v8 )
    sub_B0D97C(0LL);
  v15 = (System_Object_array *)v8;
  v16 = StringLiteral_19247/*"hp_icon_"*/;
  if ( StringLiteral_19247/*"hp_icon_"*/ )
  {
    v16 = sub_B0D964(StringLiteral_19247/*"hp_icon_"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_22;
    v17 = (System_Int32_array **)StringLiteral_19247/*"hp_icon_"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v15->max_length )
    goto LABEL_21;
  v15->m_Items[0] = (Il2CppObject *)v17;
  sub_B0D840((BattleServantConfConponent_o *)v15->m_Items, v17, v9, v10, v11, v12, v13, v14);
  iconList = (int)this->fields.iconList;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &iconList);
  v24 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = sub_B0D964(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_22;
  }
  if ( v15->max_length <= 1 )
    goto LABEL_21;
  v15->m_Items[1] = (Il2CppObject *)v24;
  sub_B0D840((BattleServantConfConponent_o *)&v15->m_Items[1], v24, v18, v19, v20, v21, v22, v23);
  v16 = StringLiteral_15952/*"_"*/;
  if ( StringLiteral_15952/*"_"*/ )
  {
    v16 = sub_B0D964(StringLiteral_15952/*"_"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_22;
    v31 = (System_Int32_array **)StringLiteral_15952/*"_"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v15->max_length <= 2 )
    goto LABEL_21;
  v15->m_Items[2] = (Il2CppObject *)v31;
  sub_B0D840((BattleServantConfConponent_o *)&v15->m_Items[2], v31, v25, v26, v27, v28, v29, v30);
  v42 = count;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v42);
  v38 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = sub_B0D964(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_22:
      v41 = sub_B0D99C(v16);
      sub_B0D948(v41, 0LL);
    }
  }
  if ( v15->max_length <= 3 )
  {
LABEL_21:
    v40 = sub_B0D9A8(v16);
    sub_B0D948(v40, 0LL);
  }
  v15->m_Items[3] = (Il2CppObject *)v38;
  sub_B0D840((BattleServantConfConponent_o *)&v15->m_Items[3], v38, v32, v33, v34, v35, v36, v37);
  return System_String__Concat_43859688(v15, 0LL);
}


void __fastcall BattleServantHpShiftComponent__playShiftEffect(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantHpShiftComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Int32_array *shiftDeckList; // x9
  __int64 v12; // x8
  il2cpp_array_size_t max_length; // w11
  unsigned int v14; // w9
  signed int v15; // w21
  UnityEngine_Object_o *v16; // x20
  BattleDataDefine_c *v17; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x20
  Il2CppObject *v20; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20
  __int64 v22; // x8
  UnityEngine_Transform_o *transform; // x0
  __int64 v24; // x8
  UISprite_o *Component_srcLineSprite; // x20
  const MethodInfo *v26; // x2
  __int64 v27; // x0
  int v28; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_421724C & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, svtData);
    sub_B0D8A4(&AssetManager_TypeInfo, v5);
    sub_B0D8A4(&BattleDataDefine_TypeInfo, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_B0D8A4(&int_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    this = (BattleServantHpShiftComponent_o *)sub_B0D8A4(&StringLiteral_19249/*"hp_iconeffect_1_"*/, v10);
    byte_421724C = 1;
  }
  if ( !svtData )
    goto LABEL_33;
  shiftDeckList = svtData->fields.shiftDeckList;
  if ( !shiftDeckList )
    goto LABEL_33;
  v12 = *(_QWORD *)&v4->fields.defaultDepth;
  if ( v12 )
  {
    max_length = shiftDeckList->max_length;
    v14 = *(_DWORD *)(v12 + 24);
    v15 = max_length - svtData->fields.shiftDeckIndex;
    if ( v15 < (int)v14 )
    {
      if ( v15 >= v14 )
        goto LABEL_34;
      v16 = *(UnityEngine_Object_o **)(v12 + 8LL * v15 + 32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(v16, 0LL, 0LL) )
      {
        v17 = BattleDataDefine_TypeInfo;
        if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleDataDefine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
          v17 = BattleDataDefine_TypeInfo;
        }
        ASSET_BATTLE_COMMON = v17->static_fields->ASSET_BATTLE_COMMON;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
        v28 = v15 + 2;
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
        this = (BattleServantHpShiftComponent_o *)System_String__Concat((Il2CppObject *)StringLiteral_19249/*"hp_iconeffect_1_"*/, v20, 0LL);
        if ( !AssetStorage )
          goto LABEL_33;
        Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   (System_String_o *)this,
                                                                   (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
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
          v22 = *(_QWORD *)&v4->fields.defaultDepth;
          if ( !v22 )
            goto LABEL_33;
          if ( (unsigned int)v15 >= *(_DWORD *)(v22 + 24) )
            goto LABEL_34;
          this = *(BattleServantHpShiftComponent_o **)(v22 + 8LL * v15 + 32);
          if ( !this )
            goto LABEL_33;
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          this = (BattleServantHpShiftComponent_o *)BaseMonoBehaviour__createObject(
                                                      (BaseMonoBehaviour_o *)v4,
                                                      (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
                                                      transform,
                                                      0LL,
                                                      0LL);
        }
        v24 = *(_QWORD *)&v4->fields.defaultDepth;
        if ( !v24 )
          goto LABEL_33;
        if ( (unsigned int)v15 < *(_DWORD *)(v24 + 24) )
        {
          this = *(BattleServantHpShiftComponent_o **)(v24 + 8LL * v15 + 32);
          if ( this )
          {
            Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(v4, 0, v26);
            if ( Component_srcLineSprite )
            {
              UISprite__set_spriteName(Component_srcLineSprite, (System_String_o *)this, 0LL);
              return;
            }
          }
LABEL_33:
          sub_B0D97C(this);
        }
LABEL_34:
        v27 = sub_B0D9A8(this);
        sub_B0D948(v27, 0LL);
      }
    }
  }
}


float __fastcall BattleServantHpShiftComponent__playShiftEffectBefore(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantHpShiftComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Int32_array *shiftDeckList; // x8
  int v11; // w21
  bool IsSuperBossUi; // w0
  const MethodInfo *v13; // x2
  __int64 v15; // x8
  int v16; // w9
  UnityEngine_Object_o *v17; // x20
  BattleDataDefine_c *v18; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x20
  Il2CppObject *v21; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20
  __int64 v23; // x8
  UnityEngine_Transform_o *transform; // x0
  __int64 v25; // x0
  int v26; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_421724B & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, svtData);
    sub_B0D8A4(&AssetManager_TypeInfo, v5);
    sub_B0D8A4(&BattleDataDefine_TypeInfo, v6);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    this = (BattleServantHpShiftComponent_o *)sub_B0D8A4(&StringLiteral_19250/*"hp_iconeffect_before_1_"*/, v9);
    byte_421724B = 1;
  }
  if ( !svtData )
    goto LABEL_30;
  shiftDeckList = svtData->fields.shiftDeckList;
  if ( !shiftDeckList )
    goto LABEL_30;
  v11 = shiftDeckList->max_length - svtData->fields.shiftDeckIndex;
  if ( LODWORD(v4->fields.shiftIconClone) - 1 == v11 )
  {
    IsSuperBossUi = BattleServantData__get_IsSuperBossUi(svtData, 0LL);
    return BattleServantHpShiftComponent__CreateDecagramEffect(v4, IsSuperBossUi, v13);
  }
  v15 = *(_QWORD *)&v4->fields.defaultDepth;
  if ( v15 )
  {
    v16 = *(_DWORD *)(v15 + 24);
    if ( v11 < v16 )
    {
      if ( v11 < (unsigned int)v16 )
      {
        v17 = *(UnityEngine_Object_o **)(v15 + 8LL * v11 + 32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(v17, 0LL, 0LL) )
          return 0.0;
        v18 = BattleDataDefine_TypeInfo;
        if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleDataDefine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
          v18 = BattleDataDefine_TypeInfo;
        }
        ASSET_BATTLE_COMMON = v18->static_fields->ASSET_BATTLE_COMMON;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
        v26 = v11 + 2;
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
        this = (BattleServantHpShiftComponent_o *)System_String__Concat((Il2CppObject *)StringLiteral_19250/*"hp_iconeffect_before_1_"*/, v21, 0LL);
        if ( !AssetStorage )
          goto LABEL_30;
        Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   (System_String_o *)this,
                                                                   (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
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
        v23 = *(_QWORD *)&v4->fields.defaultDepth;
        if ( !v23 )
          goto LABEL_30;
        if ( (unsigned int)v11 < *(_DWORD *)(v23 + 24) )
        {
          this = *(BattleServantHpShiftComponent_o **)(v23 + 8LL * v11 + 32);
          if ( this )
          {
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            BaseMonoBehaviour__createObject(
              (BaseMonoBehaviour_o *)v4,
              (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
              transform,
              0LL,
              0LL);
            return 0.0;
          }
LABEL_30:
          sub_B0D97C(this);
        }
      }
      v25 = sub_B0D9A8(this);
      sub_B0D948(v25, 0LL);
    }
  }
  return 0.0;
}


int32_t __fastcall BattleServantHpShiftComponent__setInitValue(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UnityEngine_Vector2_o addPos; // x0
  UISprite_o *Component_srcLineSprite; // x21
  BattleDataDefine_c *v10; // x8
  System_String_o *ASSET_BATTLE_COMMON; // x22
  const MethodInfo *v12; // x2
  System_String_o *SpriteName; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  int32_t MaxShiftIconPos; // w0
  const MethodInfo *v17; // x2
  UIAtlas_o *atlas; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4217242 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, svtData);
    sub_B0D8A4(&BattleDataDefine_TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6);
    sub_B0D8A4(&StringLiteral_2781/*"BattleAssetUIAtlas"*/, v7);
    byte_4217242 = 1;
  }
  atlas = 0LL;
  addPos = this->fields.addPos;
  if ( !*(_QWORD *)&addPos )
    goto LABEL_18;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            *(UnityEngine_GameObject_o **)&addPos,
                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v10 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v10 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v10->static_fields->ASSET_BATTLE_COMMON;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  addPos = (struct UnityEngine_Vector2_o)AssetManager__TryGetUIAtlas(
                                           &atlas,
                                           ASSET_BATTLE_COMMON,
                                           (System_String_o *)StringLiteral_2781/*"BattleAssetUIAtlas"*/,
                                           0LL);
  if ( (LOBYTE(addPos.fields.x) & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_18;
    UISprite__set_atlas(Component_srcLineSprite, atlas, 0LL);
    SpriteName = BattleServantHpShiftComponent__getSpriteName(this, 0, v12);
    UISprite__set_spriteName(Component_srcLineSprite, SpriteName, 0LL);
    LODWORD(this[1].klass) = Component_srcLineSprite->fields.mDepth;
  }
  addPos = this->fields.addPos;
  if ( !*(_QWORD *)&addPos
    || (UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&addPos, 0, 0LL),
        BattleServantHpShiftComponent__createIconList(this, svtData, v14),
        BattleServantHpShiftComponent__setValue(this, svtData, v15),
        !svtData) )
  {
LABEL_18:
    ((void (__fastcall __noreturn *)(_QWORD))sub_B0D97C)(addPos);
  }
  if ( svtData->fields.lowLimitShift >= 1 )
  {
    MaxShiftIconPos = BattleServantData__GetMaxShiftIconPos(svtData, 0LL);
    BattleServantHpShiftComponent__UpdateHideInvalidIcon(this, MaxShiftIconPos, v17);
  }
  return 0;
}


void __fastcall BattleServantHpShiftComponent__setValue(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantHpShiftComponent_o *v4; // x19
  int shiftIconClone; // w21
  int v6; // w20
  __int64 v7; // x8
  __int64 v8; // x23
  bool v9; // w21
  int v10; // w9
  unsigned int v11; // w25
  const MethodInfo *v12; // x2
  UISprite_o *Component_srcLineSprite; // x22
  int32_t v14; // w1
  BattleServantHpShiftComponent_o *v15; // x0
  __int64 v16; // x8
  __int64 v17; // x0

  v4 = this;
  if ( (byte_4217245 & 1) == 0 )
  {
    this = (BattleServantHpShiftComponent_o *)sub_B0D8A4(
                                                &Method_UnityEngine_GameObject_GetComponent_UISprite___,
                                                svtData);
    byte_4217245 = 1;
  }
  if ( *(_QWORD *)&v4->fields.defaultDepth )
  {
    if ( !svtData
      || (this = (BattleServantHpShiftComponent_o *)BattleServantData__GetCurrentShiftPos(svtData, 0LL),
          !*(_QWORD *)&v4->fields.imageType)
      || (shiftIconClone = (int)v4->fields.shiftIconClone,
          v6 = (int)this,
          UnityEngine_Behaviour__set_enabled(
            *(UnityEngine_Behaviour_o **)&v4->fields.imageType,
            (int)this >= shiftIconClone,
            0LL),
          (v7 = *(_QWORD *)&v4->fields.defaultDepth) == 0) )
    {
LABEL_19:
      sub_B0D97C(this);
    }
    v8 = 4LL;
    v9 = v6 < shiftIconClone;
    while ( 1 )
    {
      v10 = *(_DWORD *)(v7 + 24);
      v11 = v8 - 4;
      if ( (int)v8 - 4 >= v10 )
        break;
      if ( v11 >= v10 )
        goto LABEL_21;
      this = *(BattleServantHpShiftComponent_o **)(v7 + 8 * v8);
      if ( this )
      {
        Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  (UnityEngine_GameObject_o *)this,
                                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( (int)v11 >= v6 )
        {
          v15 = v4;
          v14 = 0;
        }
        else
        {
          v14 = v8 - 2;
          v15 = v4;
        }
        this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(v15, v14, v12);
        if ( Component_srcLineSprite )
        {
          UISprite__set_spriteName(Component_srcLineSprite, (System_String_o *)this, 0LL);
          v16 = *(_QWORD *)&v4->fields.defaultDepth;
          if ( v16 )
          {
            if ( v11 >= *(_DWORD *)(v16 + 24) )
            {
LABEL_21:
              v17 = sub_B0D9A8(this);
              sub_B0D948(v17, 0LL);
            }
            this = *(BattleServantHpShiftComponent_o **)(v16 + 8 * v8);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v9, 0LL);
              v7 = *(_QWORD *)&v4->fields.defaultDepth;
              ++v8;
              if ( v7 )
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
  BattleDataDefine_c *v3; // x0
  struct System_String_o *ASSET_BATTLE_COMMON; // x1

  if ( (byte_4211F01 & 1) == 0 )
  {
    sub_B0D8A4(&BattleDataDefine_TypeInfo, method);
    byte_4211F01 = 1;
  }
  v3 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v3 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v3->static_fields->ASSET_BATTLE_COMMON;
  this->fields.prefixAsset = ASSET_BATTLE_COMMON;
  sub_B0D840(&this->fields, ASSET_BATTLE_COMMON);
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
  if ( (byte_4211F00 & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_int___, method);
    byte_4211F00 = 1;
  }
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callBack,
    this->fields.index,
    (const MethodInfo_2D96680 *)Method_ActionExtensions_Call_int___);
}