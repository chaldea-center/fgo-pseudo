void TitleInfoEventFactory___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct TitleInfoEventFactory_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct TitleInfoEventFactory_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct TitleInfoEventFactory_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  struct TitleInfoEventFactory_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  struct TitleInfoEventFactory_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  struct TitleInfoEventFactory_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  struct TitleInfoEventFactory_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4CB420B & 1) == 0 )
  {
    sub_1C6BA08(&TitleInfoEventFactory_TypeInfo);
    sub_1C6BA08(&StringLiteral_18872/*"ef_factory_open"*/);
    sub_1C6BA08(&StringLiteral_18873/*"ef_factory_open1"*/);
    sub_1C6BA08(&StringLiteral_19442/*"factory_icon_possible"*/);
    sub_1C6BA08(&StringLiteral_19441/*"factory_bg_rate"*/);
    sub_1C6BA08(&StringLiteral_18871/*"ef_factory_flash1"*/);
    sub_1C6BA08(&StringLiteral_19444/*"factory_title_chocolate"*/);
    sub_1C6BA08(&StringLiteral_19443/*"factory_line"*/);
    sub_1C6BA08(&StringLiteral_18870/*"ef_factory_flash"*/);
    byte_4CB420B = 1;
  }
  TitleInfoEventFactory_TypeInfo->static_fields->SPRITE_NAME_TITLE = (struct System_String_o *)StringLiteral_19444/*"factory_title_chocolate"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)TitleInfoEventFactory_TypeInfo->static_fields, StringLiteral_19444/*"factory_title_chocolate"*/, v1, v2);
  v3 = StringLiteral_19442/*"factory_icon_possible"*/;
  static_fields = TitleInfoEventFactory_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_POSSIBLE = (struct System_String_o *)StringLiteral_19442/*"factory_icon_possible"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->SPRITE_NAME_POSSIBLE, v3, v5, v6);
  v7 = StringLiteral_19443/*"factory_line"*/;
  v8 = TitleInfoEventFactory_TypeInfo->static_fields;
  v8->SPRITE_NAME_LINE = (struct System_String_o *)StringLiteral_19443/*"factory_line"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->SPRITE_NAME_LINE, v7, v9, v10);
  v11 = StringLiteral_19441/*"factory_bg_rate"*/;
  v12 = TitleInfoEventFactory_TypeInfo->static_fields;
  v12->SPRITE_NAME_BG_RATE = (struct System_String_o *)StringLiteral_19441/*"factory_bg_rate"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v12->SPRITE_NAME_BG_RATE, v11, v13, v14);
  v15 = StringLiteral_18872/*"ef_factory_open"*/;
  v16 = TitleInfoEventFactory_TypeInfo->static_fields;
  v16->OBJECT_NAME_EFFECT_1 = (struct System_String_o *)StringLiteral_18872/*"ef_factory_open"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v16->OBJECT_NAME_EFFECT_1, v15, v17, v18);
  v19 = StringLiteral_18870/*"ef_factory_flash"*/;
  v20 = TitleInfoEventFactory_TypeInfo->static_fields;
  v20->OBJECT_NAME_EFFECT_2 = (struct System_String_o *)StringLiteral_18870/*"ef_factory_flash"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v20->OBJECT_NAME_EFFECT_2, v19, v21, v22);
  v23 = StringLiteral_18873/*"ef_factory_open1"*/;
  v24 = TitleInfoEventFactory_TypeInfo->static_fields;
  v24->EFFECT_ANIMATION_START_1 = (struct System_String_o *)StringLiteral_18873/*"ef_factory_open1"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v24->EFFECT_ANIMATION_START_1, v23, v25, v26);
  v27 = StringLiteral_18871/*"ef_factory_flash1"*/;
  v28 = TitleInfoEventFactory_TypeInfo->static_fields;
  v28->EFFECT_ANIMATION_START_2 = (struct System_String_o *)StringLiteral_18871/*"ef_factory_flash1"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v28->EFFECT_ANIMATION_START_2, v27, v29, v30);
}


void TitleInfoEventFactory___ctor(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void TitleInfoEventFactory__Close(TitleInfoEventFactory_o *this, const MethodInfo *method)
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

  if ( (byte_4CB4205 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB4205 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.effectAsset = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.effectAsset, 0, v5, v6);
  p_simpleAnimationData = (CGThumbnailListItem_o *)&this->fields.simpleAnimationData;
  simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
  this->fields.effectIndex = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationData, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)p_simpleAnimationData->klass;
    if ( p_simpleAnimationData->klass )
    {
      v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71659864(v9, 0);
      p_simpleAnimationData->klass = 0;
LABEL_18:
      sub_1C6B9AC(p_simpleAnimationData, 0, v10, v11);
      return;
    }
    goto LABEL_20;
  }
  animationData = this->fields.animationData;
  p_animationData = &this->fields.animationData;
  v13 = (UnityEngine_Object_o *)animationData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)*p_animationData;
    if ( *p_animationData )
    {
      v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71659864(v15, 0);
      p_simpleAnimationData = (CGThumbnailListItem_o *)p_animationData;
      *p_animationData = 0;
      goto LABEL_18;
    }
LABEL_20:
    sub_1C6BC60(gameObject, v4);
  }
}


void TitleInfoEventFactory__LvUpIconCreate(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *unitDictionary; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4CB4208 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
    byte_4CB4208 = 1;
  }
  unitDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary;
  if ( !unitDictionary
    || (unitDictionary = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                   unitDictionary,
                                                                                   this->fields.lvUpIndex,
                                                                                   (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__)) == 0 )
  {
    sub_1C6BC60(unitDictionary, method);
  }
  if ( SHIDWORD(unitDictionary->fields._syncRoot) >= 1 )
    TitleInfoEventFactoryUnit__CreateIcon((TitleInfoEventFactoryUnit_o *)unitDictionary, this->fields.lvUpCount, 1, v4);
}


void TitleInfoEventFactory__Open(TitleInfoEventFactory_o *this, const MethodInfo *method)
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
  Il2CppObject *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UserItemMaster_o *v37; // [xsp+0h] [xbp-80h]
  DataMasterBase_TMaster__TEntity__PKType__o *v38; // [xsp+8h] [xbp-78h]
  int v39; // [xsp+14h] [xbp-6Ch]
  double v40; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4CB4204 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventFactoryMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__);
    sub_1C6BA08(&double_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&TitleInfoEventFactory_TypeInfo);
    sub_1C6BA08(&StringLiteral_5596/*"EVENT_FACTORY_GET_EP_RATE"*/);
    byte_4CB4204 = 1;
  }
  if ( this->fields.eventDetailEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_64;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventFactoryMaster___);
    eventDetailEntity = this->fields.eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_64;
    if ( !Instance )
      goto LABEL_64;
    Instance = EventFactoryMaster__GetDatas((EventFactoryMaster_o *)Instance, eventDetailEntity->fields.eventId, 0);
    if ( !Instance )
      goto LABEL_64;
    v6 = Instance;
    v39 = *((_DWORD *)Instance + 6);
    if ( v39 < 1 )
      return;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_64;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_64;
    v8 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserShopMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_64;
    v9 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserItemMaster___);
    titleSprite = this->fields.titleSprite;
    v37 = (UserItemMaster_o *)v9;
    v38 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    v11 = TitleInfoEventFactory_TypeInfo;
    if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      v11 = TitleInfoEventFactory_TypeInfo;
    }
    SPRITE_NAME_TITLE = v11->static_fields->SPRITE_NAME_TITLE;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(titleSprite, SPRITE_NAME_TITLE, 0);
    AtlasManager__SetEventUI(
      this->fields.createSprite,
      TitleInfoEventFactory_TypeInfo->static_fields->SPRITE_NAME_POSSIBLE,
      0);
    AtlasManager__SetEventUI(
      this->fields.lineSprite,
      TitleInfoEventFactory_TypeInfo->static_fields->SPRITE_NAME_LINE,
      0);
    Instance = (void *)AtlasManager__SetEventUI(
                         this->fields.bgRateSprite,
                         TitleInfoEventFactory_TypeInfo->static_fields->SPRITE_NAME_BG_RATE,
                         0);
    v13 = 0;
    v14 = 1000;
    do
    {
      if ( v13 >= v6[6] )
LABEL_65:
        sub_1C6BC68(Instance);
      v15 = *(_QWORD *)&v6[2 * v13 + 8];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CB002A )
      {
        sub_1C6BA08(&NetworkManager_TypeInfo);
        byte_4CB002A = 1;
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
                   0);
      if ( !Instance )
        goto LABEL_64;
      v16 = *((_DWORD *)Instance + 7);
      v17 = Instance;
      if ( v16 <= 0 )
      {
        Instance = v38;
        if ( !v38 )
          goto LABEL_64;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v38,
                     *(_DWORD *)(v15 + 24),
                     (const MethodInfo_33F90DC *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_64;
        v26 = (ShopEntity_o *)Instance;
        Instance = (void *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4CB002A )
          {
            sub_1C6BA08(&NetworkManager_TypeInfo);
            byte_4CB002A = 1;
          }
          v27 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v27 = NetworkManager_TypeInfo;
          }
          userIdNumber = v27->static_fields->userIdNumber;
          ItemID = ShopEntity__GetItemID(v26, 0);
          Instance = v37;
          if ( !v37 )
            goto LABEL_64;
          Instance = UserItemMaster__GetEntityDefinitely(v37, userIdNumber, ItemID, 0);
          if ( !Instance )
            goto LABEL_64;
          v30 = *((_DWORD *)Instance + 7);
          Instance = (void *)ShopEntity__GetPrice(v26, 0);
          if ( v30 >= (int)Instance )
          {
            Instance = this->fields.createSprite;
            if ( !Instance )
              goto LABEL_64;
            gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v32 = UnityEngine_Object__Instantiate_object_(
                    gameObject,
                    (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v32, 0, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v32 )
                goto LABEL_64;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v32, 1, 0);
              GameObjectExtensions__SafeSetParent(
                (UnityEngine_GameObject_o *)v32,
                (UnityEngine_Component_o *)this->fields.grid,
                0);
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
                (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          GameObjectExtensions__SafeSetParent(
            (UnityEngine_GameObject_o *)v22,
            (UnityEngine_Component_o *)this->fields.grid,
            0);
          if ( !v22 )
            goto LABEL_64;
          Instance = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v22,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___);
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
            (const MethodInfo_34524F0 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__);
        }
      }
      ++v13;
    }
    while ( v39 != v13 );
    rateLabel = this->fields.rateLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_5596/*"EVENT_FACTORY_GET_EP_RATE"*/, 0);
    v40 = (double)v14 / 1000.0;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v40);
    Instance = System_String__Format(v34, v35, 0);
    if ( !rateLabel
      || (UILabel__set_text(rateLabel, (System_String_o *)Instance, 0), (Instance = this->fields.RateBase) == 0)
      || (v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0),
          GameObjectExtensions__SetParent(v36, (UnityEngine_Component_o *)this->fields.grid, 0),
          (Instance = this->fields.grid) == 0) )
    {
LABEL_64:
      sub_1C6BC60(Instance, v4);
    }
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 440LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 448LL));
  }
}


