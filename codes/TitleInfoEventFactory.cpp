void __fastcall TitleInfoEventFactory___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct TitleInfoEventFactory_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct TitleInfoEventFactory_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct TitleInfoEventFactory_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct TitleInfoEventFactory_StaticFields *v33; // x0
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct TitleInfoEventFactory_StaticFields *v41; // x0
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct TitleInfoEventFactory_StaticFields *v49; // x0
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct TitleInfoEventFactory_StaticFields *v57; // x0
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7

  if ( (byte_42B440E & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventFactory_TypeInfo);
    sub_B52984(&StringLiteral_18322/*"ef_factory_open"*/);
    sub_B52984(&StringLiteral_18323/*"ef_factory_open1"*/);
    sub_B52984(&StringLiteral_18814/*"factory_icon_possible"*/);
    sub_B52984(&StringLiteral_18813/*"factory_bg_rate"*/);
    sub_B52984(&StringLiteral_18321/*"ef_factory_flash1"*/);
    sub_B52984(&StringLiteral_18816/*"factory_title_chocolate"*/);
    sub_B52984(&StringLiteral_18815/*"factory_line"*/);
    sub_B52984(&StringLiteral_18320/*"ef_factory_flash"*/);
    byte_42B440E = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventFactory_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_18816/*"factory_title_chocolate"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18816/*"factory_title_chocolate"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = TitleInfoEventFactory_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18814/*"factory_icon_possible"*/;
  v9->SPRITE_NAME_POSSIBLE = (struct System_String_o *)StringLiteral_18814/*"factory_icon_possible"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->SPRITE_NAME_POSSIBLE, v10, v11, v12, v13, v14, v15, v16);
  v17 = TitleInfoEventFactory_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_18815/*"factory_line"*/;
  v17->SPRITE_NAME_LINE = (struct System_String_o *)StringLiteral_18815/*"factory_line"*/;
  sub_B52920((BattleServantConfConponent_o *)&v17->SPRITE_NAME_LINE, v18, v19, v20, v21, v22, v23, v24);
  v25 = TitleInfoEventFactory_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_18813/*"factory_bg_rate"*/;
  v25->SPRITE_NAME_BG_RATE = (struct System_String_o *)StringLiteral_18813/*"factory_bg_rate"*/;
  sub_B52920((BattleServantConfConponent_o *)&v25->SPRITE_NAME_BG_RATE, v26, v27, v28, v29, v30, v31, v32);
  v33 = TitleInfoEventFactory_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_18322/*"ef_factory_open"*/;
  v33->OBJECT_NAME_EFFECT_1 = (struct System_String_o *)StringLiteral_18322/*"ef_factory_open"*/;
  sub_B52920((BattleServantConfConponent_o *)&v33->OBJECT_NAME_EFFECT_1, v34, v35, v36, v37, v38, v39, v40);
  v41 = TitleInfoEventFactory_TypeInfo->static_fields;
  v42 = (System_Int32_array **)StringLiteral_18320/*"ef_factory_flash"*/;
  v41->OBJECT_NAME_EFFECT_2 = (struct System_String_o *)StringLiteral_18320/*"ef_factory_flash"*/;
  sub_B52920((BattleServantConfConponent_o *)&v41->OBJECT_NAME_EFFECT_2, v42, v43, v44, v45, v46, v47, v48);
  v49 = TitleInfoEventFactory_TypeInfo->static_fields;
  v50 = (System_Int32_array **)StringLiteral_18323/*"ef_factory_open1"*/;
  v49->EFFECT_ANIMATION_START_1 = (struct System_String_o *)StringLiteral_18323/*"ef_factory_open1"*/;
  sub_B52920((BattleServantConfConponent_o *)&v49->EFFECT_ANIMATION_START_1, v50, v51, v52, v53, v54, v55, v56);
  v57 = TitleInfoEventFactory_TypeInfo->static_fields;
  v58 = (System_Int32_array **)StringLiteral_18321/*"ef_factory_flash1"*/;
  v57->EFFECT_ANIMATION_START_2 = (struct System_String_o *)StringLiteral_18321/*"ef_factory_flash1"*/;
  sub_B52920((BattleServantConfConponent_o *)&v57->EFFECT_ANIMATION_START_2, v58, v59, v60, v61, v62, v63, v64);
}


