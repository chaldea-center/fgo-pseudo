void BattleEffectControl___ctor(BattleEffectControl_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


UnityEngine_GameObject_o *BattleEffectControl__CreateDropItemEffectObject(
        BattleEffectControl_o *this,
        int32_t dropEffectType,
        UnityEngine_Transform_o *rootTr,
        const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  __int64 v8; // x1
  __int64 *v9; // x8
  Il2CppObject *Object_object__51051712; // x1

  if ( (byte_4C29CC8 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&StringLiteral_22328/*"obj_treasure_item_bound"*/);
    sub_1C2D490(&StringLiteral_18899/*"effect/obj_treasure_item01"*/);
    sub_1C2D490(&StringLiteral_22329/*"obj_treasure_item_high_position"*/);
    sub_1C2D490(&StringLiteral_3087/*"Battle/DropEffect/2"*/);
    sub_1C2D490(&StringLiteral_3086/*"Battle/DropEffect/1"*/);
    byte_4C29CC8 = 1;
  }
  if ( dropEffectType == 2 )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3087/*"Battle/DropEffect/2"*/, 0);
    if ( AssetStorage )
    {
      v9 = &StringLiteral_22329/*"obj_treasure_item_high_position"*/;
      goto LABEL_13;
    }
LABEL_15:
    sub_1C2D6EC(AssetStorage, v8);
  }
  if ( dropEffectType == 1 )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3086/*"Battle/DropEffect/1"*/, 0);
    if ( AssetStorage )
    {
      v9 = &StringLiteral_22328/*"obj_treasure_item_bound"*/;
LABEL_13:
      Object_object__51051712 = AssetData__GetObject_object__51051712(
                                  AssetStorage,
                                  (System_String_o *)*v9,
                                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
      return BaseMonoBehaviour__createObject(
               (BaseMonoBehaviour_o *)this,
               (UnityEngine_GameObject_o *)Object_object__51051712,
               rootTr,
               0,
               0);
    }
    goto LABEL_15;
  }
  return BaseMonoBehaviour__createObject_40963840(
           (BaseMonoBehaviour_o *)this,
           (System_String_o *)StringLiteral_18899/*"effect/obj_treasure_item01"*/,
           rootTr,
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
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  Il2CppObject *Object_object__51051712; // x0
  int v20; // [xsp+8h] [xbp-38h] BYREF
  int v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C29CC9 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_18902/*"effect/obj_treasure{0:D2}"*/);
    sub_1C2D490(&StringLiteral_3086/*"Battle/DropEffect/1"*/);
    sub_1C2D490(&StringLiteral_22330/*"obj_treasure{0:D2}_bound"*/);
    byte_4C29CC9 = 1;
  }
  if ( dropEffectType == 1 )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3086/*"Battle/DropEffect/1"*/, 0);
    v20 = rarity % 3 + 1;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v13, v14, v15);
    v17 = System_String__Format((System_String_o *)StringLiteral_22330/*"obj_treasure{0:D2}_bound"*/, v16, 0);
    if ( !AssetStorage )
      sub_1C2D6EC(v17, v18);
    Object_object__51051712 = AssetData__GetObject_object__51051712(
                                AssetStorage,
                                v17,
                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    return BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             (UnityEngine_GameObject_o *)Object_object__51051712,
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
    v21 = rarity % 3 + 1;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, rootTr, *(_QWORD *)&rarity, method);
    v10 = System_String__Format((System_String_o *)StringLiteral_18902/*"effect/obj_treasure{0:D2}"*/, v9, 0);
    return BaseMonoBehaviour__createObject_40963840((BaseMonoBehaviour_o *)this, v10, rootTr, 0, 0);
  }
}


UnityEngine_GameObject_o *BattleEffectControl__GetAvoidanceTextObject(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields.avoidanceTextObject;
}


void BattleEffectControl__SetAvoidResetDamageObject(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._AvoidResetDamageObject_k__BackingField = obj;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._AvoidResetDamageObject_k__BackingField,
    (int32_t)obj,
    (int32_t)method,
    v3);
}


