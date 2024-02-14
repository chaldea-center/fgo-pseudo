void __fastcall TitleInfoEventFactory___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v17; // x1
  struct TitleInfoEventFactory_StaticFields *v18; // x0
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct TitleInfoEventFactory_StaticFields *v26; // x0
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct TitleInfoEventFactory_StaticFields *v34; // x0
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct TitleInfoEventFactory_StaticFields *v42; // x0
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct TitleInfoEventFactory_StaticFields *v50; // x0
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct TitleInfoEventFactory_StaticFields *v58; // x0
  System_Int32_array **v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct TitleInfoEventFactory_StaticFields *v66; // x0
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7

  if ( (byte_42187F7 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventFactory_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_18244/*"ef_factory_open"*/, v8);
    sub_B0D8A4(&StringLiteral_18245/*"ef_factory_open1"*/, v9);
    sub_B0D8A4(&StringLiteral_18732/*"factory_icon_possible"*/, v10);
    sub_B0D8A4(&StringLiteral_18731/*"factory_bg_rate"*/, v11);
    sub_B0D8A4(&StringLiteral_18243/*"ef_factory_flash1"*/, v12);
    sub_B0D8A4(&StringLiteral_18734/*"factory_title_chocolate"*/, v13);
    sub_B0D8A4(&StringLiteral_18733/*"factory_line"*/, v14);
    sub_B0D8A4(&StringLiteral_18242/*"ef_factory_flash"*/, v15);
    byte_42187F7 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventFactory_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_18734/*"factory_title_chocolate"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18734/*"factory_title_chocolate"*/;
  sub_B0D840(static_fields, v17, v2, v3, v4, v5, v6, v7);
  v18 = TitleInfoEventFactory_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_18732/*"factory_icon_possible"*/;
  v18->SPRITE_NAME_POSSIBLE = (struct System_String_o *)StringLiteral_18732/*"factory_icon_possible"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v18->SPRITE_NAME_POSSIBLE, v19, v20, v21, v22, v23, v24, v25);
  v26 = TitleInfoEventFactory_TypeInfo->static_fields;
  v27 = (System_Int32_array **)StringLiteral_18733/*"factory_line"*/;
  v26->SPRITE_NAME_LINE = (struct System_String_o *)StringLiteral_18733/*"factory_line"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v26->SPRITE_NAME_LINE, v27, v28, v29, v30, v31, v32, v33);
  v34 = TitleInfoEventFactory_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_18731/*"factory_bg_rate"*/;
  v34->SPRITE_NAME_BG_RATE = (struct System_String_o *)StringLiteral_18731/*"factory_bg_rate"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v34->SPRITE_NAME_BG_RATE, v35, v36, v37, v38, v39, v40, v41);
  v42 = TitleInfoEventFactory_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_18244/*"ef_factory_open"*/;
  v42->OBJECT_NAME_EFFECT_1 = (struct System_String_o *)StringLiteral_18244/*"ef_factory_open"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v42->OBJECT_NAME_EFFECT_1, v43, v44, v45, v46, v47, v48, v49);
  v50 = TitleInfoEventFactory_TypeInfo->static_fields;
  v51 = (System_Int32_array **)StringLiteral_18242/*"ef_factory_flash"*/;
  v50->OBJECT_NAME_EFFECT_2 = (struct System_String_o *)StringLiteral_18242/*"ef_factory_flash"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v50->OBJECT_NAME_EFFECT_2, v51, v52, v53, v54, v55, v56, v57);
  v58 = TitleInfoEventFactory_TypeInfo->static_fields;
  v59 = (System_Int32_array **)StringLiteral_18245/*"ef_factory_open1"*/;
  v58->EFFECT_ANIMATION_START_1 = (struct System_String_o *)StringLiteral_18245/*"ef_factory_open1"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v58->EFFECT_ANIMATION_START_1, v59, v60, v61, v62, v63, v64, v65);
  v66 = TitleInfoEventFactory_TypeInfo->static_fields;
  v67 = (System_Int32_array **)StringLiteral_18243/*"ef_factory_flash1"*/;
  v66->EFFECT_ANIMATION_START_2 = (struct System_String_o *)StringLiteral_18243/*"ef_factory_flash1"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v66->EFFECT_ANIMATION_START_2, v67, v68, v69, v70, v71, v72, v73);
}


void __fastcall TitleInfoEventFactory___ctor(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventFactory__Close(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct SimpleAnimation_o **p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Object_o *v12; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleServantConfConponent_o *v19; // x0
  struct UnityEngine_Animation_o **p_animationData; // x19
  UnityEngine_Object_o *v21; // x20
  struct UnityEngine_Animation_o *animationData; // t1
  UnityEngine_Object_o *v23; // x20

  if ( (byte_42187F1 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42187F1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.effectAsset = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.effectAsset, 0LL, v4, v5, v6, v7, v8, v9);
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
      v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34935488(v12, 0LL);
      v19 = (BattleServantConfConponent_o *)p_simpleAnimationData;
      *p_simpleAnimationData = 0LL;
LABEL_22:
      sub_B0D840(v19, 0LL, v13, v14, v15, v16, v17, v18);
      return;
    }
    goto LABEL_24;
  }
  animationData = this->fields.animationData;
  p_animationData = &this->fields.animationData;
  v21 = (UnityEngine_Object_o *)animationData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)*p_animationData;
    if ( *p_animationData )
    {
      v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34935488(v23, 0LL);
      *p_animationData = 0LL;
      v19 = (BattleServantConfConponent_o *)p_animationData;
      goto LABEL_22;
    }
LABEL_24:
    sub_B0D97C(gameObject);
  }
}


void __fastcall TitleInfoEventFactory__LvUpIconCreate(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *unitDictionary; // x0
  const MethodInfo *v4; // x3

  if ( (byte_42187F4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__, method);
    byte_42187F4 = 1;
  }
  unitDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.unitDictionary;
  if ( !unitDictionary
    || (unitDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(unitDictionary, this->fields.lvUpIndex, (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__)) == 0LL )
  {
    sub_B0D97C(unitDictionary);
  }
  if ( SHIDWORD(unitDictionary->fields.values) >= 1 )
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserShopMaster_o *v23; // x22
  WarQuestSelectionMaster_o *v24; // x0
  UISprite_o *titleSprite; // x24
  TitleInfoEventFactory_c *v26; // x8
  System_String_o *SPRITE_NAME_TITLE; // x25
  __int64 v28; // x28
  int v29; // w27
  __int64 v30; // x21
  int v31; // w9
  int64_t v32; // x24
  __int64 v33; // x8
  int v34; // w9
  struct UnityEngine_GameObject_o *titleInfoEventFactoryUnitPrefab; // x25
  UnityEngine_Object_o *v36; // x25
  const MethodInfo *v37; // x4
  struct EventDetailEntity_o *v38; // x8
  WarBoardEvalValueSquare_EvalValueSquare_o *v39; // x25
  ShopEntity_o *v40; // x24
  int64_t UserId; // x25
  int32_t ItemID; // w2
  int v43; // w21
  UnityEngine_GameObject_o *gameObject; // x24
  UnityEngine_Object_o *v45; // x24
  UILabel_o *rateLabel; // x20
  System_String_o *v47; // x21
  Il2CppObject *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  __int64 v50; // x0
  UserItemMaster_o *v51; // [xsp+8h] [xbp-68h]
  DataMasterBase_WarMaster__WarEntity__int__o *v52; // [xsp+10h] [xbp-60h]
  double v53; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42187F0 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventFactoryMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserShopMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__, v8);
    sub_B0D8A4(&double_TypeInfo, v9);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&NetworkManager_TypeInfo, v12);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B0D8A4(&TitleInfoEventFactory_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_5642/*"EVENT_FACTORY_GET_EP_RATE"*/, v17);
    byte_42187F0 = 1;
  }
  if ( this->fields.eventDetailEntity )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventFactoryMaster___);
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
    v20 = *(_DWORD *)(Instance + 24);
    v21 = Instance;
    if ( v20 < 1 )
      return;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    v52 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v23 = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserShopMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    v24 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)Instance,
            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
    titleSprite = this->fields.titleSprite;
    v51 = (UserItemMaster_o *)v24;
    v26 = TitleInfoEventFactory_TypeInfo;
    if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      v26 = TitleInfoEventFactory_TypeInfo;
    }
    SPRITE_NAME_TITLE = v26->static_fields->SPRITE_NAME_TITLE;
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
    v28 = 0LL;
    v29 = 1000;
    do
    {
      if ( (unsigned int)v28 >= *(_DWORD *)(v21 + 24) )
      {
LABEL_64:
        v50 = sub_B0D9A8(Instance);
        sub_B0D948(v50, 0LL);
      }
      v30 = *(_QWORD *)(v21 + 32 + 8 * v28);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v30 )
        goto LABEL_63;
      if ( !v23 )
        goto LABEL_63;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v23, Instance, *(_DWORD *)(v30 + 24), 0LL);
      if ( !Instance )
        goto LABEL_63;
      v31 = *(_DWORD *)(Instance + 28);
      v32 = Instance;
      if ( v31 <= 0 )
      {
        Instance = (int64_t)v52;
        if ( !v52 )
          goto LABEL_63;
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v52,
                              *(_DWORD *)(v30 + 24),
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_63;
        v40 = (ShopEntity_o *)Instance;
        Instance = ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          ItemID = ShopEntity__GetItemID(v40, 0LL);
          Instance = (int64_t)v51;
          if ( !v51 )
            goto LABEL_63;
          Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v51, UserId, ItemID, 0LL);
          if ( !Instance )
            goto LABEL_63;
          v43 = *(_DWORD *)(Instance + 28);
          Instance = ShopEntity__GetPrice(v40, 0LL);
          if ( v43 >= (int)Instance )
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
            v45 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)gameObject,
                                            (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            Instance = UnityEngine_Object__op_Inequality(v45, 0LL, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v45 )
                goto LABEL_63;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v45, 1, 0LL);
              GameObjectExtensions__SafeSetParent(
                (UnityEngine_GameObject_o *)v45,
                (UnityEngine_Component_o *)this->fields.grid,
                0LL);
            }
          }
        }
      }
      else
      {
        v33 = *(_QWORD *)(v30 + 40);
        if ( !v33 )
          goto LABEL_63;
        v34 = v31 - 1;
        if ( (unsigned int)v34 >= *(_DWORD *)(v33 + 24) )
          goto LABEL_64;
        titleInfoEventFactoryUnitPrefab = this->fields.titleInfoEventFactoryUnitPrefab;
        v29 += *(_DWORD *)(v33 + 4LL * v34 + 32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v36 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)titleInfoEventFactoryUnitPrefab,
                                        (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        Instance = UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
        if ( (Instance & 1) != 0 )
        {
          GameObjectExtensions__SafeSetParent(
            (UnityEngine_GameObject_o *)v36,
            (UnityEngine_Component_o *)this->fields.grid,
            0LL);
          if ( !v36 )
            goto LABEL_63;
          Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)v36,
                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___);
          v38 = this->fields.eventDetailEntity;
          if ( !v38 )
            goto LABEL_63;
          v39 = (WarBoardEvalValueSquare_EvalValueSquare_o *)Instance;
          if ( !Instance )
            goto LABEL_63;
          TitleInfoEventFactoryUnit__Open(
            (TitleInfoEventFactoryUnit_o *)Instance,
            v38->fields.eventId,
            *(_DWORD *)(v30 + 16),
            *(_DWORD *)(v32 + 28),
            v37);
          Instance = (int64_t)this->fields.unitDictionary;
          if ( !Instance )
            goto LABEL_63;
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
            *(_DWORD *)(v30 + 16),
            v39,
            (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__);
        }
      }
      ++v28;
    }
    while ( (int)v28 < v20 );
    rateLabel = this->fields.rateLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_5642/*"EVENT_FACTORY_GET_EP_RATE"*/, 0LL);
    v53 = (double)v29 / 1000.0;
    v48 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v53);
    Instance = (int64_t)System_String__Format(v47, v48, 0LL);
    if ( !rateLabel
      || (UILabel__set_text(rateLabel, (System_String_o *)Instance, 0LL),
          (Instance = (int64_t)this->fields.RateBase) == 0)
      || (v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL),
          GameObjectExtensions__SetParent(v49, (UnityEngine_Component_o *)this->fields.grid, 0LL),
          (Instance = (int64_t)this->fields.grid) == 0) )
    {
LABEL_63:
      sub_B0D97C(Instance);
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
  UserShopMaster_o *v13; // x21
  __int64 v14; // x24
  int v15; // w22
  __int64 v16; // x27
  int v17; // w8
  bool v18; // vf
  int v19; // w8
  __int64 v20; // x9
  UILabel_o *rateLabel; // x19
  System_String_o *v22; // x20
  Il2CppObject *v23; // x0
  __int64 v24; // x0
  double v25; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42187F6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventFactoryMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserShopMaster___, v3);
    sub_B0D8A4(&double_TypeInfo, v4);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_5642/*"EVENT_FACTORY_GET_EP_RATE"*/, v8);
    byte_42187F6 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventFactoryMaster___);
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
  v11 = *(_DWORD *)(Instance + 24);
  v12 = Instance;
  if ( v11 < 1 )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserShopMaster___);
  v13 = (UserShopMaster_o *)Instance;
  v14 = 0LL;
  v15 = 1000;
  do
  {
    if ( (unsigned int)v14 >= *(_DWORD *)(v12 + 24) )
    {
LABEL_29:
      v24 = sub_B0D9A8(Instance);
      sub_B0D948(v24, 0LL);
    }
    v16 = *(_QWORD *)(v12 + 32 + 8 * v14);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v16 )
      goto LABEL_28;
    if ( !v13 )
      goto LABEL_28;
    Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v13, Instance, *(_DWORD *)(v16 + 24), 0LL);
    if ( !Instance )
      goto LABEL_28;
    v17 = *(_DWORD *)(Instance + 28);
    v18 = __OFSUB__(v17, 1);
    v19 = v17 - 1;
    if ( v19 < 0 == v18 )
    {
      v20 = *(_QWORD *)(v16 + 40);
      if ( !v20 )
        goto LABEL_28;
      if ( (unsigned int)v19 >= *(_DWORD *)(v20 + 24) )
        goto LABEL_29;
      v15 += *(_DWORD *)(v20 + 4LL * v19 + 32);
    }
    ++v14;
  }
  while ( (int)v14 < v11 );
  rateLabel = this->fields.rateLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5642/*"EVENT_FACTORY_GET_EP_RATE"*/, 0LL);
  v25 = (double)v15 / 1000.0;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v25);
  Instance = (int64_t)System_String__Format(v22, v23, 0LL);
  if ( !rateLabel )
