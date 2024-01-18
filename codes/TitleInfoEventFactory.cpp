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

  if ( (byte_418B9EF & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventFactory_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_18188/*"ef_factory_open"*/, v8);
    sub_B2C35C(&StringLiteral_18189/*"ef_factory_open1"*/, v9);
    sub_B2C35C(&StringLiteral_18674/*"factory_icon_possible"*/, v10);
    sub_B2C35C(&StringLiteral_18673/*"factory_bg_rate"*/, v11);
    sub_B2C35C(&StringLiteral_18187/*"ef_factory_flash1"*/, v12);
    sub_B2C35C(&StringLiteral_18676/*"factory_title_chocolate"*/, v13);
    sub_B2C35C(&StringLiteral_18675/*"factory_line"*/, v14);
    sub_B2C35C(&StringLiteral_18186/*"ef_factory_flash"*/, v15);
    byte_418B9EF = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventFactory_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_18676/*"factory_title_chocolate"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18676/*"factory_title_chocolate"*/;
  sub_B2C2F8(static_fields, v17, v2, v3, v4, v5, v6, v7);
  v18 = TitleInfoEventFactory_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_18674/*"factory_icon_possible"*/;
  v18->SPRITE_NAME_POSSIBLE = (struct System_String_o *)StringLiteral_18674/*"factory_icon_possible"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v18->SPRITE_NAME_POSSIBLE, v19, v20, v21, v22, v23, v24, v25);
  v26 = TitleInfoEventFactory_TypeInfo->static_fields;
  v27 = (System_Int32_array **)StringLiteral_18675/*"factory_line"*/;
  v26->SPRITE_NAME_LINE = (struct System_String_o *)StringLiteral_18675/*"factory_line"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v26->SPRITE_NAME_LINE, v27, v28, v29, v30, v31, v32, v33);
  v34 = TitleInfoEventFactory_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_18673/*"factory_bg_rate"*/;
  v34->SPRITE_NAME_BG_RATE = (struct System_String_o *)StringLiteral_18673/*"factory_bg_rate"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v34->SPRITE_NAME_BG_RATE, v35, v36, v37, v38, v39, v40, v41);
  v42 = TitleInfoEventFactory_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_18188/*"ef_factory_open"*/;
  v42->OBJECT_NAME_EFFECT_1 = (struct System_String_o *)StringLiteral_18188/*"ef_factory_open"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v42->OBJECT_NAME_EFFECT_1, v43, v44, v45, v46, v47, v48, v49);
  v50 = TitleInfoEventFactory_TypeInfo->static_fields;
  v51 = (System_Int32_array **)StringLiteral_18186/*"ef_factory_flash"*/;
  v50->OBJECT_NAME_EFFECT_2 = (struct System_String_o *)StringLiteral_18186/*"ef_factory_flash"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v50->OBJECT_NAME_EFFECT_2, v51, v52, v53, v54, v55, v56, v57);
  v58 = TitleInfoEventFactory_TypeInfo->static_fields;
  v59 = (System_Int32_array **)StringLiteral_18189/*"ef_factory_open1"*/;
  v58->EFFECT_ANIMATION_START_1 = (struct System_String_o *)StringLiteral_18189/*"ef_factory_open1"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v58->EFFECT_ANIMATION_START_1, v59, v60, v61, v62, v63, v64, v65);
  v66 = TitleInfoEventFactory_TypeInfo->static_fields;
  v67 = (System_Int32_array **)StringLiteral_18187/*"ef_factory_flash1"*/;
  v66->EFFECT_ANIMATION_START_2 = (struct System_String_o *)StringLiteral_18187/*"ef_factory_flash1"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v66->EFFECT_ANIMATION_START_2, v67, v68, v69, v70, v71, v72, v73);
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

  if ( (byte_418B9E9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B9E9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.effectAsset = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.effectAsset, 0LL, v5, v6, v7, v8, v9, v10);
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
      UnityEngine_Object__DestroyImmediate_35315108(v13, 0LL);
      v20 = (BattleServantConfConponent_o *)p_simpleAnimationData;
      *p_simpleAnimationData = 0LL;
LABEL_22:
      sub_B2C2F8(v20, 0LL, v14, v15, v16, v17, v18, v19);
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
      UnityEngine_Object__DestroyImmediate_35315108(v24, 0LL);
      *p_animationData = 0LL;
      v20 = (BattleServantConfConponent_o *)p_animationData;
      goto LABEL_22;
    }
LABEL_24:
    sub_B2C434(gameObject, v4);
  }
}


void __fastcall TitleInfoEventFactory__LvUpIconCreate(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *unitDictionary; // x0
  const MethodInfo *v4; // x3

  if ( (byte_418B9EC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__, method);
    byte_418B9EC = 1;
  }
  unitDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.unitDictionary;
  if ( !unitDictionary
    || (unitDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(unitDictionary, this->fields.lvUpIndex, (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__)) == 0LL )
  {
    sub_B2C434(unitDictionary, method);
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
  __int64 v19; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  int v21; // w26
  int64_t v22; // x20
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserShopMaster_o *v24; // x22
  WarQuestSelectionMaster_o *v25; // x0
  UISprite_o *titleSprite; // x24
  TitleInfoEventFactory_c *v27; // x8
  System_String_o *SPRITE_NAME_TITLE; // x25
  __int64 v29; // x28
  int v30; // w27
  __int64 v31; // x21
  int v32; // w9
  int64_t v33; // x24
  __int64 v34; // x8
  int v35; // w9
  struct UnityEngine_GameObject_o *titleInfoEventFactoryUnitPrefab; // x25
  UnityEngine_Object_o *v37; // x25
  const MethodInfo *v38; // x4
  struct EventDetailEntity_o *v39; // x8
  WarBoardEvalValueSquare_EvalValueSquare_o *v40; // x25
  ShopEntity_o *v41; // x24
  int64_t UserId; // x25
  int32_t ItemID; // w2
  int v44; // w21
  UnityEngine_GameObject_o *gameObject; // x24
  UnityEngine_Object_o *v46; // x24
  UILabel_o *rateLabel; // x20
  System_String_o *v48; // x21
  Il2CppObject *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  __int64 v51; // x0
  UserItemMaster_o *v52; // [xsp+8h] [xbp-68h]
  DataMasterBase_WarMaster__WarEntity__int__o *v53; // [xsp+10h] [xbp-60h]
  double v54; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_418B9E8 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventFactoryMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__, v8);
    sub_B2C35C(&double_TypeInfo, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&TitleInfoEventFactory_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_5626/*"EVENT_FACTORY_GET_EP_RATE"*/, v17);
    byte_418B9E8 = 1;
  }
  if ( this->fields.eventDetailEntity )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventFactoryMaster___);
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
    v21 = *(_DWORD *)(Instance + 24);
    v22 = Instance;
    if ( v21 < 1 )
      return;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    v53 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v24 = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    v25 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)Instance,
            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
    titleSprite = this->fields.titleSprite;
    v52 = (UserItemMaster_o *)v25;
    v27 = TitleInfoEventFactory_TypeInfo;
    if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      v27 = TitleInfoEventFactory_TypeInfo;
    }
    SPRITE_NAME_TITLE = v27->static_fields->SPRITE_NAME_TITLE;
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
    v29 = 0LL;
    v30 = 1000;
    do
    {
      if ( (unsigned int)v29 >= *(_DWORD *)(v22 + 24) )
      {
LABEL_64:
        v51 = sub_B2C460(Instance);
        sub_B2C400(v51, 0LL);
      }
      v31 = *(_QWORD *)(v22 + 32 + 8 * v29);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v31 )
        goto LABEL_63;
      if ( !v24 )
        goto LABEL_63;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v24, Instance, *(_DWORD *)(v31 + 24), 0LL);
      if ( !Instance )
        goto LABEL_63;
      v32 = *(_DWORD *)(Instance + 28);
      v33 = Instance;
      if ( v32 <= 0 )
      {
        Instance = (int64_t)v53;
        if ( !v53 )
          goto LABEL_63;
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v53,
                              *(_DWORD *)(v31 + 24),
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_63;
        v41 = (ShopEntity_o *)Instance;
        Instance = ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          ItemID = ShopEntity__GetItemID(v41, 0LL);
          Instance = (int64_t)v52;
          if ( !v52 )
            goto LABEL_63;
          Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v52, UserId, ItemID, 0LL);
          if ( !Instance )
            goto LABEL_63;
          v44 = *(_DWORD *)(Instance + 28);
          Instance = ShopEntity__GetPrice(v41, 0LL);
          if ( v44 >= (int)Instance )
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
            v46 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)gameObject,
                                            (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            Instance = UnityEngine_Object__op_Inequality(v46, 0LL, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v46 )
                goto LABEL_63;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v46, 1, 0LL);
              GameObjectExtensions__SafeSetParent(
                (UnityEngine_GameObject_o *)v46,
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
          goto LABEL_63;
        v35 = v32 - 1;
        if ( (unsigned int)v35 >= *(_DWORD *)(v34 + 24) )
          goto LABEL_64;
        titleInfoEventFactoryUnitPrefab = this->fields.titleInfoEventFactoryUnitPrefab;
        v30 += *(_DWORD *)(v34 + 4LL * v35 + 32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v37 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)titleInfoEventFactoryUnitPrefab,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        Instance = UnityEngine_Object__op_Inequality(v37, 0LL, 0LL);
        if ( (Instance & 1) != 0 )
        {
          GameObjectExtensions__SafeSetParent(
            (UnityEngine_GameObject_o *)v37,
            (UnityEngine_Component_o *)this->fields.grid,
            0LL);
          if ( !v37 )
            goto LABEL_63;
          Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)v37,
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___);
          v39 = this->fields.eventDetailEntity;
          if ( !v39 )
            goto LABEL_63;
          v40 = (WarBoardEvalValueSquare_EvalValueSquare_o *)Instance;
          if ( !Instance )
            goto LABEL_63;
          TitleInfoEventFactoryUnit__Open(
            (TitleInfoEventFactoryUnit_o *)Instance,
            v39->fields.eventId,
            *(_DWORD *)(v31 + 16),
            *(_DWORD *)(v33 + 28),
            v38);
          Instance = (int64_t)this->fields.unitDictionary;
          if ( !Instance )
            goto LABEL_63;
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
            *(_DWORD *)(v31 + 16),
            v40,
            (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__);
        }
      }
      ++v29;
    }
    while ( (int)v29 < v21 );
    rateLabel = this->fields.rateLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_5626/*"EVENT_FACTORY_GET_EP_RATE"*/, 0LL);
    v54 = (double)v30 / 1000.0;
    v49 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v54);
    Instance = (int64_t)System_String__Format(v48, v49, 0LL);
    if ( !rateLabel
      || (UILabel__set_text(rateLabel, (System_String_o *)Instance, 0LL),
          (Instance = (int64_t)this->fields.RateBase) == 0)
      || (v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL),
          GameObjectExtensions__SetParent(v50, (UnityEngine_Component_o *)this->fields.grid, 0LL),
          (Instance = (int64_t)this->fields.grid) == 0) )
    {
LABEL_63:
      sub_B2C434(Instance, v19);
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
  __int64 v10; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  int v12; // w23
  int64_t v13; // x20
  UserShopMaster_o *v14; // x21
  __int64 v15; // x24
  int v16; // w22
  __int64 v17; // x27
  int v18; // w8
  bool v19; // vf
  int v20; // w8
  __int64 v21; // x9
  UILabel_o *rateLabel; // x19
  System_String_o *v23; // x20
  Il2CppObject *v24; // x0
  __int64 v25; // x0
  double v26; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_418B9EE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventFactoryMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, v3);
    sub_B2C35C(&double_TypeInfo, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_5626/*"EVENT_FACTORY_GET_EP_RATE"*/, v8);
    byte_418B9EE = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventFactoryMaster___);
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
  v12 = *(_DWORD *)(Instance + 24);
  v13 = Instance;
  if ( v12 < 1 )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___);
  v14 = (UserShopMaster_o *)Instance;
  v15 = 0LL;
  v16 = 1000;
  do
  {
    if ( (unsigned int)v15 >= *(_DWORD *)(v13 + 24) )
    {
LABEL_29:
      v25 = sub_B2C460(Instance);
      sub_B2C400(v25, 0LL);
    }
    v17 = *(_QWORD *)(v13 + 32 + 8 * v15);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v17 )
      goto LABEL_28;
    if ( !v14 )
      goto LABEL_28;
    Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v14, Instance, *(_DWORD *)(v17 + 24), 0LL);
    if ( !Instance )
      goto LABEL_28;
    v18 = *(_DWORD *)(Instance + 28);
    v19 = __OFSUB__(v18, 1);
    v20 = v18 - 1;
    if ( v20 < 0 == v19 )
    {
      v21 = *(_QWORD *)(v17 + 40);
      if ( !v21 )
        goto LABEL_28;
      if ( (unsigned int)v20 >= *(_DWORD *)(v21 + 24) )
        goto LABEL_29;
      v16 += *(_DWORD *)(v21 + 4LL * v20 + 32);
    }
    ++v15;
  }
  while ( (int)v15 < v12 );
  rateLabel = this->fields.rateLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5626/*"EVENT_FACTORY_GET_EP_RATE"*/, 0LL);
  v26 = (double)v16 / 1000.0;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v26);
  Instance = (int64_t)System_String__Format(v23, v24, 0LL);
  if ( !rateLabel )
