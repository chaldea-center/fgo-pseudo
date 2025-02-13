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
  Il2CppObject *Object_object__49880776; // x1

  if ( (byte_4BDEB9A & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&StringLiteral_22595/*"obj_treasure_item_bound"*/);
    sub_1C21E38(&StringLiteral_19229/*"effect/obj_treasure_item01"*/);
    sub_1C21E38(&StringLiteral_22596/*"obj_treasure_item_high_position"*/);
    sub_1C21E38(&StringLiteral_3259/*"Battle/DropEffect/2"*/);
    sub_1C21E38(&StringLiteral_3258/*"Battle/DropEffect/1"*/);
    byte_4BDEB9A = 1;
  }
  if ( dropEffectType == 2 )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3259/*"Battle/DropEffect/2"*/, 0LL);
    if ( AssetStorage )
    {
      v9 = &StringLiteral_22596/*"obj_treasure_item_high_position"*/;
      goto LABEL_13;
    }
LABEL_15:
    sub_1C22094(AssetStorage, v8);
  }
  if ( dropEffectType == 1 )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3258/*"Battle/DropEffect/1"*/, 0LL);
    if ( AssetStorage )
    {
      v9 = &StringLiteral_22595/*"obj_treasure_item_bound"*/;
LABEL_13:
      Object_object__49880776 = AssetData__GetObject_object__49880776(
                                  AssetStorage,
                                  (System_String_o *)*v9,
                                  (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
      return BaseMonoBehaviour__createObject(
               (BaseMonoBehaviour_o *)this,
               (UnityEngine_GameObject_o *)Object_object__49880776,
               rootTr,
               0LL,
               0LL);
    }
    goto LABEL_15;
  }
  return BaseMonoBehaviour__createObject_39485728(
           (BaseMonoBehaviour_o *)this,
           (System_String_o *)StringLiteral_19229/*"effect/obj_treasure_item01"*/,
           rootTr,
           0LL,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  Il2CppObject *Object_object__49880776; // x0
  int v20; // [xsp+8h] [xbp-38h] BYREF
  int v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDEB9B & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_19232/*"effect/obj_treasure{0:D2}"*/);
    sub_1C21E38(&StringLiteral_3258/*"Battle/DropEffect/1"*/);
    sub_1C21E38(&StringLiteral_22597/*"obj_treasure{0:D2}_bound"*/);
    byte_4BDEB9B = 1;
  }
  if ( dropEffectType == 1 )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3258/*"Battle/DropEffect/1"*/, 0LL);
    v20 = rarity % 3 + 1;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v13, v14, v15);
    v17 = System_String__Format((System_String_o *)StringLiteral_22597/*"obj_treasure{0:D2}_bound"*/, v16, 0LL);
    if ( !AssetStorage )
      sub_1C22094(v17, v18);
    Object_object__49880776 = AssetData__GetObject_object__49880776(
                                AssetStorage,
                                v17,
                                (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
    return BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             (UnityEngine_GameObject_o *)Object_object__49880776,
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
    v21 = rarity % 3 + 1;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, rootTr, *(_QWORD *)&rarity, method);
    v10 = System_String__Format((System_String_o *)StringLiteral_19232/*"effect/obj_treasure{0:D2}"*/, v9, 0LL);
    return BaseMonoBehaviour__createObject_39485728((BaseMonoBehaviour_o *)this, v10, rootTr, 0LL, 0LL);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._AvoidResetDamageObject_k__BackingField = obj;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._AvoidResetDamageObject_k__BackingField,
    (int64_t)obj,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._AvoidResetDamageTextObject_k__BackingField = obj;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._AvoidResetDamageTextObject_k__BackingField,
    (int64_t)obj,
    (int64_t)method,
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

  return BattleEffectControl__SetBuffIconObject_44021848(this, bufflist, this->fields.buffIconObject, v3);
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__SetBuffIconObject_44021848(
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
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDEB98 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    byte_4BDEB98 = 1;
  }
  if ( !bufflist || !*(_QWORD *)&bufflist->max_length )
    return 0LL;
  v7 = (UnityEngine_GameObject_o *)sub_1C22084(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor_70851360(v7, 0LL);
  v10 = *(_QWORD *)&bufflist->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    v12 = 0.0;
    do
    {
      if ( v11 >= (unsigned int)v10 )
        sub_1C2209C(Object, v9);
      if ( !v7
        || (v13 = bufflist->m_Items[v11],
            transform = UnityEngine_GameObject__get_transform(v7, 0LL),
            (Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, buffIcon, transform, 0LL, 0LL)) == 0LL)
        || (v15 = Object,
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    Object,
                                                    (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___)) == 0LL)
        || (BattleServantBuffIconComponent__setIcon_45338812((BattleServantBuffIconComponent_o *)Object, v13, 0LL),
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v15, 0LL)) == 0LL) )
      {
        sub_1C22094(Object, v9);
      }
      v17.fields.y = 0.0;
      v17.fields.z = 0.0;
      v17.fields.x = v12;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v17, 0LL);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._DoNotActByCommandSealedObject_k__BackingField = obj;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._DoNotActByCommandSealedObject_k__BackingField,
    (int64_t)obj,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._specialInvincibleObject_k__BackingField = obj;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._specialInvincibleObject_k__BackingField,
    (int64_t)obj,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleEffectControl__Start(BattleEffectControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct Spawner_o **p_spawner; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
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

  if ( (byte_4BDEB97 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_Spawner__get_Instance__);
    byte_4BDEB97 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  this->fields.spawner = (struct Spawner_o *)Instance;
  p_spawner = &this->fields.spawner;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.spawner, (int64_t)Instance, v5, v6, v7, v8, v9, v10);
  spawner = (UnityEngine_Object_o *)this->fields.spawner;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = (Spawner_o *)UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) == 0 )
    return;
  EffectList = this->fields.EffectList;
  if ( !EffectList )
    goto LABEL_57;
  if ( EffectList->max_length <= 2 )
    goto LABEL_59;
  v12 = this->fields.spawner;
  if ( !v12 )
    goto LABEL_57;
  Spawner__Precache_39210120(v12, (UnityEngine_Object_o *)EffectList->m_Items[2], 5, 0LL);
  v15 = this->fields.EffectList;
  if ( !v15 )
    goto LABEL_57;
  if ( v15->max_length <= 3 )
    goto LABEL_59;
  v12 = this->fields.spawner;
  if ( !v12 )
    goto LABEL_57;
  Spawner__Precache_39210120(v12, (UnityEngine_Object_o *)v15->m_Items[3], 5, 0LL);
  v16 = this->fields.EffectList;
  if ( !v16 )
    goto LABEL_57;
  if ( v16->max_length <= 4 )
    goto LABEL_59;
  v12 = this->fields.spawner;
  if ( !v12 )
    goto LABEL_57;
  Spawner__Precache_39210120(v12, (UnityEngine_Object_o *)v16->m_Items[4], 50, 0LL);
  v17 = this->fields.EffectList;
  if ( !v17 )
    goto LABEL_57;
  if ( v17->max_length <= 6 )
    goto LABEL_59;
  v12 = this->fields.spawner;
  if ( !v12 )
    goto LABEL_57;
  Spawner__Precache_39210120(v12, (UnityEngine_Object_o *)v17->m_Items[6], 3, 0LL);
  v18 = this->fields.EffectList;
  if ( !v18 )
    goto LABEL_57;
  if ( v18->max_length <= 7 )
    goto LABEL_59;
  v12 = this->fields.spawner;
  if ( !v12 )
    goto LABEL_57;
  Spawner__Precache_39210120(v12, (UnityEngine_Object_o *)v18->m_Items[7], 5, 0LL);
  v19 = this->fields.EffectList;
  if ( !v19 )
    goto LABEL_57;
  if ( v19->max_length <= 9 )
    goto LABEL_59;
  v12 = this->fields.spawner;
  if ( !v12 )
    goto LABEL_57;
  Spawner__Precache_39210120(v12, (UnityEngine_Object_o *)v19->m_Items[9], 50, 0LL);
  damageObjectlist = this->fields.damageObjectlist;
  if ( !damageObjectlist )
    goto LABEL_57;
  if ( !damageObjectlist->max_length )
    goto LABEL_59;
  v12 = this->fields.spawner;
  if ( !v12 )
    goto LABEL_57;
  Spawner__Precache_39210120(v12, (UnityEngine_Object_o *)damageObjectlist->m_Items[0], 5, 0LL);
  v21 = this->fields.damageObjectlist;
  if ( !v21 )
    goto LABEL_57;
  if ( v21->max_length <= 1 )
    goto LABEL_59;
  v12 = this->fields.spawner;
  if ( !v12 )
    goto LABEL_57;
  Spawner__Precache_39210120(v12, (UnityEngine_Object_o *)v21->m_Items[1], 5, 0LL);
  v22 = this->fields.damageObjectlist;
  if ( !v22 )
    goto LABEL_57;
  if ( v22->max_length <= 2 )
    goto LABEL_59;
  v12 = this->fields.spawner;
  if ( !v12 )
    goto LABEL_57;
  Spawner__Precache_39210120(v12, (UnityEngine_Object_o *)v22->m_Items[2], 5, 0LL);
  v23 = this->fields.damageObjectlist;
  if ( !v23 )
    goto LABEL_57;
  if ( v23->max_length <= 3 )
