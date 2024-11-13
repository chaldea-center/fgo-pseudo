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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  AssetData_o *AssetStorage; // x0
  __int64 v20; // x1
  __int64 *v21; // x8
  Il2CppObject *Object_object__49237568; // x1

  if ( (byte_4B18781 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, *(_QWORD *)&dropEffectType, rootTr);
    sub_1BCA7E0(&AssetManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_22428/*"obj_treasure_item_bound"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_19099/*"effect/obj_treasure_item01"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_22429/*"obj_treasure_item_high_position"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_3236/*"Battle/DropEffect/2"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_3235/*"Battle/DropEffect/1"*/, v17, v18);
    byte_4B18781 = 1;
  }
  if ( dropEffectType == 2 )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, *(_QWORD *)&dropEffectType);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3236/*"Battle/DropEffect/2"*/, 0LL);
    if ( AssetStorage )
    {
      v21 = &StringLiteral_22429/*"obj_treasure_item_high_position"*/;
      goto LABEL_13;
    }
LABEL_15:
    sub_1BCAA3C(AssetStorage, v20);
  }
  if ( dropEffectType == 1 )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, *(_QWORD *)&dropEffectType);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3235/*"Battle/DropEffect/1"*/, 0LL);
    if ( AssetStorage )
    {
      v21 = &StringLiteral_22428/*"obj_treasure_item_bound"*/;
LABEL_13:
      Object_object__49237568 = AssetData__GetObject_object__49237568(
                                  AssetStorage,
                                  (System_String_o *)*v21,
                                  (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
      return BaseMonoBehaviour__createObject(
               (BaseMonoBehaviour_o *)this,
               (UnityEngine_GameObject_o *)Object_object__49237568,
               rootTr,
               0LL,
               0LL);
    }
    goto LABEL_15;
  }
  return BaseMonoBehaviour__createObject_38952608(
           (BaseMonoBehaviour_o *)this,
           (System_String_o *)StringLiteral_19099/*"effect/obj_treasure_item01"*/,
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  AssetData_o *AssetStorage; // x22
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  __int64 v25; // x1
  Il2CppObject *Object_object__49237568; // x0
  int v27; // [xsp+8h] [xbp-38h] BYREF
  int v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B18782 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, *(_QWORD *)&dropEffectType, rootTr);
    sub_1BCA7E0(&AssetManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_19102/*"effect/obj_treasure{0:D2}"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_3235/*"Battle/DropEffect/1"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_22430/*"obj_treasure{0:D2}_bound"*/, v17, v18);
    byte_4B18782 = 1;
  }
  if ( dropEffectType == 1 )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, *(_QWORD *)&dropEffectType);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3235/*"Battle/DropEffect/1"*/, 0LL);
    v27 = rarity % 3 + 1;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
    v24 = System_String__Format((System_String_o *)StringLiteral_22430/*"obj_treasure{0:D2}_bound"*/, v23, 0LL);
    if ( !AssetStorage )
      sub_1BCAA3C(v24, v25);
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                AssetStorage,
                                v24,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    return BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             (UnityEngine_GameObject_o *)Object_object__49237568,
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
    v28 = rarity % 3 + 1;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
    v20 = System_String__Format((System_String_o *)StringLiteral_19102/*"effect/obj_treasure{0:D2}"*/, v19, 0LL);
    return BaseMonoBehaviour__createObject_38952608((BaseMonoBehaviour_o *)this, v20, rootTr, 0LL, 0LL);
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
  sub_1BCA784(
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
  sub_1BCA784(
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

  return BattleEffectControl__SetBuffIconObject_43446016(this, bufflist, this->fields.buffIconObject, v3);
}


UnityEngine_GameObject_o *__fastcall BattleEffectControl__SetBuffIconObject_43446016(
        BattleEffectControl_o *this,
        BattleBuffData_ShowBuffData_array *bufflist,
        UnityEngine_GameObject_o *buffIcon,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *v9; // x22
  UnityEngine_GameObject_o *Object; // x0
  __int64 v11; // x1
  __int64 v12; // x8
  unsigned __int64 v13; // x25
  float v14; // s8
  BattleBuffData_ShowBuffData_o *v15; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v17; // x24
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1877F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, bufflist, buffIcon);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v7, v8);
    byte_4B1877F = 1;
  }
  if ( !bufflist || !*(_QWORD *)&bufflist->max_length )
    return 0LL;
  v9 = (UnityEngine_GameObject_o *)sub_1BCAA2C(UnityEngine_GameObject_TypeInfo, bufflist, buffIcon, method);
  UnityEngine_GameObject___ctor_70135992(v9, 0LL);
  v12 = *(_QWORD *)&bufflist->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    v14 = 0.0;
    do
    {
      if ( v13 >= (unsigned int)v12 )
        sub_1BCAA44(Object, v11);
      if ( !v9
        || (v15 = bufflist->m_Items[v13],
            transform = UnityEngine_GameObject__get_transform(v9, 0LL),
            (Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, buffIcon, transform, 0LL, 0LL)) == 0LL)
        || (v17 = Object,
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    Object,
                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___)) == 0LL)
        || (BattleServantBuffIconComponent__setIcon_44753512((BattleServantBuffIconComponent_o *)Object, v15, 0LL),
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL)) == 0LL) )
      {
        sub_1BCAA3C(Object, v11);
      }
      v19.fields.y = 0.0;
      v19.fields.z = 0.0;
      v19.fields.x = v14;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v19, 0LL);
      LODWORD(v12) = bufflist->max_length;
      ++v13;
      v14 = v14 + -44.0;
    }
    while ( (__int64)v13 < (int)v12 );
  }
  return v9;
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  struct Spawner_o **p_spawner; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  UnityEngine_Object_o *spawner; // x21
  Spawner_o *v16; // x0
  __int64 v17; // x1
  struct UnityEngine_GameObject_array *EffectList; // x8
  struct UnityEngine_GameObject_array *v19; // x8
  struct UnityEngine_GameObject_array *v20; // x8
  struct UnityEngine_GameObject_array *v21; // x8
  struct UnityEngine_GameObject_array *v22; // x8
  struct UnityEngine_GameObject_array *v23; // x8
  struct UnityEngine_GameObject_array *damageObjectlist; // x8
  struct UnityEngine_GameObject_array *v25; // x8
  struct UnityEngine_GameObject_array *v26; // x8
  struct UnityEngine_GameObject_array *v27; // x8
  struct UnityEngine_GameObject_array *buffTextObjectlist; // x8
  unsigned __int64 v29; // x23
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v31; // x21
  struct UnityEngine_GameObject_array *buffTextClassIconObjectList; // x8
  unsigned __int64 v33; // x23
  unsigned __int64 v34; // x9
  UnityEngine_Object_o *v35; // x21

  if ( (byte_4B1877E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_Spawner__get_Instance__, v4, v5);
    byte_4B1877E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  this->fields.spawner = (struct Spawner_o *)Instance;
  p_spawner = &this->fields.spawner;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.spawner, (int64_t)Instance, v8, v9, v10, v11, v12, v13);
  spawner = (UnityEngine_Object_o *)this->fields.spawner;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  v16 = (Spawner_o *)UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL);
  if ( ((unsigned __int8)v16 & 1) == 0 )
    return;
  EffectList = this->fields.EffectList;
  if ( !EffectList )
    goto LABEL_57;
  if ( EffectList->max_length <= 2 )
    goto LABEL_59;
  v16 = this->fields.spawner;
  if ( !v16 )
    goto LABEL_57;
  Spawner__Precache_38679812(v16, (UnityEngine_Object_o *)EffectList->m_Items[2], 5, 0LL);
  v19 = this->fields.EffectList;
  if ( !v19 )
    goto LABEL_57;
  if ( v19->max_length <= 3 )
    goto LABEL_59;
  v16 = this->fields.spawner;
  if ( !v16 )
    goto LABEL_57;
  Spawner__Precache_38679812(v16, (UnityEngine_Object_o *)v19->m_Items[3], 5, 0LL);
  v20 = this->fields.EffectList;
  if ( !v20 )
    goto LABEL_57;
  if ( v20->max_length <= 4 )
    goto LABEL_59;
  v16 = this->fields.spawner;
  if ( !v16 )
    goto LABEL_57;
  Spawner__Precache_38679812(v16, (UnityEngine_Object_o *)v20->m_Items[4], 50, 0LL);
  v21 = this->fields.EffectList;
  if ( !v21 )
    goto LABEL_57;
  if ( v21->max_length <= 6 )
    goto LABEL_59;
  v16 = this->fields.spawner;
  if ( !v16 )
    goto LABEL_57;
  Spawner__Precache_38679812(v16, (UnityEngine_Object_o *)v21->m_Items[6], 3, 0LL);
  v22 = this->fields.EffectList;
  if ( !v22 )
    goto LABEL_57;
  if ( v22->max_length <= 7 )
    goto LABEL_59;
  v16 = this->fields.spawner;
  if ( !v16 )
    goto LABEL_57;
  Spawner__Precache_38679812(v16, (UnityEngine_Object_o *)v22->m_Items[7], 5, 0LL);
  v23 = this->fields.EffectList;
  if ( !v23 )
    goto LABEL_57;
  if ( v23->max_length <= 9 )
    goto LABEL_59;
  v16 = this->fields.spawner;
  if ( !v16 )
    goto LABEL_57;
  Spawner__Precache_38679812(v16, (UnityEngine_Object_o *)v23->m_Items[9], 50, 0LL);
  damageObjectlist = this->fields.damageObjectlist;
  if ( !damageObjectlist )
    goto LABEL_57;
  if ( !damageObjectlist->max_length )
    goto LABEL_59;
  v16 = this->fields.spawner;
  if ( !v16 )
    goto LABEL_57;
  Spawner__Precache_38679812(v16, (UnityEngine_Object_o *)damageObjectlist->m_Items[0], 5, 0LL);
  v25 = this->fields.damageObjectlist;
  if ( !v25 )
    goto LABEL_57;
  if ( v25->max_length <= 1 )
    goto LABEL_59;
  v16 = this->fields.spawner;
  if ( !v16 )
    goto LABEL_57;
  Spawner__Precache_38679812(v16, (UnityEngine_Object_o *)v25->m_Items[1], 5, 0LL);
  v26 = this->fields.damageObjectlist;
  if ( !v26 )
    goto LABEL_57;
  if ( v26->max_length <= 2 )
    goto LABEL_59;
  v16 = this->fields.spawner;
  if ( !v16 )
    goto LABEL_57;
  Spawner__Precache_38679812(v16, (UnityEngine_Object_o *)v26->m_Items[2], 5, 0LL);
  v27 = this->fields.damageObjectlist;
  if ( !v27 )
    goto LABEL_57;
  if ( v27->max_length <= 3 )
