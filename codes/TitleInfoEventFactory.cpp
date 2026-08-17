void TitleInfoEventFactory___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct TitleInfoEventFactory_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct TitleInfoEventFactory_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct TitleInfoEventFactory_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct TitleInfoEventFactory_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  struct TitleInfoEventFactory_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v48; // w1
  struct TitleInfoEventFactory_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w1
  struct TitleInfoEventFactory_StaticFields *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7

  if ( (byte_596E7A6 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventFactory_TypeInfo);
    sub_2213A60(&StringLiteral_19701/*"ef_factory_open"*/);
    sub_2213A60(&StringLiteral_19702/*"ef_factory_open1"*/);
    sub_2213A60(&StringLiteral_20288/*"factory_icon_possible"*/);
    sub_2213A60(&StringLiteral_20287/*"factory_bg_rate"*/);
    sub_2213A60(&StringLiteral_19700/*"ef_factory_flash1"*/);
    sub_2213A60(&StringLiteral_20290/*"factory_title_chocolate"*/);
    sub_2213A60(&StringLiteral_20289/*"factory_line"*/);
    sub_2213A60(&StringLiteral_19699/*"ef_factory_flash"*/);
    byte_596E7A6 = 1;
  }
  v7 = StringLiteral_20290/*"factory_title_chocolate"*/;
  TitleInfoEventFactory_TypeInfo->static_fields->SPRITE_NAME_TITLE = (struct System_String_o *)StringLiteral_20290/*"factory_title_chocolate"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)TitleInfoEventFactory_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_20288/*"factory_icon_possible"*/;
  static_fields = TitleInfoEventFactory_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_POSSIBLE = (struct System_String_o *)StringLiteral_20288/*"factory_icon_possible"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->SPRITE_NAME_POSSIBLE,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_20289/*"factory_line"*/;
  v17 = TitleInfoEventFactory_TypeInfo->static_fields;
  v17->SPRITE_NAME_LINE = (struct System_String_o *)StringLiteral_20289/*"factory_line"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->SPRITE_NAME_LINE, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_20287/*"factory_bg_rate"*/;
  v25 = TitleInfoEventFactory_TypeInfo->static_fields;
  v25->SPRITE_NAME_BG_RATE = (struct System_String_o *)StringLiteral_20287/*"factory_bg_rate"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->SPRITE_NAME_BG_RATE, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_19701/*"ef_factory_open"*/;
  v33 = TitleInfoEventFactory_TypeInfo->static_fields;
  v33->OBJECT_NAME_EFFECT_1 = (struct System_String_o *)StringLiteral_19701/*"ef_factory_open"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->OBJECT_NAME_EFFECT_1, v32, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_19699/*"ef_factory_flash"*/;
  v41 = TitleInfoEventFactory_TypeInfo->static_fields;
  v41->OBJECT_NAME_EFFECT_2 = (struct System_String_o *)StringLiteral_19699/*"ef_factory_flash"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v41->OBJECT_NAME_EFFECT_2, v40, v42, v43, v44, v45, v46, v47);
  v48 = StringLiteral_19702/*"ef_factory_open1"*/;
  v49 = TitleInfoEventFactory_TypeInfo->static_fields;
  v49->EFFECT_ANIMATION_START_1 = (struct System_String_o *)StringLiteral_19702/*"ef_factory_open1"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v49->EFFECT_ANIMATION_START_1, v48, v50, v51, v52, v53, v54, v55);
  v56 = StringLiteral_19700/*"ef_factory_flash1"*/;
  v57 = TitleInfoEventFactory_TypeInfo->static_fields;
  v57->EFFECT_ANIMATION_START_2 = (struct System_String_o *)StringLiteral_19700/*"ef_factory_flash1"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v57->EFFECT_ANIMATION_START_2, v56, v58, v59, v60, v61, v62, v63);
}


void TitleInfoEventFactory___ctor(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void TitleInfoEventFactory__Close(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_c *v13; // x0
  UnityEngine_Object_o *simpleAnimationData; // x20
  struct SimpleAnimation_o **p_simpleAnimationData; // x22
  __int64 v16; // x2
  UnityEngine_GameObject_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_c *v20; // x8
  UnityEngine_Object_o *v21; // x20
  MissionNaviTransitionBoardItem_o *p_animationData; // x19
  UnityEngine_Object_o *v23; // x20
  struct UnityEngine_Animation_o *animationData; // t1
  UnityEngine_GameObject_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_596E7A0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E7A0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.effectAsset = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.effectAsset, 0, v5, v6, v7, v8, v9, v10);
  v13 = UnityEngine_Object_TypeInfo;
  p_simpleAnimationData = &this->fields.simpleAnimationData;
  simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
  this->fields.effectIndex = 0;
  if ( !*(&v13->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v13, v11, v12);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationData, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)*p_simpleAnimationData;
    if ( *p_simpleAnimationData )
    {
      v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      v20 = UnityEngine_Object_TypeInfo;
      v21 = (UnityEngine_Object_o *)v17;
      p_animationData = (MissionNaviTransitionBoardItem_o *)&this->fields.simpleAnimationData;
LABEL_14:
      if ( !*(&v20->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v20, v18, v19);
      UnityEngine_Object__DestroyImmediate_83460132(v21, 0);
      p_animationData->klass = 0;
      sub_2213A04(p_animationData, 0, v26, v27, v28, v29, v30, v31);
      return;
    }
    goto LABEL_18;
  }
  animationData = this->fields.animationData;
  p_animationData = (MissionNaviTransitionBoardItem_o *)&this->fields.animationData;
  v23 = (UnityEngine_Object_o *)animationData;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v16);
  if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)p_animationData->klass;
    if ( p_animationData->klass )
    {
      v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      v20 = UnityEngine_Object_TypeInfo;
      v21 = (UnityEngine_Object_o *)v25;
      goto LABEL_14;
    }
LABEL_18:
    sub_2213CDC(gameObject, v4);
  }
}


void TitleInfoEventFactory__LvUpIconCreate(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *unitDictionary; // x0
  const MethodInfo *v4; // x3

  if ( (byte_596E7A3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
    byte_596E7A3 = 1;
  }
  unitDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary;
  if ( !unitDictionary
    || (unitDictionary = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                   unitDictionary,
                                                                                   this->fields.lvUpIndex,
                                                                                   (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__)) == 0 )
  {
    sub_2213CDC(unitDictionary, method);
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
  __int64 v10; // x1
  __int64 v11; // x2
  UISprite_o *titleSprite; // x24
  TitleInfoEventFactory_c *v13; // x8
  System_String_o *SPRITE_NAME_TITLE; // x25
  __int64 v15; // x2
  __int64 v16; // x29
  int v17; // w28
  __int64 v18; // x27
  __int64 v19; // x2
  int v20; // w9
  _DWORD *v21; // x25
  __int64 v22; // x8
  unsigned int v23; // w9
  Il2CppObject *titleInfoEventFactoryUnitPrefab; // x26
  int v25; // w21
  Il2CppObject *v26; // x26
  const MethodInfo *v27; // x4
  struct EventDetailEntity_o *v28; // x8
  Il2CppObject *v29; // x26
  ShopEntity_o *v30; // x25
  NetworkManager_c *v31; // x0
  int64_t userIdNumber; // x26
  int32_t ItemID; // w2
  int v34; // w21
  __int64 v35; // x1
  __int64 v36; // x2
  Il2CppObject *gameObject; // x25
  Il2CppObject *v38; // x25
  UILabel_o *rateLabel; // x20
  System_String_o *v40; // x21
  Il2CppObject *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  UserItemMaster_o *v43; // [xsp+0h] [xbp-80h]
  __int64 v44; // [xsp+10h] [xbp-70h]
  double v45; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596E79F & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventFactoryMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_2213A60(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TitleInfoEventFactory_TypeInfo);
    sub_2213A60(&StringLiteral_5806/*"EVENT_FACTORY_GET_EP_RATE"*/);
    byte_596E79F = 1;
  }
  if ( this->fields.eventDetailEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_65;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventFactoryMaster___);
    eventDetailEntity = this->fields.eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_65;
    if ( !Instance )
      goto LABEL_65;
    Instance = EventFactoryMaster__GetDatas((EventFactoryMaster_o *)Instance, eventDetailEntity->fields.eventId, 0);
    if ( !Instance )
      goto LABEL_65;
    v6 = Instance;
    v44 = *((_QWORD *)Instance + 3);
    if ( (int)v44 < 1 )
      return;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_65;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_65;
    v8 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserShopMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_65;
    v9 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
    titleSprite = this->fields.titleSprite;
    v43 = (UserItemMaster_o *)v9;
    v13 = TitleInfoEventFactory_TypeInfo;
    if ( !*(&TitleInfoEventFactory_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo, v10, v11);
      v13 = TitleInfoEventFactory_TypeInfo;
    }
    SPRITE_NAME_TITLE = v13->static_fields->SPRITE_NAME_TITLE;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10, v11);
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
    v16 = 0;
    v17 = 1000;
    do
    {
      if ( (unsigned int)v16 >= v6[6] )
LABEL_66:
        sub_2213CE4(Instance);
      v18 = *(_QWORD *)&v6[2 * v16 + 8];
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v15);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v15);
        Instance = NetworkManager_TypeInfo;
      }
      if ( !v18 )
        goto LABEL_65;
      if ( !v8 )
        goto LABEL_65;
      Instance = UserShopMaster__GetEntityDefinitely(
                   (UserShopMaster_o *)v8,
                   *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                   *(_DWORD *)(v18 + 24),
                   0);
      if ( !Instance )
        goto LABEL_65;
      v20 = *((_DWORD *)Instance + 7);
      v21 = Instance;
      if ( v20 <= 0 )
      {
        Instance = MasterData_object;
        if ( !MasterData_object )
          goto LABEL_65;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     *(_DWORD *)(v18 + 24),
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_65;
        v30 = (ShopEntity_o *)Instance;
        Instance = (void *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v15);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(&NetworkManager_TypeInfo);
            byte_5969EF2 = 1;
          }
          v31 = NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v15);
            v31 = NetworkManager_TypeInfo;
          }
          userIdNumber = v31->static_fields->userIdNumber;
          ItemID = ShopEntity__GetItemID(v30, 0);
          Instance = v43;
          if ( !v43 )
            goto LABEL_65;
          Instance = UserItemMaster__GetEntityDefinitely(v43, userIdNumber, ItemID, 0);
          if ( !Instance )
            goto LABEL_65;
          v34 = *((_DWORD *)Instance + 7);
          Instance = (void *)ShopEntity__GetPrice(v30, 0);
          if ( v34 >= (int)Instance )
          {
            Instance = this->fields.createSprite;
            if ( !Instance )
              goto LABEL_65;
            gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35, v36);
            v38 = UnityEngine_Object__Instantiate_object_(
                    gameObject,
                    (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
            Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v38, 0, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v38 )
                goto LABEL_65;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v38, 1, 0);
              GameObjectExtensions__SafeSetParent(
                (UnityEngine_GameObject_o *)v38,
                (UnityEngine_Component_o *)this->fields.grid,
                0);
            }
          }
        }
      }
      else
      {
        v22 = *(_QWORD *)(v18 + 40);
        if ( !v22 )
          goto LABEL_65;
        v23 = v20 - 1;
        if ( v23 >= *(_DWORD *)(v22 + 24) )
          goto LABEL_66;
        titleInfoEventFactoryUnitPrefab = (Il2CppObject *)this->fields.titleInfoEventFactoryUnitPrefab;
        v25 = *(_DWORD *)(v22 + 4LL * v23 + 32);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v19);
        v17 += v25;
        v26 = UnityEngine_Object__Instantiate_object_(
                titleInfoEventFactoryUnitPrefab,
                (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          GameObjectExtensions__SafeSetParent(
            (UnityEngine_GameObject_o *)v26,
            (UnityEngine_Component_o *)this->fields.grid,
            0);
          if ( !v26 )
            goto LABEL_65;
          Instance = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v26,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___);
          v28 = this->fields.eventDetailEntity;
          if ( !v28 )
            goto LABEL_65;
          v29 = (Il2CppObject *)Instance;
          if ( !Instance )
            goto LABEL_65;
          TitleInfoEventFactoryUnit__Open(
            (TitleInfoEventFactoryUnit_o *)Instance,
            v28->fields.eventId,
            *(_DWORD *)(v18 + 16),
            v21[7],
            v27);
          Instance = this->fields.unitDictionary;
          if ( !Instance )
            goto LABEL_65;
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)Instance,
            *(_DWORD *)(v18 + 16),
            v29,
            (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__);
        }
      }
      ++v16;
    }
    while ( (_DWORD)v44 != (_DWORD)v16 );
    rateLabel = this->fields.rateLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v15);
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_5806/*"EVENT_FACTORY_GET_EP_RATE"*/, 0);
    v45 = (double)v17 / 1000.0;
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984380, &v45);
    Instance = System_String__Format(v40, v41, 0);
    if ( !rateLabel
      || (UILabel__set_text(rateLabel, (System_String_o *)Instance, 0), (Instance = this->fields.RateBase) == 0)
      || (v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0),
          GameObjectExtensions__SetParent(v42, (UnityEngine_Component_o *)this->fields.grid, 0),
          (Instance = this->fields.grid) == 0) )
    {
LABEL_65:
      sub_2213CDC(Instance, v4);
    }
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 440LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 448LL));
  }
}