LABEL_59:
    sub_1C2209C(v12, v13);
  v12 = this->fields.spawner;
  if ( !v12 )
    goto LABEL_57;
  Spawner__Precache_39210120(v12, (UnityEngine_Object_o *)v23->m_Items[3], 5, 0LL);
  buffTextObjectlist = this->fields.buffTextObjectlist;
  if ( !buffTextObjectlist )
    goto LABEL_57;
  v25 = 0LL;
  while ( 1 )
  {
    max_length = buffTextObjectlist->max_length;
    if ( (__int64)v25 >= (int)max_length )
      break;
    if ( v25 >= max_length )
      goto LABEL_59;
    v27 = (UnityEngine_Object_o *)buffTextObjectlist->m_Items[v25];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = (Spawner_o *)UnityEngine_Object__op_Equality(v27, 0LL, 0LL);
    if ( ((unsigned __int8)v12 & 1) == 0 )
    {
      v12 = *p_spawner;
      if ( !*p_spawner )
        goto LABEL_57;
      Spawner__Precache_39210120(v12, v27, 5, 0LL);
    }
    buffTextObjectlist = this->fields.buffTextObjectlist;
    ++v25;
    if ( !buffTextObjectlist )
      goto LABEL_57;
  }
  buffTextClassIconObjectList = this->fields.buffTextClassIconObjectList;
  if ( !buffTextClassIconObjectList )
