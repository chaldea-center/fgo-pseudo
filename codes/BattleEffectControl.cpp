void BattleEffectControl___ctor(BattleEffectControl_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *BattleEffectControl__CreateDropItemEffectObject(
        BattleEffectControl_o *this,
        int32_t dropEffectType,
        UnityEngine_Transform_o *rootTr,
        UnityEngine_Transform_o *rootNormalTr,
        const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  __int64 v10; // x1
  __int64 *v11; // x8
  Il2CppObject *Object_object__58532980; // x1

  if ( (byte_5973423 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&StringLiteral_23481/*"obj_treasure_item_bound"*/);
    sub_2213A60(&StringLiteral_19780/*"effect/obj_treasure_item01"*/);
    sub_2213A60(&StringLiteral_23482/*"obj_treasure_item_high_position"*/);
    sub_2213A60(&StringLiteral_3211/*"Battle/DropEffect/2"*/);
    sub_2213A60(&StringLiteral_3210/*"Battle/DropEffect/1"*/);
    byte_5973423 = 1;
  }
  if ( dropEffectType == 2 )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, *(_QWORD *)&dropEffectType);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3211/*"Battle/DropEffect/2"*/, 0);
    if ( AssetStorage )
    {
      v11 = &StringLiteral_23482/*"obj_treasure_item_high_position"*/;
      goto LABEL_13;
    }
LABEL_15:
    sub_2213CDC(AssetStorage, v10);
  }
  if ( dropEffectType == 1 )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, *(_QWORD *)&dropEffectType);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3210/*"Battle/DropEffect/1"*/, 0);
    if ( AssetStorage )
    {
      v11 = &StringLiteral_23481/*"obj_treasure_item_bound"*/;
LABEL_13:
      Object_object__58532980 = AssetData__GetObject_object__58532980(
                                  AssetStorage,
                                  (System_String_o *)*v11,
                                  (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
      return BaseMonoBehaviour__createObject(
               (BaseMonoBehaviour_o *)this,
               (UnityEngine_GameObject_o *)Object_object__58532980,
               rootTr,
               0,
               0);
    }
    goto LABEL_15;
  }
  return BaseMonoBehaviour__createObject_48153028(
           (BaseMonoBehaviour_o *)this,
           (System_String_o *)StringLiteral_19780/*"effect/obj_treasure_item01"*/,
           rootNormalTr,
           0,
           0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *BattleEffectControl__CreateDropTreasureEffectObject(
        BattleEffectControl_o *this,
        int32_t dropEffectType,
        UnityEngine_Transform_o *rootTr,
        int32_t rarity,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  AssetData_o *AssetStorage; // x22
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  Il2CppObject *Object_object__58532980; // x0
  int v17; // [xsp+8h] [xbp-38h] BYREF
  int v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5973424 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&StringLiteral_19783/*"effect/obj_treasure{0:D2}"*/);
    sub_2213A60(&StringLiteral_3210/*"Battle/DropEffect/1"*/);
    sub_2213A60(&StringLiteral_23483/*"obj_treasure{0:D2}_bound"*/);
    byte_5973424 = 1;
  }
  if ( dropEffectType == 1 )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, *(_QWORD *)&dropEffectType);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3210/*"Battle/DropEffect/1"*/, 0);
    v17 = rarity % 3 + 1;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v17);
    v14 = System_String__Format((System_String_o *)StringLiteral_23483/*"obj_treasure{0:D2}_bound"*/, v13, 0);
    if ( !AssetStorage )
      sub_2213CDC(v14, v15);
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                AssetStorage,
                                v14,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    return BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             (UnityEngine_GameObject_o *)Object_object__58532980,
             rootTr,
             0,
             0);
  }
  else if ( dropEffectType )
  {
    return 0;
  }
  else
  {
    v18 = rarity % 3 + 1;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v18);
    v10 = System_String__Format((System_String_o *)StringLiteral_19783/*"effect/obj_treasure{0:D2}"*/, v9, 0);
    return BaseMonoBehaviour__createObject_48153028((BaseMonoBehaviour_o *)this, v10, rootTr, 0, 0);
  }
}


