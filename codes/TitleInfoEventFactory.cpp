void __fastcall TitleInfoEventFactory___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct TitleInfoEventFactory_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct TitleInfoEventFactory_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct TitleInfoEventFactory_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  struct TitleInfoEventFactory_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  struct TitleInfoEventFactory_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  struct TitleInfoEventFactory_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  struct TitleInfoEventFactory_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3

  if ( (byte_4A59070 & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventFactory_TypeInfo);
    sub_1B885B0(&StringLiteral_18834/*"ef_factory_open"*/);
    sub_1B885B0(&StringLiteral_18835/*"ef_factory_open1"*/);
    sub_1B885B0(&StringLiteral_19360/*"factory_icon_possible"*/);
    sub_1B885B0(&StringLiteral_19359/*"factory_bg_rate"*/);
    sub_1B885B0(&StringLiteral_18833/*"ef_factory_flash1"*/);
    sub_1B885B0(&StringLiteral_19362/*"factory_title_chocolate"*/);
    sub_1B885B0(&StringLiteral_19361/*"factory_line"*/);
    sub_1B885B0(&StringLiteral_18832/*"ef_factory_flash"*/);
    byte_4A59070 = 1;
  }
  TitleInfoEventFactory_TypeInfo->static_fields->SPRITE_NAME_TITLE = (struct System_String_o *)StringLiteral_19362/*"factory_title_chocolate"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)TitleInfoEventFactory_TypeInfo->static_fields,
    StringLiteral_19362/*"factory_title_chocolate"*/,
    v1,
    v2);
  v3 = StringLiteral_19360/*"factory_icon_possible"*/;
  static_fields = TitleInfoEventFactory_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_POSSIBLE = (struct System_String_o *)StringLiteral_19360/*"factory_icon_possible"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->SPRITE_NAME_POSSIBLE, v3, v5, v6);
  v7 = StringLiteral_19361/*"factory_line"*/;
  v8 = TitleInfoEventFactory_TypeInfo->static_fields;
  v8->SPRITE_NAME_LINE = (struct System_String_o *)StringLiteral_19361/*"factory_line"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->SPRITE_NAME_LINE, v7, v9, v10);
  v11 = StringLiteral_19359/*"factory_bg_rate"*/;
  v12 = TitleInfoEventFactory_TypeInfo->static_fields;
  v12->SPRITE_NAME_BG_RATE = (struct System_String_o *)StringLiteral_19359/*"factory_bg_rate"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->SPRITE_NAME_BG_RATE, v11, v13, v14);
  v15 = StringLiteral_18834/*"ef_factory_open"*/;
  v16 = TitleInfoEventFactory_TypeInfo->static_fields;
  v16->OBJECT_NAME_EFFECT_1 = (struct System_String_o *)StringLiteral_18834/*"ef_factory_open"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->OBJECT_NAME_EFFECT_1, v15, v17, v18);
  v19 = StringLiteral_18832/*"ef_factory_flash"*/;
  v20 = TitleInfoEventFactory_TypeInfo->static_fields;
  v20->OBJECT_NAME_EFFECT_2 = (struct System_String_o *)StringLiteral_18832/*"ef_factory_flash"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->OBJECT_NAME_EFFECT_2, v19, v21, v22);
  v23 = StringLiteral_18835/*"ef_factory_open1"*/;
  v24 = TitleInfoEventFactory_TypeInfo->static_fields;
  v24->EFFECT_ANIMATION_START_1 = (struct System_String_o *)StringLiteral_18835/*"ef_factory_open1"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v24->EFFECT_ANIMATION_START_1, v23, v25, v26);
  v27 = StringLiteral_18833/*"ef_factory_flash1"*/;
  v28 = TitleInfoEventFactory_TypeInfo->static_fields;
  v28->EFFECT_ANIMATION_START_2 = (struct System_String_o *)StringLiteral_18833/*"ef_factory_flash1"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->EFFECT_ANIMATION_START_2, v27, v29, v30);
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
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Object_o *v9; // x19
  int32_t v10; // w2
  int32_t v11; // w3
  struct UnityEngine_Animation_o **p_animationData; // x19
  UnityEngine_Object_o *v13; // x20
  struct UnityEngine_Animation_o *animationData; // t1
  UnityEngine_Object_o *v15; // x20

  if ( (byte_4A5906A & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5906A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.effectAsset = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectAsset, 0, v5, v6);
  p_simpleAnimationData = (ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimationData;
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
      UnityEngine_Object__DestroyImmediate_69459568(v9, 0LL);
      p_simpleAnimationData->klass = 0LL;
LABEL_18:
      sub_1B88554(p_simpleAnimationData, 0, v10, v11);
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
      UnityEngine_Object__DestroyImmediate_69459568(v15, 0LL);
      p_simpleAnimationData = (ServantStatusBattleListViewItem_o *)p_animationData;
      *p_animationData = 0LL;
      goto LABEL_18;
    }
LABEL_20:
    sub_1B8880C(gameObject, v4);
  }
}


void __fastcall TitleInfoEventFactory__LvUpIconCreate(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *unitDictionary; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4A5906D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
    byte_4A5906D = 1;
  }
  unitDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary;
  if ( !unitDictionary
    || (unitDictionary = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                   unitDictionary,
                                                                                   this->fields.lvUpIndex,
                                                                                   (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__)) == 0LL )
  {
    sub_1B8880C(unitDictionary, method);
  }
  if ( SHIDWORD(unitDictionary->fields._syncRoot) >= 1 )
    TitleInfoEventFactoryUnit__CreateIcon((TitleInfoEventFactoryUnit_o *)unitDictionary, this->fields.lvUpCount, 1, v4);
}


void __fastcall TitleInfoEventFactory__Open(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  int v6; // w26
  int64_t v7; // x20
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v9; // x22
  Il2CppObject *v10; // x0
  UISprite_o *titleSprite; // x24
  TitleInfoEventFactory_c *v12; // x8
  System_String_o *SPRITE_NAME_TITLE; // x25
  unsigned int v14; // w28
  int v15; // w27
  __int64 v16; // x23
  int v17; // w9
  int64_t v18; // x24
  __int64 v19; // x8
  unsigned int v20; // w9
  int v21; // w21
  Il2CppObject *titleInfoEventFactoryUnitPrefab; // x25
  Il2CppObject *v23; // x25
  const MethodInfo *v24; // x4
  struct EventDetailEntity_o *v25; // x8
  Il2CppObject *v26; // x25
  ShopEntity_o *v27; // x24
  int64_t UserId; // x25
  int32_t ItemID; // w2
  int v30; // w21
  Il2CppObject *gameObject; // x24
  Il2CppObject *v32; // x24
  UILabel_o *rateLabel; // x20
  System_String_o *v34; // x21
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UserItemMaster_o *v40; // [xsp+8h] [xbp-78h]
  DataMasterBase_TMaster__TEntity__PKType__o *v41; // [xsp+10h] [xbp-70h]
  double v42; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A59069 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventFactoryMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__);
    sub_1B885B0(&double_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TitleInfoEventFactory_TypeInfo);
    sub_1B885B0(&StringLiteral_5618/*"EVENT_FACTORY_GET_EP_RATE"*/);
    byte_4A59069 = 1;
  }
  if ( this->fields.eventDetailEntity )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_56;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventFactoryMaster___);
    eventDetailEntity = this->fields.eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_56;
    if ( !Instance )
      goto LABEL_56;
    Instance = (int64_t)EventFactoryMaster__GetDatas(
                          (EventFactoryMaster_o *)Instance,
                          eventDetailEntity->fields.eventId,
                          0LL);
    if ( !Instance )
      goto LABEL_56;
    v6 = *(_DWORD *)(Instance + 24);
    v7 = Instance;
    if ( v6 < 1 )
      return;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_56;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_56;
    v41 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    v9 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_56;
    v10 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
    titleSprite = this->fields.titleSprite;
    v40 = (UserItemMaster_o *)v10;
    v12 = TitleInfoEventFactory_TypeInfo;
    if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      v12 = TitleInfoEventFactory_TypeInfo;
    }
    SPRITE_NAME_TITLE = v12->static_fields->SPRITE_NAME_TITLE;
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
    Instance = AtlasManager__SetEventUI(
                 this->fields.bgRateSprite,
                 TitleInfoEventFactory_TypeInfo->static_fields->SPRITE_NAME_BG_RATE,
                 0LL);
    v14 = 0;
    v15 = 1000;
    do
    {
      if ( v14 >= *(_DWORD *)(v7 + 24) )
LABEL_57:
        sub_1B88814(Instance, v4);
      v16 = *(_QWORD *)(v7 + 8LL * (int)v14 + 32);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v16 )
        goto LABEL_56;
      if ( !v9 )
        goto LABEL_56;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(
                            (UserShopMaster_o *)v9,
                            Instance,
                            *(_DWORD *)(v16 + 24),
                            0LL);
      if ( !Instance )
        goto LABEL_56;
      v17 = *(_DWORD *)(Instance + 28);
      v18 = Instance;
      if ( v17 <= 0 )
      {
        Instance = (int64_t)v41;
        if ( !v41 )
          goto LABEL_56;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              v41,
                              *(_DWORD *)(v16 + 24),
                              (const MethodInfo_311D934 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_56;
        v27 = (ShopEntity_o *)Instance;
        Instance = ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          UserId = NetworkManager__get_UserId(0LL);
          ItemID = ShopEntity__GetItemID(v27, 0LL);
          Instance = (int64_t)v40;
          if ( !v40 )
            goto LABEL_56;
          Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v40, UserId, ItemID, 0LL);
          if ( !Instance )
            goto LABEL_56;
          v30 = *(_DWORD *)(Instance + 28);
          Instance = ShopEntity__GetPrice(v27, 0LL);
          if ( v30 >= (int)Instance )
          {
            Instance = (int64_t)this->fields.createSprite;
            if ( !Instance )
              goto LABEL_56;
            gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v32 = UnityEngine_Object__Instantiate_object_(
                    gameObject,
                    (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
            Instance = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v32, 0LL, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v32 )
                goto LABEL_56;
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
        v19 = *(_QWORD *)(v16 + 40);
        if ( !v19 )
          goto LABEL_56;
        v20 = v17 - 1;
        if ( v20 >= *(_DWORD *)(v19 + 24) )
          goto LABEL_57;
        v21 = *(_DWORD *)(v19 + 4LL * v20 + 32);
        titleInfoEventFactoryUnitPrefab = (Il2CppObject *)this->fields.titleInfoEventFactoryUnitPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v15 += v21;
        v23 = UnityEngine_Object__Instantiate_object_(
                titleInfoEventFactoryUnitPrefab,
                (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        Instance = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL);
        if ( (Instance & 1) != 0 )
        {
          GameObjectExtensions__SafeSetParent(
            (UnityEngine_GameObject_o *)v23,
            (UnityEngine_Component_o *)this->fields.grid,
            0LL);
          if ( !v23 )
            goto LABEL_56;
          Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)v23,
                                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___);
          v25 = this->fields.eventDetailEntity;
          if ( !v25 )
            goto LABEL_56;
          v26 = (Il2CppObject *)Instance;
          if ( !Instance )
            goto LABEL_56;
          TitleInfoEventFactoryUnit__Open(
            (TitleInfoEventFactoryUnit_o *)Instance,
            v25->fields.eventId,
            *(_DWORD *)(v16 + 16),
            *(_DWORD *)(v18 + 28),
            v24);
          Instance = (int64_t)this->fields.unitDictionary;
          if ( !Instance )
            goto LABEL_56;
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)Instance,
            *(_DWORD *)(v16 + 16),
            v26,
            (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__);
        }
      }
      ++v14;
    }
    while ( v6 != v14 );
    rateLabel = this->fields.rateLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_5618/*"EVENT_FACTORY_GET_EP_RATE"*/, 0LL);
    v42 = (double)v15 / 1000.0;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v42, v35, v36, v37);
    Instance = (int64_t)System_String__Format(v34, v38, 0LL);
    if ( !rateLabel
      || (UILabel__set_text(rateLabel, (System_String_o *)Instance, 0LL),
          (Instance = (int64_t)this->fields.RateBase) == 0)
      || (v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL),
          GameObjectExtensions__SetParent(v39, (UnityEngine_Component_o *)this->fields.grid, 0LL),
          (Instance = (int64_t)this->fields.grid) == 0) )
    {
LABEL_56:
      sub_1B8880C(Instance, v4);
    }
    (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 448LL));
  }
}


