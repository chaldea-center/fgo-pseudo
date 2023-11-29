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
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_GameObject_o *Object; // x21
  srcLineSprite_o *Component_srcLineSprite; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40FCCDE & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, isSuperBoss);
    sub_B16FFC(&AssetManager_TypeInfo, v5);
    sub_B16FFC(&BattleDataDefine_TypeInfo, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleServantHpShiftDecagramEffectComponent___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_19107, v9);
    sub_B16FFC(&StringLiteral_19106, v10);
    byte_40FCCDE = 1;
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
                                                                 (System_String_o *)StringLiteral_19106,
                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = 0.0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
  {
    v16 = *(UnityEngine_Component_o **)&this->fields.imageType;
    if ( !v16 )
      goto LABEL_29;
    transform = UnityEngine_Component__get_transform(v16, 0LL);
    if ( !transform )
      goto LABEL_29;
    parent = UnityEngine_Transform__get_parent(transform, 0LL);
    Object = BaseMonoBehaviour__createObject(
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
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object, 0LL, 0LL) )
    {
      if ( !Object )
        goto LABEL_29;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  Object,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantHpShiftDecagramEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
      {
        if ( Component_srcLineSprite )
        {
          Component_srcLineSprite[1].fields.mcMyTrans = (struct UnityEngine_Transform_o *)this;
          sub_B16F98(
            (BattleServantConfConponent_o *)&Component_srcLineSprite[1].fields.mcMyTrans,
            (System_Int32_array **)this,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
          v15 = *((float *)&Component_srcLineSprite[1].fields.mtIsUpdate + 1);
          if ( isSuperBoss )
            CommonEffectComponent__Init_18168168(
              (CommonEffectComponent_o *)Component_srcLineSprite,
              (System_String_o *)StringLiteral_19107,
              0,
              0,
              0LL);
          return v15;
        }
LABEL_29:
        sub_B170D4();
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

  if ( (byte_40FCCDD & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_GameObject___, *(_QWORD *)&index);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FCCDD = 1;
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
    sub_B170D4();
  }
  v9 = (UnityEngine_Object_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                 *(WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array **)&this->fields.defaultDepth,
                                 index,
                                 0LL,
                                 (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
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
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int32_t v31; // w1
  const MethodInfo *v32; // x2
  __int64 v33; // x10
  bool v34; // w1
  UnityEngine_GameObject_o *v35; // x22
  bool v36; // w20
  System_String_o *prefixAsset; // x23
  AssetData_o *AssetStorage; // x0
  Il2CppObject *prefixEffect; // x21
  AssetData_o *v40; // x23
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  UnityEngine_GameObject_o *v44; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Action_o *v52; // x21
  int v54; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FCCE1 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_int___, *(_QWORD *)&index);
    sub_B16FFC(&System_Action_TypeInfo, v13);
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, v14);
    sub_B16FFC(&AssetManager_TypeInfo, v15);
    sub_B16FFC(&Method_BasicHelper_IndexValue_GameObject___, v16);
    sub_B16FFC(&BattleServantSuperBossParamComponent_TypeInfo, v17);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v18);
    sub_B16FFC(&int_TypeInfo, v19);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v20);
    sub_B16FFC(&Method_BattleServantHpShiftComponent___c__DisplayClass20_0__PlayShiftEffectGeneral_b__0__, v21);
    sub_B16FFC(&BattleServantHpShiftComponent___c__DisplayClass20_0_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_19115, v23);
    byte_40FCCE1 = 1;
  }
  v24 = sub_B170CC(
          BattleServantHpShiftComponent___c__DisplayClass20_0_TypeInfo,
          *(_QWORD *)&index,
          effectData,
          servantParam,
          nextAnimationTime);
  BattleServantHpShiftComponent___c__DisplayClass20_0___ctor(
    (BattleServantHpShiftComponent___c__DisplayClass20_0_o *)v24,
    0LL);
  if ( !v24 )
    goto LABEL_39;
  *(_QWORD *)(v24 + 16) = callBack;
  sub_B16F98((BattleServantConfConponent_o *)(v24 + 16), (System_Int32_array **)callBack, v25, v26, v27, v28, v29, v30);
  *(_DWORD *)(v24 + 24) = index;
  *nextAnimationTime = 0.0;
  v31 = *(_DWORD *)(v24 + 24);
  if ( LODWORD(this->fields.shiftIconClone) - 1 == v31 )
  {
    if ( !effectData )
      goto LABEL_39;
    if ( System_String__op_Equality(effectData->fields.prefixEffect, (System_String_o *)StringLiteral_19115, 0LL) )
    {
      v34 = servantParam
         && (v33 = *(&BattleServantSuperBossParamComponent_TypeInfo->_2.bitflags2 + 1),
             *(&servantParam->klass->_2.bitflags2 + 1) >= (unsigned int)v33)
         && servantParam->klass->_2.typeHierarchy[v33 - 1] == (Il2CppClass *)BattleServantSuperBossParamComponent_TypeInfo;
      *nextAnimationTime = BattleServantHpShiftComponent__CreateDecagramEffect(this, v34, v32);
      return 1;
    }
    v31 = *(_DWORD *)(v24 + 24);
  }
  v35 = (UnityEngine_GameObject_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                      *(WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array **)&this->fields.defaultDepth,
                                      v31,
                                      0LL,
                                      (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v35, 0LL, 0LL) )
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
      v40 = AssetStorage;
      v54 = *(_DWORD *)(v24 + 24) + 2;
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
      v42 = System_String__Concat(prefixEffect, v41, 0LL);
      if ( v40 )
      {
        Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                           v40,
                                           v42,
                                           (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
        if ( v35 )
        {
          v44 = (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
          transform = UnityEngine_GameObject__get_transform(v35, 0LL);
          Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v44, transform, 0LL, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Component_srcLineSprite = 0LL;
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object, 0LL, 0LL) )
          {
            if ( !Object )
              goto LABEL_39;
            Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                Object,
                                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
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
              (const MethodInfo_2D39F14 *)Method_ActionExtensions_Call_int___);
            return 1;
          }
          v52 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v48, v49, v50, v51);
          System_Action___ctor(
            v52,
            (Il2CppObject *)v24,
            Method_BattleServantHpShiftComponent___c__DisplayClass20_0__PlayShiftEffectGeneral_b__0__,
            0LL);
          if ( Component_srcLineSprite )
          {
            v36 = 1;
            ((void (__fastcall *)(UnityEngine_Object_o *, __int64, System_Action_o *, Il2CppClass *))Component_srcLineSprite->klass[1]._1.castClass)(
              Component_srcLineSprite,
              1LL,
              v52,
              Component_srcLineSprite->klass[1]._1.declaringType);
            return v36;
          }
        }
      }
    }