void __fastcall TitleInfoEventFactory___ctor(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventFactory__Close(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct SimpleAnimation_o **p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Object_o *v13; // x19
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleServantConfConponent_o *v20; // x0
  struct UnityEngine_Animation_o **p_animationData; // x19
  UnityEngine_Object_o *v22; // x20
  struct UnityEngine_Animation_o *animationData; // t1
  UnityEngine_Object_o *v24; // x20

  if ( (byte_42B4408 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B4408 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.effectAsset = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.effectAsset, 0LL, v5, v6, v7, v8, v9, v10);
  p_simpleAnimationData = &this->fields.simpleAnimationData;
  simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
  this->fields.effectIndex = 0;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimationData, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)*p_simpleAnimationData;
    if ( *p_simpleAnimationData )
    {
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35617168(v13, 0LL);
      v20 = (BattleServantConfConponent_o *)p_simpleAnimationData;
      *p_simpleAnimationData = 0LL;
LABEL_22:
      sub_B52920(v20, 0LL, v14, v15, v16, v17, v18, v19);
      return;
    }
    goto LABEL_24;
  }
  animationData = this->fields.animationData;
  p_animationData = &this->fields.animationData;
  v22 = (UnityEngine_Object_o *)animationData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)*p_animationData;
    if ( *p_animationData )
    {
      v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35617168(v24, 0LL);
      *p_animationData = 0LL;
      v20 = (BattleServantConfConponent_o *)p_animationData;
      goto LABEL_22;
    }
LABEL_24:
    sub_B52A5C(gameObject, v4);
  }
}