void BattleEffectControl__SetAvoidResetDamageTextObject(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._AvoidResetDamageTextObject_k__BackingField = obj;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._AvoidResetDamageTextObject_k__BackingField,
    (int32_t)obj,
    (int32_t)method,
    v3);
}


UnityEngine_GameObject_o *BattleEffectControl__SetBuffIconObject(
        BattleEffectControl_o *this,
        BattleBuffData_ShowBuffData_array *bufflist,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return BattleEffectControl__SetBuffIconObject_45754388(this, bufflist, this->fields.buffIconObject, v3);
}


UnityEngine_GameObject_o *BattleEffectControl__SetBuffIconObject_45754388(
        BattleEffectControl_o *this,
        BattleBuffData_ShowBuffData_array *bufflist,
        UnityEngine_GameObject_o *buffIcon,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v7; // x22
  UnityEngine_GameObject_o *Object; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v12; // x25
  float v13; // s8
  BattleBuffData_ShowBuffData_o *v14; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v16; // x24
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C29CC6 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_1C2D490(&UnityEngine_GameObject_TypeInfo);
    byte_4C29CC6 = 1;
  }
  if ( !bufflist || !bufflist->max_length )
    return 0;
  v7 = (UnityEngine_GameObject_o *)sub_1C2D6DC(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor_71145868(v7, 0);
  max_length = bufflist->max_length;
  if ( (int)max_length >= 1 )
  {
    v12 = 0;
    v13 = 0.0;
    do
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1C2D6F4(Object, v9, v10);
      if ( !v7
        || (v14 = bufflist->m_Items[v12],
            transform = UnityEngine_GameObject__get_transform(v7, 0),
            (Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, buffIcon, transform, 0, 0)) == 0)
        || (v16 = Object,
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    Object,
                                                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___)) == 0)
        || (BattleServantBuffIconComponent__setIcon_47194252((BattleServantBuffIconComponent_o *)Object, v14, 0),
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0)) == 0) )
      {
        sub_1C2D6EC(Object, v9);
      }
      v18.fields.y = 0.0;
      v18.fields.z = 0.0;
      v18.fields.x = v13;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v18, 0);
      LODWORD(max_length) = bufflist->max_length;
      ++v12;
      v13 = v13 + -44.0;
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
  const MethodInfo *v3; // x3

  this->fields._DoNotActByCommandSealedObject_k__BackingField = obj;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._DoNotActByCommandSealedObject_k__BackingField,
    (int32_t)obj,
    (int32_t)method,
    v3);
}


void BattleEffectControl__SetSpecialInvincibleObject(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._specialInvincibleObject_k__BackingField = obj;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._specialInvincibleObject_k__BackingField,
    (int32_t)obj,
    (int32_t)method,
    v3);
}