UnityEngine_GameObject_o *BattleEffectControl__GetAvoidanceTextObject(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields.avoidanceTextObject;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *BattleEffectControl__GetTreasureObject(
        BattleEffectControl_o *this,
        int32_t rarity,
        UnityEngine_Transform_o *rootTr,
        UnityEngine_Transform_o *rootItemTr,
        DropInfo_o *dropInfo,
        const MethodInfo *method)
{
  BattleEffectControl_o *v10; // x19
  BattleEffectControl_o *v11; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x2
  UnityEngine_Transform_o *v14; // x0
  __int64 *v15; // x8

  v10 = this;
  if ( (byte_5973422 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19781/*"effect/obj_treasure_p"*/);
    sub_2213A60(&StringLiteral_25497/*"treasure"*/);
    this = (BattleEffectControl_o *)sub_2213A60(&StringLiteral_19782/*"effect/obj_treasure_pp"*/);
    byte_5973422 = 1;
  }
  if ( rarity < 1000 )
  {
    if ( dropInfo )
    {
      this = (BattleEffectControl_o *)BattleEffectControl__CreateDropTreasureEffectObject(
                                        v10,
                                        dropInfo->fields.effectType,
                                        rootTr,
                                        rarity,
                                        (const MethodInfo *)dropInfo);
      if ( this )
      {
        v11 = this;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_25497/*"treasure"*/, 0, 0);
        if ( (unsigned int)(rarity - 3) >= 3 )
        {
          if ( (unsigned int)(rarity - 6) > 2 )
            return (UnityEngine_GameObject_o *)v11;
          goto LABEL_13;
        }
LABEL_14:
        v15 = &StringLiteral_19781/*"effect/obj_treasure_p"*/;
        goto LABEL_15;
      }
    }
LABEL_17:
    sub_2213CDC(this, *(_QWORD *)&rarity);
  }
  if ( !dropInfo )
    goto LABEL_17;
  this = (BattleEffectControl_o *)BattleEffectControl__CreateDropItemEffectObject(
                                    v10,
                                    dropInfo->fields.effectType,
                                    rootTr,
                                    rootItemTr,
                                    (const MethodInfo *)dropInfo);
  if ( !this )
    goto LABEL_17;
  v11 = this;
  v14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  NodeFromName = TransformHelper__getNodeFromName(v14, (System_String_o *)StringLiteral_25497/*"treasure"*/, 0, 0);
  if ( rarity == 1001 )
    goto LABEL_14;
  if ( rarity == 1002 )
  {
LABEL_13:
    v15 = &StringLiteral_19782/*"effect/obj_treasure_pp"*/;
LABEL_15:
    BaseMonoBehaviour__createObject_48153028((BaseMonoBehaviour_o *)v10, (System_String_o *)*v15, NodeFromName, 0, 0);
  }
  return (UnityEngine_GameObject_o *)v11;
}


void BattleEffectControl__SetAvoidResetDamageObject(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._AvoidResetDamageObject_k__BackingField = obj;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._AvoidResetDamageObject_k__BackingField,
    (int32_t)obj,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleEffectControl__SetAvoidResetDamageTextObject(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._AvoidResetDamageTextObject_k__BackingField = obj;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._AvoidResetDamageTextObject_k__BackingField,
    (int32_t)obj,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


UnityEngine_GameObject_o *BattleEffectControl__SetBuffIconObject(
        BattleEffectControl_o *this,
        BattleBuffData_ShowBuffData_array *bufflist,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return BattleEffectControl__SetBuffIconObject_53135636(this, bufflist, this->fields.buffIconObject, v3);
}


UnityEngine_GameObject_o *BattleEffectControl__SetBuffIconObject_53135636(
        BattleEffectControl_o *this,
        BattleBuffData_ShowBuffData_array *bufflist,
        UnityEngine_GameObject_o *buffIcon,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v7; // x22
  UnityEngine_GameObject_o *Object; // x0
  __int64 v9; // x1
  il2cpp_array_size_t max_length; // x8
  float v11; // s8
  unsigned __int64 v12; // x25
  BattleBuffData_ShowBuffData_o *v13; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v15; // x24
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5973421 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    byte_5973421 = 1;
  }
  if ( !bufflist || !bufflist->max_length )
    return 0;
  v7 = (UnityEngine_GameObject_o *)sub_2213CCC(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor_83438680(v7, 0);
  max_length = bufflist->max_length;
  if ( (int)max_length >= 1 )
  {
    v11 = 0.0;
    v12 = 0;
    do
    {
      if ( v12 >= (unsigned int)max_length )
        sub_2213CE4(Object);
      if ( !v7
        || (v13 = bufflist->m_Items[v12],
            transform = UnityEngine_GameObject__get_transform(v7, 0),
            (Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, buffIcon, transform, 0, 0)) == 0)
        || (v15 = Object,
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    Object,
                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___)) == 0)
        || (BattleServantBuffIconComponent__setIcon_54741996((BattleServantBuffIconComponent_o *)Object, v13, 0),
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v15, 0)) == 0) )
      {
        sub_2213CDC(Object, v9);
      }
      v17.fields.y = 0.0;
      v17.fields.z = 0.0;
      v17.fields.x = v11;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v17, 0);
      LODWORD(max_length) = bufflist->max_length;
      ++v12;
      v11 = v11 + -44.0;
    }
    while ( (__int64)v12 < (int)max_length );
  }
  return v7;
}