LABEL_28:
    sub_B0D97C(Instance);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  BattleServantConfConponent_o *p_unitDictionary; // x19
  struct System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *unitDictionary; // t1
  System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42187EF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__, eventDetailEntity);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo, v10);
    byte_42187EF = 1;
  }
  this->fields.eventDetailEntity = eventDetailEntity;
  sub_B0D840(
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
    v15 = (System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *)sub_B0D974(
                                                                                       System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo,
                                                                                       v11,
                                                                                       v12);
    System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit____ctor(
      v15,
      10,
      (const MethodInfo_2E8F8A0 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__);
    p_unitDictionary->klass = (BattleServantConfConponent_c *)v15;
    sub_B0D840(p_unitDictionary, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
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
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *unitDictionary; // x24
  UnityEngine_GameObject_o *TargetId; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Object_o *Object_29501436; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x21
  UnityEngine_Component_o *Item; // x0
  UnityEngine_Transform_o *v38; // x20
  const MethodInfo *v39; // x1
  float v40; // s0
  float v41; // s1
  float v42; // s2
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct UnityEngine_Animation_o *v51; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  SimpleAnimation_o *v59; // x21
  TitleInfoEventFactoryUnit_c *klass; // x8
  UnityEngine_GameObject_o *v61; // x21
  unsigned __int64 v62; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v64; // x0
  UnityEngine_Animation_o *v65; // x20
  UnityEngine_Animation_o *v66; // x20
  UnityEngine_Animation_o *v67; // x20
  System_String_o *v68; // x0
  SimpleAnimation_o *v69; // x20
  System_String_o *name; // x0
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42187F3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__, shopEntity);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__, v11);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v12);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v13);
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, v14);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v17);
    sub_B0D8A4(&TitleInfoEventFactory_TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_8624/*"LvUpIconCreate"*/, v19);
    byte_42187F3 = 1;
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
           (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__) )
    {
      this->fields.effectAsset = effectAsset;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.effectAsset,
        (System_Int32_array **)effectAsset,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      this->fields.animationEndCallback = callback;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.animationEndCallback,
        (System_Int32_array **)callback,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
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
        Object_29501436 = AssetData__GetObject_29501436(
                            effectAsset,
                            TitleInfoEventFactory_TypeInfo->static_fields->OBJECT_NAME_EFFECT_1,
                            0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( Object_29501436 )
          v35 = (UnityEngine_GameObject_c *)Object_29501436->klass == UnityEngine_GameObject_TypeInfo
              ? (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_29501436
              : 0LL;
        else
          v35 = 0LL;
        TargetId = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                 v35,
                                                 (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( this->fields.unitDictionary )
        {
          v36 = TargetId;
          Item = (UnityEngine_Component_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                              (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.unitDictionary,
                                              this->fields.lvUpIndex,
                                              (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
          GameObjectExtensions__SafeSetParent(v36, Item, 0LL);
          if ( v36 )
          {
            TargetId = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v36, 0LL);
            if ( this->fields.unitDictionary )
            {
              v38 = (UnityEngine_Transform_o *)TargetId;
              TargetId = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                       (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.unitDictionary,
                                                       this->fields.lvUpIndex,
                                                       (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
              if ( TargetId )
              {
                *(UnityEngine_Vector3_o *)&v40 = TitleInfoEventFactoryUnit__GetLvUpEffectOffset(
                                                   (TitleInfoEventFactoryUnit_o *)TargetId,
                                                   v39);
                if ( v38 )
                {
                  v71.fields.x = v40 + this->fields.lvUpAnimetionOffset.fields.x;
                  v71.fields.y = v41 + this->fields.lvUpAnimetionOffset.fields.y;
                  v71.fields.z = v42 + this->fields.lvUpAnimetionOffset.fields.z;
                  UnityEngine_Transform__set_localPosition(v38, v71, 0LL);
                  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          v36,
                                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                  p_simpleAnimationData = &this->fields.simpleAnimationData;
                  this->fields.simpleAnimationData = Component_srcLineSprite;
                  sub_B0D840(
                    (BattleServantConfConponent_o *)&this->fields.simpleAnimationData,
                    (System_Int32_array **)Component_srcLineSprite,
                    v45,
                    v46,
                    v47,
                    v48,
                    v49,
                    v50);
                  v51 = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v36,
                                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                  p_animationData = &this->fields.animationData;
                  this->fields.animationData = v51;
                  sub_B0D840(
                    (BattleServantConfConponent_o *)&this->fields.animationData,
                    (System_Int32_array **)v51,
                    v53,
                    v54,
                    v55,
                    v56,
                    v57,
                    v58);
                  if ( UnityEngine_Object__op_Inequality(
                         (UnityEngine_Object_o *)this->fields.simpleAnimationData,
                         0LL,
                         0LL) )
                  {
                    TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
                    v59 = *p_simpleAnimationData;
                    if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
                    }
                    if ( v59 )
                    {
                      TargetId = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                                               v59,
                                                               TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                                                               0LL);
                      if ( TargetId )
                      {
                        klass = (TitleInfoEventFactoryUnit_c *)TargetId->klass;
                        v61 = TargetId;
                        if ( *(_WORD *)&TargetId->klass->_2.bitflags1 )
                        {
                          v62 = 0LL;
                          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
                          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                          {
                            ++v62;
                            p_offset += 2;
                            if ( v62 >= *(unsigned __int16 *)&TargetId->klass->_2.bitflags1 )
                              goto LABEL_37;
                          }
                          v64 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
                        }
                        else
                        {
LABEL_37:
                          v64 = sub_AA67A0(TargetId, SimpleAnimation_State_TypeInfo, 14LL);
                        }
                        TargetId = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v64)(
                                                                 v61,
                                                                 *(_QWORD *)(v64 + 8));
                        if ( *p_simpleAnimationData )
                        {
                          SimpleAnimation__set_clip(
                            *p_simpleAnimationData,
                            (UnityEngine_AnimationClip_o *)TargetId,
                            0LL);
                          v69 = *p_simpleAnimationData;
                          if ( v69 )
                          {
                            TargetId = (UnityEngine_GameObject_o *)v69[1].monitor;
                            if ( TargetId )
                            {
                              name = UnityEngine_Object__get_name((UnityEngine_Object_o *)TargetId, 0LL);
                              SimpleAnimation__Play_50482404(v69, name, 0LL);
                              goto LABEL_55;
                            }
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    v65 = *p_animationData;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v65, 0LL, 0LL) )
                      goto LABEL_55;
                    TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
                    v66 = *p_animationData;
                    if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
                    }
                    if ( v66 )
                    {
                      TargetId = (UnityEngine_GameObject_o *)UnityEngine_Animation__GetClip(
                                                               v66,
                                                               TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                                                               0LL);
                      if ( *p_animationData )
                      {
                        UnityEngine_Animation__set_clip(*p_animationData, (UnityEngine_AnimationClip_o *)TargetId, 0LL);
                        v67 = *p_animationData;
                        if ( *p_animationData )
                        {
                          TargetId = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(*p_animationData, 0LL);
                          if ( TargetId )
                          {
                            v68 = UnityEngine_Object__get_name((UnityEngine_Object_o *)TargetId, 0LL);
                            UnityEngine_Animation__Play_50564840(v67, v68, 0LL);
LABEL_55:
                            UnityEngine_MonoBehaviour__Invoke(
                              (UnityEngine_MonoBehaviour_o *)this,
                              (System_String_o *)StringLiteral_8624/*"LvUpIconCreate"*/,
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
      sub_B0D97C(TargetId);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  AssetData_o *effectAsset; // x20
  TitleInfoEventFactory_c *v17; // x0
  UnityEngine_Object_o *Object_29501436; // x0
  UnityEngine_GameObject_c **v19; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v20; // x0
  BattleServantConfConponent_o *p_animationEndCallback; // x19
  System_Action_o *v22; // x20
  struct System_Action_o *animationEndCallback; // t1
  UnityEngine_GameObject_o *v24; // x21
  UnityEngine_AnimationClip_o *Item; // x0
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct UnityEngine_Animation_o *v34; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  SimpleAnimation_o *v42; // x21
  UnityEngine_AnimationClip_c *klass; // x8
  UnityEngine_AnimationClip_o *v44; // x21
  unsigned __int64 v45; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v47; // x0
  UnityEngine_Animation_o *v48; // x20
  UnityEngine_Animation_o *v49; // x20
  UnityEngine_Animation_o *v50; // x20
  System_String_o *v51; // x0
  SimpleAnimation_o *v52; // x20
  System_String_o *name; // x0

  if ( (byte_42187F5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v9);
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, v10);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v13);
    sub_B0D8A4(&TitleInfoEventFactory_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_11311/*"RateChange"*/, v15);
    byte_42187F5 = 1;
  }
  effectAsset = this->fields.effectAsset;
  if ( effectAsset )
  {
    this->fields.effectIndex = 2;
    v17 = TitleInfoEventFactory_TypeInfo;
    if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      v17 = TitleInfoEventFactory_TypeInfo;
    }
    Object_29501436 = AssetData__GetObject_29501436(effectAsset, v17->static_fields->OBJECT_NAME_EFFECT_2, 0LL);
    v19 = (UnityEngine_GameObject_c **)Object_29501436;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( v19 )
      {
LABEL_10:
        if ( *v19 == UnityEngine_GameObject_TypeInfo )
          v20 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v19;
        else
          v20 = 0LL;
LABEL_18:
        v24 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            v20,
                                            (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        GameObjectExtensions__SafeSetParent(v24, (UnityEngine_Component_o *)this->fields.RateBase, 0LL);
        if ( v24 )
        {
          Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v24,
                                                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          this->fields.simpleAnimationData = Component_srcLineSprite;
          p_simpleAnimationData = &this->fields.simpleAnimationData;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.simpleAnimationData,
            (System_Int32_array **)Component_srcLineSprite,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
          v34 = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    v24,
                                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
          p_animationData = &this->fields.animationData;
          this->fields.animationData = v34;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.animationData,
            (System_Int32_array **)v34,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.simpleAnimationData, 0LL, 0LL) )
          {
            Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
            v42 = *p_simpleAnimationData;
            if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
            }
            if ( v42 )
            {
              Item = (UnityEngine_AnimationClip_o *)SimpleAnimation__get_Item(
                                                      v42,
                                                      TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                                                      0LL);
              if ( Item )
              {
                klass = Item->klass;
                v44 = Item;
                if ( *(_WORD *)&Item->klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
                  while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    ++v45;
                    p_offset += 2;
                    if ( v45 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                      goto LABEL_29;
                  }
                  v47 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
                }
                else
                {
LABEL_29:
                  v47 = sub_AA67A0(Item, SimpleAnimation_State_TypeInfo, 14LL);
                }
                Item = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(UnityEngine_AnimationClip_o *, _QWORD))v47)(
                                                        v44,
                                                        *(_QWORD *)(v47 + 8));
                if ( *p_simpleAnimationData )
                {
                  SimpleAnimation__set_clip(*p_simpleAnimationData, Item, 0LL);
                  v52 = *p_simpleAnimationData;
                  if ( v52 )
                  {
                    Item = (UnityEngine_AnimationClip_o *)v52[1].monitor;
                    if ( Item )
                    {
                      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                      SimpleAnimation__Play_50482404(v52, name, 0LL);
                      goto LABEL_47;
                    }
                  }
                }
              }
            }
          }
          else
          {
            v48 = *p_animationData;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v48, 0LL, 0LL) )
              goto LABEL_47;
            Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
            v49 = *p_animationData;
            if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
            }
            if ( v49 )
            {
              Item = UnityEngine_Animation__GetClip(
                       v49,
                       TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                       0LL);
              if ( *p_animationData )
              {
                UnityEngine_Animation__set_clip(*p_animationData, Item, 0LL);
                v50 = *p_animationData;
                if ( *p_animationData )
                {
                  Item = UnityEngine_Animation__get_clip(*p_animationData, 0LL);
                  if ( Item )
                  {
                    v51 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                    UnityEngine_Animation__Play_50564840(v50, v51, 0LL);
LABEL_47:
                    UnityEngine_MonoBehaviour__Invoke(
                      (UnityEngine_MonoBehaviour_o *)this,
                      (System_String_o *)StringLiteral_11311/*"RateChange"*/,
                      this->fields.rateChangeTime,
                      0LL);
                    return;
                  }
                }
              }
            }
          }
        }
        sub_B0D97C(Item);
      }
    }
    else if ( Object_29501436 )
    {
      goto LABEL_10;
    }
    v20 = 0LL;
    goto LABEL_18;
  }
  animationEndCallback = this->fields.animationEndCallback;
  p_animationEndCallback = (BattleServantConfConponent_o *)&this->fields.animationEndCallback;
  v22 = animationEndCallback;
  if ( animationEndCallback )
  {
    p_animationEndCallback->klass = 0LL;
    sub_B0D840(p_animationEndCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v22, 0LL);
  }
}


void __fastcall TitleInfoEventFactory__Update(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantConfConponent_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Object_o *monitor; // x0
  SimpleAnimation_o *klass; // x21
  System_String_o *name; // x0
  UnityEngine_Object_c *v9; // x8
  UnityEngine_Object_o *v10; // x21
  unsigned __int64 v11; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v13; // x0
  UnityEngine_Object_o *animationData; // x21
  UnityEngine_Animation_o *v15; // x21
  System_String_o *v16; // x0
  UnityEngine_AnimationState_o *v17; // x21
  float time; // s8
  long double v19; // q0
  UnityEngine_Object_c *v20; // x8
  unsigned __int64 v21; // x10
  SimpleAnimation_State_c **v22; // x11
  __int64 v23; // x0
  UnityEngine_Object_o *v24; // x21
  UnityEngine_Object_o *v25; // x21
  const MethodInfo *v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  int32_t effectIndex; // w8
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  BattleServantConfConponent_o *p_animationEndCallback; // x19
  System_Action_o *v48; // x20
  struct System_Action_o *animationEndCallback; // t1

  if ( (byte_42187F2 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v3);
    byte_42187F2 = 1;
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
    v9 = monitor->klass;
    v10 = monitor;
    if ( *(_WORD *)&monitor->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&v9->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v11;
        p_offset += 2;
        if ( v11 >= *(unsigned __int16 *)&monitor->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      v13 = (__int64)(&v9->vtable._3_ToString.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v13 = sub_AA67A0(monitor, SimpleAnimation_State_TypeInfo, 3LL);
    }
    v19 = ((long double (__fastcall *)(UnityEngine_Object_o *, _QWORD))*(_QWORD *)v13)(v10, *(_QWORD *)(v13 + 8));
    v20 = v10->klass;
    time = *(float *)&v19;
    if ( *(_WORD *)&v10->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = (SimpleAnimation_State_c **)&v20->_1.interfaceOffsets->offset;
      while ( *(v22 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v21;
        v22 += 2;
        if ( v21 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      v23 = (__int64)(&v20[1]._1.implementedInterfaces + 2 * *(_DWORD *)v22);
    }
    else
    {
LABEL_29:
      v23 = sub_AA67A0(v10, SimpleAnimation_State_TypeInfo, 14LL);
    }
    monitor = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v23)(
                                        v10,
                                        *(_QWORD *)(v23 + 8));
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
    v15 = this->fields.animationData;
    if ( !v15 )
      goto LABEL_52;
    monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animationData, 0LL);
    if ( !monitor )
      goto LABEL_52;
    v16 = UnityEngine_Object__get_name(monitor, 0LL);
    monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v15, v16, 0LL);
    if ( !monitor )
      goto LABEL_52;
    v17 = (UnityEngine_AnimationState_o *)monitor;
    time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)monitor, 0LL);
    monitor = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v17, 0LL);
    if ( !monitor )
      goto LABEL_52;
  }
  if ( time < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)monitor, 0LL) )
    return;
LABEL_33:
  v24 = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
  {
    p_simpleAnimationData = (BattleServantConfConponent_o *)&this->fields.animationData;
    v25 = (UnityEngine_Object_o *)this->fields.animationData;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
      goto LABEL_46;
  }
  monitor = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( !p_simpleAnimationData->klass )
LABEL_52:
    sub_B0D97C(monitor);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)monitor, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_34935488(gameObject, 0LL);
  p_simpleAnimationData->klass = 0LL;
  sub_B0D840(p_simpleAnimationData, 0LL, v34, v35, v36, v37, v38, v39);
LABEL_46:
  effectIndex = this->fields.effectIndex;
  if ( effectIndex == 2 )
  {
    this->fields.effectIndex = 0;
    this->fields.effectAsset = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.effectAsset, 0LL, v27, v28, v29, v30, v31, v32);
    animationEndCallback = this->fields.animationEndCallback;
    p_animationEndCallback = (BattleServantConfConponent_o *)&this->fields.animationEndCallback;
    v48 = animationEndCallback;
    if ( animationEndCallback )
    {
      p_animationEndCallback->klass = 0LL;
      sub_B0D840(p_animationEndCallback, 0LL, v41, v42, v43, v44, v45, v46);
      System_Action__Invoke(v48, 0LL);
    }
  }
  else if ( effectIndex == 1 )
  {
    TitleInfoEventFactory__StartRateEffect(this, v26);
  }
}