void BattleEffectControl__Start(BattleEffectControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct Spawner_o **p_spawner; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Object_o *spawner; // x21
  Spawner_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct UnityEngine_GameObject_array *EffectList; // x8
  struct UnityEngine_GameObject_array *v12; // x8
  struct UnityEngine_GameObject_array *v13; // x8
  struct UnityEngine_GameObject_array *v14; // x8
  struct UnityEngine_GameObject_array *v15; // x8
  struct UnityEngine_GameObject_array *v16; // x8
  struct UnityEngine_GameObject_array *damageObjectlist; // x8
  struct UnityEngine_GameObject_array *v18; // x8
  struct UnityEngine_GameObject_array *v19; // x8
  struct UnityEngine_GameObject_array *v20; // x8
  struct UnityEngine_GameObject_array *buffTextObjectlist; // x8
  unsigned __int64 v22; // x23
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v24; // x21
  struct UnityEngine_GameObject_array *buffTextClassIconObjectList; // x8
  unsigned __int64 v26; // x23
  unsigned __int64 v27; // x9
  UnityEngine_Object_o *v28; // x21

  if ( (byte_4C29CC5 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_Spawner__get_Instance__);
    byte_4C29CC5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  this->fields.spawner = (struct Spawner_o *)Instance;
  p_spawner = &this->fields.spawner;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.spawner, (int32_t)Instance, v5, v6);
  spawner = (UnityEngine_Object_o *)this->fields.spawner;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (Spawner_o *)UnityEngine_Object__op_Inequality(spawner, 0, 0);
  if ( ((unsigned __int8)v8 & 1) == 0 )
    return;
  EffectList = this->fields.EffectList;
  if ( !EffectList )
    goto LABEL_57;
  if ( LODWORD(EffectList->max_length) <= 2 )
    goto LABEL_59;
  v8 = this->fields.spawner;
  if ( !v8 )
    goto LABEL_57;
  Spawner__Precache_40498768(v8, (UnityEngine_Object_o *)EffectList->m_Items[2], 5, 0);
  v12 = this->fields.EffectList;
  if ( !v12 )
    goto LABEL_57;
  if ( LODWORD(v12->max_length) <= 3 )
    goto LABEL_59;
  v8 = this->fields.spawner;
  if ( !v8 )
    goto LABEL_57;
  Spawner__Precache_40498768(v8, (UnityEngine_Object_o *)v12->m_Items[3], 5, 0);
  v13 = this->fields.EffectList;
  if ( !v13 )
    goto LABEL_57;
  if ( LODWORD(v13->max_length) <= 4 )
    goto LABEL_59;
  v8 = this->fields.spawner;
  if ( !v8 )
    goto LABEL_57;
  Spawner__Precache_40498768(v8, (UnityEngine_Object_o *)v13->m_Items[4], 50, 0);
  v14 = this->fields.EffectList;
  if ( !v14 )
    goto LABEL_57;
  if ( LODWORD(v14->max_length) <= 6 )
    goto LABEL_59;
  v8 = this->fields.spawner;
  if ( !v8 )
    goto LABEL_57;
  Spawner__Precache_40498768(v8, (UnityEngine_Object_o *)v14->m_Items[6], 3, 0);
  v15 = this->fields.EffectList;
  if ( !v15 )
    goto LABEL_57;
  if ( LODWORD(v15->max_length) <= 7 )
    goto LABEL_59;
  v8 = this->fields.spawner;
  if ( !v8 )
    goto LABEL_57;
  Spawner__Precache_40498768(v8, (UnityEngine_Object_o *)v15->m_Items[7], 5, 0);
  v16 = this->fields.EffectList;
  if ( !v16 )
    goto LABEL_57;
  if ( LODWORD(v16->max_length) <= 9 )
    goto LABEL_59;
  v8 = this->fields.spawner;
  if ( !v8 )
    goto LABEL_57;
  Spawner__Precache_40498768(v8, (UnityEngine_Object_o *)v16->m_Items[9], 50, 0);
  damageObjectlist = this->fields.damageObjectlist;
  if ( !damageObjectlist )
    goto LABEL_57;
  if ( !LODWORD(damageObjectlist->max_length) )
    goto LABEL_59;
  v8 = this->fields.spawner;
  if ( !v8 )
    goto LABEL_57;
  Spawner__Precache_40498768(v8, (UnityEngine_Object_o *)damageObjectlist->m_Items[0], 5, 0);
  v18 = this->fields.damageObjectlist;
  if ( !v18 )
    goto LABEL_57;
  if ( LODWORD(v18->max_length) <= 1 )
    goto LABEL_59;
  v8 = this->fields.spawner;
  if ( !v8 )
    goto LABEL_57;
  Spawner__Precache_40498768(v8, (UnityEngine_Object_o *)v18->m_Items[1], 5, 0);
  v19 = this->fields.damageObjectlist;
  if ( !v19 )
    goto LABEL_57;
  if ( LODWORD(v19->max_length) <= 2 )
    goto LABEL_59;
  v8 = this->fields.spawner;
  if ( !v8 )
    goto LABEL_57;
  Spawner__Precache_40498768(v8, (UnityEngine_Object_o *)v19->m_Items[2], 5, 0);
  v20 = this->fields.damageObjectlist;
  if ( !v20 )
    goto LABEL_57;
  if ( LODWORD(v20->max_length) <= 3 )
LABEL_59:
    sub_1C2D6F4(v8, v9, v10);
  v8 = this->fields.spawner;
  if ( !v8 )
    goto LABEL_57;
  Spawner__Precache_40498768(v8, (UnityEngine_Object_o *)v20->m_Items[3], 5, 0);
  buffTextObjectlist = this->fields.buffTextObjectlist;
  if ( !buffTextObjectlist )
    goto LABEL_57;
  v22 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(buffTextObjectlist->max_length);
    if ( (__int64)v22 >= (int)max_length_low )
      break;
    if ( v22 >= max_length_low )
      goto LABEL_59;
    v24 = (UnityEngine_Object_o *)buffTextObjectlist->m_Items[v22];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = (Spawner_o *)UnityEngine_Object__op_Equality(v24, 0, 0);
    if ( ((unsigned __int8)v8 & 1) == 0 )
    {
      v8 = *p_spawner;
      if ( !*p_spawner )
        goto LABEL_57;
      Spawner__Precache_40498768(v8, v24, 5, 0);
    }
    buffTextObjectlist = this->fields.buffTextObjectlist;
    ++v22;
    if ( !buffTextObjectlist )
      goto LABEL_57;
  }
  buffTextClassIconObjectList = this->fields.buffTextClassIconObjectList;
  if ( !buffTextClassIconObjectList )
