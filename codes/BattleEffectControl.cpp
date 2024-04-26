void __fastcall BattleEffectControl___ctor(BattleEffectControl_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__CreateDropItemEffectObject(
        BattleEffectControl_o *this,
        int32_t dropEffectType,
        UnityEngine_Transform_o *rootTr,
        const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  __int64 v8; // x1
  __int64 *v9; // x8
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x1

  if ( (byte_43505B3 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&StringLiteral_21522/*"obj_treasure_item_bound"*/);
    sub_B70694(&StringLiteral_18536/*"effect/obj_treasure_item01"*/);
    sub_B70694(&StringLiteral_21523/*"obj_treasure_item_high_position"*/);
    sub_B70694(&StringLiteral_2819/*"Battle/DropEffect/2"*/);
    sub_B70694(&StringLiteral_2818/*"Battle/DropEffect/1"*/);
    byte_43505B3 = 1;
  }
  if ( dropEffectType == 2 )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2819/*"Battle/DropEffect/2"*/, 0LL);
    if ( AssetStorage )
    {
      v9 = &StringLiteral_21523/*"obj_treasure_item_high_position"*/;
      goto LABEL_15;
    }
LABEL_17:
    sub_B7076C(AssetStorage, v8);
  }
  if ( dropEffectType == 1 )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2818/*"Battle/DropEffect/1"*/, 0LL);
    if ( AssetStorage )
    {
      v9 = &StringLiteral_21522/*"obj_treasure_item_bound"*/;
LABEL_15:
      Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                     AssetStorage,
                                                                     (System_String_o *)*v9,
                                                                     (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
      return BaseMonoBehaviour__createObject(
               (BaseMonoBehaviour_o *)this,
               Object_WarBoardWaitTimeSetting,
               rootTr,
               0LL,
               0LL);
    }
    goto LABEL_17;
  }
  return BaseMonoBehaviour__createObject_20856580(
           (BaseMonoBehaviour_o *)this,
           (System_String_o *)StringLiteral_18536/*"effect/obj_treasure_item01"*/,
           rootTr,
           0LL,
           0LL);
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__CreateDropTreasureEffectObject(
        BattleEffectControl_o *this,
        int32_t dropEffectType,
        UnityEngine_Transform_o *rootTr,
        int32_t rarity,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  AssetData_o *AssetStorage; // x22
  __int64 v13; // x2
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  int v18; // [xsp+8h] [xbp-28h] BYREF
  int v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_43505B4 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_18539/*"effect/obj_treasure{0:D2}"*/);
    sub_B70694(&StringLiteral_2818/*"Battle/DropEffect/1"*/);
    sub_B70694(&StringLiteral_21524/*"obj_treasure{0:D2}_bound"*/);
    byte_43505B4 = 1;
  }
  if ( dropEffectType == 1 )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2818/*"Battle/DropEffect/1"*/, 0LL);
    v18 = rarity % 3 + 1;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v13);
    v15 = System_String__Format((System_String_o *)StringLiteral_21524/*"obj_treasure{0:D2}_bound"*/, v14, 0LL);
    if ( !AssetStorage )
      sub_B7076C(v15, v16);
    Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   v15,
                                                                   (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
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
    v19 = rarity % 3 + 1;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, rootTr);
    v10 = System_String__Format((System_String_o *)StringLiteral_18539/*"effect/obj_treasure{0:D2}"*/, v9, 0LL);
    return BaseMonoBehaviour__createObject_20856580((BaseMonoBehaviour_o *)this, v10, rootTr, 0LL, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__GetAvoidanceTextObject(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields.avoidanceTextObject;
}


void __fastcall BattleEffectControl__SetAvoidResetDamageObject(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._AvoidResetDamageObject_k__BackingField = obj;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._AvoidResetDamageObject_k__BackingField,
    (System_Int32_array **)obj,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleEffectControl__SetAvoidResetDamageTextObject(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._AvoidResetDamageTextObject_k__BackingField = obj;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._AvoidResetDamageTextObject_k__BackingField,
    (System_Int32_array **)obj,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__SetBuffIconObject(
        BattleEffectControl_o *this,
        BattleBuffData_ShowBuffData_array *bufflist,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return BattleEffectControl__SetBuffIconObject_22687564(this, bufflist, this->fields.buffIconObject, v3);
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__SetBuffIconObject_22687564(
        BattleEffectControl_o *this,
        BattleBuffData_ShowBuffData_array *bufflist,
        UnityEngine_GameObject_o *buffIcon,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v7; // x22
  UnityEngine_GameObject_o *Object; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  unsigned __int64 v11; // x25
  float v12; // s8
  BattleBuffData_ShowBuffData_o *v13; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v15; // x24
  __int64 v17; // x0
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_43505B1 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_B70694(&UnityEngine_GameObject_TypeInfo);
    byte_43505B1 = 1;
  }
  if ( !bufflist || !*(_QWORD *)&bufflist->max_length )
    return 0LL;
  v7 = (UnityEngine_GameObject_o *)sub_B70764(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor_41093044(v7, 0LL);
  v10 = *(_QWORD *)&bufflist->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    v12 = 0.0;
    do
    {
      if ( v11 >= (unsigned int)v10 )
      {
        v17 = sub_B70798(Object);
        sub_B70738(v17, 0LL);
      }
      if ( !v7
        || (v13 = bufflist->m_Items[v11],
            transform = UnityEngine_GameObject__get_transform(v7, 0LL),
            (Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, buffIcon, transform, 0LL, 0LL)) == 0LL)
        || (v15 = Object,
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    Object,
                                                    (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___)) == 0LL)
        || (BattleServantBuffIconComponent__setIcon_20629452((BattleServantBuffIconComponent_o *)Object, v13, 0LL),
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v15, 0LL)) == 0LL) )
      {
        sub_B7076C(Object, v9);
      }
      v18.fields.y = 0.0;
      v18.fields.z = 0.0;
      v18.fields.x = v12;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v18, 0LL);
      LODWORD(v10) = bufflist->max_length;
      ++v11;
      v12 = v12 + -44.0;
    }
    while ( (__int64)v11 < (int)v10 );
  }
  return v7;
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
  sub_B70630(
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
  sub_B70630(
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
  struct Spawner_o *Instance; // x0
  struct Spawner_o **p_spawner; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UnityEngine_Object_o *spawner; // x21
  Spawner_o *v12; // x0
  __int64 v13; // x1
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

  if ( (byte_43505B0 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_Spawner__get_Instance__);
    byte_43505B0 = 1;
  }
  Instance = (struct Spawner_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  this->fields.spawner = Instance;
  p_spawner = &this->fields.spawner;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.spawner,
    (System_Int32_array **)Instance,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  spawner = (UnityEngine_Object_o *)this->fields.spawner;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = (Spawner_o *)UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) == 0 )
    return;
  EffectList = this->fields.EffectList;
  if ( !EffectList )
    goto LABEL_60;
  if ( EffectList->max_length <= 2 )
    goto LABEL_62;
  v12 = this->fields.spawner;
  if ( !v12 )
    goto LABEL_60;
  Spawner__Precache_26326572(v12, (UnityEngine_Object_o *)EffectList->m_Items[2], 5, 0LL);
  v15 = this->fields.EffectList;
  if ( !v15 )
    goto LABEL_60;
  if ( v15->max_length <= 3 )
    goto LABEL_62;
  v12 = this->fields.spawner;
  if ( !v12 )
    goto LABEL_60;
  Spawner__Precache_26326572(v12, (UnityEngine_Object_o *)v15->m_Items[3], 5, 0LL);
  v16 = this->fields.EffectList;
  if ( !v16 )
    goto LABEL_60;
  if ( v16->max_length <= 4 )
    goto LABEL_62;
  v12 = this->fields.spawner;
  if ( !v12 )
    goto LABEL_60;
  Spawner__Precache_26326572(v12, (UnityEngine_Object_o *)v16->m_Items[4], 50, 0LL);
  v17 = this->fields.EffectList;
  if ( !v17 )
    goto LABEL_60;
  if ( v17->max_length <= 6 )
    goto LABEL_62;
  v12 = this->fields.spawner;
  if ( !v12 )
    goto LABEL_60;
  Spawner__Precache_26326572(v12, (UnityEngine_Object_o *)v17->m_Items[6], 3, 0LL);
  v18 = this->fields.EffectList;
  if ( !v18 )
    goto LABEL_60;
  if ( v18->max_length <= 7 )
    goto LABEL_62;
  v12 = this->fields.spawner;
  if ( !v12 )
    goto LABEL_60;
  Spawner__Precache_26326572(v12, (UnityEngine_Object_o *)v18->m_Items[7], 5, 0LL);
  v19 = this->fields.EffectList;
  if ( !v19 )
    goto LABEL_60;
  if ( v19->max_length <= 9 )
    goto LABEL_62;
  v12 = this->fields.spawner;
  if ( !v12 )
    goto LABEL_60;
  Spawner__Precache_26326572(v12, (UnityEngine_Object_o *)v19->m_Items[9], 50, 0LL);
  damageObjectlist = this->fields.damageObjectlist;
  if ( !damageObjectlist )
    goto LABEL_60;
  if ( !damageObjectlist->max_length )
    goto LABEL_62;
  v12 = this->fields.spawner;
  if ( !v12 )
    goto LABEL_60;
  Spawner__Precache_26326572(v12, (UnityEngine_Object_o *)damageObjectlist->m_Items[0], 5, 0LL);
  v21 = this->fields.damageObjectlist;
  if ( !v21 )
    goto LABEL_60;
  if ( v21->max_length <= 1 )
    goto LABEL_62;
  v12 = this->fields.spawner;
  if ( !v12 )
    goto LABEL_60;
  Spawner__Precache_26326572(v12, (UnityEngine_Object_o *)v21->m_Items[1], 5, 0LL);
  v22 = this->fields.damageObjectlist;
  if ( !v22 )
    goto LABEL_60;
  if ( v22->max_length <= 2 )
    goto LABEL_62;
  v12 = this->fields.spawner;
  if ( !v12 )
    goto LABEL_60;
  Spawner__Precache_26326572(v12, (UnityEngine_Object_o *)v22->m_Items[2], 5, 0LL);
  v23 = this->fields.damageObjectlist;
  if ( !v23 )
    goto LABEL_60;
  if ( v23->max_length <= 3 )
  {
LABEL_62:
    v32 = sub_B70798(v12);
    sub_B70738(v32, 0LL);
  }
  v12 = this->fields.spawner;
  if ( !v12 )
    goto LABEL_60;
  Spawner__Precache_26326572(v12, (UnityEngine_Object_o *)v23->m_Items[3], 5, 0LL);
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
    v12 = (Spawner_o *)UnityEngine_Object__op_Equality(v27, 0LL, 0LL);
    if ( ((unsigned __int8)v12 & 1) == 0 )
    {
      v12 = *p_spawner;
      if ( !*p_spawner )
        goto LABEL_60;
      Spawner__Precache_26326572(v12, v27, 5, 0LL);
    }
    buffTextObjectlist = this->fields.buffTextObjectlist;
    ++v25;
    if ( !buffTextObjectlist )
      goto LABEL_60;
  }
  buffTextClassIconObjectList = this->fields.buffTextClassIconObjectList;
  if ( !buffTextClassIconObjectList )
