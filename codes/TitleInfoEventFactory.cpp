void __fastcall TitleInfoEventFactory___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  int64_t v7; // x1
  struct TitleInfoEventFactory_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1
  struct TitleInfoEventFactory_StaticFields *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  struct TitleInfoEventFactory_StaticFields *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x1
  struct TitleInfoEventFactory_StaticFields *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  struct TitleInfoEventFactory_StaticFields *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x1
  struct TitleInfoEventFactory_StaticFields *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x1
  struct TitleInfoEventFactory_StaticFields *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7

  if ( (byte_4BDA7F2 & 1) == 0 )
  {
    sub_1C21E38(&TitleInfoEventFactory_TypeInfo);
    sub_1C21E38(&StringLiteral_19158/*"ef_factory_open"*/);
    sub_1C21E38(&StringLiteral_19159/*"ef_factory_open1"*/);
    sub_1C21E38(&StringLiteral_19694/*"factory_icon_possible"*/);
    sub_1C21E38(&StringLiteral_19693/*"factory_bg_rate"*/);
    sub_1C21E38(&StringLiteral_19157/*"ef_factory_flash1"*/);
    sub_1C21E38(&StringLiteral_19696/*"factory_title_chocolate"*/);
    sub_1C21E38(&StringLiteral_19695/*"factory_line"*/);
    sub_1C21E38(&StringLiteral_19156/*"ef_factory_flash"*/);
    byte_4BDA7F2 = 1;
  }
  TitleInfoEventFactory_TypeInfo->static_fields->SPRITE_NAME_TITLE = (struct System_String_o *)StringLiteral_19696/*"factory_title_chocolate"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)TitleInfoEventFactory_TypeInfo->static_fields,
    StringLiteral_19696/*"factory_title_chocolate"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_19694/*"factory_icon_possible"*/;
  static_fields = TitleInfoEventFactory_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_POSSIBLE = (struct System_String_o *)StringLiteral_19694/*"factory_icon_possible"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->SPRITE_NAME_POSSIBLE, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_19695/*"factory_line"*/;
  v16 = TitleInfoEventFactory_TypeInfo->static_fields;
  v16->SPRITE_NAME_LINE = (struct System_String_o *)StringLiteral_19695/*"factory_line"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->SPRITE_NAME_LINE, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_19693/*"factory_bg_rate"*/;
  v24 = TitleInfoEventFactory_TypeInfo->static_fields;
  v24->SPRITE_NAME_BG_RATE = (struct System_String_o *)StringLiteral_19693/*"factory_bg_rate"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v24->SPRITE_NAME_BG_RATE, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_19158/*"ef_factory_open"*/;
  v32 = TitleInfoEventFactory_TypeInfo->static_fields;
  v32->OBJECT_NAME_EFFECT_1 = (struct System_String_o *)StringLiteral_19158/*"ef_factory_open"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v32->OBJECT_NAME_EFFECT_1, v31, v33, v34, v35, v36, v37, v38);
  v39 = StringLiteral_19156/*"ef_factory_flash"*/;
  v40 = TitleInfoEventFactory_TypeInfo->static_fields;
  v40->OBJECT_NAME_EFFECT_2 = (struct System_String_o *)StringLiteral_19156/*"ef_factory_flash"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v40->OBJECT_NAME_EFFECT_2, v39, v41, v42, v43, v44, v45, v46);
  v47 = StringLiteral_19159/*"ef_factory_open1"*/;
  v48 = TitleInfoEventFactory_TypeInfo->static_fields;
  v48->EFFECT_ANIMATION_START_1 = (struct System_String_o *)StringLiteral_19159/*"ef_factory_open1"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v48->EFFECT_ANIMATION_START_1, v47, v49, v50, v51, v52, v53, v54);
  v55 = StringLiteral_19157/*"ef_factory_flash1"*/;
  v56 = TitleInfoEventFactory_TypeInfo->static_fields;
  v56->EFFECT_ANIMATION_START_2 = (struct System_String_o *)StringLiteral_19157/*"ef_factory_flash1"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v56->EFFECT_ANIMATION_START_2, v55, v57, v58, v59, v60, v61, v62);
}


void __fastcall TitleInfoEventFactory___ctor(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventFactory__Close(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Object_o *v13; // x19
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct UnityEngine_Animation_o **p_animationData; // x19
  UnityEngine_Object_o *v21; // x20
  struct UnityEngine_Animation_o *animationData; // t1
  UnityEngine_Object_o *v23; // x20

  if ( (byte_4BDA7EC & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDA7EC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.effectAsset = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.effectAsset, 0LL, v5, v6, v7, v8, v9, v10);
  p_simpleAnimationData = (PartyOrganizationUtility_o *)&this->fields.simpleAnimationData;
  simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
  this->fields.effectIndex = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationData, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)p_simpleAnimationData->klass;
    if ( p_simpleAnimationData->klass )
    {
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_70869800(v13, 0LL);
      p_simpleAnimationData->klass = 0LL;
LABEL_18:
      sub_1C21DDC(p_simpleAnimationData, 0LL, v14, v15, v16, v17, v18, v19);
      return;
    }
    goto LABEL_20;
  }
  animationData = this->fields.animationData;
  p_animationData = &this->fields.animationData;
  v21 = (UnityEngine_Object_o *)animationData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)*p_animationData;
    if ( *p_animationData )
    {
      v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_70869800(v23, 0LL);
      p_simpleAnimationData = (PartyOrganizationUtility_o *)p_animationData;
      *p_animationData = 0LL;
      goto LABEL_18;
    }
LABEL_20:
    sub_1C22094(gameObject, v4);
  }
}


void __fastcall TitleInfoEventFactory__LvUpIconCreate(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *unitDictionary; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4BDA7EF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
    byte_4BDA7EF = 1;
  }
  unitDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary;
  if ( !unitDictionary
    || (unitDictionary = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                   unitDictionary,
                                                                                   this->fields.lvUpIndex,
                                                                                   (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__)) == 0LL )
  {
    sub_1C22094(unitDictionary, method);
  }
  if ( SHIDWORD(unitDictionary->fields._syncRoot) >= 1 )
    TitleInfoEventFactoryUnit__CreateIcon((TitleInfoEventFactoryUnit_o *)unitDictionary, this->fields.lvUpCount, 1, v4);
}


void __fastcall TitleInfoEventFactory__Open(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  _DWORD *v6; // x20
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v8; // x22
  Il2CppObject *v9; // x0
  UISprite_o *titleSprite; // x24
  TitleInfoEventFactory_c *v11; // x8
  System_String_o *SPRITE_NAME_TITLE; // x25
  unsigned int v13; // w29
  int v14; // w28
  __int64 v15; // x21
  int v16; // w9
  _DWORD *v17; // x25
  __int64 v18; // x8
  unsigned int v19; // w9
  int v20; // w23
  Il2CppObject *titleInfoEventFactoryUnitPrefab; // x26
  Il2CppObject *v22; // x26
  const MethodInfo *v23; // x4
  struct EventDetailEntity_o *v24; // x8
  Il2CppObject *v25; // x26
  ShopEntity_o *v26; // x25
  NetworkManager_c *v27; // x0
  int64_t userIdNumber; // x26
  int32_t ItemID; // w2
  int v30; // w21
  Il2CppObject *gameObject; // x25
  Il2CppObject *v32; // x25
  UILabel_o *rateLabel; // x20
  System_String_o *v34; // x21
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UserItemMaster_o *v40; // [xsp+0h] [xbp-80h]
  DataMasterBase_TMaster__TEntity__PKType__o *v41; // [xsp+8h] [xbp-78h]
  int v42; // [xsp+14h] [xbp-6Ch]
  double v43; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4BDA7EB & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventFactoryMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C21E38(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__);
    sub_1C21E38(&double_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TitleInfoEventFactory_TypeInfo);
    sub_1C21E38(&StringLiteral_5741/*"EVENT_FACTORY_GET_EP_RATE"*/);
    byte_4BDA7EB = 1;
  }
  if ( this->fields.eventDetailEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_64;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventFactoryMaster___);
    eventDetailEntity = this->fields.eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_64;
    if ( !Instance )
      goto LABEL_64;
    Instance = EventFactoryMaster__GetDatas((EventFactoryMaster_o *)Instance, eventDetailEntity->fields.eventId, 0LL);
    if ( !Instance )
      goto LABEL_64;
    v6 = Instance;
    v42 = *((_DWORD *)Instance + 6);
    if ( v42 < 1 )
      return;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_64;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ShopMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_64;
    v8 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserShopMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_64;
    v9 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
    titleSprite = this->fields.titleSprite;
    v40 = (UserItemMaster_o *)v9;
    v41 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    v11 = TitleInfoEventFactory_TypeInfo;
    if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      v11 = TitleInfoEventFactory_TypeInfo;
    }
    SPRITE_NAME_TITLE = v11->static_fields->SPRITE_NAME_TITLE;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(titleSprite, SPRITE_NAME_TITLE, 0LL);
    AtlasManager__SetEventUI(
      this->fields.createSprite,
      TitleInfoEventFactory_TypeInfo->static_fields->SPRITE_NAME_POSSIBLE,
      0LL);
    AtlasManager__SetEventUI(
      this->fields.lineSprite,
      TitleInfoEventFactory_TypeInfo->static_fields->SPRITE_NAME_LINE,
      0LL);
    Instance = (void *)AtlasManager__SetEventUI(
                         this->fields.bgRateSprite,
                         TitleInfoEventFactory_TypeInfo->static_fields->SPRITE_NAME_BG_RATE,
                         0LL);
    v13 = 0;
    v14 = 1000;
    do
    {
      if ( v13 >= v6[6] )
LABEL_65:
        sub_1C2209C(Instance, v4);
      v15 = *(_QWORD *)&v6[2 * v13 + 8];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      if ( !v15 )
        goto LABEL_64;
      if ( !v8 )
        goto LABEL_64;
      Instance = UserShopMaster__GetEntityDefinitely(
                   (UserShopMaster_o *)v8,
                   *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                   *(_DWORD *)(v15 + 24),
                   0LL);
      if ( !Instance )
        goto LABEL_64;
      v16 = *((_DWORD *)Instance + 7);
      v17 = Instance;
      if ( v16 <= 0 )
      {
        Instance = v41;
        if ( !v41 )
          goto LABEL_64;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v41,
                     *(_DWORD *)(v15 + 24),
                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_64;
        v26 = (ShopEntity_o *)Instance;
        Instance = (void *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BD6FF5 )
          {
            sub_1C21E38(&NetworkManager_TypeInfo);
            byte_4BD6FF5 = 1;
          }
          v27 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v27 = NetworkManager_TypeInfo;
          }
          userIdNumber = v27->static_fields->userIdNumber;
          ItemID = ShopEntity__GetItemID(v26, 0LL);
          Instance = v40;
          if ( !v40 )
            goto LABEL_64;
          Instance = UserItemMaster__GetEntityDefinitely(v40, userIdNumber, ItemID, 0LL);
          if ( !Instance )
            goto LABEL_64;
          v30 = *((_DWORD *)Instance + 7);
          Instance = (void *)ShopEntity__GetPrice(v26, 0LL);
          if ( v30 >= (int)Instance )
          {
            Instance = this->fields.createSprite;
            if ( !Instance )
              goto LABEL_64;
            gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v32 = UnityEngine_Object__Instantiate_object_(
                    gameObject,
                    (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
            Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v32, 0LL, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v32 )
                goto LABEL_64;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v32, 1, 0LL);
              GameObjectExtensions__SafeSetParent(
                (UnityEngine_GameObject_o *)v32,
                (UnityEngine_Component_o *)this->fields.grid,
                0LL);
            }
          }
        }
      }
      else
      {
        v18 = *(_QWORD *)(v15 + 40);
        if ( !v18 )
          goto LABEL_64;
        v19 = v16 - 1;
        if ( v19 >= *(_DWORD *)(v18 + 24) )
          goto LABEL_65;
        v20 = *(_DWORD *)(v18 + 4LL * v19 + 32);
        titleInfoEventFactoryUnitPrefab = (Il2CppObject *)this->fields.titleInfoEventFactoryUnitPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v14 += v20;
        v22 = UnityEngine_Object__Instantiate_object_(
                titleInfoEventFactoryUnitPrefab,
                (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          GameObjectExtensions__SafeSetParent(
            (UnityEngine_GameObject_o *)v22,
            (UnityEngine_Component_o *)this->fields.grid,
            0LL);
          if ( !v22 )
            goto LABEL_64;
          Instance = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v22,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___);
          v24 = this->fields.eventDetailEntity;
          if ( !v24 )
            goto LABEL_64;
          v25 = (Il2CppObject *)Instance;
          if ( !Instance )
            goto LABEL_64;
          TitleInfoEventFactoryUnit__Open(
            (TitleInfoEventFactoryUnit_o *)Instance,
            v24->fields.eventId,
            *(_DWORD *)(v15 + 16),
            v17[7],
            v23);
          Instance = this->fields.unitDictionary;
          if ( !Instance )
            goto LABEL_64;
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)Instance,
            *(_DWORD *)(v15 + 16),
            v25,
            (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__);
        }
      }
      ++v13;
    }
    while ( v42 != v13 );
    rateLabel = this->fields.rateLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_5741/*"EVENT_FACTORY_GET_EP_RATE"*/, 0LL);
    v43 = (double)v14 / 1000.0;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v43, v35, v36, v37);
    Instance = System_String__Format(v34, v38, 0LL);
    if ( !rateLabel
      || (UILabel__set_text(rateLabel, (System_String_o *)Instance, 0LL), (Instance = this->fields.RateBase) == 0LL)
      || (v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL),
          GameObjectExtensions__SetParent(v39, (UnityEngine_Component_o *)this->fields.grid, 0LL),
          (Instance = this->fields.grid) == 0LL) )
    {
LABEL_64:
      sub_1C22094(Instance, v4);
    }
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 440LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 448LL));
  }
}