LABEL_39:
    sub_B170D4();
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
  UnityEngine_GameObject_o *v11; // x20
  UISprite_o *Component_srcLineSprite; // x0

  if ( (byte_40FCCDA & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_GameObject___, *(_QWORD *)&dispMaxPos);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40FCCDA = 1;
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
      v11 = (UnityEngine_GameObject_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                          v8,
                                          i - 1,
                                          0LL,
                                          (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_GameObject___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL) )
      {
        if ( !v11
          || (Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        v11,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0LL )
        {
          sub_B170D4();
        }
        UISprite__set_spriteName(Component_srcLineSprite, (System_String_o *)StringLiteral_1, 0LL);
        UnityEngine_GameObject__SetActive(v11, 0, 0LL);
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
  UnityEngine_Behaviour_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x23
  int32_t v14; // w22
  UISprite_o *Component_srcLineSprite; // x21
  const MethodInfo *v16; // x2
  System_String_o *SpriteName; // x0

  if ( (byte_40FCCDB & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_GameObject___, *(_QWORD *)&index);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    byte_40FCCDB = 1;
  }
  shiftIconClone = (int32_t)this->fields.shiftIconClone;
  if ( shiftIconClone > index )
  {
    if ( shiftIconClone - 1 == index )
    {
      v12 = *(UnityEngine_Behaviour_o **)&this->fields.imageType;
      if ( v12 )
      {
        UnityEngine_Behaviour__set_enabled(v12, isActive, 0LL);
        return;
      }
LABEL_18:
      sub_B170D4();
    }
    v13 = (UnityEngine_GameObject_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                        *(WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array **)&this->fields.defaultDepth,
                                        index,
                                        0LL,
                                        (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_GameObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL) )
    {
      if ( !v13 )
        goto LABEL_18;
      v14 = isEmpty ? 0 : index + 2;
      Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                v13,
                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      SpriteName = BattleServantHpShiftComponent__getSpriteName(this, v14, v16);
      if ( !Component_srcLineSprite )
        goto LABEL_18;
      UISprite__set_spriteName(Component_srcLineSprite, SpriteName, 0LL);
      UnityEngine_GameObject__SetActive(v13, isActive, 0LL);
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
  UnityEngine_GameObject_o *v10; // x20

  if ( (byte_40FCCDC & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_GameObject___, *(_QWORD *)&index);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FCCDC = 1;
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
      sub_B170D4();
    }
    v10 = (UnityEngine_GameObject_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                        *(WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array **)&this->fields.defaultDepth,
                                        index,
                                        0LL,
                                        (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_GameObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL) )
    {
      if ( !v10 )
        goto LABEL_14;
      UnityEngine_GameObject__SetActive(v10, isActive, 0LL);
    }
  }
}


void __fastcall BattleServantHpShiftComponent__createIconList(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *MaxShiftIconCount; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x8
  int32_t *p_defaultDepth; // x20
  int v20; // w22
  int shiftIconClone; // w10
  struct UnityEngine_GameObject_o **p_shiftIconClone; // x26
  __int64 v23; // x9
  unsigned int v24; // w23
  _BOOL4 v25; // w24
  unsigned __int64 v26; // x27
  UnityEngine_Object_o *v27; // x25
  int v28; // w8
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  BattleDataDefine_c *v31; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x24
  UISprite_o *v33; // x0
  UISprite_o *v34; // x24
  const MethodInfo *v35; // x2
  System_String_o *SpriteName; // x0
  __int64 v37; // x0
  __int64 v38; // x8
  int v39; // w24
  int v40; // w21
  System_Int32_array **v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_Object_c **v48; // x26
  const MethodInfo_19D14E0 **v49; // x27
  __int64 v50; // x23
  __int64 v51; // x25
  int v52; // w9
  unsigned int v53; // w28
  UnityEngine_Object_c *v54; // x0
  UnityEngine_Object_o *v55; // x22
  int v56; // w21
  const MethodInfo_19D14E0 **v57; // x24
  UnityEngine_Object_c **v58; // x27
  _DWORD *v59; // x26
  UnityEngine_GameObject_o *addPos; // x22
  UnityEngine_Transform_o *transform; // x0
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x22
  __int64 v68; // x8
  UnityEngine_GameObject_o *v69; // x0
  UISprite_o *Component_srcLineSprite; // x22
  const MethodInfo *v71; // x2
  System_String_o *v72; // x0
  __int64 v73; // x8
  UnityEngine_GameObject_o *v74; // x0
  UnityEngine_Transform_o *v75; // x0
  __int64 v76; // x8
  UnityEngine_GameObject_o *v77; // x0
  int v78; // [xsp+Ch] [xbp-64h]
  UIAtlas_o *atlas; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FCCD8 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, svtData);
    sub_B16FFC(&BattleDataDefine_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_2758, v9);
    byte_40FCCD8 = 1;
  }
  atlas = 0LL;
  if ( !svtData )
    goto LABEL_63;
  MaxShiftIconCount = (UnityEngine_GameObject_o *)BattleServantData__GetMaxShiftIconCount(svtData, 0LL);
  p_defaultDepth = &this->fields.defaultDepth;
  v18 = *(_QWORD *)&this->fields.defaultDepth;
  v20 = (int)MaxShiftIconCount;
  if ( v18 )
  {
    if ( (_DWORD)MaxShiftIconCount == *(_DWORD *)(v18 + 24) )
      return;
    p_shiftIconClone = &this->fields.shiftIconClone;
    shiftIconClone = (int)this->fields.shiftIconClone;
    v23 = *(_QWORD *)(v18 + 24);
    if ( (int)MaxShiftIconCount < shiftIconClone )
      v24 = (unsigned int)MaxShiftIconCount;
    else
      v24 = shiftIconClone - 1;
    v25 = (int)MaxShiftIconCount >= shiftIconClone;
    if ( v24 != (_DWORD)v23 )
    {
      if ( (int)v23 >= 1 )
      {
        v26 = 0LL;
        while ( 1 )
        {
          if ( v26 >= (unsigned int)v23 )
          {
LABEL_65:
            sub_B17100(MaxShiftIconCount, v11, v12);
            sub_B170A0();
          }
          v27 = *(UnityEngine_Object_o **)(v18 + 8 * v26 + 32);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_34809464(v27, 0LL);
          v18 = *(_QWORD *)p_defaultDepth;
          if ( !*(_QWORD *)p_defaultDepth )
            break;
          LODWORD(v23) = *(_DWORD *)(v18 + 24);
          if ( (__int64)++v26 >= (int)v23 )
            goto LABEL_18;
        }
LABEL_63:
        sub_B170D4();
      }
LABEL_18:
      *(_QWORD *)p_defaultDepth = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.defaultDepth, 0LL, v12, v13, v14, v15, v16, v17);
    }
  }
  else
  {
    p_shiftIconClone = &this->fields.shiftIconClone;
    v28 = (int)this->fields.shiftIconClone;
    v25 = (int)MaxShiftIconCount >= v28;
    if ( (int)MaxShiftIconCount < v28 )
      v24 = (unsigned int)MaxShiftIconCount;
    else
      v24 = v28 - 1;
  }
  v29 = *(UnityEngine_Component_o **)&this->fields.imageType;
  if ( !v29 )
    goto LABEL_63;
  gameObject = UnityEngine_Component__get_gameObject(v29, 0LL);
  if ( !gameObject )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive(gameObject, v25, 0LL);
  if ( v25 )
  {
    v31 = BattleDataDefine_TypeInfo;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v31 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v31->static_fields->ASSET_BATTLE_COMMON;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_2758, 0LL) )
    {
      v33 = *(UISprite_o **)&this->fields.imageType;
      if ( !v33 )
        goto LABEL_63;
      UISprite__set_atlas(v33, atlas, 0LL);
      v34 = *(UISprite_o **)&this->fields.imageType;
      SpriteName = BattleServantHpShiftComponent__getSpriteName(this, LODWORD(this->fields.shiftIconClone) + 1, v35);
      if ( !v34 )
        goto LABEL_63;
      UISprite__set_spriteName(v34, SpriteName, 0LL);
      v37 = *(_QWORD *)&this->fields.imageType;
      if ( !v37 )
        goto LABEL_63;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v37 + 840LL))(v37, *(_QWORD *)(*(_QWORD *)v37 + 848LL));
    }
  }
  if ( v20 >= 1 )
  {
    MaxShiftIconCount = (UnityEngine_GameObject_o *)BattleServantData__GetCurrentShiftPos(svtData, 0LL);
    v38 = *(_QWORD *)p_defaultDepth;
    v39 = *(_DWORD *)p_shiftIconClone;
    v40 = (int)MaxShiftIconCount;
    if ( !*(_QWORD *)p_defaultDepth )
    {
      v41 = (System_Int32_array **)sub_B17014(UnityEngine_GameObject___TypeInfo, v24, v12);
      *(_QWORD *)p_defaultDepth = v41;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.defaultDepth, v41, v42, v43, v44, v45, v46, v47);
      v38 = *(_QWORD *)p_defaultDepth;
      if ( !*(_QWORD *)p_defaultDepth )
        goto LABEL_63;
    }
    v48 = &UnityEngine_Object_TypeInfo;
    v49 = (const MethodInfo_19D14E0 **)&Method_UnityEngine_GameObject_GetComponent_UISprite___;
    v50 = 4LL;
    v51 = 8LL;
    v78 = v40;
    while ( 1 )
    {
      v52 = *(_DWORD *)(v38 + 24);
      v53 = v50 - 4;
      if ( (int)v50 - 4 >= v52 )
        break;
      if ( v53 >= v52 )
        goto LABEL_65;
      v54 = *v48;
      v55 = *(UnityEngine_Object_o **)(v38 + 8 * v50);
      if ( (BYTE3((*v48)->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v54);
      MaxShiftIconCount = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v55, 0LL, 0LL);
      if ( ((unsigned __int8)MaxShiftIconCount & 1) != 0 )
      {
        v56 = v39;
        v57 = v49;
        v58 = v48;
        v59 = *(_DWORD **)&this->fields.defaultDepth;
        addPos = (UnityEngine_GameObject_o *)this->fields.addPos;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        MaxShiftIconCount = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, addPos, transform, 0LL, 0LL);
        if ( !v59 )
          goto LABEL_63;
        v67 = (System_Int32_array **)MaxShiftIconCount;
        if ( MaxShiftIconCount )
        {
          MaxShiftIconCount = (UnityEngine_GameObject_o *)sub_B170BC(
                                                            MaxShiftIconCount,
                                                            *(_QWORD *)(*(_QWORD *)v59 + 64LL));
          if ( !MaxShiftIconCount )
          {
            sub_B170F4(0LL);
            sub_B170A0();
          }
        }
        if ( v53 >= v59[6] )
          goto LABEL_65;
        *(_QWORD *)&v59[2 * v50] = v67;
        sub_B16F98((BattleServantConfConponent_o *)&v59[v51], v67, v12, v62, v63, v64, v65, v66);
        v48 = v58;
        v49 = v57;
        v39 = v56;
        v40 = v78;
        p_defaultDepth = &this->fields.defaultDepth;
      }
      v68 = *(_QWORD *)p_defaultDepth;
      if ( !*(_QWORD *)p_defaultDepth )
        goto LABEL_63;
      if ( v53 >= *(_DWORD *)(v68 + 24) )
        goto LABEL_65;
      v69 = *(UnityEngine_GameObject_o **)(v68 + 8 * v50);
      if ( v69 )
      {
        Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(v69, *v49);
        v72 = BattleServantHpShiftComponent__getSpriteName(this, (int)v50 - 2, v71);
        if ( Component_srcLineSprite )
        {
          UISprite__set_spriteName(Component_srcLineSprite, v72, 0LL);
          UIWidget__set_depth((UIWidget_o *)Component_srcLineSprite, v50 + LODWORD(this[1].klass) - 4, 0LL);
          v73 = *(_QWORD *)&this->fields.defaultDepth;
          if ( v73 )
          {
            if ( v53 >= *(_DWORD *)(v73 + 24) )
              goto LABEL_65;
            v74 = *(UnityEngine_GameObject_o **)(v73 + 8 * v50);
            if ( v74 )
            {
              v75 = UnityEngine_GameObject__get_transform(v74, 0LL);
              if ( v75 )
              {
                v80.fields.y = *((float *)&this->fields.shiftIconDecagramSprite + 1) * (float)(int)v53;
                v80.fields.x = *(float *)&this->fields.shiftIconDecagramSprite * (float)(int)v53;
                v80.fields.z = 0.0;
                UnityEngine_Transform__set_localPosition(v75, v80, 0LL);
                v76 = *(_QWORD *)&this->fields.defaultDepth;
                if ( v76 )
                {
                  if ( v53 >= *(_DWORD *)(v76 + 24) )
                    goto LABEL_65;
                  v77 = *(UnityEngine_GameObject_o **)(v76 + 8 * v50);
                  if ( v77 )
                  {
                    UnityEngine_GameObject__SetActive(v77, v40 < v39, 0LL);
                    v38 = *(_QWORD *)p_defaultDepth;
                    ++v50;
                    v51 += 2LL;
                    if ( *(_QWORD *)p_defaultDepth )
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
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x21
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x19
  int32_t v36; // [xsp+8h] [xbp-28h] BYREF
  int iconList; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FCCD7 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&count);
    sub_B16FFC(&object___TypeInfo, v5);
    sub_B16FFC(&StringLiteral_15842, v6);
    sub_B16FFC(&StringLiteral_19112, v7);
    byte_40FCCD7 = 1;
  }
  v8 = sub_B17014(object___TypeInfo, 4LL, method);
  if ( !v8 )
    sub_B170D4();
  v15 = (System_Object_array *)v8;
  v16 = StringLiteral_19112;
  if ( StringLiteral_19112 )
  {
    v16 = sub_B170BC(StringLiteral_19112, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_22;
    v17 = (System_Int32_array **)StringLiteral_19112;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v15->max_length )
    goto LABEL_21;
  v15->m_Items[0] = (Il2CppObject *)v17;
  sub_B16F98((BattleServantConfConponent_o *)v15->m_Items, v17, v9, v10, v11, v12, v13, v14);
  iconList = (int)this->fields.iconList;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &iconList);
  v23 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = sub_B170BC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_22;
  }
  if ( v15->max_length <= 1 )
    goto LABEL_21;
  v15->m_Items[1] = (Il2CppObject *)v23;
  sub_B16F98((BattleServantConfConponent_o *)&v15->m_Items[1], v23, v9, v18, v19, v20, v21, v22);
  v16 = StringLiteral_15842;
  if ( StringLiteral_15842 )
  {
    v16 = sub_B170BC(StringLiteral_15842, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_22;
    v17 = (System_Int32_array **)StringLiteral_15842;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 2 )
    goto LABEL_21;
  v15->m_Items[2] = (Il2CppObject *)v17;
  sub_B16F98((BattleServantConfConponent_o *)&v15->m_Items[2], v17, v9, v24, v25, v26, v27, v28);
  v36 = count;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v36);
  v34 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = sub_B170BC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_22:
      sub_B170F4(v16);
      sub_B170A0();
    }
  }
  if ( v15->max_length <= 3 )
  {
LABEL_21:
    sub_B17100(v16, v17, v9);
    sub_B170A0();
  }
  v15->m_Items[3] = (Il2CppObject *)v34;
  sub_B16F98((BattleServantConfConponent_o *)&v15->m_Items[3], v34, v9, v29, v30, v31, v32, v33);
  return System_String__Concat_43753516(v15, 0LL);
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
  System_String_o *v21; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20
  __int64 v23; // x8
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v26; // x8
  UnityEngine_GameObject_o *v27; // x0
  UISprite_o *Component_srcLineSprite; // x20
  const MethodInfo *v29; // x2
  System_String_o *SpriteName; // x0
  int v31; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_40FCCE0 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, svtData);
    sub_B16FFC(&AssetManager_TypeInfo, v5);
    sub_B16FFC(&BattleDataDefine_TypeInfo, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    this = (BattleServantHpShiftComponent_o *)sub_B16FFC(&StringLiteral_19114, v10);
    byte_40FCCE0 = 1;
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
        v31 = v15 + 2;
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
        v21 = System_String__Concat((Il2CppObject *)StringLiteral_19114, v20, 0LL);
        if ( !AssetStorage )
          goto LABEL_33;
        Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   v21,
                                                                   (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
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
          v23 = *(_QWORD *)&v4->fields.defaultDepth;
          if ( !v23 )
            goto LABEL_33;
          if ( (unsigned int)v15 >= *(_DWORD *)(v23 + 24) )
            goto LABEL_34;
          v24 = *(UnityEngine_GameObject_o **)(v23 + 8LL * v15 + 32);
          if ( !v24 )
            goto LABEL_33;
          transform = UnityEngine_GameObject__get_transform(v24, 0LL);
          this = (BattleServantHpShiftComponent_o *)BaseMonoBehaviour__createObject(
                                                      (BaseMonoBehaviour_o *)v4,
                                                      (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
                                                      transform,
                                                      0LL,
                                                      0LL);
        }
        v26 = *(_QWORD *)&v4->fields.defaultDepth;
        if ( !v26 )
          goto LABEL_33;
        if ( (unsigned int)v15 < *(_DWORD *)(v26 + 24) )
        {
          v27 = *(UnityEngine_GameObject_o **)(v26 + 8LL * v15 + 32);
          if ( v27 )
          {
            Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v27,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            SpriteName = BattleServantHpShiftComponent__getSpriteName(v4, 0, v29);
            if ( Component_srcLineSprite )
            {
              UISprite__set_spriteName(Component_srcLineSprite, SpriteName, 0LL);
              return;
            }
          }
LABEL_33:
          sub_B170D4();
        }
LABEL_34:
        sub_B17100(this, svtData, method);
        sub_B170A0();
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
  System_String_o *v22; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20
  __int64 v24; // x8
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Transform_o *transform; // x0
  int v27; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_40FCCDF & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, svtData);
    sub_B16FFC(&AssetManager_TypeInfo, v5);
    sub_B16FFC(&BattleDataDefine_TypeInfo, v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    this = (BattleServantHpShiftComponent_o *)sub_B16FFC(&StringLiteral_19115, v9);
    byte_40FCCDF = 1;
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
        v27 = v11 + 2;
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
        v22 = System_String__Concat((Il2CppObject *)StringLiteral_19115, v21, 0LL);
        if ( !AssetStorage )
          goto LABEL_30;
        Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   v22,
                                                                   (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
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
        v24 = *(_QWORD *)&v4->fields.defaultDepth;
        if ( !v24 )
          goto LABEL_30;
        if ( (unsigned int)v11 < *(_DWORD *)(v24 + 24) )
        {
          v25 = *(UnityEngine_GameObject_o **)(v24 + 8LL * v11 + 32);
          if ( v25 )
          {
            transform = UnityEngine_GameObject__get_transform(v25, 0LL);
            BaseMonoBehaviour__createObject(
              (BaseMonoBehaviour_o *)v4,
              (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
              transform,
              0LL,
              0LL);
            return 0.0;
          }
LABEL_30:
          sub_B170D4();
        }
      }
      sub_B17100(this, svtData, method);
      sub_B170A0();
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
  UnityEngine_GameObject_o *addPos; // x0
  UISprite_o *Component_srcLineSprite; // x21
  BattleDataDefine_c *v10; // x8
  System_String_o *ASSET_BATTLE_COMMON; // x22
  const MethodInfo *v12; // x2
  System_String_o *SpriteName; // x0
  UnityEngine_GameObject_o *v14; // x0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  int32_t MaxShiftIconPos; // w0
  const MethodInfo *v18; // x2
  UIAtlas_o *atlas; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FCCD6 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, svtData);
    sub_B16FFC(&BattleDataDefine_TypeInfo, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6);
    sub_B16FFC(&StringLiteral_2758, v7);
    byte_40FCCD6 = 1;
  }
  atlas = 0LL;
  addPos = (UnityEngine_GameObject_o *)this->fields.addPos;
  if ( !addPos )
    goto LABEL_18;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            addPos,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
  if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_2758, 0LL) )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_18;
    UISprite__set_atlas(Component_srcLineSprite, atlas, 0LL);
    SpriteName = BattleServantHpShiftComponent__getSpriteName(this, 0, v12);
    UISprite__set_spriteName(Component_srcLineSprite, SpriteName, 0LL);
    LODWORD(this[1].klass) = Component_srcLineSprite->fields.mDepth;
  }
  v14 = (UnityEngine_GameObject_o *)this->fields.addPos;
  if ( !v14
    || (UnityEngine_GameObject__SetActive(v14, 0, 0LL),
        BattleServantHpShiftComponent__createIconList(this, svtData, v15),
        BattleServantHpShiftComponent__setValue(this, svtData, v16),
        !svtData) )
  {
LABEL_18:
    sub_B170D4();
  }
  if ( svtData->fields.lowLimitShift >= 1 )
  {
    MaxShiftIconPos = BattleServantData__GetMaxShiftIconPos(svtData, 0LL);
    BattleServantHpShiftComponent__UpdateHideInvalidIcon(this, MaxShiftIconPos, v18);
  }
  return 0;
}