void __fastcall TitleInfoEventFactory__RateChange(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  int v6; // w23
  int64_t v7; // x20
  UserShopMaster_o *v8; // x21
  unsigned int v9; // w28
  int v10; // w24
  __int64 v11; // x29
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

  if ( (byte_4A5906F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventFactoryMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&double_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_5618/*"EVENT_FACTORY_GET_EP_RATE"*/);
    byte_4A5906F = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventFactoryMaster___);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( !eventDetailEntity )
    goto LABEL_26;
  if ( !Instance )
    goto LABEL_26;
  Instance = (int64_t)EventFactoryMaster__GetDatas(
                        (EventFactoryMaster_o *)Instance,
                        eventDetailEntity->fields.eventId,
                        0LL);
  if ( !Instance )
    goto LABEL_26;
  v6 = *(_DWORD *)(Instance + 24);
  v7 = Instance;
  if ( v6 < 1 )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___);
  v8 = (UserShopMaster_o *)Instance;
  v9 = 0;
  v10 = 1000;
  do
  {
    if ( v9 >= *(_DWORD *)(v7 + 24) )
LABEL_27:
      sub_1B88814(Instance, v4);
    v11 = *(_QWORD *)(v7 + 8LL * (int)v9 + 32);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v11 )
      goto LABEL_26;
    if ( !v8 )
      goto LABEL_26;
    Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v8, Instance, *(_DWORD *)(v11 + 24), 0LL);
    if ( !Instance )
      goto LABEL_26;
    v12 = *(_DWORD *)(Instance + 28);
    v13 = __OFSUB__(v12, 1);
    v14 = v12 - 1;
    if ( v14 < 0 == v13 )
    {
      v15 = *(_QWORD *)(v11 + 40);
      if ( !v15 )
        goto LABEL_26;
      if ( (unsigned int)v14 >= *(_DWORD *)(v15 + 24) )
        goto LABEL_27;
      v10 += *(_DWORD *)(v15 + 4LL * (unsigned int)v14 + 32);
    }
    ++v9;
  }
  while ( v6 != v9 );
  rateLabel = this->fields.rateLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5618/*"EVENT_FACTORY_GET_EP_RATE"*/, 0LL);
  v22 = (double)v10 / 1000.0;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v22, v18, v19, v20);
  Instance = (int64_t)System_String__Format(v17, v21, 0LL);
  if ( !rateLabel )