LABEL_59:
    sub_1BCAA44(v16, v17);
  v16 = this->fields.spawner;
  if ( !v16 )
    goto LABEL_57;
  Spawner__Precache_38679812(v16, (UnityEngine_Object_o *)v27->m_Items[3], 5, 0LL);
  buffTextObjectlist = this->fields.buffTextObjectlist;
  if ( !buffTextObjectlist )
    goto LABEL_57;
  v29 = 0LL;
  while ( 1 )
  {
    max_length = buffTextObjectlist->max_length;
    if ( (__int64)v29 >= (int)max_length )
      break;
    if ( v29 >= max_length )
      goto LABEL_59;
    v31 = (UnityEngine_Object_o *)buffTextObjectlist->m_Items[v29];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    v16 = (Spawner_o *)UnityEngine_Object__op_Equality(v31, 0LL, 0LL);
    if ( ((unsigned __int8)v16 & 1) == 0 )
    {
      v16 = *p_spawner;
      if ( !*p_spawner )
        goto LABEL_57;
      Spawner__Precache_38679812(v16, v31, 5, 0LL);
    }
    buffTextObjectlist = this->fields.buffTextObjectlist;
    ++v29;
    if ( !buffTextObjectlist )
      goto LABEL_57;
  }
  buffTextClassIconObjectList = this->fields.buffTextClassIconObjectList;
  if ( !buffTextClassIconObjectList )
