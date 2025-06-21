void __fastcall TitleInfoEventFactory___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t v12; // w1
  struct TitleInfoEventFactory_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  struct TitleInfoEventFactory_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  struct TitleInfoEventFactory_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  struct TitleInfoEventFactory_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  struct TitleInfoEventFactory_StaticFields *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  struct TitleInfoEventFactory_StaticFields *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w1
  struct TitleInfoEventFactory_StaticFields *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3

  if ( (byte_4B1A7BE & 1) == 0 )
  {
    sub_1BCAFF8(&TitleInfoEventFactory_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_18672/*"ef_factory_open"*/, v4);
    sub_1BCAFF8(&StringLiteral_18673/*"ef_factory_open1"*/, v5);
    sub_1BCAFF8(&StringLiteral_19209/*"factory_icon_possible"*/, v6);
    sub_1BCAFF8(&StringLiteral_19208/*"factory_bg_rate"*/, v7);
    sub_1BCAFF8(&StringLiteral_18671/*"ef_factory_flash1"*/, v8);
    sub_1BCAFF8(&StringLiteral_19211/*"factory_title_chocolate"*/, v9);
    sub_1BCAFF8(&StringLiteral_19210/*"factory_line"*/, v10);
    sub_1BCAFF8(&StringLiteral_18670/*"ef_factory_flash"*/, v11);
    byte_4B1A7BE = 1;
  }
  TitleInfoEventFactory_TypeInfo->static_fields->SPRITE_NAME_TITLE = (struct System_String_o *)StringLiteral_19211/*"factory_title_chocolate"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)TitleInfoEventFactory_TypeInfo->static_fields, StringLiteral_19211/*"factory_title_chocolate"*/, v2, v3);
  v12 = StringLiteral_19209/*"factory_icon_possible"*/;
  static_fields = TitleInfoEventFactory_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_POSSIBLE = (struct System_String_o *)StringLiteral_19209/*"factory_icon_possible"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->SPRITE_NAME_POSSIBLE, v12, v14, v15);
  v16 = StringLiteral_19210/*"factory_line"*/;
  v17 = TitleInfoEventFactory_TypeInfo->static_fields;
  v17->SPRITE_NAME_LINE = (struct System_String_o *)StringLiteral_19210/*"factory_line"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v17->SPRITE_NAME_LINE, v16, v18, v19);
  v20 = StringLiteral_19208/*"factory_bg_rate"*/;
  v21 = TitleInfoEventFactory_TypeInfo->static_fields;
  v21->SPRITE_NAME_BG_RATE = (struct System_String_o *)StringLiteral_19208/*"factory_bg_rate"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v21->SPRITE_NAME_BG_RATE, v20, v22, v23);
  v24 = StringLiteral_18672/*"ef_factory_open"*/;
  v25 = TitleInfoEventFactory_TypeInfo->static_fields;
  v25->OBJECT_NAME_EFFECT_1 = (struct System_String_o *)StringLiteral_18672/*"ef_factory_open"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v25->OBJECT_NAME_EFFECT_1, v24, v26, v27);
  v28 = StringLiteral_18670/*"ef_factory_flash"*/;
  v29 = TitleInfoEventFactory_TypeInfo->static_fields;
  v29->OBJECT_NAME_EFFECT_2 = (struct System_String_o *)StringLiteral_18670/*"ef_factory_flash"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v29->OBJECT_NAME_EFFECT_2, v28, v30, v31);
  v32 = StringLiteral_18673/*"ef_factory_open1"*/;
  v33 = TitleInfoEventFactory_TypeInfo->static_fields;
  v33->EFFECT_ANIMATION_START_1 = (struct System_String_o *)StringLiteral_18673/*"ef_factory_open1"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v33->EFFECT_ANIMATION_START_1, v32, v34, v35);
  v36 = StringLiteral_18671/*"ef_factory_flash1"*/;
  v37 = TitleInfoEventFactory_TypeInfo->static_fields;
  v37->EFFECT_ANIMATION_START_2 = (struct System_String_o *)StringLiteral_18671/*"ef_factory_flash1"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v37->EFFECT_ANIMATION_START_2, v36, v38, v39);
}


void __fastcall TitleInfoEventFactory___ctor(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventFactory__Close(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Object_o *v9; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UnityEngine_Animation_o **p_animationData; // x19
  UnityEngine_Object_o *v13; // x20
  struct UnityEngine_Animation_o *animationData; // t1
  UnityEngine_Object_o *v15; // x20

  if ( (byte_4B1A7B8 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1A7B8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.effectAsset = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.effectAsset, 0, v5, v6);
  p_simpleAnimationData = (CGThumbnailListItem_o *)&this->fields.simpleAnimationData;
  simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
  this->fields.effectIndex = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationData, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)p_simpleAnimationData->klass;
    if ( p_simpleAnimationData->klass )
    {
      v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_70136264(v9, 0LL);
      p_simpleAnimationData->klass = 0LL;
LABEL_18:
      sub_1BCAF9C(p_simpleAnimationData, 0, v10, v11);
      return;
    }
    goto LABEL_20;
  }
  animationData = this->fields.animationData;
  p_animationData = &this->fields.animationData;
  v13 = (UnityEngine_Object_o *)animationData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)*p_animationData;
    if ( *p_animationData )
    {
      v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_70136264(v15, 0LL);
      p_simpleAnimationData = (CGThumbnailListItem_o *)p_animationData;
      *p_animationData = 0LL;
      goto LABEL_18;
    }
LABEL_20:
    sub_1BCB254(gameObject, v4);
  }
}


void __fastcall TitleInfoEventFactory__LvUpIconCreate(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *unitDictionary; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4B1A7BB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__, method);
    byte_4B1A7BB = 1;
  }
  unitDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary;
  if ( !unitDictionary
    || (unitDictionary = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                   unitDictionary,
                                                                                   this->fields.lvUpIndex,
                                                                                   (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__)) == 0LL )
  {
    sub_1BCB254(unitDictionary, method);
  }
  if ( SHIDWORD(unitDictionary->fields._syncRoot) >= 1 )
    TitleInfoEventFactoryUnit__CreateIcon((TitleInfoEventFactoryUnit_o *)unitDictionary, this->fields.lvUpCount, 1, v4);
}


void __fastcall TitleInfoEventFactory__Open(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  void *Instance; // x0
  __int64 v19; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  _DWORD *v21; // x20
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v23; // x22
  Il2CppObject *v24; // x0
  UISprite_o *titleSprite; // x24
  TitleInfoEventFactory_c *v26; // x8
  System_String_o *SPRITE_NAME_TITLE; // x25
  __int64 v28; // x2
  unsigned int v29; // w29
  int v30; // w28
  __int64 v31; // x21
  int v32; // w9
  _DWORD *v33; // x25
  __int64 v34; // x8
  unsigned int v35; // w9
  int v36; // w23
  Il2CppObject *titleInfoEventFactoryUnitPrefab; // x26
  Il2CppObject *v38; // x26
  const MethodInfo *v39; // x4
  struct EventDetailEntity_o *v40; // x8
  Il2CppObject *v41; // x26
  ShopEntity_o *v42; // x25
  NetworkManager_c *v43; // x0
  int64_t userIdNumber; // x26
  int32_t ItemID; // w2
  int v46; // w21
  Il2CppObject *gameObject; // x25
  Il2CppObject *v48; // x25
  UILabel_o *rateLabel; // x20
  System_String_o *v50; // x21
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  UserItemMaster_o *v56; // [xsp+0h] [xbp-80h]
  DataMasterBase_TMaster__TEntity__PKType__o *v57; // [xsp+8h] [xbp-78h]
  int v58; // [xsp+14h] [xbp-6Ch]
  double v59; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B1A7B7 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventFactoryMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ShopMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserShopMaster___, v6);
    sub_1BCAFF8(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__, v8);
    sub_1BCAFF8(&double_TypeInfo, v9);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___, v10);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v11);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v12);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BCAFF8(&TitleInfoEventFactory_TypeInfo, v16);
    sub_1BCAFF8(&StringLiteral_5560/*"EVENT_FACTORY_GET_EP_RATE"*/, v17);
    byte_4B1A7B7 = 1;
  }
  if ( this->fields.eventDetailEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_64;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventFactoryMaster___);
    eventDetailEntity = this->fields.eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_64;
    if ( !Instance )
      goto LABEL_64;
    Instance = EventFactoryMaster__GetDatas((EventFactoryMaster_o *)Instance, eventDetailEntity->fields.eventId, 0LL);
    if ( !Instance )
      goto LABEL_64;
    v21 = Instance;
    v58 = *((_DWORD *)Instance + 6);
    if ( v58 < 1 )
      return;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_64;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_64;
    v23 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserShopMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_64;
    v24 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
    titleSprite = this->fields.titleSprite;
    v56 = (UserItemMaster_o *)v24;
    v57 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    v26 = TitleInfoEventFactory_TypeInfo;
    if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      v26 = TitleInfoEventFactory_TypeInfo;
    }
    SPRITE_NAME_TITLE = v26->static_fields->SPRITE_NAME_TITLE;
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
    v29 = 0;
    v30 = 1000;
    do
    {
      if ( v29 >= v21[6] )
LABEL_65:
        sub_1BCB25C(Instance, v19, v28);
      v31 = *(_QWORD *)&v21[2 * v29 + 8];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v19);
        byte_4B165D1 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      if ( !v31 )
        goto LABEL_64;
      if ( !v23 )
        goto LABEL_64;
      Instance = UserShopMaster__GetEntityDefinitely(
                   (UserShopMaster_o *)v23,
                   *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                   *(_DWORD *)(v31 + 24),
                   0LL);
      if ( !Instance )
        goto LABEL_64;
      v32 = *((_DWORD *)Instance + 7);
      v33 = Instance;
      if ( v32 <= 0 )
      {
        Instance = v57;
        if ( !v57 )
          goto LABEL_64;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v57,
                     *(_DWORD *)(v31 + 24),
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_64;
        v42 = (ShopEntity_o *)Instance;
        Instance = (void *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4B165D1 )
          {
            sub_1BCAFF8(&NetworkManager_TypeInfo, v19);
            byte_4B165D1 = 1;
          }
          v43 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v43 = NetworkManager_TypeInfo;
          }
          userIdNumber = v43->static_fields->userIdNumber;
          ItemID = ShopEntity__GetItemID(v42, 0LL);
          Instance = v56;
          if ( !v56 )
            goto LABEL_64;
          Instance = UserItemMaster__GetEntityDefinitely(v56, userIdNumber, ItemID, 0LL);
          if ( !Instance )
            goto LABEL_64;
          v46 = *((_DWORD *)Instance + 7);
          Instance = (void *)ShopEntity__GetPrice(v42, 0LL);
          if ( v46 >= (int)Instance )
          {
            Instance = this->fields.createSprite;
            if ( !Instance )
              goto LABEL_64;
            gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v48 = UnityEngine_Object__Instantiate_object_(
                    gameObject,
                    (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v48, 0LL, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v48 )
                goto LABEL_64;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v48, 1, 0LL);
              GameObjectExtensions__SafeSetParent(
                (UnityEngine_GameObject_o *)v48,
                (UnityEngine_Component_o *)this->fields.grid,
                0LL);
            }
          }
        }
      }
      else
      {
        v34 = *(_QWORD *)(v31 + 40);
        if ( !v34 )
          goto LABEL_64;
        v35 = v32 - 1;
        if ( v35 >= *(_DWORD *)(v34 + 24) )
          goto LABEL_65;
        v36 = *(_DWORD *)(v34 + 4LL * v35 + 32);
        titleInfoEventFactoryUnitPrefab = (Il2CppObject *)this->fields.titleInfoEventFactoryUnitPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v30 += v36;
        v38 = UnityEngine_Object__Instantiate_object_(
                titleInfoEventFactoryUnitPrefab,
                (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v38, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          GameObjectExtensions__SafeSetParent(
            (UnityEngine_GameObject_o *)v38,
            (UnityEngine_Component_o *)this->fields.grid,
            0LL);
          if ( !v38 )
            goto LABEL_64;
          Instance = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v38,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___);
          v40 = this->fields.eventDetailEntity;
          if ( !v40 )
            goto LABEL_64;
          v41 = (Il2CppObject *)Instance;
          if ( !Instance )
            goto LABEL_64;
          TitleInfoEventFactoryUnit__Open(
            (TitleInfoEventFactoryUnit_o *)Instance,
            v40->fields.eventId,
            *(_DWORD *)(v31 + 16),
            v33[7],
            v39);
          Instance = this->fields.unitDictionary;
          if ( !Instance )
            goto LABEL_64;
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)Instance,
            *(_DWORD *)(v31 + 16),
            v41,
            (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__);
        }
      }
      ++v29;
    }
    while ( v58 != v29 );
    rateLabel = this->fields.rateLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_5560/*"EVENT_FACTORY_GET_EP_RATE"*/, 0LL);
    v59 = (double)v30 / 1000.0;
    v54 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v59, v51, v52, v53);
    Instance = System_String__Format(v50, v54, 0LL);
    if ( !rateLabel
      || (UILabel__set_text(rateLabel, (System_String_o *)Instance, 0LL), (Instance = this->fields.RateBase) == 0LL)
      || (v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL),
          GameObjectExtensions__SetParent(v55, (UnityEngine_Component_o *)this->fields.grid, 0LL),
          (Instance = this->fields.grid) == 0LL) )
    {
LABEL_64:
      sub_1BCB254(Instance, v19);
    }
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 440LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 448LL));
  }
}


