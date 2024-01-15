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

  if ( (byte_40F8CE8 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, *(_QWORD *)&dropEffectType);
    sub_B16FFC(&AssetManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_21093/*"obj_treasure_item_bound"*/, v8);
    sub_B16FFC(&StringLiteral_18191/*"effect/obj_treasure_item01"*/, v9);
    sub_B16FFC(&StringLiteral_2745/*"Battle/DropEffect/1"*/, v10);
    byte_40F8CE8 = 1;
  }
  if ( dropEffectType == 1 )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2745/*"Battle/DropEffect/1"*/, 0LL);
    if ( !AssetStorage )
      sub_B170D4();
    Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   (System_String_o *)StringLiteral_21093/*"obj_treasure_item_bound"*/,
                                                                   (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
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
    return BaseMonoBehaviour__createObject_19257936(
             (BaseMonoBehaviour_o *)this,
             (System_String_o *)StringLiteral_18191/*"effect/obj_treasure_item01"*/,
             rootTr,
             0LL,
             0LL);
  }
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__GetAvoidanceTextObject(
        BattleEffectControl_o *this,
        const MethodInfo *method)
{
  return this->fields.avoidanceTextObject;
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
  sub_B16F98(
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
  Spawner_o **p_spawner; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Object_o *spawner; // x21
  _BOOL8 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct UnityEngine_GameObject_array *EffectList; // x8
  Spawner_o *v17; // x0
  struct UnityEngine_GameObject_array *v18; // x8
  Spawner_o *v19; // x0
  struct UnityEngine_GameObject_array *v20; // x8
  Spawner_o *v21; // x0
  struct UnityEngine_GameObject_array *v22; // x8
  Spawner_o *v23; // x0
  struct UnityEngine_GameObject_array *v24; // x8
  Spawner_o *v25; // x0
  struct UnityEngine_GameObject_array *v26; // x8
  Spawner_o *v27; // x0
  struct UnityEngine_GameObject_array *damageObjectlist; // x8
  Spawner_o *v29; // x0
  struct UnityEngine_GameObject_array *v30; // x8
  Spawner_o *v31; // x0
  struct UnityEngine_GameObject_array *v32; // x8
  Spawner_o *v33; // x0
  struct UnityEngine_GameObject_array *v34; // x8
  Spawner_o *v35; // x0
  struct UnityEngine_GameObject_array *buffTextObjectlist; // x8
  unsigned __int64 v37; // x23
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v39; // x21
  struct UnityEngine_GameObject_array *buffTextClassIconObjectList; // x8
  unsigned __int64 v41; // x23
  unsigned __int64 v42; // x9
  UnityEngine_Object_o *v43; // x21

  if ( (byte_40F8CE5 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_Spawner__get_Instance__, v3);
    byte_40F8CE5 = 1;
  }
  Instance = (struct Spawner_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  this->fields.spawner = Instance;
  p_spawner = &this->fields.spawner;
  sub_B16F98(
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
  v13 = UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL);
  if ( !v13 )
    return;
  EffectList = this->fields.EffectList;
  if ( !EffectList )
    goto LABEL_60;
  if ( EffectList->max_length <= 2 )
    goto LABEL_62;
  v17 = this->fields.spawner;
  if ( !v17 )
    goto LABEL_60;
  Spawner__Precache_24901732(v17, (UnityEngine_Object_o *)EffectList->m_Items[2], 5, 0LL);
  v18 = this->fields.EffectList;
  if ( !v18 )
    goto LABEL_60;
  if ( v18->max_length <= 3 )
    goto LABEL_62;
  v19 = this->fields.spawner;
  if ( !v19 )
    goto LABEL_60;
  Spawner__Precache_24901732(v19, (UnityEngine_Object_o *)v18->m_Items[3], 5, 0LL);
  v20 = this->fields.EffectList;
  if ( !v20 )
    goto LABEL_60;
  if ( v20->max_length <= 4 )
    goto LABEL_62;
  v21 = this->fields.spawner;
  if ( !v21 )
    goto LABEL_60;
  Spawner__Precache_24901732(v21, (UnityEngine_Object_o *)v20->m_Items[4], 50, 0LL);
  v22 = this->fields.EffectList;
  if ( !v22 )
    goto LABEL_60;
  if ( v22->max_length <= 6 )
    goto LABEL_62;
  v23 = this->fields.spawner;
  if ( !v23 )
    goto LABEL_60;
  Spawner__Precache_24901732(v23, (UnityEngine_Object_o *)v22->m_Items[6], 3, 0LL);
  v24 = this->fields.EffectList;
  if ( !v24 )
    goto LABEL_60;
  if ( v24->max_length <= 7 )
    goto LABEL_62;
  v25 = this->fields.spawner;
  if ( !v25 )
    goto LABEL_60;
  Spawner__Precache_24901732(v25, (UnityEngine_Object_o *)v24->m_Items[7], 5, 0LL);
  v26 = this->fields.EffectList;
  if ( !v26 )
    goto LABEL_60;
  if ( v26->max_length <= 9 )
    goto LABEL_62;
  v27 = this->fields.spawner;
  if ( !v27 )
    goto LABEL_60;
  Spawner__Precache_24901732(v27, (UnityEngine_Object_o *)v26->m_Items[9], 50, 0LL);
  damageObjectlist = this->fields.damageObjectlist;
  if ( !damageObjectlist )
    goto LABEL_60;
  if ( !damageObjectlist->max_length )
    goto LABEL_62;
  v29 = this->fields.spawner;
  if ( !v29 )
    goto LABEL_60;
  Spawner__Precache_24901732(v29, (UnityEngine_Object_o *)damageObjectlist->m_Items[0], 5, 0LL);
  v30 = this->fields.damageObjectlist;
  if ( !v30 )
    goto LABEL_60;
  if ( v30->max_length <= 1 )
    goto LABEL_62;
  v31 = this->fields.spawner;
  if ( !v31 )
    goto LABEL_60;
  Spawner__Precache_24901732(v31, (UnityEngine_Object_o *)v30->m_Items[1], 5, 0LL);
  v32 = this->fields.damageObjectlist;
  if ( !v32 )
    goto LABEL_60;
  if ( v32->max_length <= 2 )
    goto LABEL_62;
  v33 = this->fields.spawner;
  if ( !v33 )
    goto LABEL_60;
  Spawner__Precache_24901732(v33, (UnityEngine_Object_o *)v32->m_Items[2], 5, 0LL);
  v34 = this->fields.damageObjectlist;
  if ( !v34 )
    goto LABEL_60;
  if ( v34->max_length <= 3 )
  {
LABEL_62:
    sub_B17100(v13, v14, v15);
    sub_B170A0();
  }
  v35 = this->fields.spawner;
  if ( !v35 )
    goto LABEL_60;
  Spawner__Precache_24901732(v35, (UnityEngine_Object_o *)v34->m_Items[3], 5, 0LL);
  buffTextObjectlist = this->fields.buffTextObjectlist;
  if ( !buffTextObjectlist )
    goto LABEL_60;
  v37 = 0LL;
  while ( 1 )
  {
    max_length = buffTextObjectlist->max_length;
    if ( (__int64)v37 >= (int)max_length )
      break;
    if ( v37 >= max_length )
      goto LABEL_62;
    v39 = (UnityEngine_Object_o *)buffTextObjectlist->m_Items[v37];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v13 = UnityEngine_Object__op_Equality(v39, 0LL, 0LL);
    if ( !v13 )
    {
      if ( !*p_spawner )
        goto LABEL_60;
      Spawner__Precache_24901732(*p_spawner, v39, 5, 0LL);
    }
    buffTextObjectlist = this->fields.buffTextObjectlist;
    ++v37;
    if ( !buffTextObjectlist )
      goto LABEL_60;
  }
  buffTextClassIconObjectList = this->fields.buffTextClassIconObjectList;
  if ( !buffTextClassIconObjectList )
LABEL_60:
    sub_B170D4();
  v41 = 0LL;
  while ( 1 )
  {
    v42 = buffTextClassIconObjectList->max_length;
    if ( (__int64)v41 >= (int)v42 )
      break;
    if ( v41 >= v42 )
      goto LABEL_62;
    v43 = (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[v41];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v13 = UnityEngine_Object__op_Equality(v43, 0LL, 0LL);
    if ( !v13 )
    {
      if ( !*p_spawner )
        goto LABEL_60;
      Spawner__Precache_24901732(*p_spawner, v43, 5, 0LL);
    }
    buffTextClassIconObjectList = this->fields.buffTextClassIconObjectList;
    ++v41;
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
    sub_B170D4();
  Spawner__Despawn(spawner, obj, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
      {
        sub_B17100(this, *(_QWORD *)&color, method);
        sub_B170A0();
      }
      spawner = this->fields.spawner;
      if ( spawner )
      {
        buffTextClassIconObjectList = (struct UnityEngine_GameObject_array *)((char *)buffTextClassIconObjectList
                                                                            + 8 * v5);
        return Spawner__Spawn_24902092(spawner, (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[0], 0LL);
      }
LABEL_10:
      sub_B170D4();
    }
    if ( max_length >= 1 )
    {
      spawner = this->fields.spawner;
      if ( spawner )
        return Spawner__Spawn_24902092(spawner, (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[0], 0LL);
      goto LABEL_10;
    }
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
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
      {
        sub_B17100(this, *(_QWORD *)&color, method);
        sub_B170A0();
      }
      spawner = this->fields.spawner;
      if ( spawner )
      {
        buffTextObjectlist = (struct UnityEngine_GameObject_array *)((char *)buffTextObjectlist + 8 * v5);
        return Spawner__Spawn_24902092(spawner, (UnityEngine_Object_o *)buffTextObjectlist->m_Items[0], 0LL);
      }
LABEL_10:
      sub_B170D4();
    }
    if ( max_length >= 1 )
    {
      spawner = this->fields.spawner;
      if ( spawner )
        return Spawner__Spawn_24902092(spawner, (UnityEngine_Object_o *)buffTextObjectlist->m_Items[0], 0LL);
      goto LABEL_10;
    }
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
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
          return Spawner__Spawn_24902092(spawner, *m_Items, 0LL);
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
          return Spawner__Spawn_24902092(spawner, *m_Items, 0LL);
        }
      }
      else
      {
        if ( !max_length )
          goto LABEL_21;
        if ( spawner )
        {
          m_Items = (UnityEngine_Object_o **)damageObjectlist->m_Items;
          return Spawner__Spawn_24902092(spawner, *m_Items, 0LL);
        }
      }
    }
LABEL_20:
    sub_B170D4();
  }
  if ( !damageObjectlist )
    goto LABEL_20;
  if ( damageObjectlist->max_length <= 1 )
  {
LABEL_21:
    sub_B17100(spawner, critical, week);
    sub_B170A0();
  }
  if ( !spawner )
    goto LABEL_20;
  m_Items = (UnityEngine_Object_o **)&damageObjectlist->m_Items[1];
  return Spawner__Spawn_24902092(spawner, *m_Items, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleEffectControl__getEffectInstantiate(
        BattleEffectControl_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *EffectList; // x8
  int32_t max_length; // w9
  Spawner_o *spawner; // x0

  EffectList = this->fields.EffectList;
  if ( !EffectList )
    goto LABEL_8;
  max_length = EffectList->max_length;
  if ( max_length > id )
  {
    if ( max_length <= (unsigned int)id )
    {
      sub_B17100(this, *(_QWORD *)&id, method);
      sub_B170A0();
    }
    spawner = this->fields.spawner;
    if ( spawner )
      return Spawner__Spawn_24902092(spawner, (UnityEngine_Object_o *)EffectList->m_Items[id], 0LL);
LABEL_8:
    sub_B170D4();
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleEffectControl__getListEffect(
        BattleEffectControl_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *EffectList; // x8
  int32_t max_length; // w9

  EffectList = this->fields.EffectList;
  if ( !EffectList )
    sub_B170D4();
  max_length = EffectList->max_length;
  if ( max_length <= id )
    return 0LL;
  if ( max_length <= (unsigned int)id )
  {
    sub_B17100(this, *(_QWORD *)&id, method);
    sub_B170A0();
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  UnityEngine_GameObject_o *Object_19257936; // x0
  UnityEngine_GameObject_o *v16; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x2
  UnityEngine_GameObject_o *DropItemEffectObject; // x0
  UnityEngine_Transform_o *v20; // x0
  __int64 *v21; // x8
  int v23; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F8CE7 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&rarity);
    sub_B16FFC(&StringLiteral_18194/*"effect/obj_treasure{0:D2}"*/, v9);
    sub_B16FFC(&StringLiteral_18192/*"effect/obj_treasure_p"*/, v10);
    sub_B16FFC(&StringLiteral_22686/*"treasure"*/, v11);
    sub_B16FFC(&StringLiteral_18193/*"effect/obj_treasure_pp"*/, v12);
    byte_40F8CE7 = 1;
  }
  if ( rarity < 1000 )
  {
    v23 = rarity % 3 + 1;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v14 = System_String__Format((System_String_o *)StringLiteral_18194/*"effect/obj_treasure{0:D2}"*/, v13, 0LL);
    Object_19257936 = BaseMonoBehaviour__createObject_19257936((BaseMonoBehaviour_o *)this, v14, rootTr, 0LL, 0LL);
    if ( Object_19257936 )
    {
      v16 = Object_19257936;
      transform = UnityEngine_GameObject__get_transform(Object_19257936, 0LL);
      NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_22686/*"treasure"*/, 0, 0LL);
      if ( (unsigned int)(rarity - 3) > 2 )
      {
        if ( (unsigned int)(rarity - 6) > 2 )
          return v16;
        goto LABEL_13;
      }
      goto LABEL_12;
    }
LABEL_16:
    sub_B170D4();
  }
  if ( !dropInfo )
    goto LABEL_16;
  DropItemEffectObject = BattleEffectControl__CreateDropItemEffectObject(
                           this,
                           dropInfo->fields.effectType,
                           rootTr,
                           (const MethodInfo *)dropInfo);
  if ( !DropItemEffectObject )
    goto LABEL_16;
  v16 = DropItemEffectObject;
  v20 = UnityEngine_GameObject__get_transform(DropItemEffectObject, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(v20, (System_String_o *)StringLiteral_22686/*"treasure"*/, 0, 0LL);
  if ( rarity == 1002 )
  {
LABEL_13:
    v21 = &StringLiteral_18193/*"effect/obj_treasure_pp"*/;
    goto LABEL_14;
  }
  if ( rarity == 1001 )
  {
LABEL_12:
    v21 = &StringLiteral_18192/*"effect/obj_treasure_p"*/;
LABEL_14:
    BaseMonoBehaviour__createObject_19257936(
      (BaseMonoBehaviour_o *)this,
      (System_String_o *)*v21,
      NodeFromName,
      0LL,
      0LL);
  }
  return v16;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x8
  unsigned __int64 v13; // x24
  float v14; // s8
  BattleBuffData_ShowBuffData_o *v15; // x22
  UnityEngine_GameObject_o *buffIconObject; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v19; // x23
  BattleServantBuffIconComponent_o *Component_srcLineSprite; // x0
  UnityEngine_Transform_o *v21; // x0
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F8CE6 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, bufflist);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v7);
    byte_40F8CE6 = 1;
  }
  if ( !bufflist || !*(_QWORD *)&bufflist->max_length )
    return 0LL;
  v8 = (UnityEngine_GameObject_o *)sub_B170CC(UnityEngine_GameObject_TypeInfo, bufflist, method, v3, v4);
  UnityEngine_GameObject___ctor_40693716(v8, 0LL);
  v12 = *(_QWORD *)&bufflist->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    v14 = 0.0;
    do
    {
      if ( v13 >= (unsigned int)v12 )
      {
        sub_B17100(v9, v10, v11);
        sub_B170A0();
      }
      if ( !v8 )
        goto LABEL_16;
      v15 = bufflist->m_Items[v13];
      buffIconObject = this->fields.buffIconObject;
      transform = UnityEngine_GameObject__get_transform(v8, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, buffIconObject, transform, 0LL, 0LL);
      if ( !Object
        || (v19 = Object,
            (Component_srcLineSprite = (BattleServantBuffIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             Object,
                                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___)) == 0LL)
        || (BattleServantBuffIconComponent__setIcon_22678936(Component_srcLineSprite, v15, 0LL),
            (v21 = UnityEngine_GameObject__get_transform(v19, 0LL)) == 0LL) )
      {
LABEL_16:
        sub_B170D4();
      }
      v23.fields.y = 0.0;
      v23.fields.z = 0.0;
      v23.fields.x = v14;
      UnityEngine_Transform__set_localPosition(v21, v23, 0LL);
      LODWORD(v12) = bufflist->max_length;
      ++v13;
      v14 = v14 + -44.0;
    }
    while ( (__int64)v13 < (int)v12 );
  }
  return v8;
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._specialInvincibleObject_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}