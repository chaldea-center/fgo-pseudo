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
  BattleDataDefine_c *v5; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  AssetData_o *AssetStorage; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x21
  float v10; // s8
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Object_o *Object; // x21
  srcLineSprite_o *Component_srcLineSprite; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_438E1A8 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&BattleDataDefine_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BattleServantHpShiftDecagramEffectComponent___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_19572/*"hp_crystaleffect_superboss_1_1"*/);
    sub_B775C4(&StringLiteral_19571/*"hp_crystaleffect_1_1"*/);
    byte_438E1A8 = 1;
  }
  v5 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v5 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v5->static_fields->ASSET_BATTLE_COMMON;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
  if ( !AssetStorage )
    goto LABEL_29;
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 AssetStorage,
                                                                 (System_String_o *)StringLiteral_19571/*"hp_crystaleffect_1_1"*/,
                                                                 (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = 0.0;
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
                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BattleServantHpShiftDecagramEffectComponent___);
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
          sub_B77560(
            (BattleServantConfConponent_o *)&Component_srcLineSprite[1].fields.mcTweenAlphaP,
            (System_Int32_array **)this,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19);
          v10 = *((float *)&Component_srcLineSprite[1].fields.mcLineSprite + 1);
          if ( isSuperBoss )
            CommonEffectComponent__Init_17984012(
              (CommonEffectComponent_o *)Component_srcLineSprite,
              (System_String_o *)StringLiteral_19572/*"hp_crystaleffect_superboss_1_1"*/,
              0,
              0,
              0LL);
          return v10;
        }
