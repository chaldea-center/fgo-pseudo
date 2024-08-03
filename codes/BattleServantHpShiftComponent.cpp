void __fastcall BattleServantHpShiftComponent___ctor(BattleServantHpShiftComponent_o *this, const MethodInfo *method)
{
  this->fields.decagramNumber = 10;
  this->fields.imageType = 1;
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
  Il2CppObject *Object_object__48347676; // x21
  float v15; // s8
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Object_o *Object; // x21
  Il2CppObject *Component_object; // x21
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_49FF3C1 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, isSuperBoss);
    sub_1B640C8(&AssetManager_TypeInfo, v5);
    sub_1B640C8(&BattleDataDefine_TypeInfo, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleServantHpShiftDecagramEffectComponent___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_19894/*"hp_crystaleffect_superboss_1_1"*/, v9);
    sub_1B640C8(&StringLiteral_19893/*"hp_crystaleffect_1_1"*/, v10);
    byte_49FF3C1 = 1;
  }
  v11 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v11 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v11->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
  if ( !AssetStorage )
    goto LABEL_24;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              AssetStorage,
                              (System_String_o *)StringLiteral_19893/*"hp_crystaleffect_1_1"*/,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = 0.0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL) )
  {
    AssetStorage = (AssetData_o *)this->fields.shiftIconDecagramSprite;
    if ( !AssetStorage )
      goto LABEL_24;
    AssetStorage = (AssetData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)AssetStorage, 0LL);
    if ( !AssetStorage )
      goto LABEL_24;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)AssetStorage, 0LL);
    Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)this,
                                       (UnityEngine_GameObject_o *)Object_object__48347676,
                                       parent,
                                       0LL,
                                       0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(Object, 0LL, 0LL);
    if ( ((unsigned __int8)AssetStorage & 1) != 0 )
    {
      if ( !Object )
        goto LABEL_24;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Object,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleServantHpShiftDecagramEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)Component_object,
                                      0LL,
                                      0LL);
      if ( ((unsigned __int8)AssetStorage & 1) != 0 )
      {
        if ( Component_object )
        {
          Component_object[12].monitor = this;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&Component_object[12].monitor, (int32_t)this, v19, v20);
          v15 = *((float *)&Component_object[12].klass + 1);
          if ( isSuperBoss )
            CommonEffectComponent__Init_40305532(
              (CommonEffectComponent_o *)Component_object,
              (System_String_o *)StringLiteral_19894/*"hp_crystaleffect_superboss_1_1"*/,
              0,
              0,
              0LL);
          return v15;
        }
LABEL_24:
        sub_1B64324(AssetStorage);
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
  return this->fields.decagramNumber - 1 == index;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantHpShiftComponent__IsIconActive(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t decagramNumber; // w8
  struct UISprite_o *shiftIconDecagramSprite; // x0
  Il2CppObject *v9; // x19

  if ( (byte_49FF3C0 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_GameObject____75711216, *(_QWORD *)&index);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FF3C0 = 1;
  }
  decagramNumber = this->fields.decagramNumber;
  if ( decagramNumber <= index )
    return 0;
  if ( decagramNumber - 1 == index )
  {
    shiftIconDecagramSprite = this->fields.shiftIconDecagramSprite;
    if ( shiftIconDecagramSprite )
      return UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)shiftIconDecagramSprite, 0LL);