LABEL_60:
    sub_B7076C(v12, v13);
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
    v12 = (Spawner_o *)UnityEngine_Object__op_Equality(v31, 0LL, 0LL);
    if ( ((unsigned __int8)v12 & 1) == 0 )
    {
      v12 = *p_spawner;
      if ( !*p_spawner )
        goto LABEL_60;
      Spawner__Precache_26326572(v12, v31, 5, 0LL);
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
    sub_B7076C(0LL, obj);
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
        v8 = sub_B70798(this);
        sub_B70738(v8, 0LL);
      }
      spawner = this->fields.spawner;
      if ( spawner )
      {
        buffTextClassIconObjectList = (struct UnityEngine_GameObject_array *)((char *)buffTextClassIconObjectList
                                                                            + 8 * v5);
        return Spawner__Spawn_26326932(spawner, (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[0], 0LL);
      }
LABEL_10:
      sub_B7076C(spawner, color);
    }
    if ( max_length >= 1 )
    {
      spawner = this->fields.spawner;
      if ( spawner )
        return Spawner__Spawn_26326932(spawner, (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[0], 0LL);
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
        v8 = sub_B70798(this);
        sub_B70738(v8, 0LL);
      }
      spawner = this->fields.spawner;
      if ( spawner )
      {
        buffTextObjectlist = (struct UnityEngine_GameObject_array *)((char *)buffTextObjectlist + 8 * v5);
        return Spawner__Spawn_26326932(spawner, (UnityEngine_Object_o *)buffTextObjectlist->m_Items[0], 0LL);
      }
LABEL_10:
      sub_B7076C(spawner, color);
    }
    if ( max_length >= 1 )
    {
      spawner = this->fields.spawner;
      if ( spawner )
        return Spawner__Spawn_26326932(spawner, (UnityEngine_Object_o *)buffTextObjectlist->m_Items[0], 0LL);
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
          return Spawner__Spawn_26326932(spawner, *m_Items, 0LL);
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
          return Spawner__Spawn_26326932(spawner, *m_Items, 0LL);
        }
      }
      else
      {
        if ( !max_length )
          goto LABEL_21;
        if ( spawner )
        {
          m_Items = (UnityEngine_Object_o **)damageObjectlist->m_Items;
          return Spawner__Spawn_26326932(spawner, *m_Items, 0LL);
        }
      }
    }