void TitleInfoEventFactory__RateChange(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x23
  DataManager_o *v7; // x20
  __int64 v8; // x2
  UserShopMaster_o *v9; // x22
  __int64 v10; // x27
  int v11; // w25
  __int64 v12; // x26
  int m_CancellationTokenSource_high; // w8
  bool v14; // vf
  int v15; // w8
  __int64 v16; // x9
  UILabel_o *rateLabel; // x19
  System_String_o *v18; // x20
  Il2CppObject *v19; // x0
  double v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596E7A5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventFactoryMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_5806/*"EVENT_FACTORY_GET_EP_RATE"*/);
    byte_596E7A5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventFactoryMaster___);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( !eventDetailEntity )
    goto LABEL_30;
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)EventFactoryMaster__GetDatas(
                                (EventFactoryMaster_o *)Instance,
                                eventDetailEntity->fields.eventId,
                                0);
  if ( !Instance )
    goto LABEL_30;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v7 = Instance;
  if ( (int)m_CancellationTokenSource < 1 )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserShopMaster___);
  v9 = (UserShopMaster_o *)Instance;
  v10 = 0;
  v11 = 1000;
  do
  {
    if ( (unsigned int)v10 >= LODWORD(v7->fields.m_CancellationTokenSource) )
LABEL_31:
      sub_2213CE4(Instance);
    v12 = *((_QWORD *)&v7->fields._DispLog + v10);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v8);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v8);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !v12 )
      goto LABEL_30;
    if ( !v9 )
      goto LABEL_30;
    Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                  v9,
                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                  *(_DWORD *)(v12 + 24),
                                  0);
    if ( !Instance )
      goto LABEL_30;
    m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
    v14 = __OFSUB__(m_CancellationTokenSource_high, 1);
    v15 = m_CancellationTokenSource_high - 1;
    if ( v15 < 0 == v14 )
    {
      v16 = *(_QWORD *)(v12 + 40);
      if ( !v16 )
        goto LABEL_30;
      if ( (unsigned int)v15 >= *(_DWORD *)(v16 + 24) )
        goto LABEL_31;
      v11 += *(_DWORD *)(v16 + 4LL * (unsigned int)v15 + 32);
    }
    ++v10;
  }
  while ( (_DWORD)m_CancellationTokenSource != (_DWORD)v10 );
  rateLabel = this->fields.rateLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v8);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5806/*"EVENT_FACTORY_GET_EP_RATE"*/, 0);
  v20 = (double)v11 / 1000.0;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984380, &v20);
  Instance = (DataManager_o *)System_String__Format(v18, v19, 0);
  if ( !rateLabel )