void __fastcall TitleInfoEventFactory__RateChange(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  int v6; // w24
  _DWORD *v7; // x20
  UserShopMaster_o *v8; // x22
  unsigned int v9; // w28
  int v10; // w25
  __int64 v11; // x26
  int v12; // w8
  bool v13; // vf
  int v14; // w8
  __int64 v15; // x9
  UILabel_o *rateLabel; // x19
  System_String_o *v17; // x20
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  double v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BDA7F1 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventFactoryMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C21E38(&double_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_5741/*"EVENT_FACTORY_GET_EP_RATE"*/);
    byte_4BDA7F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventFactoryMaster___);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( !eventDetailEntity )
    goto LABEL_30;
  if ( !Instance )
    goto LABEL_30;
  Instance = EventFactoryMaster__GetDatas((EventFactoryMaster_o *)Instance, eventDetailEntity->fields.eventId, 0LL);
  if ( !Instance )
    goto LABEL_30;
  v6 = *((_DWORD *)Instance + 6);
  v7 = Instance;
  if ( v6 < 1 )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserShopMaster___);
  v8 = (UserShopMaster_o *)Instance;
  v9 = 0;
  v10 = 1000;
  do
  {
    if ( v9 >= v7[6] )
LABEL_31:
      sub_1C2209C(Instance, v4);
    v11 = *(_QWORD *)&v7[2 * v9 + 8];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    Instance = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager_TypeInfo;
    }
    if ( !v11 )
      goto LABEL_30;
    if ( !v8 )
      goto LABEL_30;
    Instance = UserShopMaster__GetEntityDefinitely(
                 v8,
                 *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                 *(_DWORD *)(v11 + 24),
                 0LL);
    if ( !Instance )
      goto LABEL_30;
    v12 = *((_DWORD *)Instance + 7);
    v13 = __OFSUB__(v12, 1);
    v14 = v12 - 1;
    if ( v14 < 0 == v13 )
    {
      v15 = *(_QWORD *)(v11 + 40);
      if ( !v15 )
        goto LABEL_30;
      if ( (unsigned int)v14 >= *(_DWORD *)(v15 + 24) )
        goto LABEL_31;
      v10 += *(_DWORD *)(v15 + 4LL * (unsigned int)v14 + 32);
    }
    ++v9;
  }
  while ( v6 != v9 );
  rateLabel = this->fields.rateLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5741/*"EVENT_FACTORY_GET_EP_RATE"*/, 0LL);
  v22 = (double)v10 / 1000.0;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v22, v18, v19, v20);
  Instance = System_String__Format(v17, v21, 0LL);
  if ( !rateLabel )