LABEL_20:
    sub_B7076C(spawner, critical);
  }
  if ( !damageObjectlist )
    goto LABEL_20;
  if ( damageObjectlist->max_length <= 1 )
  {
LABEL_21:
    v11 = sub_B70798(spawner);
    sub_B70738(v11, 0LL);
  }
  if ( !spawner )
    goto LABEL_20;
  m_Items = (UnityEngine_Object_o **)&damageObjectlist->m_Items[1];
  return Spawner__Spawn_26326932(spawner, *m_Items, 0LL);
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
      v6 = sub_B70798(this);
      sub_B70738(v6, 0LL);
    }
    this = (BattleEffectControl_o *)this->fields.spawner;
    if ( this )
      return Spawner__Spawn_26326932((Spawner_o *)this, (UnityEngine_Object_o *)EffectList->m_Items[id], 0LL);
LABEL_8:
    sub_B7076C(this, id);
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
    sub_B7076C(this, id);
  max_length = EffectList->max_length;
  if ( max_length <= id )
    return 0LL;
  if ( max_length <= (unsigned int)id )
  {
    v6 = sub_B70798(this);
    sub_B70738(v6, 0LL);
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
  int32_t effectType; // w1
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x2
  UnityEngine_Transform_o *v13; // x0
  __int64 *v14; // x8

  v8 = this;
  if ( (byte_43505B2 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_18537/*"effect/obj_treasure_p"*/);
    sub_B70694(&StringLiteral_23156/*"treasure"*/);
    this = (BattleEffectControl_o *)sub_B70694(&StringLiteral_18538/*"effect/obj_treasure_pp"*/);
    byte_43505B2 = 1;
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
      v10 = (UnityEngine_GameObject_o *)this;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_23156/*"treasure"*/, 0, 0LL);
      if ( (unsigned int)(rarity - 3) > 2 )
      {
        if ( (unsigned int)(rarity - 6) > 2 )
          return v10;
        goto LABEL_13;
      }
      goto LABEL_12;
    }