LABEL_30:
    sub_2213CDC(Instance, v4);
  UILabel__set_text(rateLabel, (System_String_o *)Instance, 0);
}


void TitleInfoEventFactory__Setup(
        TitleInfoEventFactory_o *this,
        EventDetailEntity_o *eventDetailEntity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_unitDictionary; // x19
  struct System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *unitDictionary; // t1
  System_Collections_Generic_Dictionary_int__object__o *v12; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596E79E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo);
    byte_596E79E = 1;
  }
  this->fields.eventDetailEntity = eventDetailEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventDetailEntity,
    (int32_t)eventDetailEntity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  unitDictionary = this->fields.unitDictionary;
  p_unitDictionary = (MissionNaviTransitionBoardItem_o *)&this->fields.unitDictionary;
  if ( !unitDictionary )
  {
    v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor_66698004(
      v12,
      10,
      (const MethodInfo_3F9BB14 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__);
    p_unitDictionary->klass = (MissionNaviTransitionBoardItem_c *)v12;
    sub_2213A04(p_unitDictionary, (int32_t)v12, v13, v14, v15, v16, v17, v18);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x2
  UnityEngine_Object_o *Object_47472752; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  UnityEngine_GameObject_c **v30; // x20
  Il2CppObject *v31; // x0
  UnityEngine_GameObject_o *v32; // x21
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *v34; // x20
  Il2CppObject *Component_object; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  Il2CppObject *v43; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  __int64 v51; // x2
  SimpleAnimation_o *v52; // x21
  TitleInfoEventFactoryUnit_c *klass; // x8
  UnityEngine_GameObject_o *v54; // x21
  __int64 v55; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v57; // x0
  UnityEngine_Animation_o *v58; // x20
  __int64 v59; // x2
  UnityEngine_Animation_o *v60; // x20
  UnityEngine_Animation_o *v61; // x20
  System_String_o *v62; // x0
  SimpleAnimation_o *v63; // x20
  System_String_o *name; // x0
  UnityEngine_Vector3_o LvUpEffectOffset; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596E7A2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    sub_2213A60(&TitleInfoEventFactory_TypeInfo);
    sub_2213A60(&StringLiteral_8876/*"LvUpIconCreate"*/);
    byte_596E7A2 = 1;
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
           (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__) )
    {
      this->fields.effectAsset = effectAsset;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.effectAsset,
        (int32_t)effectAsset,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      this->fields.animationEndCallback = callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.animationEndCallback,
        (int32_t)callback,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      this->fields.effectIndex = 1;
      this->fields.lvUpIndex = ShopEntity__get_TargetId(shopEntity, 0);
      this->fields.lvUpCount = buyCount;
      TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
      if ( !*(&TitleInfoEventFactory_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo, v13, v26);
      if ( !effectAsset )
        goto LABEL_51;
      Object_47472752 = AssetData__GetObject_47472752(
                          effectAsset,
                          TitleInfoEventFactory_TypeInfo->static_fields->OBJECT_NAME_EFFECT_1,
                          0);
      v30 = (UnityEngine_GameObject_c **)Object_47472752;
      if ( *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      {
        if ( Object_47472752 )
          goto LABEL_12;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
        if ( v30 )
        {
LABEL_12:
          if ( *v30 == UnityEngine_GameObject_TypeInfo )
            v31 = (Il2CppObject *)v30;
          else
            v31 = 0;
LABEL_20:
          TargetId = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   v31,
                                                   (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( this->fields.unitDictionary )
          {
            v32 = TargetId;
            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                     (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary,
                     this->fields.lvUpIndex,
                     (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
            GameObjectExtensions__SafeSetParent(v32, (UnityEngine_Component_o *)Item, 0);
            if ( v32 )
            {
              TargetId = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v32, 0);
              if ( this->fields.unitDictionary )
              {
                v34 = (UnityEngine_Transform_o *)TargetId;
                TargetId = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                         (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary,
                                                         this->fields.lvUpIndex,
                                                         (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
                if ( TargetId )
                {
                  LvUpEffectOffset = TitleInfoEventFactoryUnit__GetLvUpEffectOffset(
                                       (TitleInfoEventFactoryUnit_o *)TargetId,
                                       v13);
                  if ( v34 )
                  {
                    v66.fields.z = LvUpEffectOffset.fields.z + this->fields.lvUpAnimetionOffset.fields.z;
                    v66.fields.y = LvUpEffectOffset.fields.y + this->fields.lvUpAnimetionOffset.fields.y;
                    v66.fields.x = LvUpEffectOffset.fields.x + this->fields.lvUpAnimetionOffset.fields.x;
                    UnityEngine_Transform__set_localPosition(v34, v66, 0);
                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                         v32,
                                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                    this->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
                    p_simpleAnimationData = &this->fields.simpleAnimationData;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)&this->fields.simpleAnimationData,
                      (int32_t)Component_object,
                      v37,
                      v38,
                      v39,
                      v40,
                      v41,
                      v42);
                    v43 = UnityEngine_GameObject__GetComponent_object_(
                            v32,
                            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                    this->fields.animationData = (struct UnityEngine_Animation_o *)v43;
                    p_animationData = &this->fields.animationData;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)&this->fields.animationData,
                      (int32_t)v43,
                      v45,
                      v46,
                      v47,
                      v48,
                      v49,
                      v50);
                    if ( UnityEngine_Object__op_Inequality(
                           (UnityEngine_Object_o *)this->fields.simpleAnimationData,
                           0,
                           0) )
                    {
                      TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
                      v52 = *p_simpleAnimationData;
                      if ( !*(&TitleInfoEventFactory_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo, v13, v51);
                      if ( v52 )
                      {
                        TargetId = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                                                 v52,
                                                                 TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                                                                 0);
                        if ( TargetId )
                        {
                          klass = (TitleInfoEventFactoryUnit_c *)TargetId->klass;
                          v54 = TargetId;
                          v55 = *(unsigned __int16 *)&TargetId->klass->_2.rank;
                          if ( *(_WORD *)&TargetId->klass->_2.rank )
                          {
                            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
                            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                            {
                              --v55;
                              p_offset += 2;
                              if ( !v55 )
                                goto LABEL_34;
                            }
                            v57 = (__int64)(&klass[1]._1.nestedTypes + 2 * *(_DWORD *)p_offset);
                          }
                          else
                          {
LABEL_34:
                            v57 = sub_224BC3C(TargetId, SimpleAnimation_State_TypeInfo, 14);
                          }
                          TargetId = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v57)(
                                                                   v54,
                                                                   *(_QWORD *)(v57 + 8));
                          if ( *p_simpleAnimationData )
                          {
                            SimpleAnimation__set_clip(
                              *p_simpleAnimationData,
                              (UnityEngine_AnimationClip_o *)TargetId,
                              0);
                            v63 = *p_simpleAnimationData;
                            if ( v63 )
                            {
                              TargetId = (UnityEngine_GameObject_o *)v63->fields.m_Clip;
                              if ( TargetId )
                              {
                                name = UnityEngine_Object__get_name((UnityEngine_Object_o *)TargetId, 0);
                                SimpleAnimation__Play_78552168(v63, name, 0);
                                goto LABEL_50;
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      v58 = *p_animationData;
                      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v51);
                      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v58, 0, 0) )
                        goto LABEL_50;
                      TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
                      v60 = *p_animationData;
                      if ( !*(&TitleInfoEventFactory_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo, v13, v59);
                      if ( v60 )
                      {
                        TargetId = (UnityEngine_GameObject_o *)UnityEngine_Animation__GetClip(
                                                                 v60,
                                                                 TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                                                                 0);
                        if ( *p_animationData )
                        {
                          UnityEngine_Animation__set_clip(*p_animationData, (UnityEngine_AnimationClip_o *)TargetId, 0);
                          v61 = *p_animationData;
                          if ( *p_animationData )
                          {
                            TargetId = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(*p_animationData, 0);
                            if ( TargetId )
                            {
                              v62 = UnityEngine_Object__get_name((UnityEngine_Object_o *)TargetId, 0);
                              UnityEngine_Animation__Play_83078544(v61, v62, 0);
LABEL_50:
                              UnityEngine_MonoBehaviour__Invoke(
                                (UnityEngine_MonoBehaviour_o *)this,
                                (System_String_o *)StringLiteral_8876/*"LvUpIconCreate"*/,
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
          sub_2213CDC(TargetId, v13);
        }
      }
      v31 = 0;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssetData_o *effectAsset; // x20
  TitleInfoEventFactory_c *v10; // x0
  int v11; // w8
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *Object_47472752; // x20
  Il2CppObject *v15; // x0
  MissionNaviTransitionBoardItem_o *p_animationEndCallback; // x19
  struct System_Action_o *v17; // x20
  struct System_Action_o *animationEndCallback; // t1
  Il2CppObject *v19; // x21
  UnityEngine_AnimationClip_o *Item; // x0
  __int64 v21; // x1
  Il2CppObject *Component_object; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppObject *v30; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x2
  SimpleAnimation_o *v39; // x21
  UnityEngine_AnimationClip_c *klass; // x8
  UnityEngine_AnimationClip_o *v41; // x21
  __int64 v42; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v44; // x0
  UnityEngine_Animation_o *v45; // x20
  __int64 v46; // x2
  UnityEngine_Animation_o *v47; // x20
  UnityEngine_Animation_o *v48; // x20
  System_String_o *v49; // x0
  SimpleAnimation_o *v50; // x20
  System_String_o *name; // x0

  if ( (byte_596E7A4 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    sub_2213A60(&TitleInfoEventFactory_TypeInfo);
    sub_2213A60(&StringLiteral_11680/*"RateChange"*/);
    byte_596E7A4 = 1;
  }
  effectAsset = this->fields.effectAsset;
  if ( effectAsset )
  {
    v10 = TitleInfoEventFactory_TypeInfo;
    v11 = *(&TitleInfoEventFactory_TypeInfo->_2.cctor_finished + 1);
    this->fields.effectIndex = 2;
    if ( !v11 )
    {
      j_il2cpp_runtime_class_init_0(v10, method, v2);
      v10 = TitleInfoEventFactory_TypeInfo;
    }
    Object_47472752 = AssetData__GetObject_47472752(effectAsset, v10->static_fields->OBJECT_NAME_EFFECT_2, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
    if ( Object_47472752 )
    {
      if ( (UnityEngine_GameObject_c *)Object_47472752->klass == UnityEngine_GameObject_TypeInfo )
        v15 = (Il2CppObject *)Object_47472752;
      else
        v15 = 0;
    }
    else
    {
      v15 = 0;
    }
    v19 = UnityEngine_Object__Instantiate_object_(
            v15,
            (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent(
      (UnityEngine_GameObject_o *)v19,
      (UnityEngine_Component_o *)this->fields.RateBase,
      0);
    if ( v19 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v19,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
      this->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
      p_simpleAnimationData = &this->fields.simpleAnimationData;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.simpleAnimationData,
        (int32_t)Component_object,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      v30 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v19,
              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      this->fields.animationData = (struct UnityEngine_Animation_o *)v30;
      p_animationData = &this->fields.animationData;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.animationData,
        (int32_t)v30,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.simpleAnimationData, 0, 0) )
      {
        Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
        v39 = *p_simpleAnimationData;
        if ( !*(&TitleInfoEventFactory_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo, v21, v38);
        if ( v39 )
        {
          Item = (UnityEngine_AnimationClip_o *)SimpleAnimation__get_Item(
                                                  v39,
                                                  TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                                                  0);
          if ( Item )
          {
            klass = Item->klass;
            v41 = Item;
            v42 = *(unsigned __int16 *)&Item->klass->_2.rank;
            if ( *(_WORD *)&Item->klass->_2.rank )
            {
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v42;
                p_offset += 2;
                if ( !v42 )
                  goto LABEL_25;
              }
              v44 = (__int64)(&klass[1]._1.nestedTypes + 2 * *(_DWORD *)p_offset);
            }
            else
            {
LABEL_25:
              v44 = sub_224BC3C(Item, SimpleAnimation_State_TypeInfo, 14);
            }
            Item = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(UnityEngine_AnimationClip_o *, _QWORD))v44)(
                                                    v41,
                                                    *(_QWORD *)(v44 + 8));
            if ( *p_simpleAnimationData )
            {
              SimpleAnimation__set_clip(*p_simpleAnimationData, Item, 0);
              v50 = *p_simpleAnimationData;
              if ( v50 )
              {
                Item = v50->fields.m_Clip;
                if ( Item )
                {
                  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0);
                  SimpleAnimation__Play_78552168(v50, name, 0);
                  goto LABEL_42;
                }
              }
            }
          }
        }
      }
      else
      {
        v45 = *p_animationData;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v38);
        if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v45, 0, 0) )
          goto LABEL_42;
        Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
        v47 = *p_animationData;
        if ( !*(&TitleInfoEventFactory_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo, v21, v46);
        if ( v47 )
        {
          Item = UnityEngine_Animation__GetClip(
                   v47,
                   TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                   0);
          if ( *p_animationData )
          {
            UnityEngine_Animation__set_clip(*p_animationData, Item, 0);
            v48 = *p_animationData;
            if ( *p_animationData )
            {
              Item = UnityEngine_Animation__get_clip(*p_animationData, 0);
              if ( Item )
              {
                v49 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0);
                UnityEngine_Animation__Play_83078544(v48, v49, 0);
LABEL_42:
                UnityEngine_MonoBehaviour__Invoke(
                  (UnityEngine_MonoBehaviour_o *)this,
                  (System_String_o *)StringLiteral_11680/*"RateChange"*/,
                  this->fields.rateChangeTime,
                  0);
                return;
              }
            }
          }
        }
      }
    }
    sub_2213CDC(Item, v21);
  }
  animationEndCallback = this->fields.animationEndCallback;
  p_animationEndCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.animationEndCallback;
  v17 = animationEndCallback;
  if ( animationEndCallback )
  {
    p_animationEndCallback->klass = 0;
    sub_2213A04(p_animationEndCallback, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v17->fields.invoke_impl)(v17->fields.method_code, v17->fields.method);
  }
}


void TitleInfoEventFactory__Update(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Object_o *m_Clip; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x2
  SimpleAnimation_o *klass; // x21
  System_String_o *name; // x0
  UnityEngine_Object_c *v11; // x8
  UnityEngine_Object_o *v12; // x21
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0
  UnityEngine_Object_o *animationData; // x21
  __int64 v17; // x2
  UnityEngine_Animation_o *v18; // x21
  System_String_o *v19; // x0
  UnityEngine_AnimationState_o *v20; // x21
  float time; // s8
  float v22; // s0
  UnityEngine_Object_c *v23; // x8
  __int64 v24; // x9
  SimpleAnimation_State_c **v25; // x10
  __int64 v26; // x0
  UnityEngine_Object_o *v27; // x21
  __int64 v28; // x2
  UnityEngine_Object_o *v29; // x21
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x1
  __int64 v37; // x2
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t effectIndex; // w8
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  MissionNaviTransitionBoardItem_o *p_animationEndCallback; // x19
  struct System_Action_o *v53; // x20
  struct System_Action_o *animationEndCallback; // t1

  if ( (byte_596E7A1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_596E7A1 = 1;
  }
  p_simpleAnimationData = (MissionNaviTransitionBoardItem_o *)&this->fields.simpleAnimationData;
  simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
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
    v11 = m_Clip->klass;
    v12 = m_Clip;
    v13 = *(unsigned __int16 *)&m_Clip->klass->_2.rank;
    if ( *(_WORD *)&m_Clip->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&v11->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v13;
        p_offset += 2;
        if ( !v13 )
          goto LABEL_13;
      }
      v15 = (__int64)(&v11->vtable._3_ToString + *(_DWORD *)p_offset);
    }
    else
    {
LABEL_13:
      v15 = sub_224BC3C(m_Clip, SimpleAnimation_State_TypeInfo, 3);
    }
    v22 = (*(float (__fastcall **)(UnityEngine_Object_o *, _QWORD))v15)(v12, *(_QWORD *)(v15 + 8));
    v23 = v12->klass;
    time = v22;
    v24 = *(unsigned __int16 *)&v12->klass->_2.rank;
    if ( *(_WORD *)&v12->klass->_2.rank )
    {
      v25 = (SimpleAnimation_State_c **)&v23->_1.interfaceOffsets->offset;
      while ( *(v25 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v24;
        v25 += 2;
        if ( !v24 )
          goto LABEL_27;
      }
      v26 = (__int64)(&v23[1]._1.nestedTypes + 2 * *(_DWORD *)v25);
    }
    else
    {
LABEL_27:
      v26 = sub_224BC3C(v12, SimpleAnimation_State_TypeInfo, 14);
    }
    m_Clip = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v26)(
                                       v12,
                                       *(_QWORD *)(v26 + 8));
    if ( !m_Clip )
      goto LABEL_47;
  }
  else
  {
    animationData = (UnityEngine_Object_o *)this->fields.animationData;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    m_Clip = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(animationData, 0, 0);
    if ( ((unsigned __int8)m_Clip & 1) == 0 )
      goto LABEL_31;
    v18 = this->fields.animationData;
    if ( !v18 )
      goto LABEL_47;
    m_Clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animationData, 0);
    if ( !m_Clip )
      goto LABEL_47;
    v19 = UnityEngine_Object__get_name(m_Clip, 0);
    m_Clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v18, v19, 0);
    if ( !m_Clip )
      goto LABEL_47;
    v20 = (UnityEngine_AnimationState_o *)m_Clip;
    time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)m_Clip, 0);
    m_Clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v20, 0);
    if ( !m_Clip )
      goto LABEL_47;
  }
  if ( time < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)m_Clip, 0) )
    return;
LABEL_31:
  v27 = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v17);
  if ( !UnityEngine_Object__op_Inequality(v27, 0, 0) )
  {
    p_simpleAnimationData = (MissionNaviTransitionBoardItem_o *)&this->fields.animationData;
    v29 = (UnityEngine_Object_o *)this->fields.animationData;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v28);
    if ( !UnityEngine_Object__op_Inequality(v29, 0, 0) )
      goto LABEL_41;
  }
  m_Clip = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( !p_simpleAnimationData->klass )
LABEL_47:
    sub_2213CDC(m_Clip, v7);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)m_Clip, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36, v37);
  UnityEngine_Object__DestroyImmediate_83460132(gameObject, 0);
  p_simpleAnimationData->klass = 0;
  sub_2213A04(p_simpleAnimationData, 0, v39, v40, v41, v42, v43, v44);
LABEL_41:
  effectIndex = this->fields.effectIndex;
  if ( effectIndex == 2 )
  {
    this->fields.effectIndex = 0;
    this->fields.effectAsset = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.effectAsset, 0, v30, v31, v32, v33, v34, v35);
    animationEndCallback = this->fields.animationEndCallback;
    p_animationEndCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.animationEndCallback;
    v53 = animationEndCallback;
    if ( animationEndCallback )
    {
      p_animationEndCallback->klass = 0;
      sub_2213A04(p_animationEndCallback, 0, v46, v47, v48, v49, v50, v51);
      ((void (__fastcall *)(intptr_t, intptr_t))v53->fields.invoke_impl)(v53->fields.method_code, v53->fields.method);
    }
  }
  else if ( effectIndex == 1 )
  {
    TitleInfoEventFactory__StartRateEffect(this, v7);
  }
}