LABEL_29:
        sub_B7769C(AssetStorage, v8);
      }
    }
  }
  return v10;
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
  int32_t shiftIconClone; // w8
  UnityEngine_Behaviour_o *v6; // x0
  UnityEngine_Object_o *v8; // x19

  if ( (byte_438E1A7 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_IndexValue_GameObject____69469904);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1A7 = 1;
  }
  shiftIconClone = (int32_t)this->fields.shiftIconClone;
  if ( shiftIconClone <= index )
    return 0;
  if ( shiftIconClone - 1 == index )
  {
    v6 = *(UnityEngine_Behaviour_o **)&this->fields.imageType;
    if ( v6 )
      return UnityEngine_Behaviour__get_isActiveAndEnabled(v6, 0LL);
LABEL_14:
    sub_B7769C(v6, *(_QWORD *)&index);
  }
  v8 = (UnityEngine_Object_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                 *(WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array **)&this->fields.defaultDepth,
                                 index,
                                 0LL,
                                 (const MethodInfo_1C684A4 *)Method_BasicHelper_IndexValue_GameObject____69469904);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
    return 0;
  if ( !v8 )
    goto LABEL_14;
  return UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)v8, 0LL);
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
  __int64 v13; // x20
  System_String_o *Object_WarBoardWaitTimeSetting; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x2
  __int64 v23; // x10
  bool v24; // w1
  UnityEngine_Object_o *v25; // x22
  bool v26; // w20
  System_String_o *prefixAsset; // x23
  AssetData_o *AssetStorage; // x0
  Il2CppObject *prefixEffect; // x21
  AssetData_o *v30; // x23
  __int64 v31; // x2
  Il2CppObject *v32; // x0
  UnityEngine_GameObject_o *v33; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *Object; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  System_Action_o *v37; // x21
  int v39; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_438E1AB & 1) == 0 )
  {
    sub_B775C4(&Method_ActionExtensions_Call_int___);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&Method_BasicHelper_IndexValue_GameObject____69469904);
    sub_B775C4(&BattleServantSuperBossParamComponent_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_BattleServantHpShiftComponent___c__DisplayClass20_0__PlayShiftEffectGeneral_b__0__);
    sub_B775C4(&BattleServantHpShiftComponent___c__DisplayClass20_0_TypeInfo);
    sub_B775C4(&StringLiteral_19580/*"hp_iconeffect_before_1_"*/);
    byte_438E1AB = 1;
  }
  v13 = sub_B77694(BattleServantHpShiftComponent___c__DisplayClass20_0_TypeInfo);
  BattleServantHpShiftComponent___c__DisplayClass20_0___ctor(
    (BattleServantHpShiftComponent___c__DisplayClass20_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_39;
  *(_QWORD *)(v13 + 16) = callBack;
  sub_B77560((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)callBack, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v13 + 24) = index;
  *nextAnimationTime = 0.0;
  v15 = *(unsigned int *)(v13 + 24);
  if ( LODWORD(this->fields.shiftIconClone) - 1 == (_DWORD)v15 )
  {
    if ( !effectData )
      goto LABEL_39;
    if ( System_String__op_Equality(effectData->fields.prefixEffect, (System_String_o *)StringLiteral_19580/*"hp_iconeffect_before_1_"*/, 0LL) )
    {
      v24 = servantParam
         && (v23 = *(&BattleServantSuperBossParamComponent_TypeInfo->_2.bitflags2 + 1),
             *(&servantParam->klass->_2.bitflags2 + 1) >= (unsigned int)v23)
         && servantParam->klass->_2.typeHierarchy[v23 - 1] == (Il2CppClass *)BattleServantSuperBossParamComponent_TypeInfo;
      *nextAnimationTime = BattleServantHpShiftComponent__CreateDecagramEffect(this, v24, v22);
      return 1;
    }
    LODWORD(v15) = *(_DWORD *)(v13 + 24);
  }
  v25 = (UnityEngine_Object_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                  *(WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array **)&this->fields.defaultDepth,
                                  v15,
                                  0LL,
                                  (const MethodInfo_1C684A4 *)Method_BasicHelper_IndexValue_GameObject____69469904);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Object_WarBoardWaitTimeSetting = (System_String_o *)UnityEngine_Object__op_Equality(v25, 0LL, 0LL);
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
      v30 = AssetStorage;
      v39 = *(_DWORD *)(v13 + 24) + 2;
      v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v31);
      Object_WarBoardWaitTimeSetting = System_String__Concat(prefixEffect, v32, 0LL);
      if ( v30 )
      {
        Object_WarBoardWaitTimeSetting = (System_String_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                              v30,
                                                              Object_WarBoardWaitTimeSetting,
                                                              (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
        if ( v25 )
        {
          v33 = (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v25, 0LL);
          Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)this,
                                             v33,
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
                                                                (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
          {
            ActionExtensions__Call_int_(
              *(System_Action_T__o **)(v13 + 16),
              *(_DWORD *)(v13 + 24),
              (const MethodInfo_2C3C32C *)Method_ActionExtensions_Call_int___);
            return 1;
          }
          v37 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
          System_Action___ctor(
            v37,
            (Il2CppObject *)v13,
            Method_BattleServantHpShiftComponent___c__DisplayClass20_0__PlayShiftEffectGeneral_b__0__,
            0LL);
          if ( Component_srcLineSprite )
          {
            v26 = 1;
            ((void (__fastcall *)(UnityEngine_Object_o *, __int64, System_Action_o *, Il2CppClass *))Component_srcLineSprite->klass[1]._1.castClass)(
              Component_srcLineSprite,
              1LL,
              v37,
              Component_srcLineSprite->klass[1]._1.declaringType);
            return v26;
          }
        }
      }
    }
LABEL_39:
    sub_B7769C(Object_WarBoardWaitTimeSetting, v15);
  }
  return 0;
}