void BattleEffectControl__SetDoNotActByCommandSealedObject(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._DoNotActByCommandSealedObject_k__BackingField = obj;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._DoNotActByCommandSealedObject_k__BackingField,
    (int32_t)obj,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleEffectControl__SetSpecialInvincibleObject(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._specialInvincibleObject_k__BackingField = obj;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._specialInvincibleObject_k__BackingField,
    (int32_t)obj,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleEffectControl__Start(BattleEffectControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct Spawner_o **p_spawner; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  UnityEngine_Object_o *spawner; // x21
  Spawner_o *v13; // x0
  __int64 v14; // x1
  struct UnityEngine_GameObject_array *EffectList; // x8
  struct UnityEngine_GameObject_array *v16; // x8
  struct UnityEngine_GameObject_array *v17; // x8
  struct UnityEngine_GameObject_array *v18; // x8
  struct UnityEngine_GameObject_array *v19; // x8
  struct UnityEngine_GameObject_array *v20; // x8
  struct UnityEngine_GameObject_array *damageObjectlist; // x8
  struct UnityEngine_GameObject_array *v22; // x8
  struct UnityEngine_GameObject_array *v23; // x8
  struct UnityEngine_GameObject_array *v24; // x8
  struct UnityEngine_GameObject_array *buffTextObjectlist; // x8
  unsigned __int64 v26; // x23
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v28; // x21
  struct UnityEngine_GameObject_array *buffTextClassIconObjectList; // x8
  unsigned __int64 v30; // x23
  unsigned __int64 v31; // x9
  UnityEngine_Object_o *v32; // x21

  if ( (byte_5973420 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_Spawner__get_Instance__);
    byte_5973420 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  this->fields.spawner = (struct Spawner_o *)Instance;
  p_spawner = &this->fields.spawner;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.spawner, (int32_t)Instance, v5, v6, v7, v8, v9, v10);
  spawner = (UnityEngine_Object_o *)this->fields.spawner;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  v13 = (Spawner_o *)UnityEngine_Object__op_Inequality(spawner, 0, 0);
  if ( ((unsigned __int8)v13 & 1) == 0 )
    return;
  EffectList = this->fields.EffectList;
  if ( !EffectList )
    goto LABEL_57;
  if ( LODWORD(EffectList->max_length) <= 2 )
    goto LABEL_59;
  v13 = this->fields.spawner;
  if ( !v13 )
    goto LABEL_57;
  Spawner__Precache_47685880(v13, (UnityEngine_Object_o *)EffectList->m_Items[2], 5, 0);
  v16 = this->fields.EffectList;
  if ( !v16 )
    goto LABEL_57;
  if ( (v16->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_59;
  v13 = this->fields.spawner;
  if ( !v13 )
    goto LABEL_57;
  Spawner__Precache_47685880(v13, (UnityEngine_Object_o *)v16->m_Items[3], 5, 0);
  v17 = this->fields.EffectList;
  if ( !v17 )
    goto LABEL_57;
  if ( LODWORD(v17->max_length) <= 4 )
    goto LABEL_59;
  v13 = this->fields.spawner;
  if ( !v13 )
    goto LABEL_57;
  Spawner__Precache_47685880(v13, (UnityEngine_Object_o *)v17->m_Items[4], 50, 0);
  v18 = this->fields.EffectList;
  if ( !v18 )
    goto LABEL_57;
  if ( LODWORD(v18->max_length) <= 6 )
    goto LABEL_59;
  v13 = this->fields.spawner;
  if ( !v13 )
    goto LABEL_57;
  Spawner__Precache_47685880(v13, (UnityEngine_Object_o *)v18->m_Items[6], 3, 0);
  v19 = this->fields.EffectList;
  if ( !v19 )
    goto LABEL_57;
  if ( (v19->max_length & 0xFFFFFFF8) == 0 )
    goto LABEL_59;
  v13 = this->fields.spawner;
  if ( !v13 )
    goto LABEL_57;
  Spawner__Precache_47685880(v13, (UnityEngine_Object_o *)v19->m_Items[7], 5, 0);
  v20 = this->fields.EffectList;
  if ( !v20 )
    goto LABEL_57;
  if ( LODWORD(v20->max_length) <= 9 )
    goto LABEL_59;
  v13 = this->fields.spawner;
  if ( !v13 )
    goto LABEL_57;
  Spawner__Precache_47685880(v13, (UnityEngine_Object_o *)v20->m_Items[9], 50, 0);
  damageObjectlist = this->fields.damageObjectlist;
  if ( !damageObjectlist )
    goto LABEL_57;
  if ( !LODWORD(damageObjectlist->max_length) )
    goto LABEL_59;
  v13 = this->fields.spawner;
  if ( !v13 )
    goto LABEL_57;
  Spawner__Precache_47685880(v13, (UnityEngine_Object_o *)damageObjectlist->m_Items[0], 5, 0);
  v22 = this->fields.damageObjectlist;
  if ( !v22 )
    goto LABEL_57;
  if ( (v22->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_59;
  v13 = this->fields.spawner;
  if ( !v13 )
    goto LABEL_57;
  Spawner__Precache_47685880(v13, (UnityEngine_Object_o *)v22->m_Items[1], 5, 0);
  v23 = this->fields.damageObjectlist;
  if ( !v23 )
    goto LABEL_57;
  if ( LODWORD(v23->max_length) <= 2 )
    goto LABEL_59;
  v13 = this->fields.spawner;
  if ( !v13 )
    goto LABEL_57;
  Spawner__Precache_47685880(v13, (UnityEngine_Object_o *)v23->m_Items[2], 5, 0);
  v24 = this->fields.damageObjectlist;
  if ( !v24 )
    goto LABEL_57;
  if ( (v24->max_length & 0xFFFFFFFC) == 0 )
LABEL_59:
    sub_2213CE4(v13);
  v13 = this->fields.spawner;
  if ( !v13 )
    goto LABEL_57;
  Spawner__Precache_47685880(v13, (UnityEngine_Object_o *)v24->m_Items[3], 5, 0);
  buffTextObjectlist = this->fields.buffTextObjectlist;
  if ( !buffTextObjectlist )
    goto LABEL_57;
  v26 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(buffTextObjectlist->max_length);
    if ( (__int64)v26 >= (int)max_length_low )
      break;
    if ( v26 >= max_length_low )
      goto LABEL_59;
    v28 = (UnityEngine_Object_o *)buffTextObjectlist->m_Items[v26];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    v13 = (Spawner_o *)UnityEngine_Object__op_Equality(v28, 0, 0);
    if ( ((unsigned __int8)v13 & 1) == 0 )
    {
      v13 = *p_spawner;
      if ( !*p_spawner )
        goto LABEL_57;
      Spawner__Precache_47685880(v13, v28, 5, 0);
    }
    buffTextObjectlist = this->fields.buffTextObjectlist;
    ++v26;
    if ( !buffTextObjectlist )
      goto LABEL_57;
  }
  buffTextClassIconObjectList = this->fields.buffTextClassIconObjectList;
  if ( !buffTextClassIconObjectList )
LABEL_57:
    sub_2213CDC(v13, v14);
  v30 = 0;
  while ( 1 )
  {
    v31 = LODWORD(buffTextClassIconObjectList->max_length);
    if ( (__int64)v30 >= (int)v31 )
      break;
    if ( v30 >= v31 )
      goto LABEL_59;
    v32 = (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[v30];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    v13 = (Spawner_o *)UnityEngine_Object__op_Equality(v32, 0, 0);
    if ( ((unsigned __int8)v13 & 1) == 0 )
    {
      v13 = *p_spawner;
      if ( !*p_spawner )
        goto LABEL_57;
      Spawner__Precache_47685880(v13, v32, 5, 0);
    }
    buffTextClassIconObjectList = this->fields.buffTextClassIconObjectList;
    ++v30;
    if ( !buffTextClassIconObjectList )
      goto LABEL_57;
  }
}


void BattleEffectControl__destroyInstantiate(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  Spawner_o *spawner; // x0

  spawner = this->fields.spawner;
  if ( !spawner )
    sub_2213CDC(0, obj);
  Spawner__Despawn(spawner, obj, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *BattleEffectControl__getBuffTextClassIconObject(
        BattleEffectControl_o *this,
        int32_t color,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *buffTextClassIconObjectList; // x8
  int max_length; // w10
  __int64 v5; // x9
  Spawner_o *spawner; // x0

  buffTextClassIconObjectList = this->fields.buffTextClassIconObjectList;
  if ( buffTextClassIconObjectList )
  {
    max_length = buffTextClassIconObjectList->max_length;
    v5 = (color - 1) & (unsigned int)~((color - 1) >> 31);
    if ( (int)v5 < max_length )
    {
      spawner = this->fields.spawner;
      if ( !spawner )
LABEL_10:
        sub_2213CDC(spawner, *(_QWORD *)&color);
      return Spawner__Spawn_47687448(spawner, (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[v5], 0);
    }
    if ( max_length >= 1 )
    {
      spawner = this->fields.spawner;
      if ( !spawner )
        goto LABEL_10;
      v5 = 0;
      return Spawner__Spawn_47687448(spawner, (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[v5], 0);
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *BattleEffectControl__getBuffTextObject(
        BattleEffectControl_o *this,
        int32_t color,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *buffTextObjectlist; // x8
  int max_length; // w10
  __int64 v5; // x9
  Spawner_o *spawner; // x0

  buffTextObjectlist = this->fields.buffTextObjectlist;
  if ( buffTextObjectlist )
  {
    max_length = buffTextObjectlist->max_length;
    v5 = (color - 1) & (unsigned int)~((color - 1) >> 31);
    if ( (int)v5 < max_length )
    {
      spawner = this->fields.spawner;
      if ( !spawner )
LABEL_10:
        sub_2213CDC(spawner, *(_QWORD *)&color);
      return Spawner__Spawn_47687448(spawner, (UnityEngine_Object_o *)buffTextObjectlist->m_Items[v5], 0);
    }
    if ( max_length >= 1 )
    {
      spawner = this->fields.spawner;
      if ( !spawner )
        goto LABEL_10;
      v5 = 0;
      return Spawner__Spawn_47687448(spawner, (UnityEngine_Object_o *)buffTextObjectlist->m_Items[v5], 0);
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *BattleEffectControl__getDamageObject(
        BattleEffectControl_o *this,
        bool critical,
        bool week,
        bool resist,
        const MethodInfo *method)
{
  Spawner_o *spawner; // x0
  struct UnityEngine_GameObject_array *damageObjectlist; // x8
  UnityEngine_Object_o **m_Items; // x8

  spawner = this->fields.spawner;
  damageObjectlist = this->fields.damageObjectlist;
  if ( !critical )
  {
    if ( week )
    {
      if ( damageObjectlist )
      {
        if ( LODWORD(damageObjectlist->max_length) <= 2 )
          goto LABEL_22;
        if ( spawner )
        {
          m_Items = (UnityEngine_Object_o **)&damageObjectlist->m_Items[2];
          return Spawner__Spawn_47687448(spawner, *m_Items, 0);
        }
      }
    }
    else if ( resist )
    {
      if ( damageObjectlist )
      {
        if ( (damageObjectlist->max_length & 0xFFFFFFFC) == 0 )
          goto LABEL_22;
        if ( spawner )
        {
          m_Items = (UnityEngine_Object_o **)&damageObjectlist->m_Items[3];
          return Spawner__Spawn_47687448(spawner, *m_Items, 0);
        }
      }
    }
    else if ( damageObjectlist )
    {
      if ( !LODWORD(damageObjectlist->max_length) )
        goto LABEL_22;
      if ( spawner )
      {
        m_Items = (UnityEngine_Object_o **)damageObjectlist->m_Items;
        return Spawner__Spawn_47687448(spawner, *m_Items, 0);
      }
    }
LABEL_21:
    sub_2213CDC(spawner, critical);
  }
  if ( !damageObjectlist )
    goto LABEL_21;
  if ( (damageObjectlist->max_length & 0xFFFFFFFE) == 0 )
LABEL_22:
    sub_2213CE4(spawner);
  if ( !spawner )
    goto LABEL_21;
  m_Items = (UnityEngine_Object_o **)&damageObjectlist->m_Items[1];
  return Spawner__Spawn_47687448(spawner, *m_Items, 0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *BattleEffectControl__getEffectInstantiate(
        BattleEffectControl_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *EffectList; // x8
  int32_t max_length; // w9

  EffectList = this->fields.EffectList;
  if ( !EffectList )
    goto LABEL_8;
  max_length = EffectList->max_length;
  if ( max_length > id )
  {
    if ( max_length <= (unsigned int)id )
      sub_2213CE4(this);
    this = (BattleEffectControl_o *)this->fields.spawner;
    if ( this )
      return Spawner__Spawn_47687448((Spawner_o *)this, (UnityEngine_Object_o *)EffectList->m_Items[id], 0);
LABEL_8:
    sub_2213CDC(this, *(_QWORD *)&id);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *BattleEffectControl__getListEffect(
        BattleEffectControl_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *EffectList; // x8
  int32_t max_length; // w9

  EffectList = this->fields.EffectList;
  if ( !EffectList )
    sub_2213CDC(this, *(_QWORD *)&id);
  max_length = EffectList->max_length;
  if ( max_length <= id )
    return 0;
  if ( max_length <= (unsigned int)id )
    sub_2213CE4(this);
  return EffectList->m_Items[id];
}


UnityEngine_GameObject_o *BattleEffectControl__get_AvoidResetDamageObject(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields._AvoidResetDamageObject_k__BackingField;
}


UnityEngine_GameObject_o *BattleEffectControl__get_AvoidResetDamageTextObject(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields._AvoidResetDamageTextObject_k__BackingField;
}


UnityEngine_GameObject_o *BattleEffectControl__get_BuffIconPrefab(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields.buffIconObject;
}


UnityEngine_GameObject_array *BattleEffectControl__get_BuffTextClassIconPrefabArray(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields.buffTextClassIconObjectList;
}


UnityEngine_GameObject_array *BattleEffectControl__get_BuffTextPrefabArray(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields.buffTextObjectlist;
}


UnityEngine_GameObject_array *BattleEffectControl__get_DamagePrefabArray(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields.damageObjectlist;
}


UnityEngine_GameObject_o *BattleEffectControl__get_DoNotActByCommandSealedObject(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields._DoNotActByCommandSealedObject_k__BackingField;
}


UnityEngine_GameObject_array *BattleEffectControl__get_EffectPrefabArray(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields.EffectList;
}


UnityEngine_GameObject_o *BattleEffectControl__get_specialInvincibleObject(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields._specialInvincibleObject_k__BackingField;
}


UnityEngine_GameObject_o *BattleEffectControl__getavoidanceObject(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields.avoidanceObject;
}


UnityEngine_GameObject_o *BattleEffectControl__getinvincibleObject(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields.invincibleObject;
}


void BattleEffectControl__set_AvoidResetDamageObject(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._AvoidResetDamageObject_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._AvoidResetDamageObject_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleEffectControl__set_AvoidResetDamageTextObject(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._AvoidResetDamageTextObject_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._AvoidResetDamageTextObject_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleEffectControl__set_DoNotActByCommandSealedObject(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._DoNotActByCommandSealedObject_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._DoNotActByCommandSealedObject_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleEffectControl__set_specialInvincibleObject(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._specialInvincibleObject_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._specialInvincibleObject_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}