void __fastcall TitleInfoEventFactory__LvUpIconCreate(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *unitDictionary; // x0
  const MethodInfo *v4; // x3

  if ( (byte_42B440B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
    byte_42B440B = 1;
  }
  unitDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.unitDictionary;
  if ( !unitDictionary
    || (unitDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(unitDictionary, this->fields.lvUpIndex, (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__)) == 0LL )
  {
    sub_B52A5C(unitDictionary, method);
  }
  if ( SHIDWORD(unitDictionary->fields.values) >= 1 )
    TitleInfoEventFactoryUnit__CreateIcon((TitleInfoEventFactoryUnit_o *)unitDictionary, this->fields.lvUpCount, 1, v4);
}


void __fastcall TitleInfoEventFactory__Open(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  int v6; // w26
  int64_t v7; // x20
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserShopMaster_o *v9; // x22
  WarQuestSelectionMaster_o *v10; // x0
  UISprite_o *titleSprite; // x24
  TitleInfoEventFactory_c *v12; // x8
  System_String_o *SPRITE_NAME_TITLE; // x25
  __int64 v14; // x28
  int v15; // w27
  __int64 v16; // x21
  int v17; // w9
  int64_t v18; // x24
  __int64 v19; // x8
  int v20; // w9
  struct UnityEngine_GameObject_o *titleInfoEventFactoryUnitPrefab; // x25
  UnityEngine_Object_o *v22; // x25
  const MethodInfo *v23; // x4
  struct EventDetailEntity_o *v24; // x8
  WarBoardEvalValueSquare_EvalValueSquare_o *v25; // x25
  ShopEntity_o *v26; // x24
  int64_t UserId; // x25
  int32_t ItemID; // w2
  int v29; // w21
  UnityEngine_GameObject_o *gameObject; // x24
  UnityEngine_Object_o *v31; // x24
  UILabel_o *rateLabel; // x20
  System_String_o *v33; // x21
  Il2CppObject *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  __int64 v36; // x0
  UserItemMaster_o *v37; // [xsp+8h] [xbp-68h]
  DataMasterBase_WarMaster__WarEntity__int__o *v38; // [xsp+10h] [xbp-60h]
  double v39; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42B4407 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventFactoryMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B52984(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__);
    sub_B52984(&double_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TitleInfoEventFactory_TypeInfo);
    sub_B52984(&StringLiteral_5668/*"EVENT_FACTORY_GET_EP_RATE"*/);
    byte_42B4407 = 1;
  }
  if ( this->fields.eventDetailEntity )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventFactoryMaster___);
    eventDetailEntity = this->fields.eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_63;
    if ( !Instance )
      goto LABEL_63;
    Instance = (int64_t)EventFactoryMaster__GetDatas(
                          (EventFactoryMaster_o *)Instance,
                          eventDetailEntity->fields.eventId,
                          0LL);
    if ( !Instance )
      goto LABEL_63;
    v6 = *(_DWORD *)(Instance + 24);
    v7 = Instance;
    if ( v6 < 1 )
      return;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ShopMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    v38 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v9 = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserShopMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    v10 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)Instance,
            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
    titleSprite = this->fields.titleSprite;
    v37 = (UserItemMaster_o *)v10;
    v12 = TitleInfoEventFactory_TypeInfo;
    if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      v12 = TitleInfoEventFactory_TypeInfo;
    }
    SPRITE_NAME_TITLE = v12->static_fields->SPRITE_NAME_TITLE;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
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
    v14 = 0LL;
    v15 = 1000;
    do
    {
      if ( (unsigned int)v14 >= *(_DWORD *)(v7 + 24) )
      {
LABEL_64:
        v36 = sub_B52A88(Instance);
        sub_B52A28(v36, 0LL);
      }
      v16 = *(_QWORD *)(v7 + 32 + 8 * v14);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v16 )
        goto LABEL_63;
      if ( !v9 )
        goto LABEL_63;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v9, Instance, *(_DWORD *)(v16 + 24), 0LL);
      if ( !Instance )
        goto LABEL_63;
      v17 = *(_DWORD *)(Instance + 28);
      v18 = Instance;
      if ( v17 <= 0 )
      {
        Instance = (int64_t)v38;
        if ( !v38 )
          goto LABEL_63;
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v38,
                              *(_DWORD *)(v16 + 24),
                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_63;
        v26 = (ShopEntity_o *)Instance;
        Instance = ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          ItemID = ShopEntity__GetItemID(v26, 0LL);
          Instance = (int64_t)v37;
          if ( !v37 )
            goto LABEL_63;
          Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v37, UserId, ItemID, 0LL);
          if ( !Instance )
            goto LABEL_63;
          v29 = *(_DWORD *)(Instance + 28);
          Instance = ShopEntity__GetPrice(v26, 0LL);
          if ( v29 >= (int)Instance )
          {
            Instance = (int64_t)this->fields.createSprite;
            if ( !Instance )
              goto LABEL_63;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v31 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)gameObject,
                                            (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            Instance = UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v31 )
                goto LABEL_63;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v31, 1, 0LL);
              GameObjectExtensions__SafeSetParent(
                (UnityEngine_GameObject_o *)v31,
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
          goto LABEL_63;
        v20 = v17 - 1;
        if ( (unsigned int)v20 >= *(_DWORD *)(v19 + 24) )
          goto LABEL_64;
        titleInfoEventFactoryUnitPrefab = this->fields.titleInfoEventFactoryUnitPrefab;
        v15 += *(_DWORD *)(v19 + 4LL * v20 + 32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v22 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)titleInfoEventFactoryUnitPrefab,
                                        (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        Instance = UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
        if ( (Instance & 1) != 0 )
        {
          GameObjectExtensions__SafeSetParent(
            (UnityEngine_GameObject_o *)v22,
            (UnityEngine_Component_o *)this->fields.grid,
            0LL);
          if ( !v22 )
            goto LABEL_63;
          Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)v22,
                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___);
          v24 = this->fields.eventDetailEntity;
          if ( !v24 )
            goto LABEL_63;
          v25 = (WarBoardEvalValueSquare_EvalValueSquare_o *)Instance;
          if ( !Instance )
            goto LABEL_63;
          TitleInfoEventFactoryUnit__Open(
            (TitleInfoEventFactoryUnit_o *)Instance,
            v24->fields.eventId,
            *(_DWORD *)(v16 + 16),
            *(_DWORD *)(v18 + 28),
            v23);
          Instance = (int64_t)this->fields.unitDictionary;
          if ( !Instance )
            goto LABEL_63;
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
            *(_DWORD *)(v16 + 16),
            v25,
            (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__);
        }
      }
      ++v14;
    }
    while ( (int)v14 < v6 );
    rateLabel = this->fields.rateLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_5668/*"EVENT_FACTORY_GET_EP_RATE"*/, 0LL);
    v39 = (double)v15 / 1000.0;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v39);
    Instance = (int64_t)System_String__Format(v33, v34, 0LL);
    if ( !rateLabel
      || (UILabel__set_text(rateLabel, (System_String_o *)Instance, 0LL),
          (Instance = (int64_t)this->fields.RateBase) == 0)
      || (v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL),
          GameObjectExtensions__SetParent(v35, (UnityEngine_Component_o *)this->fields.grid, 0LL),
          (Instance = (int64_t)this->fields.grid) == 0) )
    {
LABEL_63:
      sub_B52A5C(Instance, v4);
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
  __int64 v9; // x24
  int v10; // w22
  __int64 v11; // x27
  int v12; // w8
  bool v13; // vf
  int v14; // w8
  __int64 v15; // x9
  UILabel_o *rateLabel; // x19
  System_String_o *v17; // x20
  Il2CppObject *v18; // x0
  __int64 v19; // x0
  double v20; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42B440D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventFactoryMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B52984(&double_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_5668/*"EVENT_FACTORY_GET_EP_RATE"*/);
    byte_42B440D = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventFactoryMaster___);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( !eventDetailEntity )
    goto LABEL_28;
  if ( !Instance )
    goto LABEL_28;
  Instance = (int64_t)EventFactoryMaster__GetDatas(
                        (EventFactoryMaster_o *)Instance,
                        eventDetailEntity->fields.eventId,
                        0LL);
  if ( !Instance )
    goto LABEL_28;
  v6 = *(_DWORD *)(Instance + 24);
  v7 = Instance;
  if ( v6 < 1 )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserShopMaster___);
  v8 = (UserShopMaster_o *)Instance;
  v9 = 0LL;
  v10 = 1000;
  do
  {
    if ( (unsigned int)v9 >= *(_DWORD *)(v7 + 24) )
    {
LABEL_29:
      v19 = sub_B52A88(Instance);
      sub_B52A28(v19, 0LL);
    }
    v11 = *(_QWORD *)(v7 + 32 + 8 * v9);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v11 )
      goto LABEL_28;
    if ( !v8 )
      goto LABEL_28;
    Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v8, Instance, *(_DWORD *)(v11 + 24), 0LL);
    if ( !Instance )
      goto LABEL_28;
    v12 = *(_DWORD *)(Instance + 28);
    v13 = __OFSUB__(v12, 1);
    v14 = v12 - 1;
    if ( v14 < 0 == v13 )
    {
      v15 = *(_QWORD *)(v11 + 40);
      if ( !v15 )
        goto LABEL_28;
      if ( (unsigned int)v14 >= *(_DWORD *)(v15 + 24) )
        goto LABEL_29;
      v10 += *(_DWORD *)(v15 + 4LL * v14 + 32);
    }
    ++v9;
  }
  while ( (int)v9 < v6 );
  rateLabel = this->fields.rateLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5668/*"EVENT_FACTORY_GET_EP_RATE"*/, 0LL);
  v20 = (double)v10 / 1000.0;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v20);
  Instance = (int64_t)System_String__Format(v17, v18, 0LL);
  if ( !rateLabel )