LABEL_13:
    sub_1B64324(shiftIconDecagramSprite);
  }
  v9 = BasicHelper__IndexValue_object_(
         (System_Object_array *)this->fields.iconList,
         index,
         0LL,
         (const MethodInfo_2E28238 *)Method_BasicHelper_IndexValue_GameObject____75711216);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  shiftIconDecagramSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( ((unsigned __int8)shiftIconDecagramSprite & 1) == 0 )
    return 0;
  if ( !v9 )
    goto LABEL_13;
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
  int32_t v11; // w24
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
  System_String_o *Object_object__48347676; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  const MethodInfo *v28; // x2
  __int64 methodPtr_low; // x10
  bool v30; // w1
  Il2CppObject *v31; // x22
  bool v32; // w20
  System_String_o *prefixAsset; // x23
  AssetData_o *AssetStorage; // x0
  Il2CppObject *prefixEffect; // x21
  AssetData_o *v36; // x23
  Il2CppObject *v37; // x0
  UnityEngine_GameObject_o *v38; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *Object; // x21
  Il2CppObject *Component_object; // x19
  __int64 v42; // x1
  __int64 v43; // x2
  System_Action_o *v44; // x21
  int v46; // [xsp+Ch] [xbp-44h] BYREF

  v11 = index;
  if ( (byte_49FF3C4 & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_int___, *(_QWORD *)&index);
    sub_1B640C8(&System_Action_TypeInfo, v13);
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, v14);
    sub_1B640C8(&AssetManager_TypeInfo, v15);
    sub_1B640C8(&Method_BasicHelper_IndexValue_GameObject____75711216, v16);
    sub_1B640C8(&BattleServantSuperBossParamComponent_TypeInfo, v17);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v18);
    sub_1B640C8(&int_TypeInfo, v19);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v20);
    sub_1B640C8(&Method_BattleServantHpShiftComponent___c__DisplayClass20_0__PlayShiftEffectGeneral_b__0__, v21);
    sub_1B640C8(&BattleServantHpShiftComponent___c__DisplayClass20_0_TypeInfo, v22);
    sub_1B640C8(&StringLiteral_19902/*"hp_iconeffect_before_1_"*/, v23);
    byte_49FF3C4 = 1;
  }
  v24 = sub_1B64314(BattleServantHpShiftComponent___c__DisplayClass20_0_TypeInfo, *(_QWORD *)&index, effectData);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_35;
  *(_QWORD *)(v24 + 16) = callBack;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 16), (int32_t)callBack, v26, v27);
  *(_DWORD *)(v24 + 24) = v11;
  *nextAnimationTime = 0.0;
  if ( this->fields.decagramNumber - 1 == v11 )
  {
    if ( !effectData )
      goto LABEL_35;
    if ( System_String__op_Equality(effectData->fields.prefixEffect, (System_String_o *)StringLiteral_19902/*"hp_iconeffect_before_1_"*/, 0LL) )
    {
      v30 = servantParam
         && (methodPtr_low = LOBYTE(BattleServantSuperBossParamComponent_TypeInfo->vtable._0_Equals.methodPtr),
             LOBYTE(servantParam->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
         && servantParam->klass->_2.typeHierarchy[methodPtr_low - 1] == (Il2CppClass *)BattleServantSuperBossParamComponent_TypeInfo;
      *nextAnimationTime = BattleServantHpShiftComponent__CreateDecagramEffect(this, v30, v28);
      return 1;
    }
    v11 = *(_DWORD *)(v24 + 24);
  }
  v31 = BasicHelper__IndexValue_object_(
          (System_Object_array *)this->fields.iconList,
          v11,
          0LL,
          (const MethodInfo_2E28238 *)Method_BasicHelper_IndexValue_GameObject____75711216);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Object_object__48347676 = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v31, 0LL, 0LL);
  if ( ((unsigned __int8)Object_object__48347676 & 1) == 0 )
  {
    if ( effectData )
    {
      prefixAsset = effectData->fields.prefixAsset;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetStorage = AssetManager__getAssetStorage(prefixAsset, 0LL);
      prefixEffect = (Il2CppObject *)effectData->fields.prefixEffect;
      v36 = AssetStorage;
      v46 = *(_DWORD *)(v24 + 24) + 2;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
      Object_object__48347676 = System_String__Concat(prefixEffect, v37, 0LL);
      if ( v36 )
      {
        Object_object__48347676 = (System_String_o *)AssetData__GetObject_object__48347676(
                                                       v36,
                                                       Object_object__48347676,
                                                       (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
        if ( v31 )
        {
          v38 = (UnityEngine_GameObject_o *)Object_object__48347676;
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v31, 0LL);
          Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)this,
                                             v38,
                                             transform,
                                             0LL,
                                             0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          Object_object__48347676 = (System_String_o *)UnityEngine_Object__op_Inequality(Object, 0LL, 0LL);
          Component_object = 0LL;
          if ( ((unsigned __int8)Object_object__48347676 & 1) != 0 )
          {
            if ( !Object )
              goto LABEL_35;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Object,
                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
          {
            ActionExtensions__Call_int_(
              *(System_Action_T__o **)(v24 + 16),
              *(_DWORD *)(v24 + 24),
              (const MethodInfo_2D909D8 *)Method_ActionExtensions_Call_int___);
            return 1;
          }
          v44 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v42, v43);
          System_Action___ctor(
            v44,
            (Il2CppObject *)v24,
            Method_BattleServantHpShiftComponent___c__DisplayClass20_0__PlayShiftEffectGeneral_b__0__,
            0LL);
          if ( Component_object )
          {
            v32 = 1;
            ((void (__fastcall *)(Il2CppObject *, __int64, System_Action_o *, Il2CppMethodPointer))Component_object->klass->vtable[8].method)(
              Component_object,
              1LL,
              v44,
              Component_object->klass->vtable[9].methodPtr);
            return v32;
          }
        }
      }
    }
LABEL_35:
    sub_1B64324(Object_object__48347676);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantHpShiftComponent__UpdateHideInvalidIcon(
        BattleServantHpShiftComponent_o *this,
        int32_t dispMaxPos,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Object_array *iconList; // x0
  signed int max_length; // w8
  int v10; // w26
  Il2CppObject *v11; // x21
  Il2CppObject *Component_object; // x0

  v3 = dispMaxPos;
  if ( (byte_49FF3BD & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_GameObject____75711216, *(_QWORD *)&dispMaxPos);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_49FF3BD = 1;
  }
  iconList = (System_Object_array *)this->fields.iconList;
  if ( iconList )
    max_length = iconList->max_length;
  else
    max_length = 0;
  if ( v3 + 1 < max_length )
  {
    v10 = max_length - 2;
    while ( 1 )
    {
      v11 = BasicHelper__IndexValue_object_(
              iconList,
              v3 + 1,
              0LL,
              (const MethodInfo_2E28238 *)Method_BasicHelper_IndexValue_GameObject____75711216);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
      if ( ((unsigned __int8)Component_object & 1) != 0 )
      {
        if ( !v11
          || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v11,
                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0LL )
        {
          sub_1B64324(Component_object);
        }
        UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v11, 0, 0LL);
      }
      if ( v10 == v3 )
        break;
      iconList = (System_Object_array *)this->fields.iconList;
      ++v3;
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
  int32_t decagramNumber; // w8
  UnityEngine_Behaviour_o *shiftIconDecagramSprite; // x0
  Il2CppObject *v13; // x23
  int32_t v14; // w22
  Il2CppObject *Component_object; // x21
  const MethodInfo *v16; // x2

  if ( (byte_49FF3BE & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_GameObject____75711216, *(_QWORD *)&index);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    byte_49FF3BE = 1;
  }
  decagramNumber = this->fields.decagramNumber;
  if ( decagramNumber > index )
  {
    if ( decagramNumber - 1 == index )
    {
      shiftIconDecagramSprite = (UnityEngine_Behaviour_o *)this->fields.shiftIconDecagramSprite;
      if ( shiftIconDecagramSprite )
      {
        UnityEngine_Behaviour__set_enabled(shiftIconDecagramSprite, isActive, 0LL);
        return;
      }
LABEL_17:
      sub_1B64324(shiftIconDecagramSprite);
    }
    v13 = BasicHelper__IndexValue_object_(
            (System_Object_array *)this->fields.iconList,
            index,
            0LL,
            (const MethodInfo_2E28238 *)Method_BasicHelper_IndexValue_GameObject____75711216);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    shiftIconDecagramSprite = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v13,
                                                           0LL,
                                                           0LL);
    if ( ((unsigned __int8)shiftIconDecagramSprite & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_17;
      v14 = isEmpty ? 0 : index + 2;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v13,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      shiftIconDecagramSprite = (UnityEngine_Behaviour_o *)BattleServantHpShiftComponent__getSpriteName(this, v14, v16);
      if ( !Component_object )
        goto LABEL_17;
      UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)shiftIconDecagramSprite, 0LL);
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
  int32_t decagramNumber; // w8
  struct UISprite_o *shiftIconDecagramSprite; // x0
  Il2CppObject *v10; // x20

  if ( (byte_49FF3BF & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_GameObject____75711216, *(_QWORD *)&index);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FF3BF = 1;
  }
  decagramNumber = this->fields.decagramNumber;
  if ( decagramNumber > index )
  {
    if ( decagramNumber - 1 == index )
    {
      shiftIconDecagramSprite = this->fields.shiftIconDecagramSprite;
      if ( shiftIconDecagramSprite )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)shiftIconDecagramSprite, isActive, 0LL);
        return;
      }
LABEL_13:
      sub_1B64324(shiftIconDecagramSprite);
    }
    v10 = BasicHelper__IndexValue_object_(
            (System_Object_array *)this->fields.iconList,
            index,
            0LL,
            (const MethodInfo_2E28238 *)Method_BasicHelper_IndexValue_GameObject____75711216);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    shiftIconDecagramSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)v10,
                                                     0LL,
                                                     0LL);
    if ( ((unsigned __int8)shiftIconDecagramSprite & 1) != 0 )
    {
      if ( !v10 )
        goto LABEL_13;
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
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  struct UnityEngine_GameObject_array *iconList; // x8
  struct UnityEngine_GameObject_array **p_iconList; // x20
  int v15; // w22
  int decagramNumber; // w10
  int32_t *p_decagramNumber; // x26
  __int64 v18; // x9
  unsigned int v19; // w23
  _BOOL4 v20; // w24
  unsigned __int64 v21; // x27
  UnityEngine_Object_o *v22; // x25
  int v23; // w8
  BattleDataDefine_c *v24; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x24
  UISprite_o *shiftIconDecagramSprite; // x24
  const MethodInfo *v27; // x2
  struct UnityEngine_GameObject_array *v28; // x8
  int32_t v29; // w24
  int32_t v30; // w21
  __int64 v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x23
  __int64 v35; // x25
  int max_length; // w9
  unsigned int v37; // w28
  UnityEngine_Object_o *v38; // x22
  struct UnityEngine_GameObject_array *v39; // x29
  UnityEngine_GameObject_o *shiftIconClone; // x22
  UnityEngine_Transform_o *transform; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  struct UnityEngine_GameObject_array *v44; // x8
  Il2CppObject *Component_object; // x22
  const MethodInfo *v46; // x2
  struct UnityEngine_GameObject_array *v47; // x8
  struct UnityEngine_GameObject_array *v48; // x8
  UIAtlas_o *atlas; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_49FF3BB & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, svtData);
    sub_1B640C8(&BattleDataDefine_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_GameObject___TypeInfo, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    this = (BattleServantHpShiftComponent_o *)sub_1B640C8(&StringLiteral_3207/*"BattleAssetUIAtlas"*/, v9);
    byte_49FF3BB = 1;
  }
  atlas = 0LL;
  if ( !svtData )
    goto LABEL_57;
  this = (BattleServantHpShiftComponent_o *)BattleServantData__GetMaxShiftIconCount(svtData, 0LL);
  p_iconList = &v4->fields.iconList;
  iconList = v4->fields.iconList;
  v15 = (int)this;
  if ( iconList )
  {
    if ( (_DWORD)this == iconList->max_length )
      return;
    p_decagramNumber = &v4->fields.decagramNumber;
    decagramNumber = v4->fields.decagramNumber;
    v18 = *(_QWORD *)&iconList->max_length;
    if ( (int)this < decagramNumber )
      v19 = (unsigned int)this;
    else
      v19 = decagramNumber - 1;
    v20 = (int)this >= decagramNumber;
    if ( v19 != (_DWORD)v18 )
    {
      if ( (int)v18 >= 1 )
      {
        v21 = 0LL;
        while ( 1 )
        {
          if ( v21 >= (unsigned int)v18 )
LABEL_59:
            sub_1B6432C(this, v10);
          v22 = (UnityEngine_Object_o *)iconList->m_Items[v21];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69127736(v22, 0LL);
          iconList = *p_iconList;
          if ( !*p_iconList )
            break;
          LODWORD(v18) = iconList->max_length;
          if ( (__int64)++v21 >= (int)v18 )
            goto LABEL_17;
        }
LABEL_57:
        sub_1B64324(this);
      }
LABEL_17:
      *p_iconList = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.iconList, 0, v11, v12);
    }
  }
  else
  {
    p_decagramNumber = &v4->fields.decagramNumber;
    v23 = v4->fields.decagramNumber;
    v20 = (int)this >= v23;
    if ( (int)this < v23 )
      v19 = (unsigned int)this;
    else
      v19 = v23 - 1;
  }
  this = (BattleServantHpShiftComponent_o *)v4->fields.shiftIconDecagramSprite;
  if ( !this )
    goto LABEL_57;
  this = (BattleServantHpShiftComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v20, 0LL);
  if ( v20 )
  {
    v24 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v24 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v24->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_3207/*"BattleAssetUIAtlas"*/, 0LL) )
    {
      this = (BattleServantHpShiftComponent_o *)v4->fields.shiftIconDecagramSprite;
      if ( !this )
        goto LABEL_57;
      UISprite__set_atlas((UISprite_o *)this, atlas, 0LL);
      shiftIconDecagramSprite = v4->fields.shiftIconDecagramSprite;
      this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(
                                                  v4,
                                                  v4->fields.decagramNumber + 1,
                                                  v27);
      if ( !shiftIconDecagramSprite )
        goto LABEL_57;
      UISprite__set_spriteName(shiftIconDecagramSprite, (System_String_o *)this, 0LL);
      this = (BattleServantHpShiftComponent_o *)v4->fields.shiftIconDecagramSprite;
      if ( !this )
        goto LABEL_57;
      ((void (__fastcall *)(BattleServantHpShiftComponent_o *, void *))this->klass[2]._1.typeMetadataHandle)(
        this,
        this->klass[2]._1.interopData);
    }
  }
  if ( v15 >= 1 )
  {
    this = (BattleServantHpShiftComponent_o *)BattleServantData__GetCurrentShiftPos(svtData, 0LL);
    v28 = *p_iconList;
    v29 = *p_decagramNumber;
    v30 = (int)this;
    if ( !*p_iconList )
    {
      v31 = sub_1B64170(UnityEngine_GameObject___TypeInfo, v19);
      *p_iconList = (struct UnityEngine_GameObject_array *)v31;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.iconList, v31, v32, v33);
      v28 = *p_iconList;
      if ( !*p_iconList )
        goto LABEL_57;
    }
    v34 = 4LL;
    v35 = 32LL;
    while ( 1 )
    {
      max_length = v28->max_length;
      v37 = v34 - 4;
      if ( (int)v34 - 4 >= max_length )
        break;
      if ( v37 >= max_length )
        goto LABEL_59;
      v38 = (UnityEngine_Object_o *)*((_QWORD *)&v28->obj.klass + v34);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleServantHpShiftComponent_o *)UnityEngine_Object__op_Equality(v38, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v39 = v4->fields.iconList;
        shiftIconClone = v4->fields.shiftIconClone;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
        this = (BattleServantHpShiftComponent_o *)BaseMonoBehaviour__createObject(
                                                    (BaseMonoBehaviour_o *)v4,
                                                    shiftIconClone,
                                                    transform,
                                                    0LL,
                                                    0LL);
        if ( !v39 )
          goto LABEL_57;
        if ( v37 >= v39->max_length )
          goto LABEL_59;
        *((_QWORD *)&v39->obj.klass + v34) = this;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v39 + v35), (int32_t)this, v42, v43);
      }
      v44 = *p_iconList;
      if ( !*p_iconList )
        goto LABEL_57;
      if ( v37 >= v44->max_length )
        goto LABEL_59;
      this = (BattleServantHpShiftComponent_o *)*((_QWORD *)&v44->obj.klass + v34);
      if ( this )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(v4, (int)v34 - 2, v46);
        if ( Component_object )
        {
          UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)this, 0LL);
          UIWidget__set_depth((UIWidget_o *)Component_object, v34 + v4->fields.defaultDepth - 4, 0LL);
          v47 = v4->fields.iconList;
          if ( v47 )
          {
            if ( v37 >= v47->max_length )
              goto LABEL_59;
            this = (BattleServantHpShiftComponent_o *)*((_QWORD *)&v47->obj.klass + v34);
            if ( this )
            {
              this = (BattleServantHpShiftComponent_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0LL);
              if ( this )
              {
                v50.fields.y = v4->fields.addPos.fields.y * (float)(int)v37;
                v50.fields.x = v4->fields.addPos.fields.x * (float)(int)v37;
                v50.fields.z = 0.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v50, 0LL);
                v48 = v4->fields.iconList;
                if ( v48 )
                {
                  if ( v37 >= v48->max_length )
                    goto LABEL_59;
                  this = (BattleServantHpShiftComponent_o *)*((_QWORD *)&v48->obj.klass + v34);
                  if ( this )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v30 < v29, 0LL);
                    v28 = *p_iconList;
                    ++v34;
                    v35 += 8LL;
                    if ( *p_iconList )
                      continue;
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_57;
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_Object_array *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject *v21; // x19
  __int64 v23; // x0
  int32_t v24; // [xsp+8h] [xbp-38h] BYREF
  int32_t imageType; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF3BA & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&count);
    sub_1B640C8(&object___TypeInfo, v5);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v6);
    sub_1B640C8(&StringLiteral_19899/*"hp_icon_"*/, v7);
    byte_49FF3BA = 1;
  }
  v8 = sub_1B64170(object___TypeInfo, 4LL);
  if ( !v8 )
    sub_1B64324(0LL);
  v11 = (System_Object_array *)v8;
  v12 = StringLiteral_19899/*"hp_icon_"*/;
  if ( StringLiteral_19899/*"hp_icon_"*/ )
  {
    v12 = sub_1B64204(StringLiteral_19899/*"hp_icon_"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_22;
    v13 = StringLiteral_19899/*"hp_icon_"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v11->max_length )
    goto LABEL_21;
  v11->m_Items[0] = (Il2CppObject *)v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v11->m_Items, v13, v9, v10);
  imageType = this->fields.imageType;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &imageType);
  v16 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1B64204(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_22;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_21;
  v11->m_Items[1] = v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->m_Items[1], (int32_t)v16, v14, v15);
  v12 = StringLiteral_16054/*"_"*/;
  if ( StringLiteral_16054/*"_"*/ )
  {
    v12 = sub_1B64204(StringLiteral_16054/*"_"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_22;
    v13 = StringLiteral_16054/*"_"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v11->max_length <= 2 )
    goto LABEL_21;
  v11->m_Items[2] = (Il2CppObject *)v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->m_Items[2], v13, v17, v18);
  v24 = count;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v21 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1B64204(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_22:
      v23 = sub_1B64348(v12);
      sub_1B641F0(v23, 0LL);
    }
  }
  if ( v11->max_length <= 3 )
LABEL_21:
    sub_1B6432C(v12, v13);
  v11->m_Items[3] = v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->m_Items[3], (int32_t)v21, v19, v20);
  return System_String__Concat_61386848(v11, 0LL);
}


void __fastcall BattleServantHpShiftComponent__playShiftEffect(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BaseMonoBehaviour_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Int32_array *shiftDeckList; // x9
  _DWORD *monitor; // x8
  il2cpp_array_size_t max_length; // w11
  il2cpp_array_size_t v14; // w9
  il2cpp_array_size_t v15; // w21
  UnityEngine_Object_o *v16; // x20
  BattleDataDefine_c *v17; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x20
  Il2CppObject *v20; // x0
  Il2CppObject *Object_object__48347676; // x20
  _DWORD *v22; // x8
  UnityEngine_Transform_o *transform; // x0
  _QWORD *v24; // x8
  Il2CppObject *Component_object; // x20
  const MethodInfo *v26; // x2
  il2cpp_array_size_t v27; // [xsp+Ch] [xbp-34h] BYREF

  v4 = (BaseMonoBehaviour_o *)this;
  if ( (byte_49FF3C3 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, svtData);
    sub_1B640C8(&AssetManager_TypeInfo, v5);
    sub_1B640C8(&BattleDataDefine_TypeInfo, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_1B640C8(&int_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    this = (BattleServantHpShiftComponent_o *)sub_1B640C8(&StringLiteral_19901/*"hp_iconeffect_1_"*/, v10);
    byte_49FF3C3 = 1;
  }
  if ( !svtData )
    goto LABEL_29;
  shiftDeckList = svtData->fields.shiftDeckList;
  if ( !shiftDeckList )
    goto LABEL_29;
  monitor = v4[2].monitor;
  if ( monitor )
  {
    max_length = shiftDeckList->max_length;
    v14 = monitor[6];
    v15 = max_length - svtData->fields.shiftDeckIndex;
    if ( (int)v15 < (int)v14 )
    {
      if ( v15 >= v14 )
        goto LABEL_30;
      v16 = *(UnityEngine_Object_o **)&monitor[2 * v15 + 8];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v16, 0LL, 0LL) )
      {
        v17 = BattleDataDefine_TypeInfo;
        if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
          v17 = BattleDataDefine_TypeInfo;
        }
        ASSET_BATTLE_COMMON = v17->static_fields->ASSET_BATTLE_COMMON;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
        v27 = v15 + 2;
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
        this = (BattleServantHpShiftComponent_o *)System_String__Concat((Il2CppObject *)StringLiteral_19901/*"hp_iconeffect_1_"*/, v20, 0LL);
        if ( !AssetStorage )
          goto LABEL_29;
        Object_object__48347676 = AssetData__GetObject_object__48347676(
                                    AssetStorage,
                                    (System_String_o *)this,
                                    (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleServantHpShiftComponent_o *)UnityEngine_Object__op_Inequality(
                                                    (UnityEngine_Object_o *)Object_object__48347676,
                                                    0LL,
                                                    0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v22 = v4[2].monitor;
          if ( !v22 )
            goto LABEL_29;
          if ( v15 >= v22[6] )
            goto LABEL_30;
          this = *(BattleServantHpShiftComponent_o **)&v22[2 * v15 + 8];
          if ( !this )
            goto LABEL_29;
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          this = (BattleServantHpShiftComponent_o *)BaseMonoBehaviour__createObject(
                                                      v4,
                                                      (UnityEngine_GameObject_o *)Object_object__48347676,
                                                      transform,
                                                      0LL,
                                                      0LL);
        }
        v24 = v4[2].monitor;
        if ( !v24 )
          goto LABEL_29;
        if ( v15 < *((_DWORD *)v24 + 6) )
        {
          this = (BattleServantHpShiftComponent_o *)v24[(int)v15 + 4];
          if ( this )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(
                                                        (BattleServantHpShiftComponent_o *)v4,
                                                        0,
                                                        v26);
            if ( Component_object )
            {
              UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)this, 0LL);
              return;
            }
          }
LABEL_29:
          sub_1B64324(this);
        }