LABEL_57:
    sub_1C22094(v12, v13);
  v29 = 0LL;
  while ( 1 )
  {
    v30 = buffTextClassIconObjectList->max_length;
    if ( (__int64)v29 >= (int)v30 )
      break;
    if ( v29 >= v30 )
      goto LABEL_59;
    v31 = (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[v29];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = (Spawner_o *)UnityEngine_Object__op_Equality(v31, 0LL, 0LL);
    if ( ((unsigned __int8)v12 & 1) == 0 )
    {
      v12 = *p_spawner;
      if ( !*p_spawner )
        goto LABEL_57;
      Spawner__Precache_39210120(v12, v31, 5, 0LL);
    }
    buffTextClassIconObjectList = this->fields.buffTextClassIconObjectList;
    ++v29;
    if ( !buffTextClassIconObjectList )
      goto LABEL_57;
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
    sub_1C22094(0LL, obj);
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

  buffTextClassIconObjectList = this->fields.buffTextClassIconObjectList;
  if ( buffTextClassIconObjectList )
  {
    max_length = buffTextClassIconObjectList->max_length;
    v5 = (color - 1) & ~((color - 1) >> 31);
    if ( (int)v5 < max_length )
    {
      if ( v5 >= max_length )
        sub_1C2209C(this, color);
      spawner = this->fields.spawner;
      if ( spawner )
      {
        buffTextClassIconObjectList = (struct UnityEngine_GameObject_array *)((char *)buffTextClassIconObjectList
                                                                            + 8 * v5);
        return Spawner__Spawn_39211772(spawner, (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[0], 0LL);
      }
LABEL_10:
      sub_1C22094(spawner, color);
    }
    if ( max_length >= 1 )
    {
      spawner = this->fields.spawner;
      if ( spawner )
        return Spawner__Spawn_39211772(spawner, (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[0], 0LL);
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

  buffTextObjectlist = this->fields.buffTextObjectlist;
  if ( buffTextObjectlist )
  {
    max_length = buffTextObjectlist->max_length;
    v5 = (color - 1) & ~((color - 1) >> 31);
    if ( (int)v5 < max_length )
    {
      if ( v5 >= max_length )
        sub_1C2209C(this, color);
      spawner = this->fields.spawner;
      if ( spawner )
      {
        buffTextObjectlist = (struct UnityEngine_GameObject_array *)((char *)buffTextObjectlist + 8 * v5);
        return Spawner__Spawn_39211772(spawner, (UnityEngine_Object_o *)buffTextObjectlist->m_Items[0], 0LL);
      }
LABEL_10:
      sub_1C22094(spawner, color);
    }
    if ( max_length >= 1 )
    {
      spawner = this->fields.spawner;
      if ( spawner )
        return Spawner__Spawn_39211772(spawner, (UnityEngine_Object_o *)buffTextObjectlist->m_Items[0], 0LL);
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
  struct UnityEngine_GameObject_array *damageObjectlist; // x8
  unsigned int max_length; // w9
  UnityEngine_Object_o **m_Items; // x8

  damageObjectlist = this->fields.damageObjectlist;
  if ( !damageObjectlist )
    goto LABEL_18;
  this = (BattleEffectControl_o *)this->fields.spawner;
  max_length = damageObjectlist->max_length;
  if ( !critical )
  {
    if ( week )
    {
      if ( max_length > 2 )
      {
        if ( this )
        {
          m_Items = (UnityEngine_Object_o **)&damageObjectlist->m_Items[2];
          return Spawner__Spawn_39211772((Spawner_o *)this, *m_Items, 0LL);
        }
LABEL_18:
        sub_1C22094(this, critical);
      }
    }
    else if ( resist )
    {
      if ( max_length > 3 )
      {
        if ( this )
        {
          m_Items = (UnityEngine_Object_o **)&damageObjectlist->m_Items[3];
          return Spawner__Spawn_39211772((Spawner_o *)this, *m_Items, 0LL);
        }
        goto LABEL_18;
      }
    }
    else if ( max_length )
    {
      if ( this )
      {
        m_Items = (UnityEngine_Object_o **)damageObjectlist->m_Items;
        return Spawner__Spawn_39211772((Spawner_o *)this, *m_Items, 0LL);
      }
      goto LABEL_18;
    }
LABEL_19:
    sub_1C2209C(this, critical);
  }
  if ( max_length <= 1 )
    goto LABEL_19;
  if ( !this )
    goto LABEL_18;
  m_Items = (UnityEngine_Object_o **)&damageObjectlist->m_Items[1];
  return Spawner__Spawn_39211772((Spawner_o *)this, *m_Items, 0LL);
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__getEffectInstantiate(
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
      sub_1C2209C(this, id);
    this = (BattleEffectControl_o *)this->fields.spawner;
    if ( this )
      return Spawner__Spawn_39211772((Spawner_o *)this, (UnityEngine_Object_o *)EffectList->m_Items[id], 0LL);
LABEL_8:
    sub_1C22094(this, id);
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

  EffectList = this->fields.EffectList;
  if ( !EffectList )
    sub_1C22094(this, id);
  max_length = EffectList->max_length;
  if ( max_length <= id )
    return 0LL;
  if ( max_length <= (unsigned int)id )
    sub_1C2209C(this, id);
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
  BattleEffectControl_o *v10; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x2
  UnityEngine_Transform_o *v13; // x0
  __int64 *v14; // x8

  v8 = this;
  if ( (byte_4BDEB99 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_19230/*"effect/obj_treasure_p"*/);
    sub_1C21E38(&StringLiteral_24485/*"treasure"*/);
    this = (BattleEffectControl_o *)sub_1C21E38(&StringLiteral_19231/*"effect/obj_treasure_pp"*/);
    byte_4BDEB99 = 1;
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
      v10 = this;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_24485/*"treasure"*/, 0, 0LL);
      if ( (unsigned int)(rarity - 3) > 2 )
      {
        if ( (unsigned int)(rarity - 6) > 2 )
          return (UnityEngine_GameObject_o *)v10;
        goto LABEL_13;
      }
      goto LABEL_12;
    }
LABEL_16:
    sub_1C22094(this, *(_QWORD *)&rarity);
  }
  this = (BattleEffectControl_o *)BattleEffectControl__CreateDropItemEffectObject(
                                    v8,
                                    effectType,
                                    rootTr,
                                    (const MethodInfo *)dropInfo);
  if ( !this )
    goto LABEL_16;
  v10 = this;
  v13 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(v13, (System_String_o *)StringLiteral_24485/*"treasure"*/, 0, 0LL);
  if ( rarity == 1002 )
  {
LABEL_13:
    v14 = &StringLiteral_19231/*"effect/obj_treasure_pp"*/;
    goto LABEL_14;
  }
  if ( rarity == 1001 )
  {
LABEL_12:
    v14 = &StringLiteral_19230/*"effect/obj_treasure_p"*/;
LABEL_14:
    BaseMonoBehaviour__createObject_39485728((BaseMonoBehaviour_o *)v8, (System_String_o *)*v14, NodeFromName, 0LL, 0LL);
  }
  return (UnityEngine_GameObject_o *)v10;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._AvoidResetDamageObject_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._AvoidResetDamageObject_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._AvoidResetDamageTextObject_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._AvoidResetDamageTextObject_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._DoNotActByCommandSealedObject_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._DoNotActByCommandSealedObject_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._specialInvincibleObject_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._specialInvincibleObject_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}