void __fastcall TitleInfoEventFactory___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
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
  int32_t v15; // w3
  int32_t v16; // w1
  struct TitleInfoEventFactory_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  struct TitleInfoEventFactory_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  struct TitleInfoEventFactory_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  struct TitleInfoEventFactory_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1
  struct TitleInfoEventFactory_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w1
  struct TitleInfoEventFactory_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3

  if ( (byte_49FA4E4 & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventFactory_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_18761/*"ef_factory_open"*/, v4);
    sub_1B640C8(&StringLiteral_18762/*"ef_factory_open1"*/, v5);
    sub_1B640C8(&StringLiteral_19283/*"factory_icon_possible"*/, v6);
    sub_1B640C8(&StringLiteral_19282/*"factory_bg_rate"*/, v7);
    sub_1B640C8(&StringLiteral_18760/*"ef_factory_flash1"*/, v8);
    sub_1B640C8(&StringLiteral_19285/*"factory_title_chocolate"*/, v9);
    sub_1B640C8(&StringLiteral_19284/*"factory_line"*/, v10);
    sub_1B640C8(&StringLiteral_18759/*"ef_factory_flash"*/, v11);
    byte_49FA4E4 = 1;
  }
  TitleInfoEventFactory_TypeInfo->static_fields->SPRITE_NAME_TITLE = (struct System_String_o *)StringLiteral_19285/*"factory_title_chocolate"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)TitleInfoEventFactory_TypeInfo->static_fields,
    StringLiteral_19285/*"factory_title_chocolate"*/,
    v2,
    v3);
  v12 = StringLiteral_19283/*"factory_icon_possible"*/;
  static_fields = TitleInfoEventFactory_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_POSSIBLE = (struct System_String_o *)StringLiteral_19283/*"factory_icon_possible"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->SPRITE_NAME_POSSIBLE, v12, v14, v15);
  v16 = StringLiteral_19284/*"factory_line"*/;
  v17 = TitleInfoEventFactory_TypeInfo->static_fields;
  v17->SPRITE_NAME_LINE = (struct System_String_o *)StringLiteral_19284/*"factory_line"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->SPRITE_NAME_LINE, v16, v18, v19);
  v20 = StringLiteral_19282/*"factory_bg_rate"*/;
  v21 = TitleInfoEventFactory_TypeInfo->static_fields;
  v21->SPRITE_NAME_BG_RATE = (struct System_String_o *)StringLiteral_19282/*"factory_bg_rate"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->SPRITE_NAME_BG_RATE, v20, v22, v23);
  v24 = StringLiteral_18761/*"ef_factory_open"*/;
  v25 = TitleInfoEventFactory_TypeInfo->static_fields;
  v25->OBJECT_NAME_EFFECT_1 = (struct System_String_o *)StringLiteral_18761/*"ef_factory_open"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->OBJECT_NAME_EFFECT_1, v24, v26, v27);
  v28 = StringLiteral_18759/*"ef_factory_flash"*/;
  v29 = TitleInfoEventFactory_TypeInfo->static_fields;
  v29->OBJECT_NAME_EFFECT_2 = (struct System_String_o *)StringLiteral_18759/*"ef_factory_flash"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v29->OBJECT_NAME_EFFECT_2, v28, v30, v31);
  v32 = StringLiteral_18762/*"ef_factory_open1"*/;
  v33 = TitleInfoEventFactory_TypeInfo->static_fields;
  v33->EFFECT_ANIMATION_START_1 = (struct System_String_o *)StringLiteral_18762/*"ef_factory_open1"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v33->EFFECT_ANIMATION_START_1, v32, v34, v35);
  v36 = StringLiteral_18760/*"ef_factory_flash1"*/;
  v37 = TitleInfoEventFactory_TypeInfo->static_fields;
  v37->EFFECT_ANIMATION_START_2 = (struct System_String_o *)StringLiteral_18760/*"ef_factory_flash1"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v37->EFFECT_ANIMATION_START_2, v36, v38, v39);
}


void __fastcall TitleInfoEventFactory___ctor(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventFactory__Close(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  ServantStatusBattleListViewItem_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Object_o *v8; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  struct UnityEngine_Animation_o **p_animationData; // x19
  UnityEngine_Object_o *v12; // x20
  struct UnityEngine_Animation_o *animationData; // t1
  UnityEngine_Object_o *v14; // x20

  if ( (byte_49FA4DE & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FA4DE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.effectAsset = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectAsset, 0, v4, v5);
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
      v8 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69127924(v8, 0LL);
      p_simpleAnimationData->klass = 0LL;
LABEL_18:
      sub_1B6406C(p_simpleAnimationData, 0, v9, v10);
      return;
    }
    goto LABEL_20;
  }
  animationData = this->fields.animationData;
  p_animationData = &this->fields.animationData;
  v12 = (UnityEngine_Object_o *)animationData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)*p_animationData;
    if ( *p_animationData )
    {
      v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69127924(v14, 0LL);
      p_simpleAnimationData = (ServantStatusBattleListViewItem_o *)p_animationData;
      *p_animationData = 0LL;
      goto LABEL_18;
    }
LABEL_20:
    sub_1B64324(gameObject);
  }
}


void __fastcall TitleInfoEventFactory__LvUpIconCreate(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *unitDictionary; // x0
  const MethodInfo *v4; // x3

  if ( (byte_49FA4E1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__, method);
    byte_49FA4E1 = 1;
  }
  unitDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary;
  if ( !unitDictionary
    || (unitDictionary = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                   unitDictionary,
                                                                                   this->fields.lvUpIndex,
                                                                                   (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__)) == 0LL )
  {
    sub_1B64324(unitDictionary);
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
  int64_t Instance; // x0
  struct EventDetailEntity_o *eventDetailEntity; // x8
  int v20; // w26
  int64_t v21; // x20
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v23; // x22
  Il2CppObject *v24; // x0
  UISprite_o *titleSprite; // x24
  TitleInfoEventFactory_c *v26; // x8
  System_String_o *SPRITE_NAME_TITLE; // x25
  __int64 v28; // x1
  unsigned int v29; // w28
  int v30; // w27
  __int64 v31; // x23
  int v32; // w9
  int64_t v33; // x24
  __int64 v34; // x8
  unsigned int v35; // w9
  int v36; // w21
  Il2CppObject *titleInfoEventFactoryUnitPrefab; // x25
  Il2CppObject *v38; // x25
  const MethodInfo *v39; // x4
  struct EventDetailEntity_o *v40; // x8
  Il2CppObject *v41; // x25
  ShopEntity_o *v42; // x24
  int64_t UserId; // x25
  int32_t ItemID; // w2
  int v45; // w21
  Il2CppObject *gameObject; // x24
  Il2CppObject *v47; // x24
  UILabel_o *rateLabel; // x20
  System_String_o *v49; // x21
  Il2CppObject *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  UserItemMaster_o *v52; // [xsp+8h] [xbp-78h]
  DataMasterBase_TMaster__TEntity__PKType__o *v53; // [xsp+10h] [xbp-70h]
  double v54; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_49FA4DD & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventFactoryMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserShopMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__, v8);
    sub_1B640C8(&double_TypeInfo, v9);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___, v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&NetworkManager_TypeInfo, v12);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&TitleInfoEventFactory_TypeInfo, v16);
    sub_1B640C8(&StringLiteral_5592/*"EVENT_FACTORY_GET_EP_RATE"*/, v17);
    byte_49FA4DD = 1;
  }
  if ( this->fields.eventDetailEntity )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_56;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventFactoryMaster___);
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
    v20 = *(_DWORD *)(Instance + 24);
    v21 = Instance;
    if ( v20 < 1 )
      return;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_56;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_56;
    v53 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    v23 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserShopMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_56;
    v24 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
    titleSprite = this->fields.titleSprite;
    v52 = (UserItemMaster_o *)v24;
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
    Instance = AtlasManager__SetEventUI(
                 this->fields.bgRateSprite,
                 TitleInfoEventFactory_TypeInfo->static_fields->SPRITE_NAME_BG_RATE,
                 0LL);
    v29 = 0;
    v30 = 1000;
    do
    {
      if ( v29 >= *(_DWORD *)(v21 + 24) )
LABEL_57:
        sub_1B6432C(Instance, v28);
      v31 = *(_QWORD *)(v21 + 8LL * (int)v29 + 32);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v31 )
        goto LABEL_56;
      if ( !v23 )
        goto LABEL_56;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(
                            (UserShopMaster_o *)v23,
                            Instance,
                            *(_DWORD *)(v31 + 24),
                            0LL);
      if ( !Instance )
        goto LABEL_56;
      v32 = *(_DWORD *)(Instance + 28);
      v33 = Instance;
      if ( v32 <= 0 )
      {
        Instance = (int64_t)v53;
        if ( !v53 )
          goto LABEL_56;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              v53,
                              *(_DWORD *)(v31 + 24),
                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_56;
        v42 = (ShopEntity_o *)Instance;
        Instance = ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          UserId = NetworkManager__get_UserId(0LL);
          ItemID = ShopEntity__GetItemID(v42, 0LL);
          Instance = (int64_t)v52;
          if ( !v52 )
            goto LABEL_56;
          Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v52, UserId, ItemID, 0LL);
          if ( !Instance )
            goto LABEL_56;
          v45 = *(_DWORD *)(Instance + 28);
          Instance = ShopEntity__GetPrice(v42, 0LL);
          if ( v45 >= (int)Instance )
          {
            Instance = (int64_t)this->fields.createSprite;
            if ( !Instance )
              goto LABEL_56;
            gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v47 = UnityEngine_Object__Instantiate_object_(
                    gameObject,
                    (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            Instance = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v47, 0LL, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v47 )
                goto LABEL_56;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v47, 1, 0LL);
              GameObjectExtensions__SafeSetParent(
                (UnityEngine_GameObject_o *)v47,
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
          goto LABEL_56;
        v35 = v32 - 1;
        if ( v35 >= *(_DWORD *)(v34 + 24) )
          goto LABEL_57;
        v36 = *(_DWORD *)(v34 + 4LL * v35 + 32);
        titleInfoEventFactoryUnitPrefab = (Il2CppObject *)this->fields.titleInfoEventFactoryUnitPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v30 += v36;
        v38 = UnityEngine_Object__Instantiate_object_(
                titleInfoEventFactoryUnitPrefab,
                (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        Instance = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v38, 0LL, 0LL);
        if ( (Instance & 1) != 0 )
        {
          GameObjectExtensions__SafeSetParent(
            (UnityEngine_GameObject_o *)v38,
            (UnityEngine_Component_o *)this->fields.grid,
            0LL);
          if ( !v38 )
            goto LABEL_56;
          Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)v38,
                                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___);
          v40 = this->fields.eventDetailEntity;
          if ( !v40 )
            goto LABEL_56;
          v41 = (Il2CppObject *)Instance;
          if ( !Instance )
            goto LABEL_56;
          TitleInfoEventFactoryUnit__Open(
            (TitleInfoEventFactoryUnit_o *)Instance,
            v40->fields.eventId,
            *(_DWORD *)(v31 + 16),
            *(_DWORD *)(v33 + 28),
            v39);
          Instance = (int64_t)this->fields.unitDictionary;
          if ( !Instance )
            goto LABEL_56;
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)Instance,
            *(_DWORD *)(v31 + 16),
            v41,
            (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__);
        }
      }
      ++v29;
    }
    while ( v20 != v29 );
    rateLabel = this->fields.rateLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v49 = LocalizationManager__Get((System_String_o *)StringLiteral_5592/*"EVENT_FACTORY_GET_EP_RATE"*/, 0LL);
    v54 = (double)v30 / 1000.0;
    v50 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v54);
    Instance = (int64_t)System_String__Format(v49, v50, 0LL);
    if ( !rateLabel
      || (UILabel__set_text(rateLabel, (System_String_o *)Instance, 0LL),
          (Instance = (int64_t)this->fields.RateBase) == 0)
      || (v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL),
          GameObjectExtensions__SetParent(v51, (UnityEngine_Component_o *)this->fields.grid, 0LL),
          (Instance = (int64_t)this->fields.grid) == 0) )
    {
LABEL_56:
      sub_1B64324(Instance);
    }
    (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
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
  int64_t Instance; // x0
  struct EventDetailEntity_o *eventDetailEntity; // x8
  int v11; // w23
  int64_t v12; // x20
  __int64 v13; // x1
  UserShopMaster_o *v14; // x21
  unsigned int v15; // w28
  int v16; // w24
  __int64 v17; // x29
  int v18; // w8
  bool v19; // vf
  int v20; // w8
  __int64 v21; // x9
  UILabel_o *rateLabel; // x19
  System_String_o *v23; // x20
  Il2CppObject *v24; // x0
  double v25; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FA4E3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventFactoryMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserShopMaster___, v3);
    sub_1B640C8(&double_TypeInfo, v4);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_5592/*"EVENT_FACTORY_GET_EP_RATE"*/, v8);
    byte_49FA4E3 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventFactoryMaster___);
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
  v11 = *(_DWORD *)(Instance + 24);
  v12 = Instance;
  if ( v11 < 1 )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserShopMaster___);
  v14 = (UserShopMaster_o *)Instance;
  v15 = 0;
  v16 = 1000;
  do
  {
    if ( v15 >= *(_DWORD *)(v12 + 24) )
LABEL_27:
      sub_1B6432C(Instance, v13);
    v17 = *(_QWORD *)(v12 + 8LL * (int)v15 + 32);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v17 )
      goto LABEL_26;
    if ( !v14 )
      goto LABEL_26;
    Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v14, Instance, *(_DWORD *)(v17 + 24), 0LL);
    if ( !Instance )
      goto LABEL_26;
    v18 = *(_DWORD *)(Instance + 28);
    v19 = __OFSUB__(v18, 1);
    v20 = v18 - 1;
    if ( v20 < 0 == v19 )
    {
      v21 = *(_QWORD *)(v17 + 40);
      if ( !v21 )
        goto LABEL_26;
      if ( (unsigned int)v20 >= *(_DWORD *)(v21 + 24) )
        goto LABEL_27;
      v16 += *(_DWORD *)(v21 + 4LL * (unsigned int)v20 + 32);
    }
    ++v15;
  }
  while ( v11 != v15 );
  rateLabel = this->fields.rateLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5592/*"EVENT_FACTORY_GET_EP_RATE"*/, 0LL);
  v25 = (double)v16 / 1000.0;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v25);
  Instance = (int64_t)System_String__Format(v23, v24, 0LL);
  if ( !rateLabel )