LABEL_57:
    sub_1BCAA3C(v16, v17);
  v33 = 0LL;
  while ( 1 )
  {
    v34 = buffTextClassIconObjectList->max_length;
    if ( (__int64)v33 >= (int)v34 )
      break;
    if ( v33 >= v34 )
      goto LABEL_59;
    v35 = (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[v33];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    v16 = (Spawner_o *)UnityEngine_Object__op_Equality(v35, 0LL, 0LL);
    if ( ((unsigned __int8)v16 & 1) == 0 )
    {
      v16 = *p_spawner;
      if ( !*p_spawner )
        goto LABEL_57;
      Spawner__Precache_38679812(v16, v35, 5, 0LL);
    }
    buffTextClassIconObjectList = this->fields.buffTextClassIconObjectList;
    ++v33;
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
    sub_1BCAA3C(0LL, obj);
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
        sub_1BCAA44(this, color);
      spawner = this->fields.spawner;
      if ( spawner )
      {
        buffTextClassIconObjectList = (struct UnityEngine_GameObject_array *)((char *)buffTextClassIconObjectList
                                                                            + 8 * v5);
        return Spawner__Spawn_38681464(spawner, (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[0], 0LL);
      }
LABEL_10:
      sub_1BCAA3C(spawner, *(_QWORD *)&color);
    }
    if ( max_length >= 1 )
    {
      spawner = this->fields.spawner;
      if ( spawner )
        return Spawner__Spawn_38681464(spawner, (UnityEngine_Object_o *)buffTextClassIconObjectList->m_Items[0], 0LL);
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
        sub_1BCAA44(this, color);
      spawner = this->fields.spawner;
      if ( spawner )
      {
        buffTextObjectlist = (struct UnityEngine_GameObject_array *)((char *)buffTextObjectlist + 8 * v5);
        return Spawner__Spawn_38681464(spawner, (UnityEngine_Object_o *)buffTextObjectlist->m_Items[0], 0LL);
      }
LABEL_10:
      sub_1BCAA3C(spawner, *(_QWORD *)&color);
    }
    if ( max_length >= 1 )
    {
      spawner = this->fields.spawner;
      if ( spawner )
        return Spawner__Spawn_38681464(spawner, (UnityEngine_Object_o *)buffTextObjectlist->m_Items[0], 0LL);
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
          return Spawner__Spawn_38681464((Spawner_o *)this, *m_Items, 0LL);
        }
LABEL_18:
        sub_1BCAA3C(this, critical);
      }
    }
    else if ( resist )
    {
      if ( max_length > 3 )
      {
        if ( this )
        {
          m_Items = (UnityEngine_Object_o **)&damageObjectlist->m_Items[3];
          return Spawner__Spawn_38681464((Spawner_o *)this, *m_Items, 0LL);
        }
        goto LABEL_18;
      }
    }
    else if ( max_length )
    {
      if ( this )
      {
        m_Items = (UnityEngine_Object_o **)damageObjectlist->m_Items;
        return Spawner__Spawn_38681464((Spawner_o *)this, *m_Items, 0LL);
      }
      goto LABEL_18;
    }
