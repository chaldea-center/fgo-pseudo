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
  __int64 v14; // x1
  Il2CppObject *Object_object__48515452; // x21
  float v16; // s8
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Object_o *Object; // x21
  Il2CppObject *Component_object; // x21
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_4A30F39 & 1) == 0 )
  {
    sub_1B761C0(&Method_AssetData_GetObject_GameObject____75903216, isSuperBoss);
    sub_1B761C0(&AssetManager_TypeInfo, v5);
    sub_1B761C0(&BattleDataDefine_TypeInfo, v6);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_BattleServantHpShiftDecagramEffectComponent___, v7);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v8);
    sub_1B761C0(&StringLiteral_19967/*"hp_crystaleffect_superboss_1_1"*/, v9);
    sub_1B761C0(&StringLiteral_19966/*"hp_crystaleffect_1_1"*/, v10);
    byte_4A30F39 = 1;
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
  Object_object__48515452 = AssetData__GetObject_object__48515452(
                              AssetStorage,
                              (System_String_o *)StringLiteral_19966/*"hp_crystaleffect_1_1"*/,
                              (const MethodInfo_2E4497C *)Method_AssetData_GetObject_GameObject____75903216);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = 0.0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48515452, 0LL, 0LL) )
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
                                       (UnityEngine_GameObject_o *)Object_object__48515452,
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
                           (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_BattleServantHpShiftDecagramEffectComponent___);
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
          Component_object[13].klass = (Il2CppClass *)this;
          sub_1B76164((ServantStatusBattleListViewItem_o *)&Component_object[13], (int32_t)this, v20, v21);
          v16 = *((float *)&Component_object[12].monitor + 1);
          if ( isSuperBoss )
            CommonEffectComponent__Init_40455588(
              (CommonEffectComponent_o *)Component_object,
              (System_String_o *)StringLiteral_19967/*"hp_crystaleffect_superboss_1_1"*/,
              0,
              0,
              0LL);
          return v16;
        }
