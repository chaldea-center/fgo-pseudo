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

  if ( (byte_4C40F12 & 1) == 0 )
  {
    sub_1C37058(&TitleInfoEventFactory_TypeInfo);
    sub_1C37058(&StringLiteral_18836/*"ef_factory_open"*/);
    sub_1C37058(&StringLiteral_18837/*"ef_factory_open1"*/);
    sub_1C37058(&StringLiteral_19381/*"factory_icon_possible"*/);
    sub_1C37058(&StringLiteral_19380/*"factory_bg_rate"*/);
    sub_1C37058(&StringLiteral_18835/*"ef_factory_flash1"*/);
    sub_1C37058(&StringLiteral_19383/*"factory_title_chocolate"*/);
    sub_1C37058(&StringLiteral_19382/*"factory_line"*/);
    sub_1C37058(&StringLiteral_18834/*"ef_factory_flash"*/);
    byte_4C40F12 = 1;
  }
  TitleInfoEventFactory_TypeInfo->static_fields->SPRITE_NAME_TITLE = (struct System_String_o *)StringLiteral_19383/*"factory_title_chocolate"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)TitleInfoEventFactory_TypeInfo->static_fields, StringLiteral_19383/*"factory_title_chocolate"*/, v1, v2);
  v3 = StringLiteral_19381/*"factory_icon_possible"*/;
  static_fields = TitleInfoEventFactory_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_POSSIBLE = (struct System_String_o *)StringLiteral_19381/*"factory_icon_possible"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->SPRITE_NAME_POSSIBLE, v3, v5, v6);
  v7 = StringLiteral_19382/*"factory_line"*/;
  v8 = TitleInfoEventFactory_TypeInfo->static_fields;
  v8->SPRITE_NAME_LINE = (struct System_String_o *)StringLiteral_19382/*"factory_line"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->SPRITE_NAME_LINE, v7, v9, v10);
  v11 = StringLiteral_19380/*"factory_bg_rate"*/;
  v12 = TitleInfoEventFactory_TypeInfo->static_fields;
  v12->SPRITE_NAME_BG_RATE = (struct System_String_o *)StringLiteral_19380/*"factory_bg_rate"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12->SPRITE_NAME_BG_RATE, v11, v13, v14);
  v15 = StringLiteral_18836/*"ef_factory_open"*/;
  v16 = TitleInfoEventFactory_TypeInfo->static_fields;
  v16->OBJECT_NAME_EFFECT_1 = (struct System_String_o *)StringLiteral_18836/*"ef_factory_open"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v16->OBJECT_NAME_EFFECT_1, v15, v17, v18);
  v19 = StringLiteral_18834/*"ef_factory_flash"*/;
  v20 = TitleInfoEventFactory_TypeInfo->static_fields;
  v20->OBJECT_NAME_EFFECT_2 = (struct System_String_o *)StringLiteral_18834/*"ef_factory_flash"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v20->OBJECT_NAME_EFFECT_2, v19, v21, v22);
  v23 = StringLiteral_18837/*"ef_factory_open1"*/;
  v24 = TitleInfoEventFactory_TypeInfo->static_fields;
  v24->EFFECT_ANIMATION_START_1 = (struct System_String_o *)StringLiteral_18837/*"ef_factory_open1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v24->EFFECT_ANIMATION_START_1, v23, v25, v26);
  v27 = StringLiteral_18835/*"ef_factory_flash1"*/;
  v28 = TitleInfoEventFactory_TypeInfo->static_fields;
  v28->EFFECT_ANIMATION_START_2 = (struct System_String_o *)StringLiteral_18835/*"ef_factory_flash1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v28->EFFECT_ANIMATION_START_2, v27, v29, v30);
}


void TitleInfoEventFactory___ctor(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void TitleInfoEventFactory__Close(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  CGThumbnailListItem_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Object_o *v8; // x19
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UnityEngine_Animation_o **p_animationData; // x19
  UnityEngine_Object_o *v12; // x20
  struct UnityEngine_Animation_o *animationData; // t1
  UnityEngine_Object_o *v14; // x20

  if ( (byte_4C40F0C & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40F0C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.effectAsset = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.effectAsset, 0, v4, v5);
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
      v8 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71266940(v8, 0);
      p_simpleAnimationData->klass = 0;
LABEL_18:
      sub_1C36FFC(p_simpleAnimationData, 0, v9, v10);
      return;
    }
    goto LABEL_20;
  }
  animationData = this->fields.animationData;
  p_animationData = &this->fields.animationData;
  v12 = (UnityEngine_Object_o *)animationData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)*p_animationData;
    if ( *p_animationData )
    {
      v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71266940(v14, 0);
      p_simpleAnimationData = (CGThumbnailListItem_o *)p_animationData;
      *p_animationData = 0;
      goto LABEL_18;
    }
LABEL_20:
    sub_1C372B4(gameObject);
  }
}


void TitleInfoEventFactory__LvUpIconCreate(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *unitDictionary; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4C40F0F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
    byte_4C40F0F = 1;
  }
  unitDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary;
  if ( !unitDictionary
    || (unitDictionary = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                   unitDictionary,
                                                                                   this->fields.lvUpIndex,
                                                                                   (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__)) == 0 )
  {
    sub_1C372B4(unitDictionary);
  }
  if ( SHIDWORD(unitDictionary->fields._syncRoot) >= 1 )
    TitleInfoEventFactoryUnit__CreateIcon((TitleInfoEventFactoryUnit_o *)unitDictionary, this->fields.lvUpCount, 1, v4);
}


void TitleInfoEventFactory__Open(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  struct EventDetailEntity_o *eventDetailEntity; // x8
  _DWORD *v5; // x20
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v7; // x22
  Il2CppObject *v8; // x0
  UISprite_o *titleSprite; // x24
  TitleInfoEventFactory_c *v10; // x8
  System_String_o *SPRITE_NAME_TITLE; // x25
  unsigned int v12; // w29
  int v13; // w28
  __int64 v14; // x21
  int v15; // w9
  _DWORD *v16; // x25
  __int64 v17; // x8
  unsigned int v18; // w9
  int v19; // w23
  Il2CppObject *titleInfoEventFactoryUnitPrefab; // x26
  Il2CppObject *v21; // x26
  const MethodInfo *v22; // x4
  struct EventDetailEntity_o *v23; // x8
  Il2CppObject *v24; // x26
  ShopEntity_o *v25; // x25
  NetworkManager_c *v26; // x0
  int64_t userIdNumber; // x26
  int32_t ItemID; // w2
  int v29; // w21
  Il2CppObject *gameObject; // x25
  Il2CppObject *v31; // x25
  UILabel_o *rateLabel; // x20
  System_String_o *v33; // x21
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  Il2CppObject *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  UserItemMaster_o *v42; // [xsp+0h] [xbp-80h]
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // [xsp+8h] [xbp-78h]
  int v44; // [xsp+14h] [xbp-6Ch]
  double v45; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C40F0B & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventFactoryMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C37058(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__);
    sub_1C37058(&double_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TitleInfoEventFactory_TypeInfo);
    sub_1C37058(&StringLiteral_5606/*"EVENT_FACTORY_GET_EP_RATE"*/);
    byte_4C40F0B = 1;
  }
  if ( this->fields.eventDetailEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_64;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventFactoryMaster___);
    eventDetailEntity = this->fields.eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_64;
    if ( !Instance )
      goto LABEL_64;
    Instance = EventFactoryMaster__GetDatas((EventFactoryMaster_o *)Instance, eventDetailEntity->fields.eventId, 0);
    if ( !Instance )
      goto LABEL_64;
    v5 = Instance;
    v44 = *((_DWORD *)Instance + 6);
    if ( v44 < 1 )
      return;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_64;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ShopMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_64;
    v7 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserShopMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_64;
    v8 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserItemMaster___);
    titleSprite = this->fields.titleSprite;
    v42 = (UserItemMaster_o *)v8;
    v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    v10 = TitleInfoEventFactory_TypeInfo;
    if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      v10 = TitleInfoEventFactory_TypeInfo;
    }
    SPRITE_NAME_TITLE = v10->static_fields->SPRITE_NAME_TITLE;
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
    v12 = 0;
    v13 = 1000;
    do
    {
      if ( v12 >= v5[6] )
LABEL_65:
        sub_1C372BC(Instance);
      v14 = *(_QWORD *)&v5[2 * v12 + 8];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C3CD62 )
      {
        sub_1C37058(&NetworkManager_TypeInfo);
        byte_4C3CD62 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      if ( !v14 )
        goto LABEL_64;
      if ( !v7 )
        goto LABEL_64;
      Instance = UserShopMaster__GetEntityDefinitely(
                   (UserShopMaster_o *)v7,
                   *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                   *(_DWORD *)(v14 + 24),
                   0);
      if ( !Instance )
        goto LABEL_64;
      v15 = *((_DWORD *)Instance + 7);
      v16 = Instance;
      if ( v15 <= 0 )
      {
        Instance = v43;
        if ( !v43 )
          goto LABEL_64;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v43,
                     *(_DWORD *)(v14 + 24),
                     (const MethodInfo_33A10A0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_64;
        v25 = (ShopEntity_o *)Instance;
        Instance = (void *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C3CD62 )
          {
            sub_1C37058(&NetworkManager_TypeInfo);
            byte_4C3CD62 = 1;
          }
          v26 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v26 = NetworkManager_TypeInfo;
          }
          userIdNumber = v26->static_fields->userIdNumber;
          ItemID = ShopEntity__GetItemID(v25, 0);
          Instance = v42;
          if ( !v42 )
            goto LABEL_64;
          Instance = UserItemMaster__GetEntityDefinitely(v42, userIdNumber, ItemID, 0);
          if ( !Instance )
            goto LABEL_64;
          v29 = *((_DWORD *)Instance + 7);
          Instance = (void *)ShopEntity__GetPrice(v25, 0);
          if ( v29 >= (int)Instance )
          {
            Instance = this->fields.createSprite;
            if ( !Instance )
              goto LABEL_64;
            gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v31 = UnityEngine_Object__Instantiate_object_(
                    gameObject,
                    (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v31, 0, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v31 )
                goto LABEL_64;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v31, 1, 0);
              GameObjectExtensions__SafeSetParent(
                (UnityEngine_GameObject_o *)v31,
                (UnityEngine_Component_o *)this->fields.grid,
                0);
            }
          }
        }
      }
      else
      {
        v17 = *(_QWORD *)(v14 + 40);
        if ( !v17 )
          goto LABEL_64;
        v18 = v15 - 1;
        if ( v18 >= *(_DWORD *)(v17 + 24) )
          goto LABEL_65;
        v19 = *(_DWORD *)(v17 + 4LL * v18 + 32);
        titleInfoEventFactoryUnitPrefab = (Il2CppObject *)this->fields.titleInfoEventFactoryUnitPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v13 += v19;
        v21 = UnityEngine_Object__Instantiate_object_(
                titleInfoEventFactoryUnitPrefab,
                (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          GameObjectExtensions__SafeSetParent(
            (UnityEngine_GameObject_o *)v21,
            (UnityEngine_Component_o *)this->fields.grid,
            0);
          if ( !v21 )
            goto LABEL_64;
          Instance = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v21,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___);
          v23 = this->fields.eventDetailEntity;
          if ( !v23 )
            goto LABEL_64;
          v24 = (Il2CppObject *)Instance;
          if ( !Instance )
            goto LABEL_64;
          TitleInfoEventFactoryUnit__Open(
            (TitleInfoEventFactoryUnit_o *)Instance,
            v23->fields.eventId,
            *(_DWORD *)(v14 + 16),
            v16[7],
            v22);
          Instance = this->fields.unitDictionary;
          if ( !Instance )
            goto LABEL_64;
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)Instance,
            *(_DWORD *)(v14 + 16),
            v24,
            (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__);
        }
      }
      ++v12;
    }
    while ( v44 != v12 );
    rateLabel = this->fields.rateLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_5606/*"EVENT_FACTORY_GET_EP_RATE"*/, 0);
    v45 = (double)v13 / 1000.0;
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v45, v34, v35, v36, v37, v38, v39);
    Instance = System_String__Format(v33, v40, 0);
    if ( !rateLabel
      || (UILabel__set_text(rateLabel, (System_String_o *)Instance, 0), (Instance = this->fields.RateBase) == 0)
      || (v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0),
          GameObjectExtensions__SetParent(v41, (UnityEngine_Component_o *)this->fields.grid, 0),
          (Instance = this->fields.grid) == 0) )
    {
LABEL_64:
      sub_1C372B4(Instance);
    }
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 440LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 448LL));
  }
}