LABEL_26:
    sub_1B8880C(Instance, v4);
  UILabel__set_text(rateLabel, (System_String_o *)Instance, 0LL);
}


void __fastcall TitleInfoEventFactory__Setup(
        TitleInfoEventFactory_o *this,
        EventDetailEntity_o *eventDetailEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_unitDictionary; // x19
  struct System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *unitDictionary; // t1
  System_Collections_Generic_Dictionary_int__object__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A59068 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo);
    byte_4A59068 = 1;
  }
  this->fields.eventDetailEntity = eventDetailEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventDetailEntity,
    (int32_t)eventDetailEntity,
    (int32_t)method,
    v3);
  unitDictionary = this->fields.unitDictionary;
  p_unitDictionary = (ServantStatusBattleListViewItem_o *)&this->fields.unitDictionary;
  if ( !unitDictionary )
  {
    v8 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor_51826588(
      v8,
      10,
      (const MethodInfo_316CF9C *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__);
    p_unitDictionary->klass = (ServantStatusBattleListViewItem_c *)v8;
    sub_1B88554(p_unitDictionary, (int32_t)v8, v9, v10);
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Object_o *Object_37768612; // x0
  UnityEngine_GameObject_c **v19; // x20
  Il2CppObject *v20; // x0
  UnityEngine_GameObject_o *v21; // x21
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *v23; // x20
  float v24; // s0
  float v25; // s1
  float v26; // s2
  Il2CppObject *Component_object; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *v31; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  SimpleAnimation_o *v35; // x21
  TitleInfoEventFactoryUnit_c *klass; // x8
  UnityEngine_GameObject_o *v37; // x21
  __int64 v38; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v40; // x0
  UnityEngine_Animation_o *v41; // x20
  UnityEngine_Animation_o *v42; // x20
  UnityEngine_Animation_o *v43; // x20
  System_String_o *v44; // x0
  SimpleAnimation_o *v45; // x20
  System_String_o *name; // x0
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5906C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    sub_1B885B0(&TitleInfoEventFactory_TypeInfo);
    sub_1B885B0(&StringLiteral_8488/*"LvUpIconCreate"*/);
    byte_4A5906C = 1;
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
           (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__) )
    {
      this->fields.effectAsset = effectAsset;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectAsset, (int32_t)effectAsset, v14, v15);
      this->fields.animationEndCallback = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.animationEndCallback, (int32_t)callback, v16, v17);
      this->fields.effectIndex = 1;
      this->fields.lvUpIndex = ShopEntity__get_TargetId(shopEntity, 0LL);
      this->fields.lvUpCount = buyCount;
      TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
      if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      if ( !effectAsset )
        goto LABEL_51;
      Object_37768612 = AssetData__GetObject_37768612(
                          effectAsset,
                          TitleInfoEventFactory_TypeInfo->static_fields->OBJECT_NAME_EFFECT_1,
                          0LL);
      v19 = (UnityEngine_GameObject_c **)Object_37768612;
      if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        if ( Object_37768612 )
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
            v20 = 0LL;