void __fastcall TitleInfoEventFactory__RateChange(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  void *Instance; // x0
  __int64 v10; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  int v12; // w24
  _DWORD *v13; // x20
  __int64 v14; // x2
  UserShopMaster_o *v15; // x22
  unsigned int v16; // w28
  int v17; // w25
  __int64 v18; // x26
  int v19; // w8
  bool v20; // vf
  int v21; // w8
  __int64 v22; // x9
  UILabel_o *rateLabel; // x19
  System_String_o *v24; // x20
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x0
  double v29; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1A7BD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventFactoryMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserShopMaster___, v3);
    sub_1BCAFF8(&double_TypeInfo, v4);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BCAFF8(&StringLiteral_5560/*"EVENT_FACTORY_GET_EP_RATE"*/, v8);
    byte_4B1A7BD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventFactoryMaster___);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( !eventDetailEntity )
    goto LABEL_30;
  if ( !Instance )
    goto LABEL_30;
  Instance = EventFactoryMaster__GetDatas((EventFactoryMaster_o *)Instance, eventDetailEntity->fields.eventId, 0LL);
  if ( !Instance )
    goto LABEL_30;
  v12 = *((_DWORD *)Instance + 6);
  v13 = Instance;
  if ( v12 < 1 )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserShopMaster___);
  v15 = (UserShopMaster_o *)Instance;
  v16 = 0;
  v17 = 1000;
  do
  {
    if ( v16 >= v13[6] )
LABEL_31:
      sub_1BCB25C(Instance, v10, v14);
    v18 = *(_QWORD *)&v13[2 * v16 + 8];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
      byte_4B165D1 = 1;
    }
    Instance = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager_TypeInfo;
    }
    if ( !v18 )
      goto LABEL_30;
    if ( !v15 )
      goto LABEL_30;
    Instance = UserShopMaster__GetEntityDefinitely(
                 v15,
                 *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                 *(_DWORD *)(v18 + 24),
                 0LL);
    if ( !Instance )
      goto LABEL_30;
    v19 = *((_DWORD *)Instance + 7);
    v20 = __OFSUB__(v19, 1);
    v21 = v19 - 1;
    if ( v21 < 0 == v20 )
    {
      v22 = *(_QWORD *)(v18 + 40);
      if ( !v22 )
        goto LABEL_30;
      if ( (unsigned int)v21 >= *(_DWORD *)(v22 + 24) )
        goto LABEL_31;
      v17 += *(_DWORD *)(v22 + 4LL * (unsigned int)v21 + 32);
    }
    ++v16;
  }
  while ( v12 != v16 );
  rateLabel = this->fields.rateLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5560/*"EVENT_FACTORY_GET_EP_RATE"*/, 0LL);
  v29 = (double)v17 / 1000.0;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v29, v25, v26, v27);
  Instance = System_String__Format(v24, v28, 0LL);
  if ( !rateLabel )