void __fastcall BattleServantHpShiftComponent__UpdateHideInvalidIcon(
        BattleServantHpShiftComponent_o *this,
        int32_t dispMaxPos,
        const MethodInfo *method)
{
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *v5; // x0
  int max_length; // w21
  int i; // w22
  UnityEngine_Object_o *v8; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v10; // x1

  if ( (byte_438E1A4 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_IndexValue_GameObject____69469904);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E1A4 = 1;
  }
  v5 = *(WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array **)&this->fields.defaultDepth;
  if ( v5 )
    max_length = v5->max_length;
  else
    max_length = 0;
  if ( dispMaxPos + 1 < max_length )
  {
    for ( i = dispMaxPos + 2; ; ++i )
    {
      v8 = (UnityEngine_Object_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                     v5,
                                     i - 1,
                                     0LL,
                                     (const MethodInfo_1C684A4 *)Method_BasicHelper_IndexValue_GameObject____69469904);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v8
          || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          (UnityEngine_GameObject_o *)v8,
                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0LL )
        {
          sub_B7769C(Component_srcLineSprite, v10);
        }
        UISprite__set_spriteName((UISprite_o *)Component_srcLineSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v8, 0, 0LL);
      }
      if ( i >= max_length )
        break;
      v5 = *(WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array **)&this->fields.defaultDepth;
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
  int32_t shiftIconClone; // w8
  System_String_o *SpriteName; // x0
  UnityEngine_Object_o *v11; // x23
  int32_t v12; // w22
  UISprite_o *Component_srcLineSprite; // x21
  const MethodInfo *v14; // x2

  if ( (byte_438E1A5 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_IndexValue_GameObject____69469904);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1A5 = 1;
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
      sub_B7769C(SpriteName, *(_QWORD *)&index);
    }
    v11 = (UnityEngine_Object_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                    *(WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array **)&this->fields.defaultDepth,
                                    index,
                                    0LL,
                                    (const MethodInfo_1C684A4 *)Method_BasicHelper_IndexValue_GameObject____69469904);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    SpriteName = (System_String_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
    if ( ((unsigned __int8)SpriteName & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_18;
      v12 = isEmpty ? 0 : index + 2;
      Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                (UnityEngine_GameObject_o *)v11,
                                                (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      SpriteName = BattleServantHpShiftComponent__getSpriteName(this, v12, v14);
      if ( !Component_srcLineSprite )
        goto LABEL_18;
      UISprite__set_spriteName(Component_srcLineSprite, SpriteName, 0LL);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v11, isActive, 0LL);
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
  int32_t shiftIconClone; // w8
  UnityEngine_Behaviour_o *v8; // x0
  UnityEngine_Object_o *v9; // x20

  if ( (byte_438E1A6 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_IndexValue_GameObject____69469904);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1A6 = 1;
  }
  shiftIconClone = (int32_t)this->fields.shiftIconClone;
  if ( shiftIconClone > index )
  {
    if ( shiftIconClone - 1 == index )
    {
      v8 = *(UnityEngine_Behaviour_o **)&this->fields.imageType;
      if ( v8 )
      {
        UnityEngine_Behaviour__set_enabled(v8, isActive, 0LL);
        return;
      }
LABEL_14:
      sub_B7769C(v8, *(_QWORD *)&index);
    }
    v9 = (UnityEngine_Object_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                   *(WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array **)&this->fields.defaultDepth,
                                   index,
                                   0LL,
                                   (const MethodInfo_1C684A4 *)Method_BasicHelper_IndexValue_GameObject____69469904);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_14;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, isActive, 0LL);
    }
  }
}


void __fastcall BattleServantHpShiftComponent__createIconList(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantHpShiftComponent_o *v4; // x19
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x8
  __int64 *p_defaultDepth; // x20
  int v13; // w22
  int shiftIconClone; // w10
  struct UnityEngine_GameObject_o **p_shiftIconClone; // x26
  __int64 v16; // x9
  unsigned int v17; // w23
  _BOOL4 v18; // w24
  unsigned __int64 v19; // x27
  UnityEngine_Object_o *v20; // x25
  int v21; // w8
  BattleDataDefine_c *v22; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x24
  UISprite_o *v24; // x24
  const MethodInfo *v25; // x2
  __int64 v26; // x8
  int v27; // w24
  int v28; // w21
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_Object_c **v36; // x26
  const MethodInfo_1DEBFC4 **v37; // x27
  __int64 v38; // x23
  __int64 v39; // x25
  int v40; // w9
  unsigned int v41; // w28
  UnityEngine_Object_c *v42; // x0
  UnityEngine_Object_o *v43; // x22
  int v44; // w21
  const MethodInfo_1DEBFC4 **v45; // x24
  UnityEngine_Object_c **v46; // x27
  _DWORD *v47; // x26
  UnityEngine_GameObject_o *addPos; // x22
  UnityEngine_Transform_o *transform; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x22
  __int64 v57; // x8
  UISprite_o *Component_srcLineSprite; // x22
  const MethodInfo *v59; // x2
  __int64 v60; // x8
  __int64 v61; // x8
  __int64 v62; // x0
  __int64 v63; // x0
  int v64; // [xsp+Ch] [xbp-64h]
  UIAtlas_o *atlas; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_438E1A2 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&BattleDataDefine_TypeInfo);
    sub_B775C4(&UnityEngine_GameObject___TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (BattleServantHpShiftComponent_o *)sub_B775C4(&StringLiteral_2880/*"BattleAssetUIAtlas"*/);
    byte_438E1A2 = 1;
  }
  atlas = 0LL;
  if ( !svtData )
    goto LABEL_63;
  this = (BattleServantHpShiftComponent_o *)BattleServantData__GetMaxShiftIconCount(svtData, 0LL);
  p_defaultDepth = (__int64 *)&v4->fields.defaultDepth;
  v11 = *(_QWORD *)&v4->fields.defaultDepth;
  v13 = (int)this;
  if ( v11 )
  {
    if ( (_DWORD)this == *(_DWORD *)(v11 + 24) )
      return;
    p_shiftIconClone = &v4->fields.shiftIconClone;
    shiftIconClone = (int)v4->fields.shiftIconClone;
    v16 = *(_QWORD *)(v11 + 24);
    if ( (int)this < shiftIconClone )
      v17 = (unsigned int)this;
    else
      v17 = shiftIconClone - 1;
    v18 = (int)this >= shiftIconClone;
    if ( v17 != (_DWORD)v16 )
    {
      if ( (int)v16 >= 1 )
      {
        v19 = 0LL;
        while ( 1 )
        {
          if ( v19 >= (unsigned int)v16 )
          {
LABEL_65:
            v62 = sub_B776C8(this);
            sub_B77668(v62, 0LL);
          }
          v20 = *(UnityEngine_Object_o **)(v11 + 8 * v19 + 32);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_36309980(v20, 0LL);
          v11 = *p_defaultDepth;
          if ( !*p_defaultDepth )
            break;
          LODWORD(v16) = *(_DWORD *)(v11 + 24);
          if ( (__int64)++v19 >= (int)v16 )
            goto LABEL_18;
        }
LABEL_63:
        sub_B7769C(this, svtData);
      }
LABEL_18:
      *p_defaultDepth = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&v4->fields.defaultDepth, 0LL, v5, v6, v7, v8, v9, v10);
    }
  }
  else
  {
    p_shiftIconClone = &v4->fields.shiftIconClone;
    v21 = (int)v4->fields.shiftIconClone;
    v18 = (int)this >= v21;
    if ( (int)this < v21 )
      v17 = (unsigned int)this;
    else
      v17 = v21 - 1;
  }
  this = *(BattleServantHpShiftComponent_o **)&v4->fields.imageType;
  if ( !this )
    goto LABEL_63;
  this = (BattleServantHpShiftComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v18, 0LL);
  if ( v18 )
  {
    v22 = BattleDataDefine_TypeInfo;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v22 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v22->static_fields->ASSET_BATTLE_COMMON;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_2880/*"BattleAssetUIAtlas"*/, 0LL) )
    {
      this = *(BattleServantHpShiftComponent_o **)&v4->fields.imageType;
      if ( !this )
        goto LABEL_63;
      UISprite__set_atlas((UISprite_o *)this, atlas, 0LL);
      v24 = *(UISprite_o **)&v4->fields.imageType;
      this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(
                                                  v4,
                                                  LODWORD(v4->fields.shiftIconClone) + 1,
                                                  v25);
      if ( !v24 )
        goto LABEL_63;
      UISprite__set_spriteName(v24, (System_String_o *)this, 0LL);
      this = *(BattleServantHpShiftComponent_o **)&v4->fields.imageType;
      if ( !this )
        goto LABEL_63;
      ((void (__fastcall *)(BattleServantHpShiftComponent_o *, void *))this->klass[2]._1.typeMetadataHandle)(
        this,
        this->klass[2]._1.interopData);
    }
  }
  if ( v13 >= 1 )
  {
    this = (BattleServantHpShiftComponent_o *)BattleServantData__GetCurrentShiftPos(svtData, 0LL);
    v26 = *p_defaultDepth;
    v27 = *(_DWORD *)p_shiftIconClone;
    v28 = (int)this;
    if ( !*p_defaultDepth )
    {
      v29 = (System_Int32_array **)sub_B775DC(UnityEngine_GameObject___TypeInfo, v17);
      *p_defaultDepth = (__int64)v29;
      sub_B77560((BattleServantConfConponent_o *)&v4->fields.defaultDepth, v29, v30, v31, v32, v33, v34, v35);
      v26 = *p_defaultDepth;
      if ( !*p_defaultDepth )
        goto LABEL_63;
    }
    v36 = &UnityEngine_Object_TypeInfo;
    v37 = (const MethodInfo_1DEBFC4 **)&Method_UnityEngine_GameObject_GetComponent_UISprite___;
    v38 = 4LL;
    v39 = 8LL;
    v64 = v28;
    while ( 1 )
    {
      v40 = *(_DWORD *)(v26 + 24);
      v41 = v38 - 4;
      if ( (int)v38 - 4 >= v40 )
        break;
      if ( v41 >= v40 )
        goto LABEL_65;
      v42 = *v36;
      v43 = *(UnityEngine_Object_o **)(v26 + 8 * v38);
      if ( (BYTE3((*v36)->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v42);
      this = (BattleServantHpShiftComponent_o *)UnityEngine_Object__op_Equality(v43, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v44 = v27;
        v45 = v37;
        v46 = v36;
        v47 = *(_DWORD **)&v4->fields.defaultDepth;
        addPos = (UnityEngine_GameObject_o *)v4->fields.addPos;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
        this = (BattleServantHpShiftComponent_o *)BaseMonoBehaviour__createObject(
                                                    (BaseMonoBehaviour_o *)v4,
                                                    addPos,
                                                    transform,
                                                    0LL,
                                                    0LL);
        if ( !v47 )
          goto LABEL_63;
        v56 = (System_Int32_array **)this;
        if ( this )
        {
          this = (BattleServantHpShiftComponent_o *)sub_B77684(this, *(_QWORD *)(*(_QWORD *)v47 + 64LL));
          if ( !this )
          {
            v63 = sub_B776BC(0LL);
            sub_B77668(v63, 0LL);
          }
        }
        if ( v41 >= v47[6] )
          goto LABEL_65;
        *(_QWORD *)&v47[2 * v38] = v56;
        sub_B77560((BattleServantConfConponent_o *)&v47[v39], v56, v50, v51, v52, v53, v54, v55);
        v36 = v46;
        v37 = v45;
        v27 = v44;
        v28 = v64;
        p_defaultDepth = (__int64 *)&v4->fields.defaultDepth;
      }
      v57 = *p_defaultDepth;
      if ( !*p_defaultDepth )
        goto LABEL_63;
      if ( v41 >= *(_DWORD *)(v57 + 24) )
        goto LABEL_65;
      this = *(BattleServantHpShiftComponent_o **)(v57 + 8 * v38);
      if ( this )
      {
        Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  (UnityEngine_GameObject_o *)this,
                                                  *v37);
        this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(v4, (int)v38 - 2, v59);
        if ( Component_srcLineSprite )
        {
          UISprite__set_spriteName(Component_srcLineSprite, (System_String_o *)this, 0LL);
          UIWidget__set_depth((UIWidget_o *)Component_srcLineSprite, v38 + LODWORD(v4[1].klass) - 4, 0LL);
          v60 = *(_QWORD *)&v4->fields.defaultDepth;
          if ( v60 )
          {
            if ( v41 >= *(_DWORD *)(v60 + 24) )
              goto LABEL_65;
            this = *(BattleServantHpShiftComponent_o **)(v60 + 8 * v38);
            if ( this )
            {
              this = (BattleServantHpShiftComponent_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0LL);
              if ( this )
              {
                v66.fields.y = *((float *)&v4->fields.shiftIconDecagramSprite + 1) * (float)(int)v41;
                v66.fields.x = *(float *)&v4->fields.shiftIconDecagramSprite * (float)(int)v41;
                v66.fields.z = 0.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v66, 0LL);
                v61 = *(_QWORD *)&v4->fields.defaultDepth;
                if ( v61 )
                {
                  if ( v41 >= *(_DWORD *)(v61 + 24) )
                    goto LABEL_65;
                  this = *(BattleServantHpShiftComponent_o **)(v61 + 8 * v38);
                  if ( this )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v28 < v27, 0LL);
                    v26 = *p_defaultDepth;
                    ++v38;
                    v39 += 2LL;
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
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Object_array *v13; // x20
  __int64 v14; // x0
  System_Int32_array **v15; // x1
  __int64 v16; // x2
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  __int64 v31; // x2
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

  if ( (byte_438E1A1 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&StringLiteral_16197/*"_"*/);
    sub_B775C4(&StringLiteral_19577/*"hp_icon_"*/);
    byte_438E1A1 = 1;
  }
  v5 = sub_B775DC(object___TypeInfo, 4LL);
  if ( !v5 )
    sub_B7769C(0LL, v6);
  v13 = (System_Object_array *)v5;
  v14 = StringLiteral_19577/*"hp_icon_"*/;
  if ( StringLiteral_19577/*"hp_icon_"*/ )
  {
    v14 = sub_B77684(StringLiteral_19577/*"hp_icon_"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_22;
    v15 = (System_Int32_array **)StringLiteral_19577/*"hp_icon_"*/;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v13->max_length )
    goto LABEL_21;
  v13->m_Items[0] = (Il2CppObject *)v15;
  sub_B77560((BattleServantConfConponent_o *)v13->m_Items, v15, v7, v8, v9, v10, v11, v12);
  iconList = (int)this->fields.iconList;
  v14 = j_il2cpp_value_box_0(int_TypeInfo, &iconList, v16);
  v23 = (System_Int32_array **)v14;
  if ( v14 )
  {
    v14 = sub_B77684(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_22;
  }
  if ( v13->max_length <= 1 )
    goto LABEL_21;
  v13->m_Items[1] = (Il2CppObject *)v23;
  sub_B77560((BattleServantConfConponent_o *)&v13->m_Items[1], v23, v17, v18, v19, v20, v21, v22);
  v14 = StringLiteral_16197/*"_"*/;
  if ( StringLiteral_16197/*"_"*/ )
  {
    v14 = sub_B77684(StringLiteral_16197/*"_"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_22;
    v30 = (System_Int32_array **)StringLiteral_16197/*"_"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( v13->max_length <= 2 )
    goto LABEL_21;
  v13->m_Items[2] = (Il2CppObject *)v30;
  sub_B77560((BattleServantConfConponent_o *)&v13->m_Items[2], v30, v24, v25, v26, v27, v28, v29);
  v42 = count;
  v14 = j_il2cpp_value_box_0(int_TypeInfo, &v42, v31);
  v38 = (System_Int32_array **)v14;
  if ( v14 )
  {
    v14 = sub_B77684(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
    {
LABEL_22:
      v41 = sub_B776BC(v14);
      sub_B77668(v41, 0LL);
    }
  }
  if ( v13->max_length <= 3 )
  {
LABEL_21:
    v40 = sub_B776C8(v14);
    sub_B77668(v40, 0LL);
  }
  v13->m_Items[3] = (Il2CppObject *)v38;
  sub_B77560((BattleServantConfConponent_o *)&v13->m_Items[3], v38, v32, v33, v34, v35, v36, v37);
  return System_String__Concat_44911720(v13, 0LL);
}


void __fastcall BattleServantHpShiftComponent__playShiftEffect(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantHpShiftComponent_o *v4; // x19
  struct System_Int32_array *shiftDeckList; // x9
  __int64 v6; // x8
  il2cpp_array_size_t max_length; // w11
  unsigned int v8; // w9
  signed int v9; // w21
  UnityEngine_Object_o *v10; // x20
  BattleDataDefine_c *v11; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x20
  __int64 v14; // x2
  Il2CppObject *v15; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20
  __int64 v17; // x8
  UnityEngine_Transform_o *transform; // x0
  __int64 v19; // x8
  UISprite_o *Component_srcLineSprite; // x20
  const MethodInfo *v21; // x2
  __int64 v22; // x0
  int v23; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_438E1AA & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&BattleDataDefine_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (BattleServantHpShiftComponent_o *)sub_B775C4(&StringLiteral_19579/*"hp_iconeffect_1_"*/);
    byte_438E1AA = 1;
  }
  if ( !svtData )
    goto LABEL_33;
  shiftDeckList = svtData->fields.shiftDeckList;
  if ( !shiftDeckList )
    goto LABEL_33;
  v6 = *(_QWORD *)&v4->fields.defaultDepth;
  if ( v6 )
  {
    max_length = shiftDeckList->max_length;
    v8 = *(_DWORD *)(v6 + 24);
    v9 = max_length - svtData->fields.shiftDeckIndex;
    if ( v9 < (int)v8 )
    {
      if ( v9 >= v8 )
        goto LABEL_34;
      v10 = *(UnityEngine_Object_o **)(v6 + 8LL * v9 + 32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(v10, 0LL, 0LL) )
      {
        v11 = BattleDataDefine_TypeInfo;
        if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleDataDefine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
          v11 = BattleDataDefine_TypeInfo;
        }
        ASSET_BATTLE_COMMON = v11->static_fields->ASSET_BATTLE_COMMON;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
        v23 = v9 + 2;
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v14);
        this = (BattleServantHpShiftComponent_o *)System_String__Concat((Il2CppObject *)StringLiteral_19579/*"hp_iconeffect_1_"*/, v15, 0LL);
        if ( !AssetStorage )
          goto LABEL_33;
        Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   (System_String_o *)this,
                                                                   (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
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
          v17 = *(_QWORD *)&v4->fields.defaultDepth;
          if ( !v17 )
            goto LABEL_33;
          if ( (unsigned int)v9 >= *(_DWORD *)(v17 + 24) )
            goto LABEL_34;
          this = *(BattleServantHpShiftComponent_o **)(v17 + 8LL * v9 + 32);
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
        v19 = *(_QWORD *)&v4->fields.defaultDepth;
        if ( !v19 )
          goto LABEL_33;
        if ( (unsigned int)v9 < *(_DWORD *)(v19 + 24) )
        {
          this = *(BattleServantHpShiftComponent_o **)(v19 + 8LL * v9 + 32);
          if ( this )
          {
            Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(v4, 0, v21);
            if ( Component_srcLineSprite )
            {
              UISprite__set_spriteName(Component_srcLineSprite, (System_String_o *)this, 0LL);
              return;
            }
          }
LABEL_33:
          sub_B7769C(this, svtData);
        }
LABEL_34:
        v22 = sub_B776C8(this);
        sub_B77668(v22, 0LL);
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
  struct System_Int32_array *shiftDeckList; // x8
  int v6; // w21
  bool IsSuperBossUi; // w0
  const MethodInfo *v8; // x2
  __int64 v10; // x8
  int v11; // w9
  UnityEngine_Object_o *v12; // x20
  BattleDataDefine_c *v13; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x20
  __int64 v16; // x2
  Il2CppObject *v17; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20
  __int64 v19; // x8
  UnityEngine_Transform_o *transform; // x0
  __int64 v21; // x0
  int v22; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_438E1A9 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&BattleDataDefine_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (BattleServantHpShiftComponent_o *)sub_B775C4(&StringLiteral_19580/*"hp_iconeffect_before_1_"*/);
    byte_438E1A9 = 1;
  }
  if ( !svtData )
    goto LABEL_30;
  shiftDeckList = svtData->fields.shiftDeckList;
  if ( !shiftDeckList )
    goto LABEL_30;
  v6 = shiftDeckList->max_length - svtData->fields.shiftDeckIndex;
  if ( LODWORD(v4->fields.shiftIconClone) - 1 == v6 )
  {
    IsSuperBossUi = BattleServantData__get_IsSuperBossUi(svtData, 0LL);
    return BattleServantHpShiftComponent__CreateDecagramEffect(v4, IsSuperBossUi, v8);
  }
  v10 = *(_QWORD *)&v4->fields.defaultDepth;
  if ( v10 )
  {
    v11 = *(_DWORD *)(v10 + 24);
    if ( v6 < v11 )
    {
      if ( v6 < (unsigned int)v11 )
      {
        v12 = *(UnityEngine_Object_o **)(v10 + 8LL * v6 + 32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(v12, 0LL, 0LL) )
          return 0.0;
        v13 = BattleDataDefine_TypeInfo;
        if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleDataDefine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
          v13 = BattleDataDefine_TypeInfo;
        }
        ASSET_BATTLE_COMMON = v13->static_fields->ASSET_BATTLE_COMMON;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
        v22 = v6 + 2;
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v16);
        this = (BattleServantHpShiftComponent_o *)System_String__Concat((Il2CppObject *)StringLiteral_19580/*"hp_iconeffect_before_1_"*/, v17, 0LL);
        if ( !AssetStorage )
          goto LABEL_30;
        Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   (System_String_o *)this,
                                                                   (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
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
        v19 = *(_QWORD *)&v4->fields.defaultDepth;
        if ( !v19 )
          goto LABEL_30;
        if ( (unsigned int)v6 < *(_DWORD *)(v19 + 24) )
        {
          this = *(BattleServantHpShiftComponent_o **)(v19 + 8LL * v6 + 32);
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
          sub_B7769C(this, svtData);
        }
      }
      v21 = sub_B776C8(this);
      sub_B77668(v21, 0LL);
    }
  }
  return 0.0;
}


int32_t __fastcall BattleServantHpShiftComponent__setInitValue(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  struct UnityEngine_Vector2_o addPos; // x0
  UISprite_o *Component_srcLineSprite; // x21
  BattleDataDefine_c *v7; // x8
  System_String_o *ASSET_BATTLE_COMMON; // x22
  const MethodInfo *v9; // x2
  System_String_o *SpriteName; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  int32_t MaxShiftIconPos; // w0
  const MethodInfo *v14; // x2
  UIAtlas_o *atlas; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438E1A0 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&BattleDataDefine_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&StringLiteral_2880/*"BattleAssetUIAtlas"*/);
    byte_438E1A0 = 1;
  }
  atlas = 0LL;
  addPos = this->fields.addPos;
  if ( !*(_QWORD *)&addPos )
    goto LABEL_18;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            *(UnityEngine_GameObject_o **)&addPos,
                                            (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v7 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v7 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v7->static_fields->ASSET_BATTLE_COMMON;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  addPos = (struct UnityEngine_Vector2_o)AssetManager__TryGetUIAtlas(
                                           &atlas,
                                           ASSET_BATTLE_COMMON,
                                           (System_String_o *)StringLiteral_2880/*"BattleAssetUIAtlas"*/,
                                           0LL);
  if ( (LOBYTE(addPos.fields.x) & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_18;
    UISprite__set_atlas(Component_srcLineSprite, atlas, 0LL);
    SpriteName = BattleServantHpShiftComponent__getSpriteName(this, 0, v9);
    UISprite__set_spriteName(Component_srcLineSprite, SpriteName, 0LL);
    LODWORD(this[1].klass) = Component_srcLineSprite->fields.mDepth;
  }
  addPos = this->fields.addPos;
  if ( !*(_QWORD *)&addPos
    || (UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&addPos, 0, 0LL),
        BattleServantHpShiftComponent__createIconList(this, svtData, v11),
        BattleServantHpShiftComponent__setValue(this, svtData, v12),
        !svtData) )
  {
LABEL_18:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B7769C)(addPos, svtData);
  }
  if ( svtData->fields.lowLimitShift >= 1 )
  {
    MaxShiftIconPos = BattleServantData__GetMaxShiftIconPos(svtData, 0LL);
    BattleServantHpShiftComponent__UpdateHideInvalidIcon(this, MaxShiftIconPos, v14);
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
  if ( (byte_438E1A3 & 1) == 0 )
  {
    this = (BattleServantHpShiftComponent_o *)sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    byte_438E1A3 = 1;
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
      sub_B7769C(this, svtData);
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
                                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
              v17 = sub_B776C8(this);
              sub_B77668(v17, 0LL);
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

  if ( (byte_43884F5 & 1) == 0 )
  {
    sub_B775C4(&BattleDataDefine_TypeInfo);
    byte_43884F5 = 1;
  }
  v3 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v3 = BattleDataDefine_TypeInfo;
  }
  this->fields.prefixAsset = v3->static_fields->ASSET_BATTLE_COMMON;
  sub_B77560(&this->fields);
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
  if ( (byte_43884F4 & 1) == 0 )
  {
    sub_B775C4(&Method_ActionExtensions_Call_int___);
    byte_43884F4 = 1;
  }
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callBack,
    this->fields.index,
    (const MethodInfo_2C3C32C *)Method_ActionExtensions_Call_int___);
}