LABEL_28:
    sub_B52A5C(Instance, v4);
  UILabel__set_text(rateLabel, (System_String_o *)Instance, 0LL);
}


void __fastcall TitleInfoEventFactory__Setup(
        TitleInfoEventFactory_o *this,
        EventDetailEntity_o *eventDetailEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_unitDictionary; // x19
  struct System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *unitDictionary; // t1
  System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42B4406 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo);
    byte_42B4406 = 1;
  }
  this->fields.eventDetailEntity = eventDetailEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventDetailEntity,
    (System_Int32_array **)eventDetailEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  unitDictionary = this->fields.unitDictionary;
  p_unitDictionary = (BattleServantConfConponent_o *)&this->fields.unitDictionary;
  if ( !unitDictionary )
  {
    v12 = (System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo);
    System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit____ctor(
      v12,
      10,
      (const MethodInfo_2F27180 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__);
    p_unitDictionary->klass = (BattleServantConfConponent_c *)v12;
    sub_B52920(p_unitDictionary, (System_Int32_array **)v12, v13, v14, v15, v16, v17, v18);
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
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *unitDictionary; // x24
  UnityEngine_GameObject_o *TargetId; // x0
  const MethodInfo *v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Object_o *Object_30344972; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x21
  UnityEngine_Component_o *Item; // x0
  UnityEngine_Transform_o *v30; // x20
  float v31; // s0
  float v32; // s1
  float v33; // s2
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct UnityEngine_Animation_o *v42; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  SimpleAnimation_o *v50; // x21
  __int64 v51; // x3
  TitleInfoEventFactoryUnit_c *klass; // x8
  UnityEngine_GameObject_o *v53; // x21
  unsigned __int64 v54; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v56; // x0
  UnityEngine_Animation_o *v57; // x20
  UnityEngine_Animation_o *v58; // x20
  UnityEngine_Animation_o *v59; // x20
  System_String_o *v60; // x0
  SimpleAnimation_o *v61; // x20
  System_String_o *name; // x0
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B440A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B52984(&UnityEngine_GameObject_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    sub_B52984(&TitleInfoEventFactory_TypeInfo);
    sub_B52984(&StringLiteral_8652/*"LvUpIconCreate"*/);
    byte_42B440A = 1;
  }
  if ( shopEntity && shopEntity->fields.purchaseType == 17 )
  {
    unitDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.unitDictionary;
    TargetId = (UnityEngine_GameObject_o *)ShopEntity__get_TargetId(shopEntity, 0LL);
    if ( !unitDictionary )
      goto LABEL_56;
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           unitDictionary,
           (int32_t)TargetId,
           (const MethodInfo_2F27F7C *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__) )
    {
      this->fields.effectAsset = effectAsset;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.effectAsset,
        (System_Int32_array **)effectAsset,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      this->fields.animationEndCallback = callback;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.animationEndCallback,
        (System_Int32_array **)callback,
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
      if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      }
      if ( effectAsset )
      {
        Object_30344972 = AssetData__GetObject_30344972(
                            effectAsset,
                            TitleInfoEventFactory_TypeInfo->static_fields->OBJECT_NAME_EFFECT_1,
                            0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( Object_30344972 )
          v27 = (UnityEngine_GameObject_c *)Object_30344972->klass == UnityEngine_GameObject_TypeInfo
              ? (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_30344972
              : 0LL;
        else
          v27 = 0LL;
        TargetId = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                 v27,
                                                 (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( this->fields.unitDictionary )
        {
          v28 = TargetId;
          Item = (UnityEngine_Component_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                              (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.unitDictionary,
                                              this->fields.lvUpIndex,
                                              (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
          GameObjectExtensions__SafeSetParent(v28, Item, 0LL);
          if ( v28 )
          {
            TargetId = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v28, 0LL);
            if ( this->fields.unitDictionary )
            {
              v30 = (UnityEngine_Transform_o *)TargetId;
              TargetId = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                       (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.unitDictionary,
                                                       this->fields.lvUpIndex,
                                                       (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
              if ( TargetId )
              {
                *(UnityEngine_Vector3_o *)&v31 = TitleInfoEventFactoryUnit__GetLvUpEffectOffset(
                                                   (TitleInfoEventFactoryUnit_o *)TargetId,
                                                   v13);
                if ( v30 )
                {
                  v63.fields.x = v31 + this->fields.lvUpAnimetionOffset.fields.x;
                  v63.fields.y = v32 + this->fields.lvUpAnimetionOffset.fields.y;
                  v63.fields.z = v33 + this->fields.lvUpAnimetionOffset.fields.z;
                  UnityEngine_Transform__set_localPosition(v30, v63, 0LL);
                  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          v28,
                                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                  p_simpleAnimationData = &this->fields.simpleAnimationData;
                  this->fields.simpleAnimationData = Component_srcLineSprite;
                  sub_B52920(
                    (BattleServantConfConponent_o *)&this->fields.simpleAnimationData,
                    (System_Int32_array **)Component_srcLineSprite,
                    v36,
                    v37,
                    v38,
                    v39,
                    v40,
                    v41);
                  v42 = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v28,
                                                            (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                  p_animationData = &this->fields.animationData;
                  this->fields.animationData = v42;
                  sub_B52920(
                    (BattleServantConfConponent_o *)&this->fields.animationData,
                    (System_Int32_array **)v42,
                    v44,
                    v45,
                    v46,
                    v47,
                    v48,
                    v49);
                  if ( UnityEngine_Object__op_Inequality(
                         (UnityEngine_Object_o *)this->fields.simpleAnimationData,
                         0LL,
                         0LL) )
                  {
                    TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
                    v50 = *p_simpleAnimationData;
                    if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
                    }
                    if ( v50 )
                    {
                      TargetId = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                                               v50,
                                                               TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                                                               0LL);
                      if ( TargetId )
                      {
                        klass = (TitleInfoEventFactoryUnit_c *)TargetId->klass;
                        v53 = TargetId;
                        if ( *(_WORD *)&TargetId->klass->_2.bitflags1 )
                        {
                          v54 = 0LL;
                          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
                          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                          {
                            ++v54;
                            p_offset += 2;
                            if ( v54 >= *(unsigned __int16 *)&TargetId->klass->_2.bitflags1 )
                              goto LABEL_37;
                          }
                          v56 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
                        }
                        else
                        {
LABEL_37:
                          v56 = sub_AEB880(TargetId, SimpleAnimation_State_TypeInfo, 14LL, v51);
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
                              SimpleAnimation__Play_16625408(v61, name, 0LL);
                              goto LABEL_55;
                            }
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    v57 = *p_animationData;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v57, 0LL, 0LL) )
                      goto LABEL_55;
                    TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
                    v58 = *p_animationData;
                    if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
                    }
                    if ( v58 )
                    {
                      TargetId = (UnityEngine_GameObject_o *)UnityEngine_Animation__GetClip(
                                                               v58,
                                                               TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                                                               0LL);
                      if ( *p_animationData )
                      {
                        UnityEngine_Animation__set_clip(*p_animationData, (UnityEngine_AnimationClip_o *)TargetId, 0LL);
                        v59 = *p_animationData;
                        if ( *p_animationData )
                        {
                          TargetId = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(*p_animationData, 0LL);
                          if ( TargetId )
                          {
                            v60 = UnityEngine_Object__get_name((UnityEngine_Object_o *)TargetId, 0LL);
                            UnityEngine_Animation__Play_51067744(v59, v60, 0LL);
LABEL_55:
                            UnityEngine_MonoBehaviour__Invoke(
                              (UnityEngine_MonoBehaviour_o *)this,
                              (System_String_o *)StringLiteral_8652/*"LvUpIconCreate"*/,
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
      }
LABEL_56:
      sub_B52A5C(TargetId, v13);
    }
  }
  if ( callback )
    System_Action__Invoke(callback, 0LL);
}


void __fastcall TitleInfoEventFactory__StartRateEffect(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  AssetData_o *effectAsset; // x20
  TitleInfoEventFactory_c *v10; // x0
  UnityEngine_Object_o *Object_30344972; // x0
  UnityEngine_GameObject_c **v12; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v13; // x0
  BattleServantConfConponent_o *p_animationEndCallback; // x19
  System_Action_o *v15; // x20
  struct System_Action_o *animationEndCallback; // t1
  UnityEngine_GameObject_o *v17; // x21
  UnityEngine_AnimationClip_o *Item; // x0
  __int64 v19; // x1
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UnityEngine_Animation_o *v28; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  SimpleAnimation_o *v36; // x21
  __int64 v37; // x3
  UnityEngine_AnimationClip_c *klass; // x8
  UnityEngine_AnimationClip_o *v39; // x21
  unsigned __int64 v40; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v42; // x0
  UnityEngine_Animation_o *v43; // x20
  UnityEngine_Animation_o *v44; // x20
  UnityEngine_Animation_o *v45; // x20
  System_String_o *v46; // x0
  SimpleAnimation_o *v47; // x20
  System_String_o *name; // x0

  if ( (byte_42B440C & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B52984(&UnityEngine_GameObject_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    sub_B52984(&TitleInfoEventFactory_TypeInfo);
    sub_B52984(&StringLiteral_11371/*"RateChange"*/);
    byte_42B440C = 1;
  }
  effectAsset = this->fields.effectAsset;
  if ( effectAsset )
  {
    this->fields.effectIndex = 2;
    v10 = TitleInfoEventFactory_TypeInfo;
    if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      v10 = TitleInfoEventFactory_TypeInfo;
    }
    Object_30344972 = AssetData__GetObject_30344972(effectAsset, v10->static_fields->OBJECT_NAME_EFFECT_2, 0LL);
    v12 = (UnityEngine_GameObject_c **)Object_30344972;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( v12 )
      {
LABEL_10:
        if ( *v12 == UnityEngine_GameObject_TypeInfo )
          v13 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v12;
        else
          v13 = 0LL;
LABEL_18:
        v17 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            v13,
                                            (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        GameObjectExtensions__SafeSetParent(v17, (UnityEngine_Component_o *)this->fields.RateBase, 0LL);
        if ( v17 )
        {
          Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v17,
                                                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          this->fields.simpleAnimationData = Component_srcLineSprite;
          p_simpleAnimationData = &this->fields.simpleAnimationData;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.simpleAnimationData,
            (System_Int32_array **)Component_srcLineSprite,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          v28 = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    v17,
                                                    (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
          p_animationData = &this->fields.animationData;
          this->fields.animationData = v28;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.animationData,
            (System_Int32_array **)v28,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.simpleAnimationData, 0LL, 0LL) )
          {
            Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
            v36 = *p_simpleAnimationData;
            if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
            }
            if ( v36 )
            {
              Item = (UnityEngine_AnimationClip_o *)SimpleAnimation__get_Item(
                                                      v36,
                                                      TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                                                      0LL);
              if ( Item )
              {
                klass = Item->klass;
                v39 = Item;
                if ( *(_WORD *)&Item->klass->_2.bitflags1 )
                {
                  v40 = 0LL;
                  p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
                  while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    ++v40;
                    p_offset += 2;
                    if ( v40 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                      goto LABEL_29;
                  }
                  v42 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
                }
                else
                {
LABEL_29:
                  v42 = sub_AEB880(Item, SimpleAnimation_State_TypeInfo, 14LL, v37);
                }
                Item = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(UnityEngine_AnimationClip_o *, _QWORD))v42)(
                                                        v39,
                                                        *(_QWORD *)(v42 + 8));
                if ( *p_simpleAnimationData )
                {
                  SimpleAnimation__set_clip(*p_simpleAnimationData, Item, 0LL);
                  v47 = *p_simpleAnimationData;
                  if ( v47 )
                  {
                    Item = (UnityEngine_AnimationClip_o *)v47[1].monitor;
                    if ( Item )
                    {
                      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                      SimpleAnimation__Play_16625408(v47, name, 0LL);
                      goto LABEL_47;
                    }
                  }
                }
              }
            }
          }
          else
          {
            v43 = *p_animationData;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v43, 0LL, 0LL) )
              goto LABEL_47;
            Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
            v44 = *p_animationData;
            if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
            }
            if ( v44 )
            {
              Item = UnityEngine_Animation__GetClip(
                       v44,
                       TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                       0LL);
              if ( *p_animationData )
              {
                UnityEngine_Animation__set_clip(*p_animationData, Item, 0LL);
                v45 = *p_animationData;
                if ( *p_animationData )
                {
                  Item = UnityEngine_Animation__get_clip(*p_animationData, 0LL);
                  if ( Item )
                  {
                    v46 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                    UnityEngine_Animation__Play_51067744(v45, v46, 0LL);
LABEL_47:
                    UnityEngine_MonoBehaviour__Invoke(
                      (UnityEngine_MonoBehaviour_o *)this,
                      (System_String_o *)StringLiteral_11371/*"RateChange"*/,
                      this->fields.rateChangeTime,
                      0LL);
                    return;
                  }
                }
              }
            }
          }
        }
        sub_B52A5C(Item, v19);
      }
    }
    else if ( Object_30344972 )
    {
      goto LABEL_10;
    }
    v13 = 0LL;
    goto LABEL_18;
  }
  animationEndCallback = this->fields.animationEndCallback;
  p_animationEndCallback = (BattleServantConfConponent_o *)&this->fields.animationEndCallback;
  v15 = animationEndCallback;
  if ( animationEndCallback )
  {
    p_animationEndCallback->klass = 0LL;
    sub_B52920(p_animationEndCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v15, 0LL);
  }
}


void __fastcall TitleInfoEventFactory__Update(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Object_o *monitor; // x0
  const MethodInfo *v6; // x1
  SimpleAnimation_o *klass; // x21
  System_String_o *name; // x0
  __int64 v9; // x3
  UnityEngine_Object_c *v10; // x8
  UnityEngine_Object_o *v11; // x21
  unsigned __int64 v12; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v14; // x0
  UnityEngine_Object_o *animationData; // x21
  UnityEngine_Animation_o *v16; // x21
  System_String_o *v17; // x0
  UnityEngine_AnimationState_o *v18; // x21
  float time; // s8
  __int64 v20; // x3
  long double v21; // q0
  UnityEngine_Object_c *v22; // x8
  unsigned __int64 v23; // x10
  SimpleAnimation_State_c **v24; // x11
  __int64 v25; // x0
  UnityEngine_Object_o *v26; // x21
  UnityEngine_Object_o *v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  int32_t effectIndex; // w8
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  BattleServantConfConponent_o *p_animationEndCallback; // x19
  System_Action_o *v49; // x20
  struct System_Action_o *animationEndCallback; // t1

  if ( (byte_42B4409 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42B4409 = 1;
  }
  p_simpleAnimationData = (BattleServantConfConponent_o *)&this->fields.simpleAnimationData;
  simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimationData, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) != 0 )
  {
    klass = (SimpleAnimation_o *)p_simpleAnimationData->klass;
    if ( !p_simpleAnimationData->klass )
      goto LABEL_52;
    monitor = (UnityEngine_Object_o *)klass[1].monitor;
    if ( !monitor )
      goto LABEL_52;
    name = UnityEngine_Object__get_name(monitor, 0LL);
    monitor = (UnityEngine_Object_o *)SimpleAnimation__get_Item(klass, name, 0LL);
    if ( !monitor )
      goto LABEL_52;
    v10 = monitor->klass;
    v11 = monitor;
    if ( *(_WORD *)&monitor->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v12;
        p_offset += 2;
        if ( v12 >= *(unsigned __int16 *)&monitor->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      v14 = (__int64)(&v10->vtable._3_ToString.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v14 = sub_AEB880(monitor, SimpleAnimation_State_TypeInfo, 3LL, v9);
    }
    v21 = ((long double (__fastcall *)(UnityEngine_Object_o *, _QWORD))*(_QWORD *)v14)(v11, *(_QWORD *)(v14 + 8));
    v22 = v11->klass;
    time = *(float *)&v21;
    if ( *(_WORD *)&v11->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = (SimpleAnimation_State_c **)&v22->_1.interfaceOffsets->offset;
      while ( *(v24 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v23;
        v24 += 2;
        if ( v23 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      v25 = (__int64)(&v22[1]._1.implementedInterfaces + 2 * *(_DWORD *)v24);
    }
    else
    {
LABEL_29:
      v25 = sub_AEB880(v11, SimpleAnimation_State_TypeInfo, 14LL, v20);
    }
    monitor = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v25)(
                                        v11,
                                        *(_QWORD *)(v25 + 8));
    if ( !monitor )
      goto LABEL_52;
  }
  else
  {
    animationData = (UnityEngine_Object_o *)this->fields.animationData;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(animationData, 0LL, 0LL);
    if ( ((unsigned __int8)monitor & 1) == 0 )
      goto LABEL_33;
    v16 = this->fields.animationData;
    if ( !v16 )
      goto LABEL_52;
    monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animationData, 0LL);
    if ( !monitor )
      goto LABEL_52;
    v17 = UnityEngine_Object__get_name(monitor, 0LL);
    monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v16, v17, 0LL);
    if ( !monitor )
      goto LABEL_52;
    v18 = (UnityEngine_AnimationState_o *)monitor;
    time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)monitor, 0LL);
    monitor = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v18, 0LL);
    if ( !monitor )
      goto LABEL_52;
  }
  if ( time < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)monitor, 0LL) )
    return;
LABEL_33:
  v26 = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
  {
    p_simpleAnimationData = (BattleServantConfConponent_o *)&this->fields.animationData;
    v27 = (UnityEngine_Object_o *)this->fields.animationData;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
      goto LABEL_46;
  }
  monitor = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( !p_simpleAnimationData->klass )
LABEL_52:
    sub_B52A5C(monitor, v6);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)monitor, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_35617168(gameObject, 0LL);
  p_simpleAnimationData->klass = 0LL;
  sub_B52920(p_simpleAnimationData, 0LL, v35, v36, v37, v38, v39, v40);
LABEL_46:
  effectIndex = this->fields.effectIndex;
  if ( effectIndex == 2 )
  {
    this->fields.effectIndex = 0;
    this->fields.effectAsset = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.effectAsset, 0LL, v28, v29, v30, v31, v32, v33);
    animationEndCallback = this->fields.animationEndCallback;
    p_animationEndCallback = (BattleServantConfConponent_o *)&this->fields.animationEndCallback;
    v49 = animationEndCallback;
    if ( animationEndCallback )
    {
      p_animationEndCallback->klass = 0LL;
      sub_B52920(p_animationEndCallback, 0LL, v42, v43, v44, v45, v46, v47);
      System_Action__Invoke(v49, 0LL);
    }
  }
  else if ( effectIndex == 1 )
  {
    TitleInfoEventFactory__StartRateEffect(this, v6);
  }
}