LABEL_57:
    sub_1C2D6EC(v8, v9);
  v26 = 0;
  while ( 1 )
  {
    v27 = LODWORD(buffTextClassIconObjectList->max_length);
    if ( (__int64)v26 >= (int)v27 )
      break;
    if ( v26 >= v27 )
      goto LABEL_59;
    v28 = (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[v26];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = (Spawner_o *)UnityEngine_Object__op_Equality(v28, 0, 0);
    if ( ((unsigned __int8)v8 & 1) == 0 )
    {
      v8 = *p_spawner;
      if ( !*p_spawner )
        goto LABEL_57;
      Spawner__Precache_40498768(v8, v28, 5, 0);
    }
    buffTextClassIconObjectList = this->fields.buffTextClassIconObjectList;
    ++v26;
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
    sub_1C2D6EC(0, obj);
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
        sub_1C2D6F4(this, *(_QWORD *)&color, method);
      spawner = this->fields.spawner;
      if ( spawner )
      {
        buffTextClassIconObjectList = (struct UnityEngine_GameObject_array *)((char *)buffTextClassIconObjectList
                                                                            + 8 * v5);
        return Spawner__Spawn_40500420(spawner, (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[0], 0);
      }
LABEL_10:
      sub_1C2D6EC(spawner, color);
    }
    if ( max_length >= 1 )
    {
      spawner = this->fields.spawner;
      if ( spawner )
        return Spawner__Spawn_40500420(spawner, (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[0], 0);
      goto LABEL_10;
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
        sub_1C2D6F4(this, *(_QWORD *)&color, method);
      spawner = this->fields.spawner;
      if ( spawner )
      {
        buffTextObjectlist = (struct UnityEngine_GameObject_array *)((char *)buffTextObjectlist + 8 * v5);
        return Spawner__Spawn_40500420(spawner, (UnityEngine_Object_o *)buffTextObjectlist->m_Items[0], 0);
      }
LABEL_10:
      sub_1C2D6EC(spawner, color);
    }
    if ( max_length >= 1 )
    {
      spawner = this->fields.spawner;
      if ( spawner )
        return Spawner__Spawn_40500420(spawner, (UnityEngine_Object_o *)buffTextObjectlist->m_Items[0], 0);
      goto LABEL_10;
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
          return Spawner__Spawn_40500420((Spawner_o *)this, *m_Items, 0);
        }
LABEL_18:
        sub_1C2D6EC(this, critical);
      }
    }
    else if ( resist )
    {
      if ( max_length > 3 )
      {
        if ( this )
        {
          m_Items = (UnityEngine_Object_o **)&damageObjectlist->m_Items[3];
          return Spawner__Spawn_40500420((Spawner_o *)this, *m_Items, 0);
        }
        goto LABEL_18;
      }
    }
    else if ( max_length )
    {
      if ( this )
      {
        m_Items = (UnityEngine_Object_o **)damageObjectlist->m_Items;
        return Spawner__Spawn_40500420((Spawner_o *)this, *m_Items, 0);
      }
      goto LABEL_18;
    }
LABEL_19:
    sub_1C2D6F4(this, critical, week);
  }
  if ( max_length <= 1 )
    goto LABEL_19;
  if ( !this )
    goto LABEL_18;
  m_Items = (UnityEngine_Object_o **)&damageObjectlist->m_Items[1];
  return Spawner__Spawn_40500420((Spawner_o *)this, *m_Items, 0);
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
      sub_1C2D6F4(this, *(_QWORD *)&id, method);
    this = (BattleEffectControl_o *)this->fields.spawner;
    if ( this )
      return Spawner__Spawn_40500420((Spawner_o *)this, (UnityEngine_Object_o *)EffectList->m_Items[id], 0);