LABEL_19:
    sub_1BCAA44(this, critical);
  }
  if ( max_length <= 1 )
    goto LABEL_19;
  if ( !this )
    goto LABEL_18;
  m_Items = (UnityEngine_Object_o **)&damageObjectlist->m_Items[1];
  return Spawner__Spawn_38681464((Spawner_o *)this, *m_Items, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA44(this, id);
    this = (BattleEffectControl_o *)this->fields.spawner;
    if ( this )
      return Spawner__Spawn_38681464((Spawner_o *)this, (UnityEngine_Object_o *)EffectList->m_Items[id], 0LL);
LABEL_8:
    sub_1BCAA3C(this, *(_QWORD *)&id);
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
    sub_1BCAA3C(this, *(_QWORD *)&id);
  max_length = EffectList->max_length;
  if ( max_length <= id )
    return 0LL;
  if ( max_length <= (unsigned int)id )
    sub_1BCAA44(this, id);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t effectType; // w1
  BattleEffectControl_o *v14; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x2
  UnityEngine_Transform_o *v17; // x0
  __int64 *v18; // x8

  v8 = this;
  if ( (byte_4B18780 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19100/*"effect/obj_treasure_p"*/, *(_QWORD *)&rarity, rootTr);
    sub_1BCA7E0(&StringLiteral_24303/*"treasure"*/, v9, v10);
    this = (BattleEffectControl_o *)sub_1BCA7E0(&StringLiteral_19101/*"effect/obj_treasure_pp"*/, v11, v12);
    byte_4B18780 = 1;
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
      v14 = this;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_24303/*"treasure"*/, 0, 0LL);
      if ( (unsigned int)(rarity - 3) > 2 )
      {
        if ( (unsigned int)(rarity - 6) > 2 )
          return (UnityEngine_GameObject_o *)v14;
        goto LABEL_13;
      }
      goto LABEL_12;
    }
LABEL_16:
    sub_1BCAA3C(this, *(_QWORD *)&rarity);
  }
  this = (BattleEffectControl_o *)BattleEffectControl__CreateDropItemEffectObject(
                                    v8,
                                    effectType,
                                    rootTr,
                                    (const MethodInfo *)dropInfo);
  if ( !this )
    goto LABEL_16;
  v14 = this;
  v17 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(v17, (System_String_o *)StringLiteral_24303/*"treasure"*/, 0, 0LL);
  if ( rarity == 1002 )
  {
LABEL_13:
    v18 = &StringLiteral_19101/*"effect/obj_treasure_pp"*/;
    goto LABEL_14;
  }
  if ( rarity == 1001 )
  {
LABEL_12:
    v18 = &StringLiteral_19100/*"effect/obj_treasure_p"*/;
LABEL_14:
    BaseMonoBehaviour__createObject_38952608((BaseMonoBehaviour_o *)v8, (System_String_o *)*v18, NodeFromName, 0LL, 0LL);
  }
  return (UnityEngine_GameObject_o *)v14;
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._specialInvincibleObject_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}