LABEL_16:
    sub_B7076C(this, *(_QWORD *)&rarity);
  }
  this = (BattleEffectControl_o *)BattleEffectControl__CreateDropItemEffectObject(
                                    v8,
                                    effectType,
                                    rootTr,
                                    (const MethodInfo *)dropInfo);
  if ( !this )
    goto LABEL_16;
  v10 = (UnityEngine_GameObject_o *)this;
  v13 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(v13, (System_String_o *)StringLiteral_23156/*"treasure"*/, 0, 0LL);
  if ( rarity == 1002 )
  {
LABEL_13:
    v14 = &StringLiteral_18538/*"effect/obj_treasure_pp"*/;
    goto LABEL_14;
  }
  if ( rarity == 1001 )
  {
LABEL_12:
    v14 = &StringLiteral_18537/*"effect/obj_treasure_p"*/;
LABEL_14:
    BaseMonoBehaviour__createObject_20856580((BaseMonoBehaviour_o *)v8, (System_String_o *)*v14, NodeFromName, 0LL, 0LL);
  }
  return v10;
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__get_AvoidResetDamageObject(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields._AvoidResetDamageObject_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__get_AvoidResetDamageTextObject(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields._AvoidResetDamageTextObject_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__get_BuffIconPrefab(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields.buffIconObject;
}


UnityEngine_GameObject_array *__fastcall BattleEffectControl__get_BuffTextClassIconPrefabArray(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields.buffTextClassIconObjectList;
}


UnityEngine_GameObject_array *__fastcall BattleEffectControl__get_BuffTextPrefabArray(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields.buffTextObjectlist;
}


UnityEngine_GameObject_array *__fastcall BattleEffectControl__get_DamagePrefabArray(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields.damageObjectlist;
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__get_DoNotActByCommandSealedObject(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields._DoNotActByCommandSealedObject_k__BackingField;
}


UnityEngine_GameObject_array *__fastcall BattleEffectControl__get_EffectPrefabArray(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields.EffectList;
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


void __fastcall BattleEffectControl__set_AvoidResetDamageObject(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._AvoidResetDamageObject_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._AvoidResetDamageObject_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleEffectControl__set_AvoidResetDamageTextObject(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._AvoidResetDamageTextObject_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._AvoidResetDamageTextObject_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  sub_B70630(
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._specialInvincibleObject_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}