LABEL_30:
    sub_1C22094(Instance, v4);
  UILabel__set_text(rateLabel, (System_String_o *)Instance, 0LL);
}


void __fastcall TitleInfoEventFactory__Setup(
        TitleInfoEventFactory_o *this,
        EventDetailEntity_o *eventDetailEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_unitDictionary; // x19
  struct System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *unitDictionary; // t1
  System_Collections_Generic_Dictionary_int__object__o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BDA7EA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo);
    byte_4BDA7EA = 1;
  }
  this->fields.eventDetailEntity = eventDetailEntity;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.eventDetailEntity,
    (int64_t)eventDetailEntity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  unitDictionary = this->fields.unitDictionary;
  p_unitDictionary = (PartyOrganizationUtility_o *)&this->fields.unitDictionary;
  if ( !unitDictionary )
  {
    v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor_53170320(
      v12,
      10,
      (const MethodInfo_32B5090 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__);
    p_unitDictionary->klass = (PartyOrganizationUtility_c *)v12;
    sub_1C21DDC(p_unitDictionary, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventFactory__StartLvUpEffect(
        TitleInfoEventFactory_o *this,
        ShopEntity_o *shopEntity,
        int32_t buyCount,
        System_Action_o *callback,
        AssetData_o *effectAsset,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *unitDictionary; // x24
  UnityEngine_GameObject_o *TargetId; // x0
  const MethodInfo *v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_Object_o *Object_39013000; // x0
  UnityEngine_GameObject_c **v27; // x20
  Il2CppObject *v28; // x0
  UnityEngine_GameObject_o *v29; // x21
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *v31; // x20
  float v32; // s0
  float v33; // s1
  float v34; // s2
  Il2CppObject *Component_object; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  Il2CppObject *v43; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  SimpleAnimation_o *v51; // x21
  TitleInfoEventFactoryUnit_c *klass; // x8
  UnityEngine_GameObject_o *v53; // x21
  __int64 v54; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v56; // x0
  UnityEngine_Animation_o *v57; // x20
  UnityEngine_Animation_o *v58; // x20
  UnityEngine_Animation_o *v59; // x20
  System_String_o *v60; // x0
  SimpleAnimation_o *v61; // x20
  System_String_o *name; // x0
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDA7EE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SimpleAnimation_State_TypeInfo);
    sub_1C21E38(&TitleInfoEventFactory_TypeInfo);
    sub_1C21E38(&StringLiteral_8671/*"LvUpIconCreate"*/);
    byte_4BDA7EE = 1;
  }
  if ( shopEntity && shopEntity->fields.purchaseType == 17 )
  {
    unitDictionary = this->fields.unitDictionary;
    TargetId = (UnityEngine_GameObject_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
    if ( !unitDictionary )
      goto LABEL_51;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)unitDictionary,
           (int32_t)TargetId,
           (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__) )
    {
      this->fields.effectAsset = effectAsset;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.effectAsset,
        (int64_t)effectAsset,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      this->fields.animationEndCallback = callback;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.animationEndCallback,
        (int64_t)callback,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      this->fields.effectIndex = 1;
      this->fields.lvUpIndex = ShopEntity__get_TargetId(shopEntity, 0LL);
      this->fields.lvUpCount = buyCount;
      TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
      if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      if ( !effectAsset )
        goto LABEL_51;
      Object_39013000 = AssetData__GetObject_39013000(
                          effectAsset,
                          TitleInfoEventFactory_TypeInfo->static_fields->OBJECT_NAME_EFFECT_1,
                          0LL);
      v27 = (UnityEngine_GameObject_c **)Object_39013000;
      if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        if ( Object_39013000 )
          goto LABEL_12;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( v27 )
        {
LABEL_12:
          if ( *v27 == UnityEngine_GameObject_TypeInfo )
            v28 = (Il2CppObject *)v27;
          else
            v28 = 0LL;
LABEL_20:
          TargetId = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   v28,
                                                   (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( this->fields.unitDictionary )
          {
            v29 = TargetId;
            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                     (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary,
                     this->fields.lvUpIndex,
                     (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
            GameObjectExtensions__SafeSetParent(v29, (UnityEngine_Component_o *)Item, 0LL);
            if ( v29 )
            {
              TargetId = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v29, 0LL);
              if ( this->fields.unitDictionary )
              {
                v31 = (UnityEngine_Transform_o *)TargetId;
                TargetId = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                         (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary,
                                                         this->fields.lvUpIndex,
                                                         (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
                if ( TargetId )
                {
                  *(UnityEngine_Vector3_o *)&v32 = TitleInfoEventFactoryUnit__GetLvUpEffectOffset(
                                                     (TitleInfoEventFactoryUnit_o *)TargetId,
                                                     v13);
                  if ( v31 )
                  {
                    v63.fields.z = v34 + this->fields.lvUpAnimetionOffset.fields.z;
                    v63.fields.y = v33 + this->fields.lvUpAnimetionOffset.fields.y;
                    v63.fields.x = v32 + this->fields.lvUpAnimetionOffset.fields.x;
                    UnityEngine_Transform__set_localPosition(v31, v63, 0LL);
                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                         v29,
                                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                    this->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
                    p_simpleAnimationData = &this->fields.simpleAnimationData;
                    sub_1C21DDC(
                      (PartyOrganizationUtility_o *)&this->fields.simpleAnimationData,
                      (int64_t)Component_object,
                      v37,
                      v38,
                      v39,
                      v40,
                      v41,
                      v42);
                    v43 = UnityEngine_GameObject__GetComponent_object_(
                            v29,
                            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                    this->fields.animationData = (struct UnityEngine_Animation_o *)v43;
                    p_animationData = &this->fields.animationData;
                    sub_1C21DDC(
                      (PartyOrganizationUtility_o *)&this->fields.animationData,
                      (int64_t)v43,
                      v45,
                      v46,
                      v47,
                      v48,
                      v49,
                      v50);
                    if ( UnityEngine_Object__op_Inequality(
                           (UnityEngine_Object_o *)this->fields.simpleAnimationData,
                           0LL,
                           0LL) )
                    {
                      TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
                      v51 = *p_simpleAnimationData;
                      if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
                      if ( v51 )
                      {
                        TargetId = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                                                 v51,
                                                                 TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                                                                 0LL);
                        if ( TargetId )
                        {
                          klass = (TitleInfoEventFactoryUnit_c *)TargetId->klass;
                          v53 = TargetId;
                          v54 = *(unsigned __int16 *)(&TargetId->klass->_2.bitflags2 + 3);
                          if ( *(_WORD *)(&TargetId->klass->_2.bitflags2 + 3) )
                          {
                            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
                            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                            {
                              --v54;
                              p_offset += 2;
                              if ( !v54 )
                                goto LABEL_34;
                            }
                            v56 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
                          }
                          else
                          {
LABEL_34:
                            v56 = sub_1C73E18(TargetId, SimpleAnimation_State_TypeInfo, 14LL);
                          }
                          TargetId = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v56)(
                                                                   v53,
                                                                   *(_QWORD *)(v56 + 8));
                          if ( *p_simpleAnimationData )
                          {
                            SimpleAnimation__set_clip(
                              *p_simpleAnimationData,
                              (UnityEngine_AnimationClip_o *)TargetId,
                              0LL);
                            v61 = *p_simpleAnimationData;
                            if ( v61 )
                            {
                              TargetId = (UnityEngine_GameObject_o *)v61[1].monitor;
                              if ( TargetId )
                              {
                                name = UnityEngine_Object__get_name((UnityEngine_Object_o *)TargetId, 0LL);
                                SimpleAnimation__Play_65253852(v61, name, 0LL);
                                goto LABEL_50;
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      v57 = *p_animationData;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v57, 0LL, 0LL) )
                        goto LABEL_50;
                      TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
                      v58 = *p_animationData;
                      if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
                      if ( v58 )
                      {
                        TargetId = (UnityEngine_GameObject_o *)UnityEngine_Animation__GetClip(
                                                                 v58,
                                                                 TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                                                                 0LL);
                        if ( *p_animationData )
                        {
                          UnityEngine_Animation__set_clip(
                            *p_animationData,
                            (UnityEngine_AnimationClip_o *)TargetId,
                            0LL);
                          v59 = *p_animationData;
                          if ( *p_animationData )
                          {
                            TargetId = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(
                                                                     *p_animationData,
                                                                     0LL);
                            if ( TargetId )
                            {
                              v60 = UnityEngine_Object__get_name((UnityEngine_Object_o *)TargetId, 0LL);
                              UnityEngine_Animation__Play_70614020(v59, v60, 0LL);
LABEL_50:
                              UnityEngine_MonoBehaviour__Invoke(
                                (UnityEngine_MonoBehaviour_o *)this,
                                (System_String_o *)StringLiteral_8671/*"LvUpIconCreate"*/,
                                this->fields.lvUpIconCreateTime,
                                0LL);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_51:
          sub_1C22094(TargetId, v13);
        }
      }
      v28 = 0LL;
      goto LABEL_20;
    }
  }
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall TitleInfoEventFactory__StartRateEffect(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  AssetData_o *effectAsset; // x20
  TitleInfoEventFactory_c *v10; // x0
  UnityEngine_Object_o *Object_39013000; // x20
  Il2CppObject *v12; // x0
  PartyOrganizationUtility_o *p_animationEndCallback; // x19
  struct System_Action_o *v14; // x20
  struct System_Action_o *animationEndCallback; // t1
  Il2CppObject *v16; // x21
  UnityEngine_AnimationClip_o *Item; // x0
  __int64 v18; // x1
  Il2CppObject *Component_object; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *v27; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  SimpleAnimation_o *v35; // x21
  UnityEngine_AnimationClip_c *klass; // x8
  UnityEngine_AnimationClip_o *v37; // x21
  __int64 v38; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v40; // x0
  UnityEngine_Animation_o *v41; // x20
  UnityEngine_Animation_o *v42; // x20
  UnityEngine_Animation_o *v43; // x20
  System_String_o *v44; // x0
  SimpleAnimation_o *v45; // x20
  System_String_o *name; // x0

  if ( (byte_4BDA7F0 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SimpleAnimation_State_TypeInfo);
    sub_1C21E38(&TitleInfoEventFactory_TypeInfo);
    sub_1C21E38(&StringLiteral_11372/*"RateChange"*/);
    byte_4BDA7F0 = 1;
  }
  effectAsset = this->fields.effectAsset;
  if ( effectAsset )
  {
    this->fields.effectIndex = 2;
    v10 = TitleInfoEventFactory_TypeInfo;
    if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      v10 = TitleInfoEventFactory_TypeInfo;
    }
    Object_39013000 = AssetData__GetObject_39013000(effectAsset, v10->static_fields->OBJECT_NAME_EFFECT_2, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( Object_39013000 )
    {
      if ( (UnityEngine_GameObject_c *)Object_39013000->klass == UnityEngine_GameObject_TypeInfo )
        v12 = (Il2CppObject *)Object_39013000;
      else
        v12 = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    v16 = UnityEngine_Object__Instantiate_object_(
            v12,
            (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent(
      (UnityEngine_GameObject_o *)v16,
      (UnityEngine_Component_o *)this->fields.RateBase,
      0LL);
    if ( v16 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v16,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
      this->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
      p_simpleAnimationData = &this->fields.simpleAnimationData;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.simpleAnimationData,
        (int64_t)Component_object,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      v27 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v16,
              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      this->fields.animationData = (struct UnityEngine_Animation_o *)v27;
      p_animationData = &this->fields.animationData;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.animationData, (int64_t)v27, v29, v30, v31, v32, v33, v34);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.simpleAnimationData, 0LL, 0LL) )
      {
        Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
        v35 = *p_simpleAnimationData;
        if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
        if ( v35 )
        {
          Item = (UnityEngine_AnimationClip_o *)SimpleAnimation__get_Item(
                                                  v35,
                                                  TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                                                  0LL);
          if ( Item )
          {
            klass = Item->klass;
            v37 = Item;
            v38 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
            {
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v38;
                p_offset += 2;
                if ( !v38 )
                  goto LABEL_25;
              }
              v40 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
            }
            else
            {
LABEL_25:
              v40 = sub_1C73E18(Item, SimpleAnimation_State_TypeInfo, 14LL);
            }
            Item = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(UnityEngine_AnimationClip_o *, _QWORD))v40)(
                                                    v37,
                                                    *(_QWORD *)(v40 + 8));
            if ( *p_simpleAnimationData )
            {
              SimpleAnimation__set_clip(*p_simpleAnimationData, Item, 0LL);
              v45 = *p_simpleAnimationData;
              if ( v45 )
              {
                Item = (UnityEngine_AnimationClip_o *)v45[1].monitor;
                if ( Item )
                {
                  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                  SimpleAnimation__Play_65253852(v45, name, 0LL);
                  goto LABEL_42;
                }
              }
            }
          }
        }
      }
      else
      {
        v41 = *p_animationData;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v41, 0LL, 0LL) )
          goto LABEL_42;
        Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
        v42 = *p_animationData;
        if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
        if ( v42 )
        {
          Item = UnityEngine_Animation__GetClip(
                   v42,
                   TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                   0LL);
          if ( *p_animationData )
          {
            UnityEngine_Animation__set_clip(*p_animationData, Item, 0LL);
            v43 = *p_animationData;
            if ( *p_animationData )
            {
              Item = UnityEngine_Animation__get_clip(*p_animationData, 0LL);
              if ( Item )
              {
                v44 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                UnityEngine_Animation__Play_70614020(v43, v44, 0LL);
LABEL_42:
                UnityEngine_MonoBehaviour__Invoke(
                  (UnityEngine_MonoBehaviour_o *)this,
                  (System_String_o *)StringLiteral_11372/*"RateChange"*/,
                  this->fields.rateChangeTime,
                  0LL);
                return;
              }
            }
          }
        }
      }
    }
    sub_1C22094(Item, v18);
  }
  animationEndCallback = this->fields.animationEndCallback;
  p_animationEndCallback = (PartyOrganizationUtility_o *)&this->fields.animationEndCallback;
  v14 = animationEndCallback;
  if ( animationEndCallback )
  {
    p_animationEndCallback->klass = 0LL;
    sub_1C21DDC(p_animationEndCallback, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v14->fields.m_target)(
      v14->fields.original_method_info,
      *(_QWORD *)&v14->fields.extra_arg);
  }
}


void __fastcall TitleInfoEventFactory__Update(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Object_o *monitor; // x0
  const MethodInfo *v6; // x1
  SimpleAnimation_o *klass; // x21
  System_String_o *name; // x0
  UnityEngine_Object_c *v9; // x8
  UnityEngine_Object_o *v10; // x21
  __int64 v11; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v13; // x0
  UnityEngine_Object_o *animationData; // x21
  UnityEngine_Animation_o *v15; // x21
  System_String_o *v16; // x0
  UnityEngine_AnimationState_o *v17; // x21
  float time; // s8
  long double v19; // q0
  UnityEngine_Object_c *v20; // x8
  __int64 v21; // x9
  SimpleAnimation_State_c **v22; // x10
  __int64 v23; // x0
  UnityEngine_Object_o *v24; // x21
  UnityEngine_Object_o *v25; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  UnityEngine_Object_o *gameObject; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int32_t effectIndex; // w8
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  PartyOrganizationUtility_o *p_animationEndCallback; // x19
  struct System_Action_o *v47; // x20
  struct System_Action_o *animationEndCallback; // t1

  if ( (byte_4BDA7ED & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SimpleAnimation_State_TypeInfo);
    byte_4BDA7ED = 1;
  }
  p_simpleAnimationData = (PartyOrganizationUtility_o *)&this->fields.simpleAnimationData;
  simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimationData, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) != 0 )
  {
    klass = (SimpleAnimation_o *)p_simpleAnimationData->klass;
    if ( !p_simpleAnimationData->klass )
      goto LABEL_47;
    monitor = (UnityEngine_Object_o *)klass[1].monitor;
    if ( !monitor )
      goto LABEL_47;
    name = UnityEngine_Object__get_name(monitor, 0LL);
    monitor = (UnityEngine_Object_o *)SimpleAnimation__get_Item(klass, name, 0LL);
    if ( !monitor )
      goto LABEL_47;
    v9 = monitor->klass;
    v10 = monitor;
    v11 = *(unsigned __int16 *)(&monitor->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&monitor->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&v9->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v11;
        p_offset += 2;
        if ( !v11 )
          goto LABEL_13;
      }
      v13 = (__int64)(&v9->vtable._3_ToString.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_13:
      v13 = sub_1C73E18(monitor, SimpleAnimation_State_TypeInfo, 3LL);
    }
    v19 = ((long double (__fastcall *)(UnityEngine_Object_o *, _QWORD))*(_QWORD *)v13)(v10, *(_QWORD *)(v13 + 8));
    v20 = v10->klass;
    time = *(float *)&v19;
    v21 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
    {
      v22 = (SimpleAnimation_State_c **)&v20->_1.interfaceOffsets->offset;
      while ( *(v22 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v21;
        v22 += 2;
        if ( !v21 )
          goto LABEL_27;
      }
      v23 = (__int64)(&v20[1]._1.implementedInterfaces + 2 * *(_DWORD *)v22);
    }
    else
    {
LABEL_27:
      v23 = sub_1C73E18(v10, SimpleAnimation_State_TypeInfo, 14LL);
    }
    monitor = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v23)(
                                        v10,
                                        *(_QWORD *)(v23 + 8));
    if ( !monitor )
      goto LABEL_47;
  }
  else
  {
    animationData = (UnityEngine_Object_o *)this->fields.animationData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(animationData, 0LL, 0LL);
    if ( ((unsigned __int8)monitor & 1) == 0 )
      goto LABEL_31;
    v15 = this->fields.animationData;
    if ( !v15 )
      goto LABEL_47;
    monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animationData, 0LL);
    if ( !monitor )
      goto LABEL_47;
    v16 = UnityEngine_Object__get_name(monitor, 0LL);
    monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v15, v16, 0LL);
    if ( !monitor )
      goto LABEL_47;
    v17 = (UnityEngine_AnimationState_o *)monitor;
    time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)monitor, 0LL);
    monitor = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v17, 0LL);
    if ( !monitor )
      goto LABEL_47;
  }
  if ( time < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)monitor, 0LL) )
    return;
LABEL_31:
  v24 = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
  {
    p_simpleAnimationData = (PartyOrganizationUtility_o *)&this->fields.animationData;
    v25 = (UnityEngine_Object_o *)this->fields.animationData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
      goto LABEL_41;
  }
  monitor = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( !p_simpleAnimationData->klass )
LABEL_47:
    sub_1C22094(monitor, v6);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)monitor, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_70869800(gameObject, 0LL);
  p_simpleAnimationData->klass = 0LL;
  sub_1C21DDC(p_simpleAnimationData, 0LL, v33, v34, v35, v36, v37, v38);
LABEL_41:
  effectIndex = this->fields.effectIndex;
  if ( effectIndex == 2 )
  {
    this->fields.effectIndex = 0;
    this->fields.effectAsset = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.effectAsset, 0LL, v26, v27, v28, v29, v30, v31);
    animationEndCallback = this->fields.animationEndCallback;
    p_animationEndCallback = (PartyOrganizationUtility_o *)&this->fields.animationEndCallback;
    v47 = animationEndCallback;
    if ( animationEndCallback )
    {
      p_animationEndCallback->klass = 0LL;
      sub_1C21DDC(p_animationEndCallback, 0LL, v40, v41, v42, v43, v44, v45);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v47->fields.m_target)(
        v47->fields.original_method_info,
        *(_QWORD *)&v47->fields.extra_arg);
    }
  }
  else if ( effectIndex == 1 )
  {
    TitleInfoEventFactory__StartRateEffect(this, v6);
  }
}