LABEL_30:
        sub_1B6432C(this, svtData);
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
  struct UnityEngine_GameObject_array *iconList; // x8
  int max_length; // w9
  UnityEngine_Object_o *v17; // x20
  BattleDataDefine_c *v18; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x20
  Il2CppObject *v21; // x0
  Il2CppObject *Object_object__48347676; // x20
  struct UnityEngine_GameObject_array *v23; // x8
  UnityEngine_Transform_o *transform; // x0
  int v25; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_49FF3C2 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, svtData);
    sub_1B640C8(&AssetManager_TypeInfo, v5);
    sub_1B640C8(&BattleDataDefine_TypeInfo, v6);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    this = (BattleServantHpShiftComponent_o *)sub_1B640C8(&StringLiteral_19902/*"hp_iconeffect_before_1_"*/, v9);
    byte_49FF3C2 = 1;
  }
  if ( !svtData )
    goto LABEL_26;
  shiftDeckList = svtData->fields.shiftDeckList;
  if ( !shiftDeckList )
    goto LABEL_26;
  v11 = shiftDeckList->max_length - svtData->fields.shiftDeckIndex;
  if ( v4->fields.decagramNumber - 1 == v11 )
  {
    IsSuperBossUi = BattleServantData__get_IsSuperBossUi(svtData, 0LL);
    return BattleServantHpShiftComponent__CreateDecagramEffect(v4, IsSuperBossUi, v13);
  }
  iconList = v4->fields.iconList;
  if ( iconList )
  {
    max_length = iconList->max_length;
    if ( v11 < max_length )
    {
      if ( v11 < (unsigned int)max_length )
      {
        v17 = (UnityEngine_Object_o *)iconList->m_Items[v11];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v17, 0LL, 0LL) )
          return 0.0;
        v18 = BattleDataDefine_TypeInfo;
        if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
          v18 = BattleDataDefine_TypeInfo;
        }
        ASSET_BATTLE_COMMON = v18->static_fields->ASSET_BATTLE_COMMON;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
        v25 = v11 + 2;
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
        this = (BattleServantHpShiftComponent_o *)System_String__Concat((Il2CppObject *)StringLiteral_19902/*"hp_iconeffect_before_1_"*/, v21, 0LL);
        if ( !AssetStorage )
          goto LABEL_26;
        Object_object__48347676 = AssetData__GetObject_object__48347676(
                                    AssetStorage,
                                    (System_String_o *)this,
                                    (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleServantHpShiftComponent_o *)UnityEngine_Object__op_Inequality(
                                                    (UnityEngine_Object_o *)Object_object__48347676,
                                                    0LL,
                                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0.0;
        v23 = v4->fields.iconList;
        if ( !v23 )
          goto LABEL_26;
        if ( v11 < v23->max_length )
        {
          this = (BattleServantHpShiftComponent_o *)v23->m_Items[v11];
          if ( this )
          {
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            BaseMonoBehaviour__createObject(
              (BaseMonoBehaviour_o *)v4,
              (UnityEngine_GameObject_o *)Object_object__48347676,
              transform,
              0LL,
              0LL);
            return 0.0;
          }
LABEL_26:
          sub_1B64324(this);
        }
      }
      sub_1B6432C(this, svtData);
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
  UnityEngine_GameObject_o *shiftIconClone; // x0
  Il2CppObject *Component_object; // x0
  BattleDataDefine_c *v10; // x8
  UISprite_o *v11; // x21
  System_String_o *ASSET_BATTLE_COMMON; // x22
  const MethodInfo *v13; // x2
  System_String_o *SpriteName; // x0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  int32_t MaxShiftIconPos; // w0
  const MethodInfo *v18; // x2
  UIAtlas_o *atlas; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FF3B9 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, svtData);
    sub_1B640C8(&BattleDataDefine_TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6);
    sub_1B640C8(&StringLiteral_3207/*"BattleAssetUIAtlas"*/, v7);
    byte_49FF3B9 = 1;
  }
  atlas = 0LL;
  shiftIconClone = this->fields.shiftIconClone;
  if ( !shiftIconClone )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       shiftIconClone,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v10 = BattleDataDefine_TypeInfo;
  v11 = (UISprite_o *)Component_object;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v10 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v10->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  shiftIconClone = (UnityEngine_GameObject_o *)AssetManager__TryGetUIAtlas(
                                                 &atlas,
                                                 ASSET_BATTLE_COMMON,
                                                 (System_String_o *)StringLiteral_3207/*"BattleAssetUIAtlas"*/,
                                                 0LL);
  if ( ((unsigned __int8)shiftIconClone & 1) != 0 )
  {
    if ( !v11 )
      goto LABEL_16;
    UISprite__set_atlas(v11, atlas, 0LL);
    SpriteName = BattleServantHpShiftComponent__getSpriteName(this, 0, v13);
    UISprite__set_spriteName(v11, SpriteName, 0LL);
    this->fields.defaultDepth = v11->fields.mDepth;
  }
  shiftIconClone = this->fields.shiftIconClone;
  if ( !shiftIconClone
    || (UnityEngine_GameObject__SetActive(shiftIconClone, 0, 0LL),
        BattleServantHpShiftComponent__createIconList(this, svtData, v15),
        BattleServantHpShiftComponent__setValue(this, svtData, v16),
        !svtData) )
  {
LABEL_16:
    sub_1B64324(shiftIconClone);
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
  BattleServantHpShiftComponent_o *v4; // x19
  int decagramNumber; // w21
  int v6; // w20
  __int64 v7; // x1
  struct UnityEngine_GameObject_array *iconList; // x8
  bool v9; // w21
  __int64 v10; // x24
  int max_length; // w9
  unsigned int v12; // w25
  const MethodInfo *v13; // x2
  Il2CppObject *Component_object; // x22
  int32_t v15; // w1
  BattleServantHpShiftComponent_o *v16; // x0
  struct UnityEngine_GameObject_array *v17; // x8

  v4 = this;
  if ( (byte_49FF3BC & 1) == 0 )
  {
    this = (BattleServantHpShiftComponent_o *)sub_1B640C8(
                                                &Method_UnityEngine_GameObject_GetComponent_UISprite___,
                                                svtData);
    byte_49FF3BC = 1;
  }
  if ( v4->fields.iconList )
  {
    if ( !svtData
      || (this = (BattleServantHpShiftComponent_o *)BattleServantData__GetCurrentShiftPos(svtData, 0LL),
          !v4->fields.shiftIconDecagramSprite)
      || (decagramNumber = v4->fields.decagramNumber,
          v6 = (int)this,
          UnityEngine_Behaviour__set_enabled(
            (UnityEngine_Behaviour_o *)v4->fields.shiftIconDecagramSprite,
            (int)this >= decagramNumber,
            0LL),
          (iconList = v4->fields.iconList) == 0LL) )
    {
LABEL_19:
      sub_1B64324(this);
    }
    v9 = v6 < decagramNumber;
    v10 = 4LL;
    while ( 1 )
    {
      max_length = iconList->max_length;
      v12 = v10 - 4;
      if ( (int)v10 - 4 >= max_length )
        break;
      if ( v12 >= max_length )
        goto LABEL_21;
      this = (BattleServantHpShiftComponent_o *)*((_QWORD *)&iconList->obj.klass + v10);
      if ( this )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( (int)v12 >= v6 )
        {
          v16 = v4;
          v15 = 0;
        }
        else
        {
          v15 = v10 - 2;
          v16 = v4;
        }
        this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(v16, v15, v13);
        if ( Component_object )
        {
          UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)this, 0LL);
          v17 = v4->fields.iconList;
          if ( v17 )
          {
            if ( v12 >= v17->max_length )
LABEL_21:
              sub_1B6432C(this, v7);
            this = (BattleServantHpShiftComponent_o *)*((_QWORD *)&v17->obj.klass + v10);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v9, 0LL);
              iconList = v4->fields.iconList;
              ++v10;
              if ( iconList )
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
  int32_t v2; // w2
  int32_t v3; // w3
  BattleDataDefine_c *v5; // x0
  struct System_String_o *ASSET_BATTLE_COMMON; // x1

  if ( (byte_49FF3C5 & 1) == 0 )
  {
    sub_1B640C8(&BattleDataDefine_TypeInfo, method);
    byte_49FF3C5 = 1;
  }
  v5 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v5 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v5->static_fields->ASSET_BATTLE_COMMON;
  this->fields.prefixAsset = ASSET_BATTLE_COMMON;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)ASSET_BATTLE_COMMON, v2, v3);
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
  if ( (byte_49FF3C6 & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_int___, method);
    byte_49FF3C6 = 1;
  }
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callBack,
    this->fields.index,
    (const MethodInfo_2D909D8 *)Method_ActionExtensions_Call_int___);
}