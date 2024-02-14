void __fastcall BattleEffectControl___ctor(BattleEffectControl_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleEffectControl__CreateDropItemEffectObject(
        BattleEffectControl_o *this,
        int32_t dropEffectType,
        UnityEngine_Transform_o *rootTr,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  AssetData_o *AssetStorage; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x1

  if ( (byte_42134E2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, *(_QWORD *)&dropEffectType);
    sub_B0D8A4(&AssetManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_21250/*"obj_treasure_item_bound"*/, v8);
    sub_B0D8A4(&StringLiteral_18316/*"effect/obj_treasure_item01"*/, v9);
    sub_B0D8A4(&StringLiteral_2768/*"Battle/DropEffect/1"*/, v10);
    byte_42134E2 = 1;
  }
  if ( dropEffectType == 1 )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2768/*"Battle/DropEffect/1"*/, 0LL);
    if ( !AssetStorage )
      sub_B0D97C(0LL);
    Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   (System_String_o *)StringLiteral_21250/*"obj_treasure_item_bound"*/,
                                                                   (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
    return BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             Object_WarBoardWaitTimeSetting,
             rootTr,
             0LL,
             0LL);
  }
  else if ( dropEffectType )
  {
    return 0LL;
  }
  else
  {
    return BaseMonoBehaviour__createObject_18711800(
             (BaseMonoBehaviour_o *)this,
             (System_String_o *)StringLiteral_18316/*"effect/obj_treasure_item01"*/,
             rootTr,
             0LL,
             0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleEffectControl__CreateDropTreasureEffectObject(
        BattleEffectControl_o *this,
        int32_t dropEffectType,
        UnityEngine_Transform_o *rootTr,
        int32_t rarity,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  AssetData_o *AssetStorage; // x22
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  int v21; // [xsp+8h] [xbp-28h] BYREF
  int v22; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42134E3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, *(_QWORD *)&dropEffectType);
    sub_B0D8A4(&AssetManager_TypeInfo, v9);
    sub_B0D8A4(&int_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_18319/*"effect/obj_treasure{0:D2}"*/, v11);
    sub_B0D8A4(&StringLiteral_2768/*"Battle/DropEffect/1"*/, v12);
    sub_B0D8A4(&StringLiteral_21251/*"obj_treasure{0:D2}_bound"*/, v13);
    byte_42134E3 = 1;
  }
  if ( dropEffectType == 1 )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2768/*"Battle/DropEffect/1"*/, 0LL);
    v21 = rarity % 3 + 1;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
    v19 = System_String__Format((System_String_o *)StringLiteral_21251/*"obj_treasure{0:D2}_bound"*/, v18, 0LL);
    if ( !AssetStorage )
      sub_B0D97C(v19);
    Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   v19,
                                                                   (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
    return BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             Object_WarBoardWaitTimeSetting,
             rootTr,
             0LL,
             0LL);
  }
  else if ( dropEffectType )
  {
    return 0LL;
  }
  else
  {
    v22 = rarity % 3 + 1;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    v15 = System_String__Format((System_String_o *)StringLiteral_18319/*"effect/obj_treasure{0:D2}"*/, v14, 0LL);
    return BaseMonoBehaviour__createObject_18711800((BaseMonoBehaviour_o *)this, v15, rootTr, 0LL, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__GetAvoidanceTextObject(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields.avoidanceTextObject;
}


void __fastcall BattleEffectControl__SetDoNotActByCommandSealedObject(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._DoNotActByCommandSealedObject_k__BackingField = obj;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._DoNotActByCommandSealedObject_k__BackingField,
    (System_Int32_array **)obj,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleEffectControl__SetSpecialInvincibleObject(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._specialInvincibleObject_k__BackingField = obj;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._specialInvincibleObject_k__BackingField,
    (System_Int32_array **)obj,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleEffectControl__Start(BattleEffectControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct Spawner_o *Instance; // x0
  struct Spawner_o **p_spawner; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Object_o *spawner; // x21
  Spawner_o *v13; // x0
  struct UnityEngine_GameObject_array *EffectList; // x8
  struct UnityEngine_GameObject_array *v15; // x8
  struct UnityEngine_GameObject_array *v16; // x8
  struct UnityEngine_GameObject_array *v17; // x8
  struct UnityEngine_GameObject_array *v18; // x8
  struct UnityEngine_GameObject_array *v19; // x8
  struct UnityEngine_GameObject_array *damageObjectlist; // x8
  struct UnityEngine_GameObject_array *v21; // x8
  struct UnityEngine_GameObject_array *v22; // x8
  struct UnityEngine_GameObject_array *v23; // x8
  struct UnityEngine_GameObject_array *buffTextObjectlist; // x8
  unsigned __int64 v25; // x23
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v27; // x21
  struct UnityEngine_GameObject_array *buffTextClassIconObjectList; // x8
  unsigned __int64 v29; // x23
  unsigned __int64 v30; // x9
  UnityEngine_Object_o *v31; // x21
  __int64 v32; // x0

  if ( (byte_42134DF & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_Spawner__get_Instance__, v3);
    byte_42134DF = 1;
  }
  Instance = (struct Spawner_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  this->fields.spawner = Instance;
  p_spawner = &this->fields.spawner;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.spawner,
    (System_Int32_array **)Instance,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  spawner = (UnityEngine_Object_o *)this->fields.spawner;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = (Spawner_o *)UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL);
  if ( ((unsigned __int8)v13 & 1) == 0 )
    return;
  EffectList = this->fields.EffectList;
  if ( !EffectList )
    goto LABEL_60;
  if ( EffectList->max_length <= 2 )
    goto LABEL_62;
  v13 = this->fields.spawner;
  if ( !v13 )
    goto LABEL_60;
  Spawner__Precache_25899780(v13, (UnityEngine_Object_o *)EffectList->m_Items[2], 5, 0LL);
  v15 = this->fields.EffectList;
  if ( !v15 )
    goto LABEL_60;
  if ( v15->max_length <= 3 )
    goto LABEL_62;
  v13 = this->fields.spawner;
  if ( !v13 )
    goto LABEL_60;
  Spawner__Precache_25899780(v13, (UnityEngine_Object_o *)v15->m_Items[3], 5, 0LL);
  v16 = this->fields.EffectList;
  if ( !v16 )
    goto LABEL_60;
  if ( v16->max_length <= 4 )
    goto LABEL_62;
  v13 = this->fields.spawner;
  if ( !v13 )
    goto LABEL_60;
  Spawner__Precache_25899780(v13, (UnityEngine_Object_o *)v16->m_Items[4], 50, 0LL);
  v17 = this->fields.EffectList;
  if ( !v17 )
    goto LABEL_60;
  if ( v17->max_length <= 6 )
    goto LABEL_62;
  v13 = this->fields.spawner;
  if ( !v13 )
    goto LABEL_60;
  Spawner__Precache_25899780(v13, (UnityEngine_Object_o *)v17->m_Items[6], 3, 0LL);
  v18 = this->fields.EffectList;
  if ( !v18 )
    goto LABEL_60;
  if ( v18->max_length <= 7 )
    goto LABEL_62;
  v13 = this->fields.spawner;
  if ( !v13 )
    goto LABEL_60;
  Spawner__Precache_25899780(v13, (UnityEngine_Object_o *)v18->m_Items[7], 5, 0LL);
  v19 = this->fields.EffectList;
  if ( !v19 )
    goto LABEL_60;
  if ( v19->max_length <= 9 )
    goto LABEL_62;
  v13 = this->fields.spawner;
  if ( !v13 )
    goto LABEL_60;
  Spawner__Precache_25899780(v13, (UnityEngine_Object_o *)v19->m_Items[9], 50, 0LL);
  damageObjectlist = this->fields.damageObjectlist;
  if ( !damageObjectlist )
    goto LABEL_60;
  if ( !damageObjectlist->max_length )
    goto LABEL_62;
  v13 = this->fields.spawner;
  if ( !v13 )
    goto LABEL_60;
  Spawner__Precache_25899780(v13, (UnityEngine_Object_o *)damageObjectlist->m_Items[0], 5, 0LL);
  v21 = this->fields.damageObjectlist;
  if ( !v21 )
    goto LABEL_60;
  if ( v21->max_length <= 1 )
    goto LABEL_62;
  v13 = this->fields.spawner;
  if ( !v13 )
    goto LABEL_60;
  Spawner__Precache_25899780(v13, (UnityEngine_Object_o *)v21->m_Items[1], 5, 0LL);
  v22 = this->fields.damageObjectlist;
  if ( !v22 )
    goto LABEL_60;
  if ( v22->max_length <= 2 )
    goto LABEL_62;
  v13 = this->fields.spawner;
  if ( !v13 )
    goto LABEL_60;
  Spawner__Precache_25899780(v13, (UnityEngine_Object_o *)v22->m_Items[2], 5, 0LL);
  v23 = this->fields.damageObjectlist;
  if ( !v23 )
    goto LABEL_60;
  if ( v23->max_length <= 3 )
  {
LABEL_62:
    v32 = sub_B0D9A8(v13);
    sub_B0D948(v32, 0LL);
  }
  v13 = this->fields.spawner;
  if ( !v13 )
    goto LABEL_60;
  Spawner__Precache_25899780(v13, (UnityEngine_Object_o *)v23->m_Items[3], 5, 0LL);
  buffTextObjectlist = this->fields.buffTextObjectlist;
  if ( !buffTextObjectlist )
    goto LABEL_60;
  v25 = 0LL;
  while ( 1 )
  {
    max_length = buffTextObjectlist->max_length;
    if ( (__int64)v25 >= (int)max_length )
      break;
    if ( v25 >= max_length )
      goto LABEL_62;
    v27 = (UnityEngine_Object_o *)buffTextObjectlist->m_Items[v25];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v13 = (Spawner_o *)UnityEngine_Object__op_Equality(v27, 0LL, 0LL);
    if ( ((unsigned __int8)v13 & 1) == 0 )
    {
      v13 = *p_spawner;
      if ( !*p_spawner )
        goto LABEL_60;
      Spawner__Precache_25899780(v13, v27, 5, 0LL);
    }
    buffTextObjectlist = this->fields.buffTextObjectlist;
    ++v25;
    if ( !buffTextObjectlist )
      goto LABEL_60;
  }
  buffTextClassIconObjectList = this->fields.buffTextClassIconObjectList;
  if ( !buffTextClassIconObjectList )
LABEL_60:
    sub_B0D97C(v13);
  v29 = 0LL;
  while ( 1 )
  {
    v30 = buffTextClassIconObjectList->max_length;
    if ( (__int64)v29 >= (int)v30 )
      break;
    if ( v29 >= v30 )
      goto LABEL_62;
    v31 = (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[v29];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v13 = (Spawner_o *)UnityEngine_Object__op_Equality(v31, 0LL, 0LL);
    if ( ((unsigned __int8)v13 & 1) == 0 )
    {
      v13 = *p_spawner;
      if ( !*p_spawner )
        goto LABEL_60;
      Spawner__Precache_25899780(v13, v31, 5, 0LL);
    }
    buffTextClassIconObjectList = this->fields.buffTextClassIconObjectList;
    ++v29;
    if ( !buffTextClassIconObjectList )
      goto LABEL_60;
  }
}


void __fastcall BattleEffectControl__destroyInstantiate(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  Spawner_o *spawner; // x0

  spawner = this->fields.spawner;
  if ( !spawner )
    sub_B0D97C(0LL);
  Spawner__Despawn(spawner, obj, 1, 0LL);
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__getBuffTextClassIconObject(
        BattleEffectControl_o *this,
        int32_t color,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *buffTextClassIconObjectList; // x8
  int max_length; // w10
  unsigned int v5; // w9
  Spawner_o *spawner; // x0
  __int64 v8; // x0

  buffTextClassIconObjectList = this->fields.buffTextClassIconObjectList;
  if ( buffTextClassIconObjectList )
  {
    max_length = buffTextClassIconObjectList->max_length;
    v5 = (color - 1) & ~((color - 1) >> 31);
    if ( (int)v5 < max_length )
    {
      if ( v5 >= max_length )
      {
        v8 = sub_B0D9A8(this);
        sub_B0D948(v8, 0LL);
      }
      spawner = this->fields.spawner;
      if ( spawner )
      {
        buffTextClassIconObjectList = (struct UnityEngine_GameObject_array *)((char *)buffTextClassIconObjectList
                                                                            + 8 * v5);
        return Spawner__Spawn_25900140(spawner, (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[0], 0LL);
      }
LABEL_10:
      sub_B0D97C(spawner);
    }
    if ( max_length >= 1 )
    {
      spawner = this->fields.spawner;
      if ( spawner )
        return Spawner__Spawn_25900140(spawner, (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[0], 0LL);
      goto LABEL_10;
    }
  }
  return 0LL;
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__getBuffTextObject(
        BattleEffectControl_o *this,
        int32_t color,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *buffTextObjectlist; // x8
  int max_length; // w10
  unsigned int v5; // w9
  Spawner_o *spawner; // x0
  __int64 v8; // x0

  buffTextObjectlist = this->fields.buffTextObjectlist;
  if ( buffTextObjectlist )
  {
    max_length = buffTextObjectlist->max_length;
    v5 = (color - 1) & ~((color - 1) >> 31);
    if ( (int)v5 < max_length )
    {
      if ( v5 >= max_length )
      {
        v8 = sub_B0D9A8(this);
        sub_B0D948(v8, 0LL);
      }
      spawner = this->fields.spawner;
      if ( spawner )
      {
        buffTextObjectlist = (struct UnityEngine_GameObject_array *)((char *)buffTextObjectlist + 8 * v5);
        return Spawner__Spawn_25900140(spawner, (UnityEngine_Object_o *)buffTextObjectlist->m_Items[0], 0LL);
      }
LABEL_10:
      sub_B0D97C(spawner);
    }
    if ( max_length >= 1 )
    {
      spawner = this->fields.spawner;
      if ( spawner )
        return Spawner__Spawn_25900140(spawner, (UnityEngine_Object_o *)buffTextObjectlist->m_Items[0], 0LL);
      goto LABEL_10;
    }
  }
  return 0LL;
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__getDamageObject(
        BattleEffectControl_o *this,
        bool critical,
        bool week,
        bool resist,
        const MethodInfo *method)
{
  Spawner_o *spawner; // x0
  struct UnityEngine_GameObject_array *damageObjectlist; // x8
  UnityEngine_Object_o **m_Items; // x8
  unsigned int max_length; // w9
  __int64 v11; // x0

  spawner = this->fields.spawner;
  damageObjectlist = this->fields.damageObjectlist;
  if ( !critical )
  {
    if ( week )
    {
      if ( damageObjectlist )
      {
        if ( damageObjectlist->max_length <= 2 )
          goto LABEL_21;
        if ( spawner )
        {
          m_Items = (UnityEngine_Object_o **)&damageObjectlist->m_Items[2];
          return Spawner__Spawn_25900140(spawner, *m_Items, 0LL);
        }
      }
    }
    else if ( damageObjectlist )
    {
      max_length = damageObjectlist->max_length;
      if ( resist )
      {
        if ( max_length <= 3 )
          goto LABEL_21;
        if ( spawner )
        {
          m_Items = (UnityEngine_Object_o **)&damageObjectlist->m_Items[3];
          return Spawner__Spawn_25900140(spawner, *m_Items, 0LL);
        }
      }
      else
      {
        if ( !max_length )
          goto LABEL_21;
        if ( spawner )
        {
          m_Items = (UnityEngine_Object_o **)damageObjectlist->m_Items;
          return Spawner__Spawn_25900140(spawner, *m_Items, 0LL);
        }
      }
    }
LABEL_20:
    sub_B0D97C(spawner);
  }
  if ( !damageObjectlist )
    goto LABEL_20;
  if ( damageObjectlist->max_length <= 1 )
  {
LABEL_21:
    v11 = sub_B0D9A8(spawner);
    sub_B0D948(v11, 0LL);
  }
  if ( !spawner )
    goto LABEL_20;
  m_Items = (UnityEngine_Object_o **)&damageObjectlist->m_Items[1];
  return Spawner__Spawn_25900140(spawner, *m_Items, 0LL);
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__getEffectInstantiate(
        BattleEffectControl_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *EffectList; // x8
  int32_t max_length; // w9
  __int64 v6; // x0

  EffectList = this->fields.EffectList;
  if ( !EffectList )
    goto LABEL_8;
  max_length = EffectList->max_length;
  if ( max_length > id )
  {
    if ( max_length <= (unsigned int)id )
    {
      v6 = sub_B0D9A8(this);
      sub_B0D948(v6, 0LL);
    }
    this = (BattleEffectControl_o *)this->fields.spawner;
    if ( this )
      return Spawner__Spawn_25900140((Spawner_o *)this, (UnityEngine_Object_o *)EffectList->m_Items[id], 0LL);
LABEL_8:
    sub_B0D97C(this);
  }
  return 0LL;
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__getListEffect(
        BattleEffectControl_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *EffectList; // x8
  int32_t max_length; // w9
  __int64 v6; // x0

  EffectList = this->fields.EffectList;
  if ( !EffectList )
    sub_B0D97C(this);
  max_length = EffectList->max_length;
  if ( max_length <= id )
    return 0LL;
  if ( max_length <= (unsigned int)id )
  {
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
  }
  return EffectList->m_Items[id];
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleEffectControl__getTreasureObject(
        BattleEffectControl_o *this,
        int32_t rarity,
        UnityEngine_Transform_o *rootTr,
        DropInfo_o *dropInfo,
        const MethodInfo *method)
{
  BattleEffectControl_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t effectType; // w1
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x2
  UnityEngine_Transform_o *v15; // x0
  __int64 *v16; // x8

  v8 = this;
  if ( (byte_42134E1 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18317/*"effect/obj_treasure_p"*/, *(_QWORD *)&rarity);
    sub_B0D8A4(&StringLiteral_22855/*"treasure"*/, v9);
    this = (BattleEffectControl_o *)sub_B0D8A4(&StringLiteral_18318/*"effect/obj_treasure_pp"*/, v10);
    byte_42134E1 = 1;
  }
  if ( !dropInfo )
    goto LABEL_16;
  effectType = dropInfo->fields.effectType;
  if ( rarity < 1000 )
  {
    this = (BattleEffectControl_o *)BattleEffectControl__CreateDropTreasureEffectObject(
                                      v8,
                                      effectType,
                                      rootTr,
                                      rarity,
                                      method);
    if ( this )
    {
      v12 = (UnityEngine_GameObject_o *)this;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_22855/*"treasure"*/, 0, 0LL);
      if ( (unsigned int)(rarity - 3) > 2 )
      {
        if ( (unsigned int)(rarity - 6) > 2 )
          return v12;
        goto LABEL_13;
      }
      goto LABEL_12;
    }
LABEL_16:
    sub_B0D97C(this);
  }
  this = (BattleEffectControl_o *)BattleEffectControl__CreateDropItemEffectObject(
                                    v8,
                                    effectType,
                                    rootTr,
                                    (const MethodInfo *)dropInfo);
  if ( !this )
    goto LABEL_16;
  v12 = (UnityEngine_GameObject_o *)this;
  v15 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(v15, (System_String_o *)StringLiteral_22855/*"treasure"*/, 0, 0LL);
  if ( rarity == 1002 )
  {
LABEL_13:
    v16 = &StringLiteral_18318/*"effect/obj_treasure_pp"*/;
    goto LABEL_14;
  }
  if ( rarity == 1001 )
  {
LABEL_12:
    v16 = &StringLiteral_18317/*"effect/obj_treasure_p"*/;
LABEL_14:
    BaseMonoBehaviour__createObject_18711800((BaseMonoBehaviour_o *)v8, (System_String_o *)*v16, NodeFromName, 0LL, 0LL);
  }
  return v12;
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__get_DoNotActByCommandSealedObject(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields._DoNotActByCommandSealedObject_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__get_specialInvincibleObject(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields._specialInvincibleObject_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__getavoidanceObject(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields.avoidanceObject;
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__getinvincibleObject(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields.invincibleObject;
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__setBuffIconObject(
        BattleEffectControl_o *this,
        BattleBuffData_ShowBuffData_array *bufflist,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x21
  UnityEngine_GameObject_o *Object; // x0
  __int64 v8; // x8
  unsigned __int64 v9; // x24
  float v10; // s8
  BattleBuffData_ShowBuffData_o *v11; // x22
  UnityEngine_GameObject_o *buffIconObject; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v14; // x23
  __int64 v16; // x0
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42134E0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, bufflist);
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, v5);
    byte_42134E0 = 1;
  }
  if ( !bufflist || !*(_QWORD *)&bufflist->max_length )
    return 0LL;
  v6 = (UnityEngine_GameObject_o *)sub_B0D974(UnityEngine_GameObject_TypeInfo, bufflist, method);
  UnityEngine_GameObject___ctor_40785228(v6, 0LL);
  v8 = *(_QWORD *)&bufflist->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0LL;
    v10 = 0.0;
    do
    {
      if ( v9 >= (unsigned int)v8 )
      {
        v16 = sub_B0D9A8(Object);
        sub_B0D948(v16, 0LL);
      }
      if ( !v6 )
        goto LABEL_16;
      v11 = bufflist->m_Items[v9];
      buffIconObject = this->fields.buffIconObject;
      transform = UnityEngine_GameObject__get_transform(v6, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, buffIconObject, transform, 0LL, 0LL);
      if ( !Object
        || (v14 = Object,
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    Object,
                                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___)) == 0LL)
        || (BattleServantBuffIconComponent__setIcon_20694856((BattleServantBuffIconComponent_o *)Object, v11, 0LL),
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0LL)) == 0LL) )
      {
LABEL_16:
        sub_B0D97C(Object);
      }
      v17.fields.y = 0.0;
      v17.fields.z = 0.0;
      v17.fields.x = v10;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v17, 0LL);
      LODWORD(v8) = bufflist->max_length;
      ++v9;
      v10 = v10 + -44.0;
    }
    while ( (__int64)v9 < (int)v8 );
  }
  return v6;
}


void __fastcall BattleEffectControl__set_DoNotActByCommandSealedObject(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._DoNotActByCommandSealedObject_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._DoNotActByCommandSealedObject_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleEffectControl__set_specialInvincibleObject(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._specialInvincibleObject_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._specialInvincibleObject_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}