void TitleInfoEventFactory__RateChange(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  struct EventDetailEntity_o *eventDetailEntity; // x8
  int v5; // w24
  _DWORD *v6; // x20
  UserShopMaster_o *v7; // x22
  unsigned int v8; // w28
  int v9; // w25
  __int64 v10; // x26
  int v11; // w8
  bool v12; // vf
  int v13; // w8
  __int64 v14; // x9
  UILabel_o *rateLabel; // x19
  System_String_o *v16; // x20
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  Il2CppObject *v23; // x0
  double v24; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C40F11 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventFactoryMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C37058(&double_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_5606/*"EVENT_FACTORY_GET_EP_RATE"*/);
    byte_4C40F11 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventFactoryMaster___);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( !eventDetailEntity )
    goto LABEL_30;
  if ( !Instance )
    goto LABEL_30;
  Instance = EventFactoryMaster__GetDatas((EventFactoryMaster_o *)Instance, eventDetailEntity->fields.eventId, 0);
  if ( !Instance )
    goto LABEL_30;
  v5 = *((_DWORD *)Instance + 6);
  v6 = Instance;
  if ( v5 < 1 )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserShopMaster___);
  v7 = (UserShopMaster_o *)Instance;
  v8 = 0;
  v9 = 1000;
  do
  {
    if ( v8 >= v6[6] )
LABEL_31:
      sub_1C372BC(Instance);
    v10 = *(_QWORD *)&v6[2 * v8 + 8];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
    }
    Instance = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager_TypeInfo;
    }
    if ( !v10 )
      goto LABEL_30;
    if ( !v7 )
      goto LABEL_30;
    Instance = UserShopMaster__GetEntityDefinitely(
                 v7,
                 *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                 *(_DWORD *)(v10 + 24),
                 0);
    if ( !Instance )
      goto LABEL_30;
    v11 = *((_DWORD *)Instance + 7);
    v12 = __OFSUB__(v11, 1);
    v13 = v11 - 1;
    if ( v13 < 0 == v12 )
    {
      v14 = *(_QWORD *)(v10 + 40);
      if ( !v14 )
        goto LABEL_30;
      if ( (unsigned int)v13 >= *(_DWORD *)(v14 + 24) )
        goto LABEL_31;
      v9 += *(_DWORD *)(v14 + 4LL * (unsigned int)v13 + 32);
    }
    ++v8;
  }
  while ( v5 != v8 );
  rateLabel = this->fields.rateLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5606/*"EVENT_FACTORY_GET_EP_RATE"*/, 0);
  v24 = (double)v9 / 1000.0;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v24, v17, v18, v19, v20, v21, v22);
  Instance = System_String__Format(v16, v23, 0);
  if ( !rateLabel )