LABEL_28:
    sub_B2C434(Instance, v10);
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
  BattleServantConfConponent_o *p_unitDictionary; // x19
  struct System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *unitDictionary; // t1
  System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_418B9E7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__, eventDetailEntity);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo, v10);
    byte_418B9E7 = 1;
  }
  this->fields.eventDetailEntity = eventDetailEntity;
  sub_B2C2F8(
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
    v13 = (System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo);
    System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit____ctor(
      v13,
      10,
      (const MethodInfo_2E63BC4 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__);
    p_unitDictionary->klass = (BattleServantConfConponent_c *)v13;
    sub_B2C2F8(p_unitDictionary, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
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
  const MethodInfo *v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_Object_o *Object_30137720; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x21
  UnityEngine_Component_o *Item; // x0
  UnityEngine_Transform_o *v39; // x20
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
  __int64 v60; // x3
  TitleInfoEventFactoryUnit_c *klass; // x8
  UnityEngine_GameObject_o *v62; // x21
  unsigned __int64 v63; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v65; // x0
  UnityEngine_Animation_o *v66; // x20
  UnityEngine_Animation_o *v67; // x20
  UnityEngine_Animation_o *v68; // x20
  System_String_o *v69; // x0
  SimpleAnimation_o *v70; // x20
  System_String_o *name; // x0
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418B9EB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__, shopEntity);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__, v11);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v12);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v13);
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, v14);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v17);
    sub_B2C35C(&TitleInfoEventFactory_TypeInfo, v18);
    sub_B2C35C(&StringLiteral_8602/*"LvUpIconCreate"*/, v19);
    byte_418B9EB = 1;
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
           (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__) )
    {
      this->fields.effectAsset = effectAsset;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.effectAsset,
        (System_Int32_array **)effectAsset,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      this->fields.animationEndCallback = callback;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.animationEndCallback,
        (System_Int32_array **)callback,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
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
        Object_30137720 = AssetData__GetObject_30137720(
                            effectAsset,
                            TitleInfoEventFactory_TypeInfo->static_fields->OBJECT_NAME_EFFECT_1,
                            0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( Object_30137720 )
          v36 = (UnityEngine_GameObject_c *)Object_30137720->klass == UnityEngine_GameObject_TypeInfo
              ? (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_30137720
              : 0LL;
        else
          v36 = 0LL;
        TargetId = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                 v36,
                                                 (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( this->fields.unitDictionary )
        {
          v37 = TargetId;
          Item = (UnityEngine_Component_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                              (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.unitDictionary,
                                              this->fields.lvUpIndex,
                                              (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
          GameObjectExtensions__SafeSetParent(v37, Item, 0LL);
          if ( v37 )
          {
            TargetId = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v37, 0LL);
            if ( this->fields.unitDictionary )
            {
              v39 = (UnityEngine_Transform_o *)TargetId;
              TargetId = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                       (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.unitDictionary,
                                                       this->fields.lvUpIndex,
                                                       (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
              if ( TargetId )
              {
                *(UnityEngine_Vector3_o *)&v40 = TitleInfoEventFactoryUnit__GetLvUpEffectOffset(
                                                   (TitleInfoEventFactoryUnit_o *)TargetId,
                                                   v22);
                if ( v39 )
                {
                  v72.fields.x = v40 + this->fields.lvUpAnimetionOffset.fields.x;
                  v72.fields.y = v41 + this->fields.lvUpAnimetionOffset.fields.y;
                  v72.fields.z = v42 + this->fields.lvUpAnimetionOffset.fields.z;
                  UnityEngine_Transform__set_localPosition(v39, v72, 0LL);
                  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          v37,
                                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                  p_simpleAnimationData = &this->fields.simpleAnimationData;
                  this->fields.simpleAnimationData = Component_srcLineSprite;
                  sub_B2C2F8(
                    (BattleServantConfConponent_o *)&this->fields.simpleAnimationData,
                    (System_Int32_array **)Component_srcLineSprite,
                    v45,
                    v46,
                    v47,
                    v48,
                    v49,
                    v50);
                  v51 = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v37,
                                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                  p_animationData = &this->fields.animationData;
                  this->fields.animationData = v51;
                  sub_B2C2F8(
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
                        v62 = TargetId;
                        if ( *(_WORD *)&TargetId->klass->_2.bitflags1 )
                        {
                          v63 = 0LL;
                          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
                          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                          {
                            ++v63;
                            p_offset += 2;
                            if ( v63 >= *(unsigned __int16 *)&TargetId->klass->_2.bitflags1 )
                              goto LABEL_37;
                          }
                          v65 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
                        }
                        else
                        {
LABEL_37:
                          v65 = sub_AC5258(TargetId, SimpleAnimation_State_TypeInfo, 14LL, v60);
                        }
                        TargetId = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v65)(
                                                                 v62,
                                                                 *(_QWORD *)(v65 + 8));
                        if ( *p_simpleAnimationData )
                        {
                          SimpleAnimation__set_clip(
                            *p_simpleAnimationData,
                            (UnityEngine_AnimationClip_o *)TargetId,
                            0LL);
                          v70 = *p_simpleAnimationData;
                          if ( v70 )
                          {
                            TargetId = (UnityEngine_GameObject_o *)v70[1].monitor;
                            if ( TargetId )
                            {
                              name = UnityEngine_Object__get_name((UnityEngine_Object_o *)TargetId, 0LL);
                              SimpleAnimation__Play_16486620(v70, name, 0LL);
                              goto LABEL_55;
                            }
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    v66 = *p_animationData;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v66, 0LL, 0LL) )
                      goto LABEL_55;
                    TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
                    v67 = *p_animationData;
                    if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
                    }
                    if ( v67 )
                    {
                      TargetId = (UnityEngine_GameObject_o *)UnityEngine_Animation__GetClip(
                                                               v67,
                                                               TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                                                               0LL);
                      if ( *p_animationData )
                      {
                        UnityEngine_Animation__set_clip(*p_animationData, (UnityEngine_AnimationClip_o *)TargetId, 0LL);
                        v68 = *p_animationData;
                        if ( *p_animationData )
                        {
                          TargetId = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(*p_animationData, 0LL);
                          if ( TargetId )
                          {
                            v69 = UnityEngine_Object__get_name((UnityEngine_Object_o *)TargetId, 0LL);
                            UnityEngine_Animation__Play_50201580(v68, v69, 0LL);
LABEL_55:
                            UnityEngine_MonoBehaviour__Invoke(
                              (UnityEngine_MonoBehaviour_o *)this,
                              (System_String_o *)StringLiteral_8602/*"LvUpIconCreate"*/,
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
      sub_B2C434(TargetId, v22);
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
  UnityEngine_Object_o *Object_30137720; // x0
  UnityEngine_GameObject_c **v19; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v20; // x0
  BattleServantConfConponent_o *p_animationEndCallback; // x19
  System_Action_o *v22; // x20
  struct System_Action_o *animationEndCallback; // t1
  UnityEngine_GameObject_o *v24; // x21
  UnityEngine_AnimationClip_o *Item; // x0
  __int64 v26; // x1
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct UnityEngine_Animation_o *v35; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  SimpleAnimation_o *v43; // x21
  __int64 v44; // x3
  UnityEngine_AnimationClip_c *klass; // x8
  UnityEngine_AnimationClip_o *v46; // x21
  unsigned __int64 v47; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v49; // x0
  UnityEngine_Animation_o *v50; // x20
  UnityEngine_Animation_o *v51; // x20
  UnityEngine_Animation_o *v52; // x20
  System_String_o *v53; // x0
  SimpleAnimation_o *v54; // x20
  System_String_o *name; // x0

  if ( (byte_418B9ED & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v9);
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, v10);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v13);
    sub_B2C35C(&TitleInfoEventFactory_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_11284/*"RateChange"*/, v15);
    byte_418B9ED = 1;
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
    Object_30137720 = AssetData__GetObject_30137720(effectAsset, v17->static_fields->OBJECT_NAME_EFFECT_2, 0LL);
    v19 = (UnityEngine_GameObject_c **)Object_30137720;
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
                                            (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        GameObjectExtensions__SafeSetParent(v24, (UnityEngine_Component_o *)this->fields.RateBase, 0LL);
        if ( v24 )
        {
          Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v24,
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          this->fields.simpleAnimationData = Component_srcLineSprite;
          p_simpleAnimationData = &this->fields.simpleAnimationData;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.simpleAnimationData,
            (System_Int32_array **)Component_srcLineSprite,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34);
          v35 = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    v24,
                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
          p_animationData = &this->fields.animationData;
          this->fields.animationData = v35;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.animationData,
            (System_Int32_array **)v35,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.simpleAnimationData, 0LL, 0LL) )
          {
            Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
            v43 = *p_simpleAnimationData;
            if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
            }
            if ( v43 )
            {
              Item = (UnityEngine_AnimationClip_o *)SimpleAnimation__get_Item(
                                                      v43,
                                                      TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                                                      0LL);
              if ( Item )
              {
                klass = Item->klass;
                v46 = Item;
                if ( *(_WORD *)&Item->klass->_2.bitflags1 )
                {
                  v47 = 0LL;
                  p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
                  while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    ++v47;
                    p_offset += 2;
                    if ( v47 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                      goto LABEL_29;
                  }
                  v49 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
                }
                else
                {
LABEL_29:
                  v49 = sub_AC5258(Item, SimpleAnimation_State_TypeInfo, 14LL, v44);
                }
                Item = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(UnityEngine_AnimationClip_o *, _QWORD))v49)(
                                                        v46,
                                                        *(_QWORD *)(v49 + 8));
                if ( *p_simpleAnimationData )
                {
                  SimpleAnimation__set_clip(*p_simpleAnimationData, Item, 0LL);
                  v54 = *p_simpleAnimationData;
                  if ( v54 )
                  {
                    Item = (UnityEngine_AnimationClip_o *)v54[1].monitor;
                    if ( Item )
                    {
                      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                      SimpleAnimation__Play_16486620(v54, name, 0LL);
                      goto LABEL_47;
                    }
                  }
                }
              }
            }
          }
          else
          {
            v50 = *p_animationData;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v50, 0LL, 0LL) )
              goto LABEL_47;
            Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
            v51 = *p_animationData;
            if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
            }
            if ( v51 )
            {
              Item = UnityEngine_Animation__GetClip(
                       v51,
                       TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                       0LL);
              if ( *p_animationData )
              {
                UnityEngine_Animation__set_clip(*p_animationData, Item, 0LL);
                v52 = *p_animationData;
                if ( *p_animationData )
                {
                  Item = UnityEngine_Animation__get_clip(*p_animationData, 0LL);
                  if ( Item )
                  {
                    v53 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                    UnityEngine_Animation__Play_50201580(v52, v53, 0LL);
LABEL_47:
                    UnityEngine_MonoBehaviour__Invoke(
                      (UnityEngine_MonoBehaviour_o *)this,
                      (System_String_o *)StringLiteral_11284/*"RateChange"*/,
                      this->fields.rateChangeTime,
                      0LL);
                    return;
                  }
                }
              }
            }
          }
        }
        sub_B2C434(Item, v26);
      }
    }
    else if ( Object_30137720 )
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
    sub_B2C2F8(p_animationEndCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v22, 0LL);
  }
}


void __fastcall TitleInfoEventFactory__Update(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantConfConponent_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Object_o *monitor; // x0
  const MethodInfo *v7; // x1
  SimpleAnimation_o *klass; // x21
  System_String_o *name; // x0
  __int64 v10; // x3
  UnityEngine_Object_c *v11; // x8
  UnityEngine_Object_o *v12; // x21
  unsigned __int64 v13; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v15; // x0
  UnityEngine_Object_o *animationData; // x21
  UnityEngine_Animation_o *v17; // x21
  System_String_o *v18; // x0
  UnityEngine_AnimationState_o *v19; // x21
  float time; // s8
  __int64 v21; // x3
  long double v22; // q0
  UnityEngine_Object_c *v23; // x8
  unsigned __int64 v24; // x10
  SimpleAnimation_State_c **v25; // x11
  __int64 v26; // x0
  UnityEngine_Object_o *v27; // x21
  UnityEngine_Object_o *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int32_t effectIndex; // w8
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  BattleServantConfConponent_o *p_animationEndCallback; // x19
  System_Action_o *v50; // x20
  struct System_Action_o *animationEndCallback; // t1

  if ( (byte_418B9EA & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v3);
    byte_418B9EA = 1;
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
    v11 = monitor->klass;
    v12 = monitor;
    if ( *(_WORD *)&monitor->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&v11->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v13;
        p_offset += 2;
        if ( v13 >= *(unsigned __int16 *)&monitor->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      v15 = (__int64)(&v11->vtable._3_ToString.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v15 = sub_AC5258(monitor, SimpleAnimation_State_TypeInfo, 3LL, v10);
    }
    v22 = ((long double (__fastcall *)(UnityEngine_Object_o *, _QWORD))*(_QWORD *)v15)(v12, *(_QWORD *)(v15 + 8));
    v23 = v12->klass;
    time = *(float *)&v22;
    if ( *(_WORD *)&v12->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = (SimpleAnimation_State_c **)&v23->_1.interfaceOffsets->offset;
      while ( *(v25 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v24;
        v25 += 2;
        if ( v24 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      v26 = (__int64)(&v23[1]._1.implementedInterfaces + 2 * *(_DWORD *)v25);
    }
    else
    {
LABEL_29:
      v26 = sub_AC5258(v12, SimpleAnimation_State_TypeInfo, 14LL, v21);
    }
    monitor = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v26)(
                                        v12,
                                        *(_QWORD *)(v26 + 8));
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
    v17 = this->fields.animationData;
    if ( !v17 )
      goto LABEL_52;
    monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animationData, 0LL);
    if ( !monitor )
      goto LABEL_52;
    v18 = UnityEngine_Object__get_name(monitor, 0LL);
    monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v17, v18, 0LL);
    if ( !monitor )
      goto LABEL_52;
    v19 = (UnityEngine_AnimationState_o *)monitor;
    time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)monitor, 0LL);
    monitor = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v19, 0LL);
    if ( !monitor )
      goto LABEL_52;
  }
  if ( time < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)monitor, 0LL) )
    return;
LABEL_33:
  v27 = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
  {
    p_simpleAnimationData = (BattleServantConfConponent_o *)&this->fields.animationData;
    v28 = (UnityEngine_Object_o *)this->fields.animationData;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
      goto LABEL_46;
  }
  monitor = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( !p_simpleAnimationData->klass )
LABEL_52:
    sub_B2C434(monitor, v7);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)monitor, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_35315108(gameObject, 0LL);
  p_simpleAnimationData->klass = 0LL;
  sub_B2C2F8(p_simpleAnimationData, 0LL, v36, v37, v38, v39, v40, v41);
LABEL_46:
  effectIndex = this->fields.effectIndex;
  if ( effectIndex == 2 )
  {
    this->fields.effectIndex = 0;
    this->fields.effectAsset = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.effectAsset, 0LL, v29, v30, v31, v32, v33, v34);
    animationEndCallback = this->fields.animationEndCallback;
    p_animationEndCallback = (BattleServantConfConponent_o *)&this->fields.animationEndCallback;
    v50 = animationEndCallback;
    if ( animationEndCallback )
    {
      p_animationEndCallback->klass = 0LL;
      sub_B2C2F8(p_animationEndCallback, 0LL, v43, v44, v45, v46, v47, v48);
      System_Action__Invoke(v50, 0LL);
    }
  }
  else if ( effectIndex == 1 )
  {
    TitleInfoEventFactory__StartRateEffect(this, v7);
  }
}