LABEL_24:
        sub_1B7641C(AssetStorage, v14);
      }
    }
  }
  return v16;
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

  if ( (byte_4A30F38 & 1) == 0 )
  {
    sub_1B761C0(&Method_BasicHelper_IndexValue_GameObject____75908512, *(_QWORD *)&index);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v5);
    byte_4A30F38 = 1;
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
    sub_1B7641C(shiftIconDecagramSprite, *(_QWORD *)&index);
  }
  v9 = BasicHelper__IndexValue_object_(
         (System_Object_array *)this->fields.iconList,
         index,
         0LL,
         (const MethodInfo_2E51254 *)Method_BasicHelper_IndexValue_GameObject____75908512);
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
  System_String_o *Object_object__48515452; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  const MethodInfo *v29; // x2
  __int64 methodPtr_low; // x10
  bool v31; // w1
  Il2CppObject *v32; // x22
  bool v33; // w20
  System_String_o *prefixAsset; // x23
  AssetData_o *AssetStorage; // x0
  Il2CppObject *prefixEffect; // x21
  AssetData_o *v37; // x23
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  UnityEngine_GameObject_o *v42; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *Object; // x21
  Il2CppObject *Component_object; // x19
  System_Action_o *v46; // x21
  int v48; // [xsp+Ch] [xbp-44h] BYREF

  v11 = index;
  if ( (byte_4A30F3C & 1) == 0 )
  {
    sub_1B761C0(&Method_ActionExtensions_Call_int___, *(_QWORD *)&index);
    sub_1B761C0(&System_Action_TypeInfo, v13);
    sub_1B761C0(&Method_AssetData_GetObject_GameObject____75903216, v14);
    sub_1B761C0(&AssetManager_TypeInfo, v15);
    sub_1B761C0(&Method_BasicHelper_IndexValue_GameObject____75908512, v16);
    sub_1B761C0(&BattleServantSuperBossParamComponent_TypeInfo, v17);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v18);
    sub_1B761C0(&int_TypeInfo, v19);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v20);
    sub_1B761C0(&Method_BattleServantHpShiftComponent___c__DisplayClass20_0__PlayShiftEffectGeneral_b__0__, v21);
    sub_1B761C0(&BattleServantHpShiftComponent___c__DisplayClass20_0_TypeInfo, v22);
    sub_1B761C0(&StringLiteral_19975/*"hp_iconeffect_before_1_"*/, v23);
    byte_4A30F3C = 1;
  }
  v24 = sub_1B7640C(BattleServantHpShiftComponent___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_35;
  *(_QWORD *)(v24 + 16) = callBack;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v24 + 16), (int32_t)callBack, v27, v28);
  *(_DWORD *)(v24 + 24) = v11;
  *nextAnimationTime = 0.0;
  if ( this->fields.decagramNumber - 1 == v11 )
  {
    if ( !effectData )
      goto LABEL_35;
    if ( System_String__op_Equality(effectData->fields.prefixEffect, (System_String_o *)StringLiteral_19975/*"hp_iconeffect_before_1_"*/, 0LL) )
    {
      v31 = servantParam
         && (methodPtr_low = LOBYTE(BattleServantSuperBossParamComponent_TypeInfo->vtable._0_Equals.methodPtr),
             LOBYTE(servantParam->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
         && servantParam->klass->_2.typeHierarchy[methodPtr_low - 1] == (Il2CppClass *)BattleServantSuperBossParamComponent_TypeInfo;
      *nextAnimationTime = BattleServantHpShiftComponent__CreateDecagramEffect(this, v31, v29);
      return 1;
    }
    v11 = *(_DWORD *)(v24 + 24);
  }
  v32 = BasicHelper__IndexValue_object_(
          (System_Object_array *)this->fields.iconList,
          v11,
          0LL,
          (const MethodInfo_2E51254 *)Method_BasicHelper_IndexValue_GameObject____75908512);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Object_object__48515452 = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v32, 0LL, 0LL);
  if ( ((unsigned __int8)Object_object__48515452 & 1) == 0 )
  {
    if ( effectData )
    {
      prefixAsset = effectData->fields.prefixAsset;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetStorage = AssetManager__getAssetStorage(prefixAsset, 0LL);
      prefixEffect = (Il2CppObject *)effectData->fields.prefixEffect;
      v37 = AssetStorage;
      v48 = *(_DWORD *)(v24 + 24) + 2;
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v38, v39, v40);
      Object_object__48515452 = System_String__Concat(prefixEffect, v41, 0LL);
      if ( v37 )
      {
        Object_object__48515452 = (System_String_o *)AssetData__GetObject_object__48515452(
                                                       v37,
                                                       Object_object__48515452,
                                                       (const MethodInfo_2E4497C *)Method_AssetData_GetObject_GameObject____75903216);
        if ( v32 )
        {
          v42 = (UnityEngine_GameObject_o *)Object_object__48515452;
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v32, 0LL);
          Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)this,
                                             v42,
                                             transform,
                                             0LL,
                                             0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          Object_object__48515452 = (System_String_o *)UnityEngine_Object__op_Inequality(Object, 0LL, 0LL);
          Component_object = 0LL;
          if ( ((unsigned __int8)Object_object__48515452 & 1) != 0 )
          {
            if ( !Object )
              goto LABEL_35;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Object,
                                 (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
          {
            ActionExtensions__Call_int_(
              *(System_Action_T__o **)(v24 + 16),
              *(_DWORD *)(v24 + 24),
              (const MethodInfo_2DB9D58 *)Method_ActionExtensions_Call_int___);
            return 1;
          }
          v46 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
          System_Action___ctor(
            v46,
            (Il2CppObject *)v24,
            Method_BattleServantHpShiftComponent___c__DisplayClass20_0__PlayShiftEffectGeneral_b__0__,
            0LL);
          if ( Component_object )
          {
            v33 = 1;
            ((void (__fastcall *)(Il2CppObject *, __int64, System_Action_o *, Il2CppMethodPointer))Component_object->klass->vtable[8].method)(
              Component_object,
              1LL,
              v46,
              Component_object->klass->vtable[9].methodPtr);
            return v33;
          }
        }
      }
    }
LABEL_35:
    sub_1B7641C(Object_object__48515452, v26);
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
  __int64 v13; // x1

  v3 = dispMaxPos;
  if ( (byte_4A30F35 & 1) == 0 )
  {
    sub_1B761C0(&Method_BasicHelper_IndexValue_GameObject____75908512, *(_QWORD *)&dispMaxPos);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v6);
    sub_1B761C0(&StringLiteral_1/*""*/, v7);
    byte_4A30F35 = 1;
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
              (const MethodInfo_2E51254 *)Method_BasicHelper_IndexValue_GameObject____75908512);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
      if ( ((unsigned __int8)Component_object & 1) != 0 )
      {
        if ( !v11
          || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v11,
                                   (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0LL )
        {
          sub_1B7641C(Component_object, v13);
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

  if ( (byte_4A30F36 & 1) == 0 )
  {
    sub_1B761C0(&Method_BasicHelper_IndexValue_GameObject____75908512, *(_QWORD *)&index);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v10);
    byte_4A30F36 = 1;
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
      sub_1B7641C(shiftIconDecagramSprite, *(_QWORD *)&index);
    }
    v13 = BasicHelper__IndexValue_object_(
            (System_Object_array *)this->fields.iconList,
            index,
            0LL,
            (const MethodInfo_2E51254 *)Method_BasicHelper_IndexValue_GameObject____75908512);
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
                           (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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

  if ( (byte_4A30F37 & 1) == 0 )
  {
    sub_1B761C0(&Method_BasicHelper_IndexValue_GameObject____75908512, *(_QWORD *)&index);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v7);
    byte_4A30F37 = 1;
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
      sub_1B7641C(shiftIconDecagramSprite, *(_QWORD *)&index);
    }
    v10 = BasicHelper__IndexValue_object_(
            (System_Object_array *)this->fields.iconList,
            index,
            0LL,
            (const MethodInfo_2E51254 *)Method_BasicHelper_IndexValue_GameObject____75908512);
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
  int32_t v10; // w2
  int32_t v11; // w3
  struct UnityEngine_GameObject_array *iconList; // x8
  struct UnityEngine_GameObject_array **p_iconList; // x20
  int v14; // w22
  int decagramNumber; // w10
  int32_t *p_decagramNumber; // x26
  __int64 v17; // x9
  unsigned int v18; // w23
  _BOOL4 v19; // w24
  unsigned __int64 v20; // x27
  UnityEngine_Object_o *v21; // x25
  int v22; // w8
  BattleDataDefine_c *v23; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x24
  UISprite_o *shiftIconDecagramSprite; // x24
  const MethodInfo *v26; // x2
  struct UnityEngine_GameObject_array *v27; // x8
  int32_t v28; // w24
  int32_t v29; // w21
  __int64 v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x23
  __int64 v34; // x25
  int max_length; // w9
  unsigned int v36; // w28
  UnityEngine_Object_o *v37; // x22
  struct UnityEngine_GameObject_array *v38; // x29
  UnityEngine_GameObject_o *shiftIconClone; // x22
  UnityEngine_Transform_o *transform; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  struct UnityEngine_GameObject_array *v43; // x8
  Il2CppObject *Component_object; // x22
  const MethodInfo *v45; // x2
  struct UnityEngine_GameObject_array *v46; // x8
  struct UnityEngine_GameObject_array *v47; // x8
  UIAtlas_o *atlas; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A30F33 & 1) == 0 )
  {
    sub_1B761C0(&AssetManager_TypeInfo, svtData);
    sub_1B761C0(&BattleDataDefine_TypeInfo, v5);
    sub_1B761C0(&UnityEngine_GameObject___TypeInfo, v6);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v8);
    this = (BattleServantHpShiftComponent_o *)sub_1B761C0(&StringLiteral_3227/*"BattleAssetUIAtlas"*/, v9);
    byte_4A30F33 = 1;
  }
  atlas = 0LL;
  if ( !svtData )
    goto LABEL_57;
  this = (BattleServantHpShiftComponent_o *)BattleServantData__GetMaxShiftIconCount(svtData, 0LL);
  p_iconList = &v4->fields.iconList;
  iconList = v4->fields.iconList;
  v14 = (int)this;
  if ( iconList )
  {
    if ( (_DWORD)this == iconList->max_length )
      return;
    p_decagramNumber = &v4->fields.decagramNumber;
    decagramNumber = v4->fields.decagramNumber;
    v17 = *(_QWORD *)&iconList->max_length;
    if ( (int)this < decagramNumber )
      v18 = (unsigned int)this;
    else
      v18 = decagramNumber - 1;
    v19 = (int)this >= decagramNumber;
    if ( v18 != (_DWORD)v17 )
    {
      if ( (int)v17 >= 1 )
      {
        v20 = 0LL;
        while ( 1 )
        {
          if ( v20 >= (unsigned int)v17 )
LABEL_59:
            sub_1B76424(this, svtData);
          v21 = (UnityEngine_Object_o *)iconList->m_Items[v20];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69287408(v21, 0LL);
          iconList = *p_iconList;
          if ( !*p_iconList )
            break;
          LODWORD(v17) = iconList->max_length;
          if ( (__int64)++v20 >= (int)v17 )
            goto LABEL_17;
        }
LABEL_57:
        sub_1B7641C(this, svtData);
      }
LABEL_17:
      *p_iconList = 0LL;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields.iconList, 0, v10, v11);
    }
  }
  else
  {
    p_decagramNumber = &v4->fields.decagramNumber;
    v22 = v4->fields.decagramNumber;
    v19 = (int)this >= v22;
    if ( (int)this < v22 )
      v18 = (unsigned int)this;
    else
      v18 = v22 - 1;
  }
  this = (BattleServantHpShiftComponent_o *)v4->fields.shiftIconDecagramSprite;
  if ( !this )
    goto LABEL_57;
  this = (BattleServantHpShiftComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v19, 0LL);
  if ( v19 )
  {
    v23 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v23 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v23->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_3227/*"BattleAssetUIAtlas"*/, 0LL) )
    {
      this = (BattleServantHpShiftComponent_o *)v4->fields.shiftIconDecagramSprite;
      if ( !this )
        goto LABEL_57;
      UISprite__set_atlas((UISprite_o *)this, atlas, 0LL);
      shiftIconDecagramSprite = v4->fields.shiftIconDecagramSprite;
      this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(
                                                  v4,
                                                  v4->fields.decagramNumber + 1,
                                                  v26);
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
  if ( v14 >= 1 )
  {
    this = (BattleServantHpShiftComponent_o *)BattleServantData__GetCurrentShiftPos(svtData, 0LL);
    v27 = *p_iconList;
    v28 = *p_decagramNumber;
    v29 = (int)this;
    if ( !*p_iconList )
    {
      v30 = sub_1B76268(UnityEngine_GameObject___TypeInfo, v18);
      *p_iconList = (struct UnityEngine_GameObject_array *)v30;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields.iconList, v30, v31, v32);
      v27 = *p_iconList;
      if ( !*p_iconList )
        goto LABEL_57;
    }
    v33 = 4LL;
    v34 = 32LL;
    while ( 1 )
    {
      max_length = v27->max_length;
      v36 = v33 - 4;
      if ( (int)v33 - 4 >= max_length )
        break;
      if ( v36 >= max_length )
        goto LABEL_59;
      v37 = (UnityEngine_Object_o *)*((_QWORD *)&v27->obj.klass + v33);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleServantHpShiftComponent_o *)UnityEngine_Object__op_Equality(v37, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v38 = v4->fields.iconList;
        shiftIconClone = v4->fields.shiftIconClone;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
        this = (BattleServantHpShiftComponent_o *)BaseMonoBehaviour__createObject(
                                                    (BaseMonoBehaviour_o *)v4,
                                                    shiftIconClone,
                                                    transform,
                                                    0LL,
                                                    0LL);
        if ( !v38 )
          goto LABEL_57;
        if ( v36 >= v38->max_length )
          goto LABEL_59;
        *((_QWORD *)&v38->obj.klass + v33) = this;
        sub_1B76164((ServantStatusBattleListViewItem_o *)((char *)v38 + v34), (int32_t)this, v41, v42);
      }
      v43 = *p_iconList;
      if ( !*p_iconList )
        goto LABEL_57;
      if ( v36 >= v43->max_length )
        goto LABEL_59;
      this = (BattleServantHpShiftComponent_o *)*((_QWORD *)&v43->obj.klass + v33);
      if ( this )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(v4, (int)v33 - 2, v45);
        if ( Component_object )
        {
          UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)this, 0LL);
          UIWidget__set_depth((UIWidget_o *)Component_object, v33 + v4->fields.defaultDepth - 4, 0LL);
          v46 = v4->fields.iconList;
          if ( v46 )
          {
            if ( v36 >= v46->max_length )
              goto LABEL_59;
            this = (BattleServantHpShiftComponent_o *)*((_QWORD *)&v46->obj.klass + v33);
            if ( this )
            {
              this = (BattleServantHpShiftComponent_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0LL);
              if ( this )
              {
                v49.fields.y = v4->fields.addPos.fields.y * (float)(int)v36;
                v49.fields.x = v4->fields.addPos.fields.x * (float)(int)v36;
                v49.fields.z = 0.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v49, 0LL);
                v47 = v4->fields.iconList;
                if ( v47 )
                {
                  if ( v36 >= v47->max_length )
                    goto LABEL_59;
                  this = (BattleServantHpShiftComponent_o *)*((_QWORD *)&v47->obj.klass + v33);
                  if ( this )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v29 < v28, 0LL);
                    v27 = *p_iconList;
                    ++v33;
                    v34 += 8LL;
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
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_Object_array *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppObject *v28; // x19
  __int64 v30; // x0
  int32_t v31; // [xsp+8h] [xbp-38h] BYREF
  int32_t imageType; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A30F32 & 1) == 0 )
  {
    sub_1B761C0(&int_TypeInfo, *(_QWORD *)&count);
    sub_1B761C0(&object___TypeInfo, v5);
    sub_1B761C0(&StringLiteral_16117/*"_"*/, v6);
    sub_1B761C0(&StringLiteral_19972/*"hp_icon_"*/, v7);
    byte_4A30F32 = 1;
  }
  v8 = sub_1B76268(object___TypeInfo, 4LL);
  if ( !v8 )
    sub_1B7641C(0LL, v9);
  v12 = (System_Object_array *)v8;
  v13 = StringLiteral_19972/*"hp_icon_"*/;
  if ( StringLiteral_19972/*"hp_icon_"*/ )
  {
    v13 = sub_1B762FC(StringLiteral_19972/*"hp_icon_"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_22;
    v14 = StringLiteral_19972/*"hp_icon_"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v12->max_length )
    goto LABEL_21;
  v12->m_Items[0] = (Il2CppObject *)v14;
  sub_1B76164((ServantStatusBattleListViewItem_o *)v12->m_Items, v14, v10, v11);
  imageType = this->fields.imageType;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &imageType, v15, v16, v17);
  v20 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = sub_1B762FC(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_22;
  }
  if ( v12->max_length <= 1 )
    goto LABEL_21;
  v12->m_Items[1] = v20;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v12->m_Items[1], (int32_t)v20, v18, v19);
  v13 = StringLiteral_16117/*"_"*/;
  if ( StringLiteral_16117/*"_"*/ )
  {
    v13 = sub_1B762FC(StringLiteral_16117/*"_"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_22;
    v14 = StringLiteral_16117/*"_"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( v12->max_length <= 2 )
    goto LABEL_21;
  v12->m_Items[2] = (Il2CppObject *)v14;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v12->m_Items[2], v14, v21, v22);
  v31 = count;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v31, v23, v24, v25);
  v28 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = sub_1B762FC(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
    {
LABEL_22:
      v30 = sub_1B76440(v13);
      sub_1B762E8(v30, 0LL);
    }
  }
  if ( v12->max_length <= 3 )
LABEL_21:
    sub_1B76424(v13, v14);
  v12->m_Items[3] = v28;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v12->m_Items[3], (int32_t)v28, v26, v27);
  return System_String__Concat_61546512(v12, 0LL);
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
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  Il2CppObject *Object_object__48515452; // x20
  _DWORD *v25; // x8
  UnityEngine_Transform_o *transform; // x0
  _QWORD *v27; // x8
  Il2CppObject *Component_object; // x20
  const MethodInfo *v29; // x2
  il2cpp_array_size_t v30; // [xsp+Ch] [xbp-34h] BYREF

  v4 = (BaseMonoBehaviour_o *)this;
  if ( (byte_4A30F3B & 1) == 0 )
  {
    sub_1B761C0(&Method_AssetData_GetObject_GameObject____75903216, svtData);
    sub_1B761C0(&AssetManager_TypeInfo, v5);
    sub_1B761C0(&BattleDataDefine_TypeInfo, v6);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_1B761C0(&int_TypeInfo, v8);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v9);
    this = (BattleServantHpShiftComponent_o *)sub_1B761C0(&StringLiteral_19974/*"hp_iconeffect_1_"*/, v10);
    byte_4A30F3B = 1;
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
        v30 = v15 + 2;
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v20, v21, v22);
        this = (BattleServantHpShiftComponent_o *)System_String__Concat((Il2CppObject *)StringLiteral_19974/*"hp_iconeffect_1_"*/, v23, 0LL);
        if ( !AssetStorage )
          goto LABEL_29;
        Object_object__48515452 = AssetData__GetObject_object__48515452(
                                    AssetStorage,
                                    (System_String_o *)this,
                                    (const MethodInfo_2E4497C *)Method_AssetData_GetObject_GameObject____75903216);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleServantHpShiftComponent_o *)UnityEngine_Object__op_Inequality(
                                                    (UnityEngine_Object_o *)Object_object__48515452,
                                                    0LL,
                                                    0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v25 = v4[2].monitor;
          if ( !v25 )
            goto LABEL_29;
          if ( v15 >= v25[6] )
            goto LABEL_30;
          this = *(BattleServantHpShiftComponent_o **)&v25[2 * v15 + 8];
          if ( !this )
            goto LABEL_29;
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          this = (BattleServantHpShiftComponent_o *)BaseMonoBehaviour__createObject(
                                                      v4,
                                                      (UnityEngine_GameObject_o *)Object_object__48515452,
                                                      transform,
                                                      0LL,
                                                      0LL);
        }
        v27 = v4[2].monitor;
        if ( !v27 )
          goto LABEL_29;
        if ( v15 < *((_DWORD *)v27 + 6) )
        {
          this = (BattleServantHpShiftComponent_o *)v27[(int)v15 + 4];
          if ( this )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(
                                                        (BattleServantHpShiftComponent_o *)v4,
                                                        0,
                                                        v29);
            if ( Component_object )
            {
              UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)this, 0LL);
              return;
            }
          }