LABEL_20:
          TargetId = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   v20,
                                                   (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( this->fields.unitDictionary )
          {
            v21 = TargetId;
            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                     (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary,
                     this->fields.lvUpIndex,
                     (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
            GameObjectExtensions__SafeSetParent(v21, (UnityEngine_Component_o *)Item, 0LL);
            if ( v21 )
            {
              TargetId = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v21, 0LL);
              if ( this->fields.unitDictionary )
              {
                v23 = (UnityEngine_Transform_o *)TargetId;
                TargetId = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                         (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary,
                                                         this->fields.lvUpIndex,
                                                         (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
                if ( TargetId )
                {
                  *(UnityEngine_Vector3_o *)&v24 = TitleInfoEventFactoryUnit__GetLvUpEffectOffset(
                                                     (TitleInfoEventFactoryUnit_o *)TargetId,
                                                     v13);
                  if ( v23 )
                  {
                    v47.fields.z = v26 + this->fields.lvUpAnimetionOffset.fields.z;
                    v47.fields.y = v25 + this->fields.lvUpAnimetionOffset.fields.y;
                    v47.fields.x = v24 + this->fields.lvUpAnimetionOffset.fields.x;
                    UnityEngine_Transform__set_localPosition(v23, v47, 0LL);
                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                         v21,
                                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                    this->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
                    p_simpleAnimationData = &this->fields.simpleAnimationData;
                    sub_1B88554(
                      (ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimationData,
                      (int32_t)Component_object,
                      v29,
                      v30);
                    v31 = UnityEngine_GameObject__GetComponent_object_(
                            v21,
                            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                    this->fields.animationData = (struct UnityEngine_Animation_o *)v31;
                    p_animationData = &this->fields.animationData;
                    sub_1B88554(
                      (ServantStatusBattleListViewItem_o *)&this->fields.animationData,
                      (int32_t)v31,
                      v33,
                      v34);
                    if ( UnityEngine_Object__op_Inequality(
                           (UnityEngine_Object_o *)this->fields.simpleAnimationData,
                           0LL,
                           0LL) )
                    {
                      TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
                      v35 = *p_simpleAnimationData;
                      if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
                      if ( v35 )
                      {
                        TargetId = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                                                 v35,
                                                                 TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                                                                 0LL);
                        if ( TargetId )
                        {
                          klass = (TitleInfoEventFactoryUnit_c *)TargetId->klass;
                          v37 = TargetId;
                          v38 = *(unsigned __int16 *)(&TargetId->klass->_2.bitflags2 + 3);
                          if ( *(_WORD *)(&TargetId->klass->_2.bitflags2 + 3) )
                          {
                            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
                            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                            {
                              --v38;
                              p_offset += 2;
                              if ( !v38 )
                                goto LABEL_34;
                            }
                            v40 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
                          }
                          else
                          {
LABEL_34:
                            v40 = sub_1BDA590(TargetId, SimpleAnimation_State_TypeInfo, 14LL);
                          }
                          TargetId = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v40)(
                                                                   v37,
                                                                   *(_QWORD *)(v40 + 8));
                          if ( *p_simpleAnimationData )
                          {
                            SimpleAnimation__set_clip(
                              *p_simpleAnimationData,
                              (UnityEngine_AnimationClip_o *)TargetId,
                              0LL);
                            v45 = *p_simpleAnimationData;
                            if ( v45 )
                            {
                              TargetId = (UnityEngine_GameObject_o *)v45[1].monitor;
                              if ( TargetId )
                              {
                                name = UnityEngine_Object__get_name((UnityEngine_Object_o *)TargetId, 0LL);
                                SimpleAnimation__Play_63844704(v45, name, 0LL);
                                goto LABEL_50;
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
                        goto LABEL_50;
                      TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
                      v42 = *p_animationData;
                      if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
                      if ( v42 )
                      {
                        TargetId = (UnityEngine_GameObject_o *)UnityEngine_Animation__GetClip(
                                                                 v42,
                                                                 TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                                                                 0LL);
                        if ( *p_animationData )
                        {
                          UnityEngine_Animation__set_clip(
                            *p_animationData,
                            (UnityEngine_AnimationClip_o *)TargetId,
                            0LL);
                          v43 = *p_animationData;
                          if ( *p_animationData )
                          {
                            TargetId = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(
                                                                     *p_animationData,
                                                                     0LL);
                            if ( TargetId )
                            {
                              v44 = UnityEngine_Object__get_name((UnityEngine_Object_o *)TargetId, 0LL);
                              UnityEngine_Animation__Play_69204472(v43, v44, 0LL);
LABEL_50:
                              UnityEngine_MonoBehaviour__Invoke(
                                (UnityEngine_MonoBehaviour_o *)this,
                                (System_String_o *)StringLiteral_8488/*"LvUpIconCreate"*/,
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
          sub_1B8880C(TargetId, v13);
        }
      }
      v20 = 0LL;
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
  int32_t v3; // w3
  AssetData_o *effectAsset; // x20
  TitleInfoEventFactory_c *v6; // x0
  UnityEngine_Object_o *Object_37768612; // x20
  Il2CppObject *v8; // x0
  ServantStatusBattleListViewItem_o *p_animationEndCallback; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *animationEndCallback; // t1
  Il2CppObject *v12; // x21
  UnityEngine_AnimationClip_o *Item; // x0
  __int64 v14; // x1
  Il2CppObject *Component_object; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  int32_t v21; // w2
  int32_t v22; // w3
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

  if ( (byte_4A5906E & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    sub_1B885B0(&TitleInfoEventFactory_TypeInfo);
    sub_1B885B0(&StringLiteral_11157/*"RateChange"*/);
    byte_4A5906E = 1;
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
    Object_37768612 = AssetData__GetObject_37768612(effectAsset, v6->static_fields->OBJECT_NAME_EFFECT_2, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( Object_37768612 )
    {
      if ( (UnityEngine_GameObject_c *)Object_37768612->klass == UnityEngine_GameObject_TypeInfo )
        v8 = (Il2CppObject *)Object_37768612;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    v12 = UnityEngine_Object__Instantiate_object_(
            v8,
            (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent(
      (UnityEngine_GameObject_o *)v12,
      (UnityEngine_Component_o *)this->fields.RateBase,
      0LL);
    if ( v12 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v12,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
      this->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
      p_simpleAnimationData = &this->fields.simpleAnimationData;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimationData,
        (int32_t)Component_object,
        v17,
        v18);
      v19 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v12,
              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      this->fields.animationData = (struct UnityEngine_Animation_o *)v19;
      p_animationData = &this->fields.animationData;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.animationData, (int32_t)v19, v21, v22);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.simpleAnimationData, 0LL, 0LL) )
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
                                                  0LL);
          if ( Item )
          {
            klass = Item->klass;
            v25 = Item;
            v26 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
            {
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v26;
                p_offset += 2;
                if ( !v26 )
                  goto LABEL_25;
              }
              v28 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
            }
            else
            {
LABEL_25:
              v28 = sub_1BDA590(Item, SimpleAnimation_State_TypeInfo, 14LL);
            }
            Item = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(UnityEngine_AnimationClip_o *, _QWORD))v28)(
                                                    v25,
                                                    *(_QWORD *)(v28 + 8));
            if ( *p_simpleAnimationData )
            {
              SimpleAnimation__set_clip(*p_simpleAnimationData, Item, 0LL);
              v33 = *p_simpleAnimationData;
              if ( v33 )
              {
                Item = (UnityEngine_AnimationClip_o *)v33[1].monitor;
                if ( Item )
                {
                  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                  SimpleAnimation__Play_63844704(v33, name, 0LL);
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
        if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL) )
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
                   0LL);
          if ( *p_animationData )
          {
            UnityEngine_Animation__set_clip(*p_animationData, Item, 0LL);
            v31 = *p_animationData;
            if ( *p_animationData )
            {
              Item = UnityEngine_Animation__get_clip(*p_animationData, 0LL);
              if ( Item )
              {
                v32 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                UnityEngine_Animation__Play_69204472(v31, v32, 0LL);
LABEL_42:
                UnityEngine_MonoBehaviour__Invoke(
                  (UnityEngine_MonoBehaviour_o *)this,
                  (System_String_o *)StringLiteral_11157/*"RateChange"*/,
                  this->fields.rateChangeTime,
                  0LL);
                return;
              }
            }
          }
        }
      }
    }
    sub_1B8880C(Item, v14);
  }
  animationEndCallback = this->fields.animationEndCallback;
  p_animationEndCallback = (ServantStatusBattleListViewItem_o *)&this->fields.animationEndCallback;
  v10 = animationEndCallback;
  if ( animationEndCallback )
  {
    p_animationEndCallback->klass = 0LL;
    sub_1B88554(p_animationEndCallback, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall TitleInfoEventFactory__Update(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_simpleAnimationData; // x20
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
  int32_t v26; // w2
  int32_t v27; // w3
  UnityEngine_Object_o *gameObject; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t effectIndex; // w8
  int32_t v32; // w2
  int32_t v33; // w3
  ServantStatusBattleListViewItem_o *p_animationEndCallback; // x19
  struct System_Action_o *v35; // x20
  struct System_Action_o *animationEndCallback; // t1

  if ( (byte_4A5906B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A5906B = 1;
  }
  p_simpleAnimationData = (ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimationData;
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
      v13 = sub_1BDA590(monitor, SimpleAnimation_State_TypeInfo, 3LL);
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
      v23 = sub_1BDA590(v10, SimpleAnimation_State_TypeInfo, 14LL);
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
    p_simpleAnimationData = (ServantStatusBattleListViewItem_o *)&this->fields.animationData;
    v25 = (UnityEngine_Object_o *)this->fields.animationData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
      goto LABEL_41;
  }
  monitor = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( !p_simpleAnimationData->klass )
LABEL_47:
    sub_1B8880C(monitor, v6);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)monitor, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_69459568(gameObject, 0LL);
  p_simpleAnimationData->klass = 0LL;
  sub_1B88554(p_simpleAnimationData, 0, v29, v30);
LABEL_41:
  effectIndex = this->fields.effectIndex;
  if ( effectIndex == 2 )
  {
    this->fields.effectIndex = 0;
    this->fields.effectAsset = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectAsset, 0, v26, v27);
    animationEndCallback = this->fields.animationEndCallback;
    p_animationEndCallback = (ServantStatusBattleListViewItem_o *)&this->fields.animationEndCallback;
    v35 = animationEndCallback;
    if ( animationEndCallback )
    {
      p_animationEndCallback->klass = 0LL;
      sub_1B88554(p_animationEndCallback, 0, v32, v33);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v35->fields.m_target)(
        v35->fields.original_method_info,
        *(_QWORD *)&v35->fields.extra_arg);
    }
  }
  else if ( effectIndex == 1 )
  {
    TitleInfoEventFactory__StartRateEffect(this, v6);
  }
}