LABEL_30:
    sub_1BCB254(Instance, v10);
  UILabel__set_text(rateLabel, (System_String_o *)Instance, 0LL);
}


void __fastcall TitleInfoEventFactory__Setup(
        TitleInfoEventFactory_o *this,
        EventDetailEntity_o *eventDetailEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  CGThumbnailListItem_o *p_unitDictionary; // x19
  struct System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *unitDictionary; // t1
  System_Collections_Generic_Dictionary_int__object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B1A7B6 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__,
      eventDetailEntity);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo, v6);
    byte_4B1A7B6 = 1;
  }
  this->fields.eventDetailEntity = eventDetailEntity;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.eventDetailEntity, (int32_t)eventDetailEntity, (int32_t)method, v3);
  unitDictionary = this->fields.unitDictionary;
  p_unitDictionary = (CGThumbnailListItem_o *)&this->fields.unitDictionary;
  if ( !unitDictionary )
  {
    v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor_53610792(
      v9,
      10,
      (const MethodInfo_3320928 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__);
    p_unitDictionary->klass = (CGThumbnailListItem_c *)v9;
    sub_1BCAF9C(p_unitDictionary, (int32_t)v9, v10, v11);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  struct System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *unitDictionary; // x24
  UnityEngine_GameObject_o *TargetId; // x0
  const MethodInfo *v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UnityEngine_Object_o *Object_39699292; // x0
  UnityEngine_GameObject_c **v28; // x20
  Il2CppObject *v29; // x0
  UnityEngine_GameObject_o *v30; // x21
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *v32; // x20
  float v33; // s0
  float v34; // s1
  float v35; // s2
  Il2CppObject *Component_object; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  SimpleAnimation_o *v44; // x21
  TitleInfoEventFactoryUnit_c *klass; // x8
  UnityEngine_GameObject_o *v46; // x21
  __int64 v47; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v49; // x0
  UnityEngine_Animation_o *v50; // x20
  UnityEngine_Animation_o *v51; // x20
  UnityEngine_Animation_o *v52; // x20
  System_String_o *v53; // x0
  SimpleAnimation_o *v54; // x20
  System_String_o *name; // x0
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1A7BA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__, shopEntity);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__, v11);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v12);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v13);
    sub_1BCAFF8(&UnityEngine_GameObject_TypeInfo, v14);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v16);
    sub_1BCAFF8(&SimpleAnimation_State_TypeInfo, v17);
    sub_1BCAFF8(&TitleInfoEventFactory_TypeInfo, v18);
    sub_1BCAFF8(&StringLiteral_8444/*"LvUpIconCreate"*/, v19);
    byte_4B1A7BA = 1;
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
           (const MethodInfo_33214D8 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__) )
    {
      this->fields.effectAsset = effectAsset;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.effectAsset, (int32_t)effectAsset, v23, v24);
      this->fields.animationEndCallback = callback;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.animationEndCallback, (int32_t)callback, v25, v26);
      this->fields.effectIndex = 1;
      this->fields.lvUpIndex = ShopEntity__get_TargetId(shopEntity, 0LL);
      this->fields.lvUpCount = buyCount;
      TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
      if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      if ( !effectAsset )
        goto LABEL_51;
      Object_39699292 = AssetData__GetObject_39699292(
                          effectAsset,
                          TitleInfoEventFactory_TypeInfo->static_fields->OBJECT_NAME_EFFECT_1,
                          0LL);
      v28 = (UnityEngine_GameObject_c **)Object_39699292;
      if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        if ( Object_39699292 )
          goto LABEL_12;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( v28 )
        {
LABEL_12:
          if ( *v28 == UnityEngine_GameObject_TypeInfo )
            v29 = (Il2CppObject *)v28;
          else
            v29 = 0LL;
LABEL_20:
          TargetId = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   v29,
                                                   (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( this->fields.unitDictionary )
          {
            v30 = TargetId;
            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                     (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary,
                     this->fields.lvUpIndex,
                     (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
            GameObjectExtensions__SafeSetParent(v30, (UnityEngine_Component_o *)Item, 0LL);
            if ( v30 )
            {
              TargetId = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v30, 0LL);
              if ( this->fields.unitDictionary )
              {
                v32 = (UnityEngine_Transform_o *)TargetId;
                TargetId = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                         (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary,
                                                         this->fields.lvUpIndex,
                                                         (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
                if ( TargetId )
                {
                  *(UnityEngine_Vector3_o *)&v33 = TitleInfoEventFactoryUnit__GetLvUpEffectOffset(
                                                     (TitleInfoEventFactoryUnit_o *)TargetId,
                                                     v22);
                  if ( v32 )
                  {
                    v56.fields.z = v35 + this->fields.lvUpAnimetionOffset.fields.z;
                    v56.fields.y = v34 + this->fields.lvUpAnimetionOffset.fields.y;
                    v56.fields.x = v33 + this->fields.lvUpAnimetionOffset.fields.x;
                    UnityEngine_Transform__set_localPosition(v32, v56, 0LL);
                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                         v30,
                                         (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                    this->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
                    p_simpleAnimationData = &this->fields.simpleAnimationData;
                    sub_1BCAF9C(
                      (CGThumbnailListItem_o *)&this->fields.simpleAnimationData,
                      (int32_t)Component_object,
                      v38,
                      v39);
                    v40 = UnityEngine_GameObject__GetComponent_object_(
                            v30,
                            (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                    this->fields.animationData = (struct UnityEngine_Animation_o *)v40;
                    p_animationData = &this->fields.animationData;
                    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.animationData, (int32_t)v40, v42, v43);
                    if ( UnityEngine_Object__op_Inequality(
                           (UnityEngine_Object_o *)this->fields.simpleAnimationData,
                           0LL,
                           0LL) )
                    {
                      TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
                      v44 = *p_simpleAnimationData;
                      if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
                      if ( v44 )
                      {
                        TargetId = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                                                 v44,
                                                                 TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                                                                 0LL);
                        if ( TargetId )
                        {
                          klass = (TitleInfoEventFactoryUnit_c *)TargetId->klass;
                          v46 = TargetId;
                          v47 = *(unsigned __int16 *)(&TargetId->klass->_2.bitflags2 + 3);
                          if ( *(_WORD *)(&TargetId->klass->_2.bitflags2 + 3) )
                          {
                            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
                            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                            {
                              --v47;
                              p_offset += 2;
                              if ( !v47 )
                                goto LABEL_34;
                            }
                            v49 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
                          }
                          else
                          {
LABEL_34:
                            v49 = sub_1C1B560(TargetId, SimpleAnimation_State_TypeInfo, 14LL);
                          }
                          TargetId = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v49)(
                                                                   v46,
                                                                   *(_QWORD *)(v49 + 8));
                          if ( *p_simpleAnimationData )
                          {
                            SimpleAnimation__set_clip(
                              *p_simpleAnimationData,
                              (UnityEngine_AnimationClip_o *)TargetId,
                              0LL);
                            v54 = *p_simpleAnimationData;
                            if ( v54 )
                            {
                              TargetId = (UnityEngine_GameObject_o *)v54[1].monitor;
                              if ( TargetId )
                              {
                                name = UnityEngine_Object__get_name((UnityEngine_Object_o *)TargetId, 0LL);
                                SimpleAnimation__Play_65395744(v54, name, 0LL);
                                goto LABEL_50;
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      v50 = *p_animationData;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v50, 0LL, 0LL) )
                        goto LABEL_50;
                      TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
                      v51 = *p_animationData;
                      if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
                      if ( v51 )
                      {
                        TargetId = (UnityEngine_GameObject_o *)UnityEngine_Animation__GetClip(
                                                                 v51,
                                                                 TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                                                                 0LL);
                        if ( *p_animationData )
                        {
                          UnityEngine_Animation__set_clip(
                            *p_animationData,
                            (UnityEngine_AnimationClip_o *)TargetId,
                            0LL);
                          v52 = *p_animationData;
                          if ( *p_animationData )
                          {
                            TargetId = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(
                                                                     *p_animationData,
                                                                     0LL);
                            if ( TargetId )
                            {
                              v53 = UnityEngine_Object__get_name((UnityEngine_Object_o *)TargetId, 0LL);
                              UnityEngine_Animation__Play_69881360(v52, v53, 0LL);
LABEL_50:
                              UnityEngine_MonoBehaviour__Invoke(
                                (UnityEngine_MonoBehaviour_o *)this,
                                (System_String_o *)StringLiteral_8444/*"LvUpIconCreate"*/,
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
          sub_1BCB254(TargetId, v22);
        }
      }
      v29 = 0LL;
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  AssetData_o *effectAsset; // x20
  TitleInfoEventFactory_c *v13; // x0
  UnityEngine_Object_o *Object_39699292; // x20
  Il2CppObject *v15; // x0
  CGThumbnailListItem_o *p_animationEndCallback; // x19
  struct System_Action_o *v17; // x20
  struct System_Action_o *animationEndCallback; // t1
  Il2CppObject *v19; // x21
  UnityEngine_AnimationClip_o *Item; // x0
  __int64 v21; // x1
  Il2CppObject *Component_object; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  SimpleAnimation_o *v30; // x21
  UnityEngine_AnimationClip_c *klass; // x8
  UnityEngine_AnimationClip_o *v32; // x21
  __int64 v33; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v35; // x0
  UnityEngine_Animation_o *v36; // x20
  UnityEngine_Animation_o *v37; // x20
  UnityEngine_Animation_o *v38; // x20
  System_String_o *v39; // x0
  SimpleAnimation_o *v40; // x20
  System_String_o *name; // x0

  if ( (byte_4B1A7BC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_1BCAFF8(&UnityEngine_GameObject_TypeInfo, v6);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    sub_1BCAFF8(&SimpleAnimation_State_TypeInfo, v9);
    sub_1BCAFF8(&TitleInfoEventFactory_TypeInfo, v10);
    sub_1BCAFF8(&StringLiteral_11088/*"RateChange"*/, v11);
    byte_4B1A7BC = 1;
  }
  effectAsset = this->fields.effectAsset;
  if ( effectAsset )
  {
    this->fields.effectIndex = 2;
    v13 = TitleInfoEventFactory_TypeInfo;
    if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      v13 = TitleInfoEventFactory_TypeInfo;
    }
    Object_39699292 = AssetData__GetObject_39699292(effectAsset, v13->static_fields->OBJECT_NAME_EFFECT_2, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( Object_39699292 )
    {
      if ( (UnityEngine_GameObject_c *)Object_39699292->klass == UnityEngine_GameObject_TypeInfo )
        v15 = (Il2CppObject *)Object_39699292;
      else
        v15 = 0LL;
    }
    else
    {
      v15 = 0LL;
    }
    v19 = UnityEngine_Object__Instantiate_object_(
            v15,
            (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent(
      (UnityEngine_GameObject_o *)v19,
      (UnityEngine_Component_o *)this->fields.RateBase,
      0LL);
    if ( v19 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v19,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
      this->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
      p_simpleAnimationData = &this->fields.simpleAnimationData;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.simpleAnimationData, (int32_t)Component_object, v24, v25);
      v26 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v19,
              (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      this->fields.animationData = (struct UnityEngine_Animation_o *)v26;
      p_animationData = &this->fields.animationData;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.animationData, (int32_t)v26, v28, v29);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.simpleAnimationData, 0LL, 0LL) )
      {
        Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
        v30 = *p_simpleAnimationData;
        if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
        if ( v30 )
        {
          Item = (UnityEngine_AnimationClip_o *)SimpleAnimation__get_Item(
                                                  v30,
                                                  TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                                                  0LL);
          if ( Item )
          {
            klass = Item->klass;
            v32 = Item;
            v33 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
            {
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v33;
                p_offset += 2;
                if ( !v33 )
                  goto LABEL_25;
              }
              v35 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
            }
            else
            {
LABEL_25:
              v35 = sub_1C1B560(Item, SimpleAnimation_State_TypeInfo, 14LL);
            }
            Item = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(UnityEngine_AnimationClip_o *, _QWORD))v35)(
                                                    v32,
                                                    *(_QWORD *)(v35 + 8));
            if ( *p_simpleAnimationData )
            {
              SimpleAnimation__set_clip(*p_simpleAnimationData, Item, 0LL);
              v40 = *p_simpleAnimationData;
              if ( v40 )
              {
                Item = (UnityEngine_AnimationClip_o *)v40[1].monitor;
                if ( Item )
                {
                  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                  SimpleAnimation__Play_65395744(v40, name, 0LL);
                  goto LABEL_42;
                }
              }
            }
          }
        }
      }
      else
      {
        v36 = *p_animationData;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v36, 0LL, 0LL) )
          goto LABEL_42;
        Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
        v37 = *p_animationData;
        if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
        if ( v37 )
        {
          Item = UnityEngine_Animation__GetClip(
                   v37,
                   TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                   0LL);
          if ( *p_animationData )
          {
            UnityEngine_Animation__set_clip(*p_animationData, Item, 0LL);
            v38 = *p_animationData;
            if ( *p_animationData )
            {
              Item = UnityEngine_Animation__get_clip(*p_animationData, 0LL);
              if ( Item )
              {
                v39 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                UnityEngine_Animation__Play_69881360(v38, v39, 0LL);
LABEL_42:
                UnityEngine_MonoBehaviour__Invoke(
                  (UnityEngine_MonoBehaviour_o *)this,
                  (System_String_o *)StringLiteral_11088/*"RateChange"*/,
                  this->fields.rateChangeTime,
                  0LL);
                return;
              }
            }
          }
        }
      }
    }
    sub_1BCB254(Item, v21);
  }
  animationEndCallback = this->fields.animationEndCallback;
  p_animationEndCallback = (CGThumbnailListItem_o *)&this->fields.animationEndCallback;
  v17 = animationEndCallback;
  if ( animationEndCallback )
  {
    p_animationEndCallback->klass = 0LL;
    sub_1BCAF9C(p_animationEndCallback, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v17->fields.m_target)(
      v17->fields.original_method_info,
      *(_QWORD *)&v17->fields.extra_arg);
  }
}


void __fastcall TitleInfoEventFactory__Update(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CGThumbnailListItem_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Object_o *monitor; // x0
  const MethodInfo *v7; // x1
  SimpleAnimation_o *klass; // x21
  System_String_o *name; // x0
  UnityEngine_Object_c *v10; // x8
  UnityEngine_Object_o *v11; // x21
  __int64 v12; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v14; // x0
  UnityEngine_Object_o *animationData; // x21
  UnityEngine_Animation_o *v16; // x21
  System_String_o *v17; // x0
  UnityEngine_AnimationState_o *v18; // x21
  float time; // s8
  long double v20; // q0
  UnityEngine_Object_c *v21; // x8
  __int64 v22; // x9
  SimpleAnimation_State_c **v23; // x10
  __int64 v24; // x0
  UnityEngine_Object_o *v25; // x21
  UnityEngine_Object_o *v26; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UnityEngine_Object_o *gameObject; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t effectIndex; // w8
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  CGThumbnailListItem_o *p_animationEndCallback; // x19
  struct System_Action_o *v36; // x20
  struct System_Action_o *animationEndCallback; // t1

  if ( (byte_4B1A7B9 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&SimpleAnimation_State_TypeInfo, v3);
    byte_4B1A7B9 = 1;
  }
  p_simpleAnimationData = (CGThumbnailListItem_o *)&this->fields.simpleAnimationData;
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
    v10 = monitor->klass;
    v11 = monitor;
    v12 = *(unsigned __int16 *)(&monitor->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&monitor->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v12;
        p_offset += 2;
        if ( !v12 )
          goto LABEL_13;
      }
      v14 = (__int64)(&v10->vtable._3_ToString.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_13:
      v14 = sub_1C1B560(monitor, SimpleAnimation_State_TypeInfo, 3LL);
    }
    v20 = ((long double (__fastcall *)(UnityEngine_Object_o *, _QWORD))*(_QWORD *)v14)(v11, *(_QWORD *)(v14 + 8));
    v21 = v11->klass;
    time = *(float *)&v20;
    v22 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
    {
      v23 = (SimpleAnimation_State_c **)&v21->_1.interfaceOffsets->offset;
      while ( *(v23 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v22;
        v23 += 2;
        if ( !v22 )
          goto LABEL_27;
      }
      v24 = (__int64)(&v21[1]._1.implementedInterfaces + 2 * *(_DWORD *)v23);
    }
    else
    {
LABEL_27:
      v24 = sub_1C1B560(v11, SimpleAnimation_State_TypeInfo, 14LL);
    }
    monitor = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v24)(
                                        v11,
                                        *(_QWORD *)(v24 + 8));
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
    v16 = this->fields.animationData;
    if ( !v16 )
      goto LABEL_47;
    monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animationData, 0LL);
    if ( !monitor )
      goto LABEL_47;
    v17 = UnityEngine_Object__get_name(monitor, 0LL);
    monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v16, v17, 0LL);
    if ( !monitor )
      goto LABEL_47;
    v18 = (UnityEngine_AnimationState_o *)monitor;
    time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)monitor, 0LL);
    monitor = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v18, 0LL);
    if ( !monitor )
      goto LABEL_47;
  }
  if ( time < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)monitor, 0LL) )
    return;
LABEL_31:
  v25 = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
  {
    p_simpleAnimationData = (CGThumbnailListItem_o *)&this->fields.animationData;
    v26 = (UnityEngine_Object_o *)this->fields.animationData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
      goto LABEL_41;
  }
  monitor = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( !p_simpleAnimationData->klass )
LABEL_47:
    sub_1BCB254(monitor, v7);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)monitor, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_70136264(gameObject, 0LL);
  p_simpleAnimationData->klass = 0LL;
  sub_1BCAF9C(p_simpleAnimationData, 0, v30, v31);
LABEL_41:
  effectIndex = this->fields.effectIndex;
  if ( effectIndex == 2 )
  {
    this->fields.effectIndex = 0;
    this->fields.effectAsset = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.effectAsset, 0, v27, v28);
    animationEndCallback = this->fields.animationEndCallback;
    p_animationEndCallback = (CGThumbnailListItem_o *)&this->fields.animationEndCallback;
    v36 = animationEndCallback;
    if ( animationEndCallback )
    {
      p_animationEndCallback->klass = 0LL;
      sub_1BCAF9C(p_animationEndCallback, 0, v33, v34);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v36->fields.m_target)(
        v36->fields.original_method_info,
        *(_QWORD *)&v36->fields.extra_arg);
    }
  }
  else if ( effectIndex == 1 )
  {
    TitleInfoEventFactory__StartRateEffect(this, v7);
  }
}