LABEL_29:
          sub_1B7641C(this, svtData);
        }
LABEL_30:
        sub_1B76424(this, svtData);
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
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x0
  Il2CppObject *Object_object__48515452; // x20
  struct UnityEngine_GameObject_array *v26; // x8
  UnityEngine_Transform_o *transform; // x0
  int v28; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4A30F3A & 1) == 0 )
  {
    sub_1B761C0(&Method_AssetData_GetObject_GameObject____75903216, svtData);
    sub_1B761C0(&AssetManager_TypeInfo, v5);
    sub_1B761C0(&BattleDataDefine_TypeInfo, v6);
    sub_1B761C0(&int_TypeInfo, v7);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v8);
    this = (BattleServantHpShiftComponent_o *)sub_1B761C0(&StringLiteral_19975/*"hp_iconeffect_before_1_"*/, v9);
    byte_4A30F3A = 1;
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
        v28 = v11 + 2;
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v21, v22, v23);
        this = (BattleServantHpShiftComponent_o *)System_String__Concat((Il2CppObject *)StringLiteral_19975/*"hp_iconeffect_before_1_"*/, v24, 0LL);
        if ( !AssetStorage )
          goto LABEL_26;
        Object_object__48515452 = AssetData__GetObject_object__48515452(
                                    AssetStorage,
                                    (System_String_o *)this,
                                    (const MethodInfo_2E4497C *)Method_AssetData_GetObject_GameObject____75903216);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleServantHpShiftComponent_o *)UnityEngine_Object__op_Inequality(
                                                    (UnityEngine_Object_o *)Object_object__48515452,
                                                    0LL,
                                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0.0;
        v26 = v4->fields.iconList;
        if ( !v26 )
          goto LABEL_26;
        if ( v11 < v26->max_length )
        {
          this = (BattleServantHpShiftComponent_o *)v26->m_Items[v11];
          if ( this )
          {
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            BaseMonoBehaviour__createObject(
              (BaseMonoBehaviour_o *)v4,
              (UnityEngine_GameObject_o *)Object_object__48515452,
              transform,
              0LL,
              0LL);
            return 0.0;
          }
LABEL_26:
          sub_1B7641C(this, svtData);
        }
      }
      sub_1B76424(this, svtData);
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

  if ( (byte_4A30F31 & 1) == 0 )
  {
    sub_1B761C0(&AssetManager_TypeInfo, svtData);
    sub_1B761C0(&BattleDataDefine_TypeInfo, v5);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6);
    sub_1B761C0(&StringLiteral_3227/*"BattleAssetUIAtlas"*/, v7);
    byte_4A30F31 = 1;
  }
  atlas = 0LL;
  shiftIconClone = this->fields.shiftIconClone;
  if ( !shiftIconClone )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       shiftIconClone,
                       (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                                                 (System_String_o *)StringLiteral_3227/*"BattleAssetUIAtlas"*/,
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
    sub_1B7641C(shiftIconClone, svtData);
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
  struct UnityEngine_GameObject_array *iconList; // x8
  bool v8; // w21
  __int64 v9; // x24
  int max_length; // w9
  unsigned int v11; // w25
  const MethodInfo *v12; // x2
  Il2CppObject *Component_object; // x22
  int32_t v14; // w1
  BattleServantHpShiftComponent_o *v15; // x0
  struct UnityEngine_GameObject_array *v16; // x8

  v4 = this;
  if ( (byte_4A30F34 & 1) == 0 )
  {
    this = (BattleServantHpShiftComponent_o *)sub_1B761C0(
                                                &Method_UnityEngine_GameObject_GetComponent_UISprite___,
                                                svtData);
    byte_4A30F34 = 1;
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
      sub_1B7641C(this, svtData);
    }
    v8 = v6 < decagramNumber;
    v9 = 4LL;
    while ( 1 )
    {
      max_length = iconList->max_length;
      v11 = v9 - 4;
      if ( (int)v9 - 4 >= max_length )
        break;
      if ( v11 >= max_length )
        goto LABEL_21;
      this = (BattleServantHpShiftComponent_o *)*((_QWORD *)&iconList->obj.klass + v9);
      if ( this )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( (int)v11 >= v6 )
        {
          v15 = v4;
          v14 = 0;
        }
        else
        {
          v14 = v9 - 2;
          v15 = v4;
        }
        this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(v15, v14, v12);
        if ( Component_object )
        {
          UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)this, 0LL);
          v16 = v4->fields.iconList;
          if ( v16 )
          {
            if ( v11 >= v16->max_length )
LABEL_21:
              sub_1B76424(this, svtData);
            this = (BattleServantHpShiftComponent_o *)*((_QWORD *)&v16->obj.klass + v9);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8, 0LL);
              iconList = v4->fields.iconList;
              ++v9;
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

  if ( (byte_4A30F3D & 1) == 0 )
  {
    sub_1B761C0(&BattleDataDefine_TypeInfo, method);
    byte_4A30F3D = 1;
  }
  v5 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v5 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v5->static_fields->ASSET_BATTLE_COMMON;
  this->fields.prefixAsset = ASSET_BATTLE_COMMON;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)ASSET_BATTLE_COMMON, v2, v3);
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
  if ( (byte_4A30F3E & 1) == 0 )
  {
    sub_1B761C0(&Method_ActionExtensions_Call_int___, method);
    byte_4A30F3E = 1;
  }
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callBack,
    this->fields.index,
    (const MethodInfo_2DB9D58 *)Method_ActionExtensions_Call_int___);
}