LABEL_30:
    sub_1C372B4(Instance);
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

  if ( (byte_4C40F0A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo);
    byte_4C40F0A = 1;
  }
  this->fields.eventDetailEntity = eventDetailEntity;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventDetailEntity, (int32_t)eventDetailEntity, (int32_t)method, v3);
  unitDictionary = this->fields.unitDictionary;
  p_unitDictionary = (CGThumbnailListItem_o *)&this->fields.unitDictionary;
  if ( !unitDictionary )
  {
    v8 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor_54500296(
      v8,
      10,
      (const MethodInfo_33F9BC8 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__);
    p_unitDictionary->klass = (CGThumbnailListItem_c *)v8;
    sub_1C36FFC(p_unitDictionary, (int32_t)v8, v9, v10);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *Object_40510596; // x0
  UnityEngine_GameObject_c **v18; // x20
  Il2CppObject *v19; // x0
  UnityEngine_GameObject_o *v20; // x21
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *v22; // x20
  const MethodInfo *v23; // x1
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

  if ( (byte_4C40F0E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C37058(&UnityEngine_GameObject_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SimpleAnimation_State_TypeInfo);
    sub_1C37058(&TitleInfoEventFactory_TypeInfo);
    sub_1C37058(&StringLiteral_8515/*"LvUpIconCreate"*/);
    byte_4C40F0E = 1;
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
           (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__) )
    {
      this->fields.effectAsset = effectAsset;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.effectAsset, (int32_t)effectAsset, v13, v14);
      this->fields.animationEndCallback = callback;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.animationEndCallback, (int32_t)callback, v15, v16);
      this->fields.effectIndex = 1;
      this->fields.lvUpIndex = ShopEntity__get_TargetId(shopEntity, 0);
      this->fields.lvUpCount = buyCount;
      TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
      if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      if ( !effectAsset )
        goto LABEL_51;
      Object_40510596 = AssetData__GetObject_40510596(
                          effectAsset,
                          TitleInfoEventFactory_TypeInfo->static_fields->OBJECT_NAME_EFFECT_1,
                          0);
      v18 = (UnityEngine_GameObject_c **)Object_40510596;
      if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        if ( Object_40510596 )
          goto LABEL_12;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( v18 )
        {
LABEL_12:
          if ( *v18 == UnityEngine_GameObject_TypeInfo )
            v19 = (Il2CppObject *)v18;
          else
            v19 = 0;
LABEL_20:
          TargetId = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   v19,
                                                   (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( this->fields.unitDictionary )
          {
            v20 = TargetId;
            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                     (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary,
                     this->fields.lvUpIndex,
                     (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
            GameObjectExtensions__SafeSetParent(v20, (UnityEngine_Component_o *)Item, 0);
            if ( v20 )
            {
              TargetId = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v20, 0);
              if ( this->fields.unitDictionary )
              {
                v22 = (UnityEngine_Transform_o *)TargetId;
                TargetId = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                         (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary,
                                                         this->fields.lvUpIndex,
                                                         (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
                if ( TargetId )
                {
                  LvUpEffectOffset = TitleInfoEventFactoryUnit__GetLvUpEffectOffset(
                                       (TitleInfoEventFactoryUnit_o *)TargetId,
                                       v23);
                  if ( v22 )
                  {
                    v45.fields.z = LvUpEffectOffset.fields.z + this->fields.lvUpAnimetionOffset.fields.z;
                    v45.fields.y = LvUpEffectOffset.fields.y + this->fields.lvUpAnimetionOffset.fields.y;
                    v45.fields.x = LvUpEffectOffset.fields.x + this->fields.lvUpAnimetionOffset.fields.x;
                    UnityEngine_Transform__set_localPosition(v22, v45, 0);
                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                         v20,
                                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                    this->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
                    p_simpleAnimationData = &this->fields.simpleAnimationData;
                    sub_1C36FFC(
                      (CGThumbnailListItem_o *)&this->fields.simpleAnimationData,
                      (int32_t)Component_object,
                      v26,
                      v27);
                    v28 = UnityEngine_GameObject__GetComponent_object_(
                            v20,
                            (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                    this->fields.animationData = (struct UnityEngine_Animation_o *)v28;
                    p_animationData = &this->fields.animationData;
                    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.animationData, (int32_t)v28, v30, v31);
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
                            v37 = sub_1C87870(TargetId, SimpleAnimation_State_TypeInfo, 14);
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
                                SimpleAnimation__Play_66507412(v42, name, 0);
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
                              UnityEngine_Animation__Play_71012036(v40, v41, 0);
LABEL_50:
                              UnityEngine_MonoBehaviour__Invoke(
                                (UnityEngine_MonoBehaviour_o *)this,
                                (System_String_o *)StringLiteral_8515/*"LvUpIconCreate"*/,
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
          sub_1C372B4(TargetId);
        }
      }
      v19 = 0;
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
  UnityEngine_Object_o *Object_40510596; // x20
  Il2CppObject *v8; // x0
  CGThumbnailListItem_o *p_animationEndCallback; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *animationEndCallback; // t1
  Il2CppObject *v12; // x21
  UnityEngine_AnimationClip_o *Item; // x0
  Il2CppObject *Component_object; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  SimpleAnimation_o *v22; // x21
  UnityEngine_AnimationClip_c *klass; // x8
  UnityEngine_AnimationClip_o *v24; // x21
  __int64 v25; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v27; // x0
  UnityEngine_Animation_o *v28; // x20
  UnityEngine_Animation_o *v29; // x20
  UnityEngine_Animation_o *v30; // x20
  System_String_o *v31; // x0
  SimpleAnimation_o *v32; // x20
  System_String_o *name; // x0

  if ( (byte_4C40F10 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C37058(&UnityEngine_GameObject_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SimpleAnimation_State_TypeInfo);
    sub_1C37058(&TitleInfoEventFactory_TypeInfo);
    sub_1C37058(&StringLiteral_11192/*"RateChange"*/);
    byte_4C40F10 = 1;
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
    Object_40510596 = AssetData__GetObject_40510596(effectAsset, v6->static_fields->OBJECT_NAME_EFFECT_2, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( Object_40510596 )
    {
      if ( (UnityEngine_GameObject_c *)Object_40510596->klass == UnityEngine_GameObject_TypeInfo )
        v8 = (Il2CppObject *)Object_40510596;
      else
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    v12 = UnityEngine_Object__Instantiate_object_(
            v8,
            (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent(
      (UnityEngine_GameObject_o *)v12,
      (UnityEngine_Component_o *)this->fields.RateBase,
      0);
    if ( v12 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v12,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
      this->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
      p_simpleAnimationData = &this->fields.simpleAnimationData;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.simpleAnimationData, (int32_t)Component_object, v16, v17);
      v18 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v12,
              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      this->fields.animationData = (struct UnityEngine_Animation_o *)v18;
      p_animationData = &this->fields.animationData;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.animationData, (int32_t)v18, v20, v21);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.simpleAnimationData, 0, 0) )
      {
        Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
        v22 = *p_simpleAnimationData;
        if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
        if ( v22 )
        {
          Item = (UnityEngine_AnimationClip_o *)SimpleAnimation__get_Item(
                                                  v22,
                                                  TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                                                  0);
          if ( Item )
          {
            klass = Item->klass;
            v24 = Item;
            v25 = *(unsigned __int16 *)&Item->klass->_2.rank;
            if ( *(_WORD *)&Item->klass->_2.rank )
            {
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v25;
                p_offset += 2;
                if ( !v25 )
                  goto LABEL_25;
              }
              v27 = (__int64)(&klass[1]._1.nestedTypes + 2 * *(_DWORD *)p_offset);
            }
            else
            {
LABEL_25:
              v27 = sub_1C87870(Item, SimpleAnimation_State_TypeInfo, 14);
            }
            Item = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(UnityEngine_AnimationClip_o *, _QWORD))v27)(
                                                    v24,
                                                    *(_QWORD *)(v27 + 8));
            if ( *p_simpleAnimationData )
            {
              SimpleAnimation__set_clip(*p_simpleAnimationData, Item, 0);
              v32 = *p_simpleAnimationData;
              if ( v32 )
              {
                Item = v32->fields.m_Clip;
                if ( Item )
                {
                  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0);
                  SimpleAnimation__Play_66507412(v32, name, 0);
                  goto LABEL_42;
                }
              }
            }
          }
        }
      }
      else
      {
        v28 = *p_animationData;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0, 0) )
          goto LABEL_42;
        Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
        v29 = *p_animationData;
        if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
        if ( v29 )
        {
          Item = UnityEngine_Animation__GetClip(
                   v29,
                   TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                   0);
          if ( *p_animationData )
          {
            UnityEngine_Animation__set_clip(*p_animationData, Item, 0);
            v30 = *p_animationData;
            if ( *p_animationData )
            {
              Item = UnityEngine_Animation__get_clip(*p_animationData, 0);
              if ( Item )
              {
                v31 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0);
                UnityEngine_Animation__Play_71012036(v30, v31, 0);
LABEL_42:
                UnityEngine_MonoBehaviour__Invoke(
                  (UnityEngine_MonoBehaviour_o *)this,
                  (System_String_o *)StringLiteral_11192/*"RateChange"*/,
                  this->fields.rateChangeTime,
                  0);
                return;
              }
            }
          }
        }
      }
    }
    sub_1C372B4(Item);
  }
  animationEndCallback = this->fields.animationEndCallback;
  p_animationEndCallback = (CGThumbnailListItem_o *)&this->fields.animationEndCallback;
  v10 = animationEndCallback;
  if ( animationEndCallback )
  {
    p_animationEndCallback->klass = 0;
    sub_1C36FFC(p_animationEndCallback, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void TitleInfoEventFactory__Update(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Object_o *m_Clip; // x0
  SimpleAnimation_o *klass; // x21
  System_String_o *name; // x0
  UnityEngine_Object_c *v8; // x8
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v12; // x0
  UnityEngine_Object_o *animationData; // x21
  UnityEngine_Animation_o *v14; // x21
  System_String_o *v15; // x0
  UnityEngine_AnimationState_o *v16; // x21
  float time; // s8
  long double v18; // q0
  UnityEngine_Object_c *v19; // x8
  __int64 v20; // x9
  SimpleAnimation_State_c **v21; // x10
  __int64 v22; // x0
  UnityEngine_Object_o *v23; // x21
  UnityEngine_Object_o *v24; // x21
  const MethodInfo *v25; // x1
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

  if ( (byte_4C40F0D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C40F0D = 1;
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
    v8 = m_Clip->klass;
    v9 = m_Clip;
    v10 = *(unsigned __int16 *)&m_Clip->klass->_2.rank;
    if ( *(_WORD *)&m_Clip->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&v8->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v10;
        p_offset += 2;
        if ( !v10 )
          goto LABEL_13;
      }
      v12 = (__int64)(&v8->vtable._3_ToString + *(_DWORD *)p_offset);
    }
    else
    {
LABEL_13:
      v12 = sub_1C87870(m_Clip, SimpleAnimation_State_TypeInfo, 3);
    }
    v18 = ((long double (__fastcall *)(UnityEngine_Object_o *, _QWORD))*(_QWORD *)v12)(v9, *(_QWORD *)(v12 + 8));
    v19 = v9->klass;
    time = *(float *)&v18;
    v20 = *(unsigned __int16 *)&v9->klass->_2.rank;
    if ( *(_WORD *)&v9->klass->_2.rank )
    {
      v21 = (SimpleAnimation_State_c **)&v19->_1.interfaceOffsets->offset;
      while ( *(v21 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v20;
        v21 += 2;
        if ( !v20 )
          goto LABEL_27;
      }
      v22 = (__int64)(&v19[1]._1.nestedTypes + 2 * *(_DWORD *)v21);
    }
    else
    {
LABEL_27:
      v22 = sub_1C87870(v9, SimpleAnimation_State_TypeInfo, 14);
    }
    m_Clip = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v22)(
                                       v9,
                                       *(_QWORD *)(v22 + 8));
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
    v14 = this->fields.animationData;
    if ( !v14 )
      goto LABEL_47;
    m_Clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animationData, 0);
    if ( !m_Clip )
      goto LABEL_47;
    v15 = UnityEngine_Object__get_name(m_Clip, 0);
    m_Clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v14, v15, 0);
    if ( !m_Clip )
      goto LABEL_47;
    v16 = (UnityEngine_AnimationState_o *)m_Clip;
    time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)m_Clip, 0);
    m_Clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v16, 0);
    if ( !m_Clip )
      goto LABEL_47;
  }
  if ( time < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)m_Clip, 0) )
    return;
LABEL_31:
  v23 = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v23, 0, 0) )
  {
    p_simpleAnimationData = (CGThumbnailListItem_o *)&this->fields.animationData;
    v24 = (UnityEngine_Object_o *)this->fields.animationData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v24, 0, 0) )
      goto LABEL_41;
  }
  m_Clip = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( !p_simpleAnimationData->klass )
LABEL_47:
    sub_1C372B4(m_Clip);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)m_Clip, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_71266940(gameObject, 0);
  p_simpleAnimationData->klass = 0;
  sub_1C36FFC(p_simpleAnimationData, 0, v29, v30);
LABEL_41:
  effectIndex = this->fields.effectIndex;
  if ( effectIndex == 2 )
  {
    this->fields.effectIndex = 0;
    this->fields.effectAsset = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.effectAsset, 0, v26, v27);
    animationEndCallback = this->fields.animationEndCallback;
    p_animationEndCallback = (CGThumbnailListItem_o *)&this->fields.animationEndCallback;
    v35 = animationEndCallback;
    if ( animationEndCallback )
    {
      p_animationEndCallback->klass = 0;
      sub_1C36FFC(p_animationEndCallback, 0, v32, v33);
      ((void (__fastcall *)(intptr_t, intptr_t))v35->fields.invoke_impl)(v35->fields.method_code, v35->fields.method);
    }
  }
  else if ( effectIndex == 1 )
  {
    TitleInfoEventFactory__StartRateEffect(this, v25);
  }
}