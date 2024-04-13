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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  AssetData_o *AssetStorage; // x0
  __int64 v26; // x1
  __int64 *v27; // x8
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x1

  if ( (byte_42E783D & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, dropEffectType, (_DWORD)rootTr, method);
    sub_B5D5C4(&AssetManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_21459/*"obj_treasure_item_bound"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_18487/*"effect/obj_treasure_item01"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_21460/*"obj_treasure_item_high_position"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_2811/*"Battle/DropEffect/2"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_2810/*"Battle/DropEffect/1"*/, v22, v23, v24);
    byte_42E783D = 1;
  }
  if ( dropEffectType == 2 )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2811/*"Battle/DropEffect/2"*/, 0LL);
    if ( AssetStorage )
    {
      v27 = &StringLiteral_21460/*"obj_treasure_item_high_position"*/;
      goto LABEL_15;
    }
LABEL_17:
    sub_B5D69C(AssetStorage, v26);
  }
  if ( dropEffectType == 1 )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2810/*"Battle/DropEffect/1"*/, 0LL);
    if ( AssetStorage )
    {
      v27 = &StringLiteral_21459/*"obj_treasure_item_bound"*/;
LABEL_15:
      Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                     AssetStorage,
                                                                     (System_String_o *)*v27,
                                                                     (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
      return BaseMonoBehaviour__createObject(
               (BaseMonoBehaviour_o *)this,
               Object_WarBoardWaitTimeSetting,
               rootTr,
               0LL,
               0LL);
    }
    goto LABEL_17;
  }
  return BaseMonoBehaviour__createObject_21082944(
           (BaseMonoBehaviour_o *)this,
           (System_String_o *)StringLiteral_18487/*"effect/obj_treasure_item01"*/,
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  AssetData_o *AssetStorage; // x22
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  __int64 v30; // x1
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  int v32; // [xsp+8h] [xbp-28h] BYREF
  int v33; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E783E & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, dropEffectType, (_DWORD)rootTr, *(_QWORD *)&rarity);
    sub_B5D5C4(&AssetManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_18490/*"effect/obj_treasure{0:D2}"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_2810/*"Battle/DropEffect/1"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_21461/*"obj_treasure{0:D2}_bound"*/, v21, v22, v23);
    byte_42E783E = 1;
  }
  if ( dropEffectType == 1 )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2810/*"Battle/DropEffect/1"*/, 0LL);
    v32 = rarity % 3 + 1;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
    v29 = System_String__Format((System_String_o *)StringLiteral_21461/*"obj_treasure{0:D2}_bound"*/, v28, 0LL);
    if ( !AssetStorage )
      sub_B5D69C(v29, v30);
    Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   v29,
                                                                   (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
    v33 = rarity % 3 + 1;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
    v25 = System_String__Format((System_String_o *)StringLiteral_18490/*"effect/obj_treasure{0:D2}"*/, v24, 0LL);
    return BaseMonoBehaviour__createObject_21082944((BaseMonoBehaviour_o *)this, v25, rootTr, 0LL, 0LL);
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
  sub_B5D560(
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct Spawner_o *Instance; // x0
  struct Spawner_o **p_spawner; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Object_o *spawner; // x21
  Spawner_o *v17; // x0
  __int64 v18; // x1
  struct UnityEngine_GameObject_array *EffectList; // x8
  struct UnityEngine_GameObject_array *v20; // x8
  struct UnityEngine_GameObject_array *v21; // x8
  struct UnityEngine_GameObject_array *v22; // x8
  struct UnityEngine_GameObject_array *v23; // x8
  struct UnityEngine_GameObject_array *v24; // x8
  struct UnityEngine_GameObject_array *damageObjectlist; // x8
  struct UnityEngine_GameObject_array *v26; // x8
  struct UnityEngine_GameObject_array *v27; // x8
  struct UnityEngine_GameObject_array *v28; // x8
  struct UnityEngine_GameObject_array *buffTextObjectlist; // x8
  unsigned __int64 v30; // x23
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v32; // x21
  struct UnityEngine_GameObject_array *buffTextClassIconObjectList; // x8
  unsigned __int64 v34; // x23
  unsigned __int64 v35; // x9
  UnityEngine_Object_o *v36; // x21
  __int64 v37; // x0

  if ( (byte_42E783A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_Spawner__get_Instance__, v5, v6, v7);
    byte_42E783A = 1;
  }
  Instance = (struct Spawner_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  this->fields.spawner = Instance;
  p_spawner = &this->fields.spawner;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.spawner,
    (System_Int32_array **)Instance,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  spawner = (UnityEngine_Object_o *)this->fields.spawner;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v17 = (Spawner_o *)UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL);
  if ( ((unsigned __int8)v17 & 1) == 0 )
    return;
  EffectList = this->fields.EffectList;
  if ( !EffectList )
    goto LABEL_60;
  if ( EffectList->max_length <= 2 )
    goto LABEL_62;
  v17 = this->fields.spawner;
  if ( !v17 )
    goto LABEL_60;
  Spawner__Precache_26157212(v17, (UnityEngine_Object_o *)EffectList->m_Items[2], 5, 0LL);
  v20 = this->fields.EffectList;
  if ( !v20 )
    goto LABEL_60;
  if ( v20->max_length <= 3 )
    goto LABEL_62;
  v17 = this->fields.spawner;
  if ( !v17 )
    goto LABEL_60;
  Spawner__Precache_26157212(v17, (UnityEngine_Object_o *)v20->m_Items[3], 5, 0LL);
  v21 = this->fields.EffectList;
  if ( !v21 )
    goto LABEL_60;
  if ( v21->max_length <= 4 )
    goto LABEL_62;
  v17 = this->fields.spawner;
  if ( !v17 )
    goto LABEL_60;
  Spawner__Precache_26157212(v17, (UnityEngine_Object_o *)v21->m_Items[4], 50, 0LL);
  v22 = this->fields.EffectList;
  if ( !v22 )
    goto LABEL_60;
  if ( v22->max_length <= 6 )
    goto LABEL_62;
  v17 = this->fields.spawner;
  if ( !v17 )
    goto LABEL_60;
  Spawner__Precache_26157212(v17, (UnityEngine_Object_o *)v22->m_Items[6], 3, 0LL);
  v23 = this->fields.EffectList;
  if ( !v23 )
    goto LABEL_60;
  if ( v23->max_length <= 7 )
    goto LABEL_62;
  v17 = this->fields.spawner;
  if ( !v17 )
    goto LABEL_60;
  Spawner__Precache_26157212(v17, (UnityEngine_Object_o *)v23->m_Items[7], 5, 0LL);
  v24 = this->fields.EffectList;
  if ( !v24 )
    goto LABEL_60;
  if ( v24->max_length <= 9 )
    goto LABEL_62;
  v17 = this->fields.spawner;
  if ( !v17 )
    goto LABEL_60;
  Spawner__Precache_26157212(v17, (UnityEngine_Object_o *)v24->m_Items[9], 50, 0LL);
  damageObjectlist = this->fields.damageObjectlist;
  if ( !damageObjectlist )
    goto LABEL_60;
  if ( !damageObjectlist->max_length )
    goto LABEL_62;
  v17 = this->fields.spawner;
  if ( !v17 )
    goto LABEL_60;
  Spawner__Precache_26157212(v17, (UnityEngine_Object_o *)damageObjectlist->m_Items[0], 5, 0LL);
  v26 = this->fields.damageObjectlist;
  if ( !v26 )
    goto LABEL_60;
  if ( v26->max_length <= 1 )
    goto LABEL_62;
  v17 = this->fields.spawner;
  if ( !v17 )
    goto LABEL_60;
  Spawner__Precache_26157212(v17, (UnityEngine_Object_o *)v26->m_Items[1], 5, 0LL);
  v27 = this->fields.damageObjectlist;
  if ( !v27 )
    goto LABEL_60;
  if ( v27->max_length <= 2 )
    goto LABEL_62;
  v17 = this->fields.spawner;
  if ( !v17 )
    goto LABEL_60;
  Spawner__Precache_26157212(v17, (UnityEngine_Object_o *)v27->m_Items[2], 5, 0LL);
  v28 = this->fields.damageObjectlist;
  if ( !v28 )
    goto LABEL_60;
  if ( v28->max_length <= 3 )
  {
LABEL_62:
    v37 = sub_B5D6C8(v17);
    sub_B5D668(v37, 0LL);
  }
  v17 = this->fields.spawner;
  if ( !v17 )
    goto LABEL_60;
  Spawner__Precache_26157212(v17, (UnityEngine_Object_o *)v28->m_Items[3], 5, 0LL);
  buffTextObjectlist = this->fields.buffTextObjectlist;
  if ( !buffTextObjectlist )
    goto LABEL_60;
  v30 = 0LL;
  while ( 1 )
  {
    max_length = buffTextObjectlist->max_length;
    if ( (__int64)v30 >= (int)max_length )
      break;
    if ( v30 >= max_length )
      goto LABEL_62;
    v32 = (UnityEngine_Object_o *)buffTextObjectlist->m_Items[v30];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v17 = (Spawner_o *)UnityEngine_Object__op_Equality(v32, 0LL, 0LL);
    if ( ((unsigned __int8)v17 & 1) == 0 )
    {
      v17 = *p_spawner;
      if ( !*p_spawner )
        goto LABEL_60;
      Spawner__Precache_26157212(v17, v32, 5, 0LL);
    }
    buffTextObjectlist = this->fields.buffTextObjectlist;
    ++v30;
    if ( !buffTextObjectlist )
      goto LABEL_60;
  }
  buffTextClassIconObjectList = this->fields.buffTextClassIconObjectList;
  if ( !buffTextClassIconObjectList )
LABEL_60:
    sub_B5D69C(v17, v18);
  v34 = 0LL;
  while ( 1 )
  {
    v35 = buffTextClassIconObjectList->max_length;
    if ( (__int64)v34 >= (int)v35 )
      break;
    if ( v34 >= v35 )
      goto LABEL_62;
    v36 = (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[v34];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v17 = (Spawner_o *)UnityEngine_Object__op_Equality(v36, 0LL, 0LL);
    if ( ((unsigned __int8)v17 & 1) == 0 )
    {
      v17 = *p_spawner;
      if ( !*p_spawner )
        goto LABEL_60;
      Spawner__Precache_26157212(v17, v36, 5, 0LL);
    }
    buffTextClassIconObjectList = this->fields.buffTextClassIconObjectList;
    ++v34;
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
    sub_B5D69C(0LL, obj);
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
        v8 = sub_B5D6C8(this);
        sub_B5D668(v8, 0LL);
      }
      spawner = this->fields.spawner;
      if ( spawner )
      {
        buffTextClassIconObjectList = (struct UnityEngine_GameObject_array *)((char *)buffTextClassIconObjectList
                                                                            + 8 * v5);
        return Spawner__Spawn_26157572(spawner, (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[0], 0LL);
      }
LABEL_10:
      sub_B5D69C(spawner, color);
    }
    if ( max_length >= 1 )
    {
      spawner = this->fields.spawner;
      if ( spawner )
        return Spawner__Spawn_26157572(spawner, (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[0], 0LL);
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
        v8 = sub_B5D6C8(this);
        sub_B5D668(v8, 0LL);
      }
      spawner = this->fields.spawner;
      if ( spawner )
      {
        buffTextObjectlist = (struct UnityEngine_GameObject_array *)((char *)buffTextObjectlist + 8 * v5);
        return Spawner__Spawn_26157572(spawner, (UnityEngine_Object_o *)buffTextObjectlist->m_Items[0], 0LL);
      }
LABEL_10:
      sub_B5D69C(spawner, color);
    }
    if ( max_length >= 1 )
    {
      spawner = this->fields.spawner;
      if ( spawner )
        return Spawner__Spawn_26157572(spawner, (UnityEngine_Object_o *)buffTextObjectlist->m_Items[0], 0LL);
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
          return Spawner__Spawn_26157572(spawner, *m_Items, 0LL);
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
          return Spawner__Spawn_26157572(spawner, *m_Items, 0LL);
        }
      }
      else
      {
        if ( !max_length )
          goto LABEL_21;
        if ( spawner )
        {
          m_Items = (UnityEngine_Object_o **)damageObjectlist->m_Items;
          return Spawner__Spawn_26157572(spawner, *m_Items, 0LL);
        }
      }
    }
LABEL_20:
    sub_B5D69C(spawner, critical);
  }
  if ( !damageObjectlist )
    goto LABEL_20;
  if ( damageObjectlist->max_length <= 1 )
  {
LABEL_21:
    v11 = sub_B5D6C8(spawner);
    sub_B5D668(v11, 0LL);
  }
  if ( !spawner )
    goto LABEL_20;
  m_Items = (UnityEngine_Object_o **)&damageObjectlist->m_Items[1];
  return Spawner__Spawn_26157572(spawner, *m_Items, 0LL);
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
      v6 = sub_B5D6C8(this);
      sub_B5D668(v6, 0LL);
    }
    this = (BattleEffectControl_o *)this->fields.spawner;
    if ( this )
      return Spawner__Spawn_26157572((Spawner_o *)this, (UnityEngine_Object_o *)EffectList->m_Items[id], 0LL);