void TitleInfoEventFactory__RateChange(TitleInfoEventFactory_o *this, const MethodInfo *method)
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
  Il2CppObject *v18; // x0
  double v19; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CB420A & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventFactoryMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C6BA08(&double_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_5596/*"EVENT_FACTORY_GET_EP_RATE"*/);
    byte_4CB420A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventFactoryMaster___);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( !eventDetailEntity )
    goto LABEL_30;
  if ( !Instance )
    goto LABEL_30;
  Instance = EventFactoryMaster__GetDatas((EventFactoryMaster_o *)Instance, eventDetailEntity->fields.eventId, 0);
  if ( !Instance )
    goto LABEL_30;
  v6 = *((_DWORD *)Instance + 6);
  v7 = Instance;
  if ( v6 < 1 )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserShopMaster___);
  v8 = (UserShopMaster_o *)Instance;
  v9 = 0;
  v10 = 1000;
  do
  {
    if ( v9 >= v7[6] )
LABEL_31:
      sub_1C6BC68(Instance);
    v11 = *(_QWORD *)&v7[2 * v9 + 8];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB002A )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB002A = 1;
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
                 0);
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
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5596/*"EVENT_FACTORY_GET_EP_RATE"*/, 0);
  v19 = (double)v10 / 1000.0;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v19);
  Instance = System_String__Format(v17, v18, 0);
  if ( !rateLabel )