void __fastcall BattleServantHpShiftComponent__setValue(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  int32_t CurrentShiftPos; // w0
  int32_t shiftIconClone; // w21
  int32_t v7; // w20
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x8
  __int64 v12; // x23
  bool v13; // w21
  int v14; // w9
  unsigned int v15; // w25
  UnityEngine_GameObject_o *v16; // x0
  const MethodInfo *v17; // x2
  UISprite_o *Component_srcLineSprite; // x22
  int32_t v19; // w1
  BattleServantHpShiftComponent_o *v20; // x0
  System_String_o *SpriteName; // x0
  __int64 v22; // x8
  UnityEngine_GameObject_o *v23; // x0

  if ( (byte_40FCCD9 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, svtData);
    byte_40FCCD9 = 1;
  }
  if ( *(_QWORD *)&this->fields.defaultDepth )
  {
    if ( !svtData
      || (CurrentShiftPos = BattleServantData__GetCurrentShiftPos(svtData, 0LL), !*(_QWORD *)&this->fields.imageType)
      || (shiftIconClone = (int32_t)this->fields.shiftIconClone,
          v7 = CurrentShiftPos,
          UnityEngine_Behaviour__set_enabled(
            *(UnityEngine_Behaviour_o **)&this->fields.imageType,
            CurrentShiftPos >= shiftIconClone,
            0LL),
          (v11 = *(_QWORD *)&this->fields.defaultDepth) == 0) )
    {
LABEL_19:
      sub_B170D4();
    }
    v12 = 4LL;
    v13 = v7 < shiftIconClone;
    while ( 1 )
    {
      v14 = *(_DWORD *)(v11 + 24);
      v15 = v12 - 4;
      if ( (int)v12 - 4 >= v14 )
        break;
      if ( v15 >= v14 )
        goto LABEL_21;
      v16 = *(UnityEngine_GameObject_o **)(v11 + 8 * v12);
      if ( v16 )
      {
        Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  v16,
                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( (int)v15 >= v7 )
        {
          v20 = this;
          v19 = 0;
        }
        else
        {
          v19 = v12 - 2;
          v20 = this;
        }
        SpriteName = BattleServantHpShiftComponent__getSpriteName(v20, v19, v17);
        if ( Component_srcLineSprite )
        {
          UISprite__set_spriteName(Component_srcLineSprite, SpriteName, 0LL);
          v22 = *(_QWORD *)&this->fields.defaultDepth;
          if ( v22 )
          {
            if ( v15 >= *(_DWORD *)(v22 + 24) )
            {
LABEL_21:
              sub_B17100(v8, v9, v10);
              sub_B170A0();
            }
            v23 = *(UnityEngine_GameObject_o **)(v22 + 8 * v12);
            if ( v23 )
            {
              UnityEngine_GameObject__SetActive(v23, v13, 0LL);
              v11 = *(_QWORD *)&this->fields.defaultDepth;
              ++v12;
              if ( v11 )
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

  if ( (byte_40F71CA & 1) == 0 )
  {
    sub_B16FFC(&BattleDataDefine_TypeInfo, method);
    byte_40F71CA = 1;
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
  sub_B16F98(&this->fields, ASSET_BATTLE_COMMON);
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
  if ( (byte_40F71C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_int___, method);
    byte_40F71C9 = 1;
  }
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callBack,
    this->fields.index,
    (const MethodInfo_2D39F14 *)Method_ActionExtensions_Call_int___);
}