LABEL_8:
    sub_1C2D6EC(this, id);
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
    sub_1C2D6EC(this, id);
  max_length = EffectList->max_length;
  if ( max_length <= id )
    return 0;
  if ( max_length <= (unsigned int)id )
    sub_1C2D6F4(this, *(_QWORD *)&id, method);
  return EffectList->m_Items[id];
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *BattleEffectControl__getTreasureObject(
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
  if ( (byte_4C29CC7 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18900/*"effect/obj_treasure_p"*/);
    sub_1C2D490(&StringLiteral_24166/*"treasure"*/);
    this = (BattleEffectControl_o *)sub_1C2D490(&StringLiteral_18901/*"effect/obj_treasure_pp"*/);
    byte_4C29CC7 = 1;
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
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_24166/*"treasure"*/, 0, 0);
      if ( (unsigned int)(rarity - 3) > 2 )
      {
        if ( (unsigned int)(rarity - 6) > 2 )
          return (UnityEngine_GameObject_o *)v10;
        goto LABEL_13;
      }
      goto LABEL_12;
    }
LABEL_16:
    sub_1C2D6EC(this, *(_QWORD *)&rarity);
  }
  this = (BattleEffectControl_o *)BattleEffectControl__CreateDropItemEffectObject(
                                    v8,
                                    effectType,
                                    rootTr,
                                    (const MethodInfo *)dropInfo);
  if ( !this )
    goto LABEL_16;
  v10 = this;
  v13 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  NodeFromName = TransformHelper__getNodeFromName(v13, (System_String_o *)StringLiteral_24166/*"treasure"*/, 0, 0);
  if ( rarity == 1002 )
  {
LABEL_13:
    v14 = &StringLiteral_18901/*"effect/obj_treasure_pp"*/;
    goto LABEL_14;
  }
  if ( rarity == 1001 )
  {
LABEL_12:
    v14 = &StringLiteral_18900/*"effect/obj_treasure_p"*/;
LABEL_14:
    BaseMonoBehaviour__createObject_40963840((BaseMonoBehaviour_o *)v8, (System_String_o *)*v14, NodeFromName, 0, 0);
  }
  return (UnityEngine_GameObject_o *)v10;
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
  const MethodInfo *v3; // x3

  this->fields._AvoidResetDamageObject_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._AvoidResetDamageObject_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleEffectControl__set_AvoidResetDamageTextObject(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._AvoidResetDamageTextObject_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._AvoidResetDamageTextObject_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleEffectControl__set_DoNotActByCommandSealedObject(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._DoNotActByCommandSealedObject_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._DoNotActByCommandSealedObject_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleEffectControl__set_specialInvincibleObject(
        BattleEffectControl_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._specialInvincibleObject_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._specialInvincibleObject_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}