LABEL_8:
    sub_B5D69C(this, id);
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
    sub_B5D69C(this, id);
  max_length = EffectList->max_length;
  if ( max_length <= id )
    return 0LL;
  if ( max_length <= (unsigned int)id )
  {
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t effectType; // w1
  UnityEngine_GameObject_o *v16; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x2
  UnityEngine_Transform_o *v19; // x0
  __int64 *v20; // x8

  v8 = this;
  if ( (byte_42E783C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18488/*"effect/obj_treasure_p"*/, rarity, (_DWORD)rootTr, dropInfo);
    sub_B5D5C4(&StringLiteral_23084/*"treasure"*/, v9, v10, v11);
    this = (BattleEffectControl_o *)sub_B5D5C4(&StringLiteral_18489/*"effect/obj_treasure_pp"*/, v12, v13, v14);
    byte_42E783C = 1;
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
      v16 = (UnityEngine_GameObject_o *)this;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_23084/*"treasure"*/, 0, 0LL);
      if ( (unsigned int)(rarity - 3) > 2 )
      {
        if ( (unsigned int)(rarity - 6) > 2 )
          return v16;
        goto LABEL_13;
      }
      goto LABEL_12;
    }
LABEL_16:
    sub_B5D69C(this, *(_QWORD *)&rarity);
  }
  this = (BattleEffectControl_o *)BattleEffectControl__CreateDropItemEffectObject(
                                    v8,
                                    effectType,
                                    rootTr,
                                    (const MethodInfo *)dropInfo);
  if ( !this )
    goto LABEL_16;
  v16 = (UnityEngine_GameObject_o *)this;
  v19 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(v19, (System_String_o *)StringLiteral_23084/*"treasure"*/, 0, 0LL);
  if ( rarity == 1002 )
  {
LABEL_13:
    v20 = &StringLiteral_18489/*"effect/obj_treasure_pp"*/;
    goto LABEL_14;
  }
  if ( rarity == 1001 )
  {
LABEL_12:
    v20 = &StringLiteral_18488/*"effect/obj_treasure_p"*/;
LABEL_14:
    BaseMonoBehaviour__createObject_21082944((BaseMonoBehaviour_o *)v8, (System_String_o *)*v20, NodeFromName, 0LL, 0LL);
  }
  return v16;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *v9; // x21
  UnityEngine_GameObject_o *Object; // x0
  __int64 v11; // x1
  __int64 v12; // x8
  unsigned __int64 v13; // x24
  float v14; // s8
  BattleBuffData_ShowBuffData_o *v15; // x22
  UnityEngine_GameObject_o *buffIconObject; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v18; // x23
  __int64 v20; // x0
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E783B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___,
      (_DWORD)bufflist,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v6, v7, v8);
    byte_42E783B = 1;
  }
  if ( !bufflist || !*(_QWORD *)&bufflist->max_length )
    return 0LL;
  v9 = (UnityEngine_GameObject_o *)sub_B5D694(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor_41595520(v9, 0LL);
  v12 = *(_QWORD *)&bufflist->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    v14 = 0.0;
    do
    {
      if ( v13 >= (unsigned int)v12 )
      {
        v20 = sub_B5D6C8(Object);
        sub_B5D668(v20, 0LL);
      }
      if ( !v9 )
        goto LABEL_16;
      v15 = bufflist->m_Items[v13];
      buffIconObject = this->fields.buffIconObject;
      transform = UnityEngine_GameObject__get_transform(v9, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, buffIconObject, transform, 0LL, 0LL);
      if ( !Object
        || (v18 = Object,
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    Object,
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___)) == 0LL)
        || (BattleServantBuffIconComponent__setIcon_21093468((BattleServantBuffIconComponent_o *)Object, v15, 0LL),
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v18, 0LL)) == 0LL) )
      {
LABEL_16:
        sub_B5D69C(Object, v11);
      }
      v21.fields.y = 0.0;
      v21.fields.z = 0.0;
      v21.fields.x = v14;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v21, 0LL);
      LODWORD(v12) = bufflist->max_length;
      ++v13;
      v14 = v14 + -44.0;
    }
    while ( (__int64)v13 < (int)v12 );
  }
  return v9;
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
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._specialInvincibleObject_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}