LABEL_30:
    sub_1C6BC60(Instance, v4);
  UILabel__set_text(rateLabel, (System_String_o *)Instance, 0);
}


void TitleInfoEventFactory__Setup(
        TitleInfoEventFactory_o *this,
        EventDetailEntity_o *eventDetailEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_unitDictionary; // x19
  struct System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *unitDictionary; // t1
  System_Collections_Generic_Dictionary_int__object__o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4CB4203 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo);
    byte_4CB4203 = 1;
  }
  this->fields.eventDetailEntity = eventDetailEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.eventDetailEntity, (int32_t)eventDetailEntity, (int32_t)method, v3);
  unitDictionary = this->fields.unitDictionary;
  p_unitDictionary = (CGThumbnailListItem_o *)&this->fields.unitDictionary;
  if ( !unitDictionary )
  {
    v8 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor_54860596(
      v8,
      10,
      (const MethodInfo_3451B34 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__);
    p_unitDictionary->klass = (CGThumbnailListItem_c *)v8;
    sub_1C6B9AC(p_unitDictionary, (int32_t)v8, v9, v10);
  }
}


void TitleInfoEventFactory__StartLvUpEffect(
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *Object_40741416; // x0
  UnityEngine_GameObject_c **v19; // x20
  Il2CppObject *v20; // x0
  UnityEngine_GameObject_o *v21; // x21
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *v23; // x20
  Il2CppObject *Component_object; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  SimpleAnimation_o *v32; // x21
  TitleInfoEventFactoryUnit_c *klass; // x8
  UnityEngine_GameObject_o *v34; // x21
  __int64 v35; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v37; // x0
  UnityEngine_Animation_o *v38; // x20
  UnityEngine_Animation_o *v39; // x20
  UnityEngine_Animation_o *v40; // x20
  System_String_o *v41; // x0
  SimpleAnimation_o *v42; // x20
  System_String_o *name; // x0
  UnityEngine_Vector3_o LvUpEffectOffset; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB4207 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C6BA08(&UnityEngine_GameObject_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SimpleAnimation_State_TypeInfo);
    sub_1C6BA08(&TitleInfoEventFactory_TypeInfo);
    sub_1C6BA08(&StringLiteral_8512/*"LvUpIconCreate"*/);
    byte_4CB4207 = 1;
  }
  if ( shopEntity && shopEntity->fields.purchaseType == 17 )
  {
    unitDictionary = this->fields.unitDictionary;
    TargetId = (UnityEngine_GameObject_o *)ShopEntity__get_TargetId(shopEntity, 0);
    if ( !unitDictionary )
      goto LABEL_51;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)unitDictionary,
           (int32_t)TargetId,
           (const MethodInfo_34526E4 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__) )
    {
      this->fields.effectAsset = effectAsset;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.effectAsset, (int32_t)effectAsset, v14, v15);
      this->fields.animationEndCallback = callback;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.animationEndCallback, (int32_t)callback, v16, v17);
      this->fields.effectIndex = 1;
      this->fields.lvUpIndex = ShopEntity__get_TargetId(shopEntity, 0);
      this->fields.lvUpCount = buyCount;
      TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
      if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      if ( !effectAsset )
        goto LABEL_51;
      Object_40741416 = AssetData__GetObject_40741416(
                          effectAsset,
                          TitleInfoEventFactory_TypeInfo->static_fields->OBJECT_NAME_EFFECT_1,
                          0);
      v19 = (UnityEngine_GameObject_c **)Object_40741416;
      if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        if ( Object_40741416 )
          goto LABEL_12;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( v19 )
        {
LABEL_12:
          if ( *v19 == UnityEngine_GameObject_TypeInfo )
            v20 = (Il2CppObject *)v19;
          else
            v20 = 0;
LABEL_20:
          TargetId = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   v20,
                                                   (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( this->fields.unitDictionary )
          {
            v21 = TargetId;
            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                     (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary,
                     this->fields.lvUpIndex,
                     (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
            GameObjectExtensions__SafeSetParent(v21, (UnityEngine_Component_o *)Item, 0);
            if ( v21 )
            {
              TargetId = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v21, 0);
              if ( this->fields.unitDictionary )
              {
                v23 = (UnityEngine_Transform_o *)TargetId;
                TargetId = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                         (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary,
                                                         this->fields.lvUpIndex,
                                                         (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
                if ( TargetId )
                {
                  LvUpEffectOffset = TitleInfoEventFactoryUnit__GetLvUpEffectOffset(
                                       (TitleInfoEventFactoryUnit_o *)TargetId,
                                       v13);
                  if ( v23 )
                  {
                    v45.fields.z = LvUpEffectOffset.fields.z + this->fields.lvUpAnimetionOffset.fields.z;
                    v45.fields.y = LvUpEffectOffset.fields.y + this->fields.lvUpAnimetionOffset.fields.y;
                    v45.fields.x = LvUpEffectOffset.fields.x + this->fields.lvUpAnimetionOffset.fields.x;
                    UnityEngine_Transform__set_localPosition(v23, v45, 0);
                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                         v21,
                                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                    this->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
                    p_simpleAnimationData = &this->fields.simpleAnimationData;
                    sub_1C6B9AC(
                      (CGThumbnailListItem_o *)&this->fields.simpleAnimationData,
                      (int32_t)Component_object,
                      v26,
                      v27);
                    v28 = UnityEngine_GameObject__GetComponent_object_(
                            v21,
                            (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                    this->fields.animationData = (struct UnityEngine_Animation_o *)v28;
                    p_animationData = &this->fields.animationData;
                    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.animationData, (int32_t)v28, v30, v31);
                    if ( UnityEngine_Object__op_Inequality(
                           (UnityEngine_Object_o *)this->fields.simpleAnimationData,
                           0,
                           0) )
                    {
                      TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
                      v32 = *p_simpleAnimationData;
                      if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
                      if ( v32 )
                      {
                        TargetId = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                                                 v32,
                                                                 TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                                                                 0);
                        if ( TargetId )
                        {
                          klass = (TitleInfoEventFactoryUnit_c *)TargetId->klass;
                          v34 = TargetId;
                          v35 = *(unsigned __int16 *)&TargetId->klass->_2.rank;
                          if ( *(_WORD *)&TargetId->klass->_2.rank )
                          {
                            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
                            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                            {
                              --v35;
                              p_offset += 2;
                              if ( !v35 )
                                goto LABEL_34;
                            }
                            v37 = (__int64)(&klass[1]._1.nestedTypes + 2 * *(_DWORD *)p_offset);
                          }
                          else
                          {
LABEL_34:
                            v37 = sub_1C41D90(TargetId, SimpleAnimation_State_TypeInfo, 14);
                          }
                          TargetId = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v37)(
                                                                   v34,
                                                                   *(_QWORD *)(v37 + 8));
                          if ( *p_simpleAnimationData )
                          {
                            SimpleAnimation__set_clip(
                              *p_simpleAnimationData,
                              (UnityEngine_AnimationClip_o *)TargetId,
                              0);
                            v42 = *p_simpleAnimationData;
                            if ( v42 )
                            {
                              TargetId = (UnityEngine_GameObject_o *)v42->fields.m_Clip;
                              if ( TargetId )
                              {
                                name = UnityEngine_Object__get_name((UnityEngine_Object_o *)TargetId, 0);
                                SimpleAnimation__Play_66911856(v42, name, 0);
                                goto LABEL_50;
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      v38 = *p_animationData;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v38, 0, 0) )
                        goto LABEL_50;
                      TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
                      v39 = *p_animationData;
                      if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
                      if ( v39 )
                      {
                        TargetId = (UnityEngine_GameObject_o *)UnityEngine_Animation__GetClip(
                                                                 v39,
                                                                 TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                                                                 0);
                        if ( *p_animationData )
                        {
                          UnityEngine_Animation__set_clip(*p_animationData, (UnityEngine_AnimationClip_o *)TargetId, 0);
                          v40 = *p_animationData;
                          if ( *p_animationData )
                          {
                            TargetId = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(*p_animationData, 0);
                            if ( TargetId )
                            {
                              v41 = UnityEngine_Object__get_name((UnityEngine_Object_o *)TargetId, 0);
                              UnityEngine_Animation__Play_71403152(v40, v41, 0);
LABEL_50:
                              UnityEngine_MonoBehaviour__Invoke(
                                (UnityEngine_MonoBehaviour_o *)this,
                                (System_String_o *)StringLiteral_8512/*"LvUpIconCreate"*/,
                                this->fields.lvUpIconCreateTime,
                                0);
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
          sub_1C6BC60(TargetId, v13);
        }
      }
      v20 = 0;
      goto LABEL_20;
    }
  }
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}


void TitleInfoEventFactory__StartRateEffect(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  AssetData_o *effectAsset; // x20
  TitleInfoEventFactory_c *v6; // x0
  UnityEngine_Object_o *Object_40741416; // x20
  Il2CppObject *v8; // x0
  CGThumbnailListItem_o *p_animationEndCallback; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *animationEndCallback; // t1
  Il2CppObject *v12; // x21
  UnityEngine_AnimationClip_o *Item; // x0
  __int64 v14; // x1
  Il2CppObject *Component_object; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  SimpleAnimation_o *v23; // x21
  UnityEngine_AnimationClip_c *klass; // x8
  UnityEngine_AnimationClip_o *v25; // x21
  __int64 v26; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v28; // x0
  UnityEngine_Animation_o *v29; // x20
  UnityEngine_Animation_o *v30; // x20
  UnityEngine_Animation_o *v31; // x20
  System_String_o *v32; // x0
  SimpleAnimation_o *v33; // x20
  System_String_o *name; // x0

  if ( (byte_4CB4209 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C6BA08(&UnityEngine_GameObject_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SimpleAnimation_State_TypeInfo);
    sub_1C6BA08(&TitleInfoEventFactory_TypeInfo);
    sub_1C6BA08(&StringLiteral_11190/*"RateChange"*/);
    byte_4CB4209 = 1;
  }
  effectAsset = this->fields.effectAsset;
  if ( effectAsset )
  {
    this->fields.effectIndex = 2;
    v6 = TitleInfoEventFactory_TypeInfo;
    if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      v6 = TitleInfoEventFactory_TypeInfo;
    }
    Object_40741416 = AssetData__GetObject_40741416(effectAsset, v6->static_fields->OBJECT_NAME_EFFECT_2, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( Object_40741416 )
    {
      if ( (UnityEngine_GameObject_c *)Object_40741416->klass == UnityEngine_GameObject_TypeInfo )
        v8 = (Il2CppObject *)Object_40741416;
      else
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    v12 = UnityEngine_Object__Instantiate_object_(
            v8,
            (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent(
      (UnityEngine_GameObject_o *)v12,
      (UnityEngine_Component_o *)this->fields.RateBase,
      0);
    if ( v12 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v12,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
      this->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
      p_simpleAnimationData = &this->fields.simpleAnimationData;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.simpleAnimationData, (int32_t)Component_object, v17, v18);
      v19 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v12,
              (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      this->fields.animationData = (struct UnityEngine_Animation_o *)v19;
      p_animationData = &this->fields.animationData;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.animationData, (int32_t)v19, v21, v22);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.simpleAnimationData, 0, 0) )
      {
        Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
        v23 = *p_simpleAnimationData;
        if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
        if ( v23 )
        {
          Item = (UnityEngine_AnimationClip_o *)SimpleAnimation__get_Item(
                                                  v23,
                                                  TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                                                  0);
          if ( Item )
          {
            klass = Item->klass;
            v25 = Item;
            v26 = *(unsigned __int16 *)&Item->klass->_2.rank;
            if ( *(_WORD *)&Item->klass->_2.rank )
            {
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v26;
                p_offset += 2;
                if ( !v26 )
                  goto LABEL_25;
              }
              v28 = (__int64)(&klass[1]._1.nestedTypes + 2 * *(_DWORD *)p_offset);
            }
            else
            {
LABEL_25:
              v28 = sub_1C41D90(Item, SimpleAnimation_State_TypeInfo, 14);
            }
            Item = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(UnityEngine_AnimationClip_o *, _QWORD))v28)(
                                                    v25,
                                                    *(_QWORD *)(v28 + 8));
            if ( *p_simpleAnimationData )
            {
              SimpleAnimation__set_clip(*p_simpleAnimationData, Item, 0);
              v33 = *p_simpleAnimationData;
              if ( v33 )
              {
                Item = v33->fields.m_Clip;
                if ( Item )
                {
                  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0);
                  SimpleAnimation__Play_66911856(v33, name, 0);
                  goto LABEL_42;
                }
              }
            }
          }
        }
      }
      else
      {
        v29 = *p_animationData;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0, 0) )
          goto LABEL_42;
        Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
        v30 = *p_animationData;
        if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
        if ( v30 )
        {
          Item = UnityEngine_Animation__GetClip(
                   v30,
                   TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                   0);
          if ( *p_animationData )
          {
            UnityEngine_Animation__set_clip(*p_animationData, Item, 0);
            v31 = *p_animationData;
            if ( *p_animationData )
            {
              Item = UnityEngine_Animation__get_clip(*p_animationData, 0);
              if ( Item )
              {
                v32 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0);
                UnityEngine_Animation__Play_71403152(v31, v32, 0);
LABEL_42:
                UnityEngine_MonoBehaviour__Invoke(
                  (UnityEngine_MonoBehaviour_o *)this,
                  (System_String_o *)StringLiteral_11190/*"RateChange"*/,
                  this->fields.rateChangeTime,
                  0);
                return;
              }
            }
          }
        }
      }
    }
    sub_1C6BC60(Item, v14);
  }
  animationEndCallback = this->fields.animationEndCallback;
  p_animationEndCallback = (CGThumbnailListItem_o *)&this->fields.animationEndCallback;
  v10 = animationEndCallback;
  if ( animationEndCallback )
  {
    p_animationEndCallback->klass = 0;
    sub_1C6B9AC(p_animationEndCallback, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void TitleInfoEventFactory__Update(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Object_o *m_Clip; // x0
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
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UnityEngine_Object_o *gameObject; // x21
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t effectIndex; // w8
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  CGThumbnailListItem_o *p_animationEndCallback; // x19
  struct System_Action_o *v35; // x20
  struct System_Action_o *animationEndCallback; // t1

  if ( (byte_4CB4206 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SimpleAnimation_State_TypeInfo);
    byte_4CB4206 = 1;
  }
  p_simpleAnimationData = (CGThumbnailListItem_o *)&this->fields.simpleAnimationData;
  simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  m_Clip = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimationData, 0, 0);
  if ( ((unsigned __int8)m_Clip & 1) != 0 )
  {
    klass = (SimpleAnimation_o *)p_simpleAnimationData->klass;
    if ( !p_simpleAnimationData->klass )
      goto LABEL_47;
    m_Clip = (UnityEngine_Object_o *)klass->fields.m_Clip;
    if ( !m_Clip )
      goto LABEL_47;
    name = UnityEngine_Object__get_name(m_Clip, 0);
    m_Clip = (UnityEngine_Object_o *)SimpleAnimation__get_Item(klass, name, 0);
    if ( !m_Clip )
      goto LABEL_47;
    v9 = m_Clip->klass;
    v10 = m_Clip;
    v11 = *(unsigned __int16 *)&m_Clip->klass->_2.rank;
    if ( *(_WORD *)&m_Clip->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&v9->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v11;
        p_offset += 2;
        if ( !v11 )
          goto LABEL_13;
      }
      v13 = (__int64)(&v9->vtable._3_ToString + *(_DWORD *)p_offset);
    }
    else
    {
LABEL_13:
      v13 = sub_1C41D90(m_Clip, SimpleAnimation_State_TypeInfo, 3);
    }
    v19 = ((long double (__fastcall *)(UnityEngine_Object_o *, _QWORD))*(_QWORD *)v13)(v10, *(_QWORD *)(v13 + 8));
    v20 = v10->klass;
    time = *(float *)&v19;
    v21 = *(unsigned __int16 *)&v10->klass->_2.rank;
    if ( *(_WORD *)&v10->klass->_2.rank )
    {
      v22 = (SimpleAnimation_State_c **)&v20->_1.interfaceOffsets->offset;
      while ( *(v22 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v21;
        v22 += 2;
        if ( !v21 )
          goto LABEL_27;
      }
      v23 = (__int64)(&v20[1]._1.nestedTypes + 2 * *(_DWORD *)v22);
    }
    else
    {
LABEL_27:
      v23 = sub_1C41D90(v10, SimpleAnimation_State_TypeInfo, 14);
    }
    m_Clip = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v23)(
                                       v10,
                                       *(_QWORD *)(v23 + 8));
    if ( !m_Clip )
      goto LABEL_47;
  }
  else
  {
    animationData = (UnityEngine_Object_o *)this->fields.animationData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    m_Clip = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(animationData, 0, 0);
    if ( ((unsigned __int8)m_Clip & 1) == 0 )
      goto LABEL_31;
    v15 = this->fields.animationData;
    if ( !v15 )
      goto LABEL_47;
    m_Clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animationData, 0);
    if ( !m_Clip )
      goto LABEL_47;
    v16 = UnityEngine_Object__get_name(m_Clip, 0);
    m_Clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v15, v16, 0);
    if ( !m_Clip )
      goto LABEL_47;
    v17 = (UnityEngine_AnimationState_o *)m_Clip;
    time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)m_Clip, 0);
    m_Clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v17, 0);
    if ( !m_Clip )
      goto LABEL_47;
  }
  if ( time < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)m_Clip, 0) )
    return;
LABEL_31:
  v24 = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v24, 0, 0) )
  {
    p_simpleAnimationData = (CGThumbnailListItem_o *)&this->fields.animationData;
    v25 = (UnityEngine_Object_o *)this->fields.animationData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v25, 0, 0) )
      goto LABEL_41;
  }
  m_Clip = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( !p_simpleAnimationData->klass )
LABEL_47:
    sub_1C6BC60(m_Clip, v6);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)m_Clip, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_71659864(gameObject, 0);
  p_simpleAnimationData->klass = 0;
  sub_1C6B9AC(p_simpleAnimationData, 0, v29, v30);
LABEL_41:
  effectIndex = this->fields.effectIndex;
  if ( effectIndex == 2 )
  {
    this->fields.effectIndex = 0;
    this->fields.effectAsset = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.effectAsset, 0, v26, v27);
    animationEndCallback = this->fields.animationEndCallback;
    p_animationEndCallback = (CGThumbnailListItem_o *)&this->fields.animationEndCallback;
    v35 = animationEndCallback;
    if ( animationEndCallback )
    {
      p_animationEndCallback->klass = 0;
      sub_1C6B9AC(p_animationEndCallback, 0, v32, v33);
      ((void (__fastcall *)(intptr_t, intptr_t))v35->fields.invoke_impl)(v35->fields.method_code, v35->fields.method);
    }
  }
  else if ( effectIndex == 1 )
  {
    TitleInfoEventFactory__StartRateEffect(this, v6);
  }
}