LABEL_26:
    sub_1B64324(Instance);
  UILabel__set_text(rateLabel, (System_String_o *)Instance, 0LL);
}


void __fastcall TitleInfoEventFactory__Setup(
        TitleInfoEventFactory_o *this,
        EventDetailEntity_o *eventDetailEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  ServantStatusBattleListViewItem_o *p_unitDictionary; // x19
  struct System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *unitDictionary; // t1
  System_Collections_Generic_Dictionary_int__object__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FA4DC & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__,
      eventDetailEntity);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo, v6);
    byte_49FA4DC = 1;
  }
  this->fields.eventDetailEntity = eventDetailEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventDetailEntity,
    (int32_t)eventDetailEntity,
    (int32_t)method,
    v3);
  unitDictionary = this->fields.unitDictionary;
  p_unitDictionary = (ServantStatusBattleListViewItem_o *)&this->fields.unitDictionary;
  if ( !unitDictionary )
  {
    v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                    System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo,
                                                                    v7,
                                                                    v8);
    System_Collections_Generic_Dictionary_int__object____ctor_51523528(
      v11,
      10,
      (const MethodInfo_3122FC8 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__);
    p_unitDictionary->klass = (ServantStatusBattleListViewItem_c *)v11;
    sub_1B6406C(p_unitDictionary, (int32_t)v11, v12, v13);
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
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  UnityEngine_Object_o *Object_37455420; // x0
  UnityEngine_GameObject_c **v27; // x20
  Il2CppObject *v28; // x0
  UnityEngine_GameObject_o *v29; // x21
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *v31; // x20
  const MethodInfo *v32; // x1
  float v33; // s0
  float v34; // s1
  float v35; // s2
  Il2CppObject *Component_object; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  int32_t v42; // w2
  int32_t v43; // w3
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

  if ( (byte_49FA4E0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__, shopEntity);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__, v11);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v12);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v13);
    sub_1B640C8(&UnityEngine_GameObject_TypeInfo, v14);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v17);
    sub_1B640C8(&TitleInfoEventFactory_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_8449/*"LvUpIconCreate"*/, v19);
    byte_49FA4E0 = 1;
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
           (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__) )
    {
      this->fields.effectAsset = effectAsset;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectAsset, (int32_t)effectAsset, v22, v23);
      this->fields.animationEndCallback = callback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animationEndCallback, (int32_t)callback, v24, v25);
      this->fields.effectIndex = 1;
      this->fields.lvUpIndex = ShopEntity__get_TargetId(shopEntity, 0LL);
      this->fields.lvUpCount = buyCount;
      TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
      if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      if ( !effectAsset )
        goto LABEL_51;
      Object_37455420 = AssetData__GetObject_37455420(
                          effectAsset,
                          TitleInfoEventFactory_TypeInfo->static_fields->OBJECT_NAME_EFFECT_1,
                          0LL);
      v27 = (UnityEngine_GameObject_c **)Object_37455420;
      if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        if ( Object_37455420 )
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
                                                   (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( this->fields.unitDictionary )
          {
            v29 = TargetId;
            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                     (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary,
                     this->fields.lvUpIndex,
                     (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
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
                                                         (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
                if ( TargetId )
                {
                  *(UnityEngine_Vector3_o *)&v33 = TitleInfoEventFactoryUnit__GetLvUpEffectOffset(
                                                     (TitleInfoEventFactoryUnit_o *)TargetId,
                                                     v32);
                  if ( v31 )
                  {
                    v56.fields.z = v35 + this->fields.lvUpAnimetionOffset.fields.z;
                    v56.fields.y = v34 + this->fields.lvUpAnimetionOffset.fields.y;
                    v56.fields.x = v33 + this->fields.lvUpAnimetionOffset.fields.x;
                    UnityEngine_Transform__set_localPosition(v31, v56, 0LL);
                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                         v29,
                                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                    this->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
                    p_simpleAnimationData = &this->fields.simpleAnimationData;
                    sub_1B6406C(
                      (ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimationData,
                      (int32_t)Component_object,
                      v38,
                      v39);
                    v40 = UnityEngine_GameObject__GetComponent_object_(
                            v29,
                            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                    this->fields.animationData = (struct UnityEngine_Animation_o *)v40;
                    p_animationData = &this->fields.animationData;
                    sub_1B6406C(
                      (ServantStatusBattleListViewItem_o *)&this->fields.animationData,
                      (int32_t)v40,
                      v42,
                      v43);
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
                            v49 = sub_1BB60A8(TargetId, SimpleAnimation_State_TypeInfo, 14LL);
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
                                SimpleAnimation__Play_63513060(v54, name, 0LL);
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
                              UnityEngine_Animation__Play_68872828(v52, v53, 0LL);
LABEL_50:
                              UnityEngine_MonoBehaviour__Invoke(
                                (UnityEngine_MonoBehaviour_o *)this,
                                (System_String_o *)StringLiteral_8449/*"LvUpIconCreate"*/,
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
          sub_1B64324(TargetId);
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
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  AssetData_o *effectAsset; // x20
  TitleInfoEventFactory_c *v13; // x0
  UnityEngine_Object_o *Object_37455420; // x20
  Il2CppObject *v15; // x0
  ServantStatusBattleListViewItem_o *p_animationEndCallback; // x19
  struct System_Action_o *v17; // x20
  struct System_Action_o *animationEndCallback; // t1
  Il2CppObject *v19; // x21
  UnityEngine_AnimationClip_o *Item; // x0
  Il2CppObject *Component_object; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  SimpleAnimation_o *v29; // x21
  UnityEngine_AnimationClip_c *klass; // x8
  UnityEngine_AnimationClip_o *v31; // x21
  __int64 v32; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v34; // x0
  UnityEngine_Animation_o *v35; // x20
  UnityEngine_Animation_o *v36; // x20
  UnityEngine_Animation_o *v37; // x20
  System_String_o *v38; // x0
  SimpleAnimation_o *v39; // x20
  System_String_o *name; // x0

  if ( (byte_49FA4E2 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_1B640C8(&UnityEngine_GameObject_TypeInfo, v6);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v9);
    sub_1B640C8(&TitleInfoEventFactory_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_11104/*"RateChange"*/, v11);
    byte_49FA4E2 = 1;
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
    Object_37455420 = AssetData__GetObject_37455420(effectAsset, v13->static_fields->OBJECT_NAME_EFFECT_2, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( Object_37455420 )
    {
      if ( (UnityEngine_GameObject_c *)Object_37455420->klass == UnityEngine_GameObject_TypeInfo )
        v15 = (Il2CppObject *)Object_37455420;
      else
        v15 = 0LL;
    }
    else
    {
      v15 = 0LL;
    }
    v19 = UnityEngine_Object__Instantiate_object_(
            v15,
            (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent(
      (UnityEngine_GameObject_o *)v19,
      (UnityEngine_Component_o *)this->fields.RateBase,
      0LL);
    if ( v19 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v19,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
      this->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
      p_simpleAnimationData = &this->fields.simpleAnimationData;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimationData,
        (int32_t)Component_object,
        v23,
        v24);
      v25 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v19,
              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      this->fields.animationData = (struct UnityEngine_Animation_o *)v25;
      p_animationData = &this->fields.animationData;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animationData, (int32_t)v25, v27, v28);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.simpleAnimationData, 0LL, 0LL) )
      {
        Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
        v29 = *p_simpleAnimationData;
        if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
        if ( v29 )
        {
          Item = (UnityEngine_AnimationClip_o *)SimpleAnimation__get_Item(
                                                  v29,
                                                  TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                                                  0LL);
          if ( Item )
          {
            klass = Item->klass;
            v31 = Item;
            v32 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
            {
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v32;
                p_offset += 2;
                if ( !v32 )
                  goto LABEL_25;
              }
              v34 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
            }
            else
            {
LABEL_25:
              v34 = sub_1BB60A8(Item, SimpleAnimation_State_TypeInfo, 14LL);
            }
            Item = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(UnityEngine_AnimationClip_o *, _QWORD))v34)(
                                                    v31,
                                                    *(_QWORD *)(v34 + 8));
            if ( *p_simpleAnimationData )
            {
              SimpleAnimation__set_clip(*p_simpleAnimationData, Item, 0LL);
              v39 = *p_simpleAnimationData;
              if ( v39 )
              {
                Item = (UnityEngine_AnimationClip_o *)v39[1].monitor;
                if ( Item )
                {
                  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                  SimpleAnimation__Play_63513060(v39, name, 0LL);
                  goto LABEL_42;
                }
              }
            }
          }
        }
      }
      else
      {
        v35 = *p_animationData;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v35, 0LL, 0LL) )
          goto LABEL_42;
        Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
        v36 = *p_animationData;
        if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
        if ( v36 )
        {
          Item = UnityEngine_Animation__GetClip(
                   v36,
                   TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                   0LL);
          if ( *p_animationData )
          {
            UnityEngine_Animation__set_clip(*p_animationData, Item, 0LL);
            v37 = *p_animationData;
            if ( *p_animationData )
            {
              Item = UnityEngine_Animation__get_clip(*p_animationData, 0LL);
              if ( Item )
              {
                v38 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                UnityEngine_Animation__Play_68872828(v37, v38, 0LL);
LABEL_42:
                UnityEngine_MonoBehaviour__Invoke(
                  (UnityEngine_MonoBehaviour_o *)this,
                  (System_String_o *)StringLiteral_11104/*"RateChange"*/,
                  this->fields.rateChangeTime,
                  0LL);
                return;
              }
            }
          }
        }
      }
    }
    sub_1B64324(Item);
  }
  animationEndCallback = this->fields.animationEndCallback;
  p_animationEndCallback = (ServantStatusBattleListViewItem_o *)&this->fields.animationEndCallback;
  v17 = animationEndCallback;
  if ( animationEndCallback )
  {
    p_animationEndCallback->klass = 0LL;
    sub_1B6406C(p_animationEndCallback, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v17->fields.m_target)(
      v17->fields.original_method_info,
      *(_QWORD *)&v17->fields.extra_arg);
  }
}


void __fastcall TitleInfoEventFactory__Update(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusBattleListViewItem_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Object_o *monitor; // x0
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
  const MethodInfo *v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  UnityEngine_Object_o *gameObject; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t effectIndex; // w8
  int32_t v33; // w2
  int32_t v34; // w3
  ServantStatusBattleListViewItem_o *p_animationEndCallback; // x19
  struct System_Action_o *v36; // x20
  struct System_Action_o *animationEndCallback; // t1

  if ( (byte_49FA4DF & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v3);
    byte_49FA4DF = 1;
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
      v13 = sub_1BB60A8(monitor, SimpleAnimation_State_TypeInfo, 3LL);
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
      v23 = sub_1BB60A8(v10, SimpleAnimation_State_TypeInfo, 14LL);
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
    sub_1B64324(monitor);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)monitor, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_69127924(gameObject, 0LL);
  p_simpleAnimationData->klass = 0LL;
  sub_1B6406C(p_simpleAnimationData, 0, v30, v31);
LABEL_41:
  effectIndex = this->fields.effectIndex;
  if ( effectIndex == 2 )
  {
    this->fields.effectIndex = 0;
    this->fields.effectAsset = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectAsset, 0, v27, v28);
    animationEndCallback = this->fields.animationEndCallback;
    p_animationEndCallback = (ServantStatusBattleListViewItem_o *)&this->fields.animationEndCallback;
    v36 = animationEndCallback;
    if ( animationEndCallback )
    {
      p_animationEndCallback->klass = 0LL;
      sub_1B6406C(p_animationEndCallback, 0, v33, v34);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v36->fields.m_target)(
        v36->fields.original_method_info,
        *(_QWORD *)&v36->fields.extra_arg);
    }
  }
  else if ( effectIndex == 1 )
  {
    TitleInfoEventFactory__StartRateEffect(this, v26);
  }
}