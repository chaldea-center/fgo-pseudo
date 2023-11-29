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

  if ( (byte_40FDFB5 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventFactory_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_18120, v8);
    sub_B16FFC(&StringLiteral_18121, v9);
    sub_B16FFC(&StringLiteral_18604, v10);
    sub_B16FFC(&StringLiteral_18603, v11);
    sub_B16FFC(&StringLiteral_18119, v12);
    sub_B16FFC(&StringLiteral_18606, v13);
    sub_B16FFC(&StringLiteral_18605, v14);
    sub_B16FFC(&StringLiteral_18118, v15);
    byte_40FDFB5 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventFactory_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_18606;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18606;
  sub_B16F98(static_fields, v17, v2, v3, v4, v5, v6, v7);
  v18 = TitleInfoEventFactory_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_18604;
  v18->SPRITE_NAME_POSSIBLE = (struct System_String_o *)StringLiteral_18604;
  sub_B16F98((BattleServantConfConponent_o *)&v18->SPRITE_NAME_POSSIBLE, v19, v20, v21, v22, v23, v24, v25);
  v26 = TitleInfoEventFactory_TypeInfo->static_fields;
  v27 = (System_Int32_array **)StringLiteral_18605;
  v26->SPRITE_NAME_LINE = (struct System_String_o *)StringLiteral_18605;
  sub_B16F98((BattleServantConfConponent_o *)&v26->SPRITE_NAME_LINE, v27, v28, v29, v30, v31, v32, v33);
  v34 = TitleInfoEventFactory_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_18603;
  v34->SPRITE_NAME_BG_RATE = (struct System_String_o *)StringLiteral_18603;
  sub_B16F98((BattleServantConfConponent_o *)&v34->SPRITE_NAME_BG_RATE, v35, v36, v37, v38, v39, v40, v41);
  v42 = TitleInfoEventFactory_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_18120;
  v42->OBJECT_NAME_EFFECT_1 = (struct System_String_o *)StringLiteral_18120;
  sub_B16F98((BattleServantConfConponent_o *)&v42->OBJECT_NAME_EFFECT_1, v43, v44, v45, v46, v47, v48, v49);
  v50 = TitleInfoEventFactory_TypeInfo->static_fields;
  v51 = (System_Int32_array **)StringLiteral_18118;
  v50->OBJECT_NAME_EFFECT_2 = (struct System_String_o *)StringLiteral_18118;
  sub_B16F98((BattleServantConfConponent_o *)&v50->OBJECT_NAME_EFFECT_2, v51, v52, v53, v54, v55, v56, v57);
  v58 = TitleInfoEventFactory_TypeInfo->static_fields;
  v59 = (System_Int32_array **)StringLiteral_18121;
  v58->EFFECT_ANIMATION_START_1 = (struct System_String_o *)StringLiteral_18121;
  sub_B16F98((BattleServantConfConponent_o *)&v58->EFFECT_ANIMATION_START_1, v59, v60, v61, v62, v63, v64, v65);
  v66 = TitleInfoEventFactory_TypeInfo->static_fields;
  v67 = (System_Int32_array **)StringLiteral_18119;
  v66->EFFECT_ANIMATION_START_2 = (struct System_String_o *)StringLiteral_18119;
  sub_B16F98((BattleServantConfConponent_o *)&v66->EFFECT_ANIMATION_START_2, v67, v68, v69, v70, v71, v72, v73);
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
  UnityEngine_Component_o **p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Object_o *v12; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleServantConfConponent_o *v19; // x0
  UnityEngine_Component_o **p_animationData; // x19
  UnityEngine_Object_o *v21; // x20
  struct UnityEngine_Animation_o *animationData; // t1
  UnityEngine_Object_o *v23; // x20

  if ( (byte_40FDFAF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDFAF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.effectAsset = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.effectAsset, 0LL, v4, v5, v6, v7, v8, v9);
  p_simpleAnimationData = (UnityEngine_Component_o **)&this->fields.simpleAnimationData;
  simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
  this->fields.effectIndex = 0;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimationData, 0LL, 0LL) )
  {
    if ( *p_simpleAnimationData )
    {
      v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_simpleAnimationData, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676(v12, 0LL);
      v19 = (BattleServantConfConponent_o *)p_simpleAnimationData;
      *p_simpleAnimationData = 0LL;
LABEL_22:
      sub_B16F98(v19, 0LL, v13, v14, v15, v16, v17, v18);
      return;
    }
    goto LABEL_24;
  }
  animationData = this->fields.animationData;
  p_animationData = (UnityEngine_Component_o **)&this->fields.animationData;
  v21 = (UnityEngine_Object_o *)animationData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
  {
    if ( *p_animationData )
    {
      v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_animationData, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676(v23, 0LL);
      *p_animationData = 0LL;
      v19 = (BattleServantConfConponent_o *)p_animationData;
      goto LABEL_22;
    }
LABEL_24:
    sub_B170D4();
  }
}


void __fastcall TitleInfoEventFactory__LvUpIconCreate(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *unitDictionary; // x0
  TitleInfoEventFactoryUnit_o *Item; // x0
  const MethodInfo *v5; // x3

  if ( (byte_40FDFB2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__, method);
    byte_40FDFB2 = 1;
  }
  unitDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.unitDictionary;
  if ( !unitDictionary
    || (Item = (TitleInfoEventFactoryUnit_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                unitDictionary,
                                                this->fields.lvUpIndex,
                                                (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__)) == 0LL )
  {
    sub_B170D4();
  }
  if ( Item->fields.lv >= 1 )
    TitleInfoEventFactoryUnit__CreateIcon(Item, this->fields.lvUpCount, 1, v5);
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
  WebViewManager_o *Instance; // x0
  EventFactoryMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventDetailEntity_o *eventDetailEntity; // x8
  EventFactoryEntity_array *Datas; // x0
  int max_length; // w26
  EventFactoryEntity_array *v23; // x20
  WebViewManager_o *v24; // x0
  WarQuestSelectionMaster_o *v25; // x22
  WebViewManager_o *v26; // x0
  UserShopMaster_o *v27; // x22
  WebViewManager_o *v28; // x0
  WarQuestSelectionMaster_o *v29; // x0
  UISprite_o *titleSprite; // x24
  TitleInfoEventFactory_c *v31; // x8
  System_String_o *SPRITE_NAME_TITLE; // x25
  UserShopEntity_o *EntityDefinitely; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x28
  int v37; // w27
  EventFactoryEntity_o *v38; // x21
  int64_t UserId; // x0
  int num; // w9
  UserShopEntity_o *v41; // x24
  struct System_Int32_array *calcValues; // x8
  int v43; // w9
  struct UnityEngine_GameObject_o *titleInfoEventFactoryUnitPrefab; // x25
  UnityEngine_Object_o *v45; // x25
  TitleInfoEventFactoryUnit_o *Component_srcLineSprite; // x0
  const MethodInfo *v47; // x4
  struct EventDetailEntity_o *v48; // x8
  WarBoardEvalValueSquare_EvalValueSquare_o *v49; // x25
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *unitDictionary; // x0
  ShopEntity_o *Entity; // x0
  ShopEntity_o *v52; // x24
  int64_t v53; // x25
  int32_t ItemID; // w2
  UserItemEntity_o *v55; // x0
  int v56; // w21
  UnityEngine_Component_o *createSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x24
  UnityEngine_Object_o *v59; // x24
  UILabel_o *rateLabel; // x20
  System_String_o *v61; // x21
  Il2CppObject *v62; // x0
  System_String_o *v63; // x0
  UnityEngine_Component_o *RateBase; // x0
  UnityEngine_GameObject_o *v65; // x0
  struct UIGrid_o *grid; // x0
  UserItemMaster_o *v67; // [xsp+8h] [xbp-68h]
  DataMasterBase_WarMaster__WarEntity__int__o *v68; // [xsp+10h] [xbp-60h]
  double v69; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40FDFAE & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventFactoryMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__, v8);
    sub_B16FFC(&double_TypeInfo, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&TitleInfoEventFactory_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_5611, v17);
    byte_40FDFAE = 1;
  }
  if ( this->fields.eventDetailEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    MasterData_WarQuestSelectionMaster = (EventFactoryMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventFactoryMaster___);
    eventDetailEntity = this->fields.eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_63;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_63;
    Datas = EventFactoryMaster__GetDatas(MasterData_WarQuestSelectionMaster, eventDetailEntity->fields.eventId, 0LL);
    if ( !Datas )
      goto LABEL_63;
    max_length = Datas->max_length;
    v23 = Datas;
    if ( max_length < 1 )
      return;
    v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v24 )
      goto LABEL_63;
    v25 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v24,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
    v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v26 )
      goto LABEL_63;
    v68 = (DataMasterBase_WarMaster__WarEntity__int__o *)v25;
    v27 = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v26,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
    v28 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v28 )
      goto LABEL_63;
    v29 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v28,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
    titleSprite = this->fields.titleSprite;
    v67 = (UserItemMaster_o *)v29;
    v31 = TitleInfoEventFactory_TypeInfo;
    if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      v31 = TitleInfoEventFactory_TypeInfo;
    }
    SPRITE_NAME_TITLE = v31->static_fields->SPRITE_NAME_TITLE;
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
    EntityDefinitely = (UserShopEntity_o *)AtlasManager__SetEventUI(
                                             this->fields.bgRateSprite,
                                             TitleInfoEventFactory_TypeInfo->static_fields->SPRITE_NAME_BG_RATE,
                                             0LL);
    v36 = 0LL;
    v37 = 1000;
    do
    {
      if ( (unsigned int)v36 >= v23->max_length )
      {
LABEL_64:
        sub_B17100(EntityDefinitely, v34, v35);
        sub_B170A0();
      }
      v38 = v23->m_Items[v36];
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v38 )
        goto LABEL_63;
      if ( !v27 )
        goto LABEL_63;
      EntityDefinitely = UserShopMaster__GetEntityDefinitely(v27, UserId, v38->fields.shopId, 0LL);
      if ( !EntityDefinitely )
        goto LABEL_63;
      num = EntityDefinitely->fields.num;
      v41 = EntityDefinitely;
      if ( num <= 0 )
      {
        if ( !v68 )
          goto LABEL_63;
        Entity = (ShopEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v68,
                                   v38->fields.shopId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_63;
        v52 = Entity;
        EntityDefinitely = (UserShopEntity_o *)ShopEntity__IsAllCondClear(Entity, 0LL);
        if ( ((unsigned __int8)EntityDefinitely & 1) != 0 )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          v53 = NetworkManager__get_UserId(0LL);
          ItemID = ShopEntity__GetItemID(v52, 0LL);
          if ( !v67 )
            goto LABEL_63;
          v55 = UserItemMaster__GetEntityDefinitely(v67, v53, ItemID, 0LL);
          if ( !v55 )
            goto LABEL_63;
          v56 = v55->fields.num;
          EntityDefinitely = (UserShopEntity_o *)ShopEntity__GetPrice(v52, 0LL);
          if ( v56 >= (int)EntityDefinitely )
          {
            createSprite = (UnityEngine_Component_o *)this->fields.createSprite;
            if ( !createSprite )
              goto LABEL_63;
            gameObject = UnityEngine_Component__get_gameObject(createSprite, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v59 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)gameObject,
                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
            EntityDefinitely = (UserShopEntity_o *)UnityEngine_Object__op_Inequality(v59, 0LL, 0LL);
            if ( ((unsigned __int8)EntityDefinitely & 1) != 0 )
            {
              if ( !v59 )
                goto LABEL_63;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v59, 1, 0LL);
              GameObjectExtensions__SafeSetParent(
                (UnityEngine_GameObject_o *)v59,
                (UnityEngine_Component_o *)this->fields.grid,
                0LL);
            }
          }
        }
      }
      else
      {
        calcValues = v38->fields.calcValues;
        if ( !calcValues )
          goto LABEL_63;
        v43 = num - 1;
        if ( v43 >= calcValues->max_length )
          goto LABEL_64;
        titleInfoEventFactoryUnitPrefab = this->fields.titleInfoEventFactoryUnitPrefab;
        v37 += calcValues->m_Items[v43 + 1];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v45 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)titleInfoEventFactoryUnitPrefab,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        EntityDefinitely = (UserShopEntity_o *)UnityEngine_Object__op_Inequality(v45, 0LL, 0LL);
        if ( ((unsigned __int8)EntityDefinitely & 1) != 0 )
        {
          GameObjectExtensions__SafeSetParent(
            (UnityEngine_GameObject_o *)v45,
            (UnityEngine_Component_o *)this->fields.grid,
            0LL);
          if ( !v45 )
            goto LABEL_63;
          Component_srcLineSprite = (TitleInfoEventFactoryUnit_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     (UnityEngine_GameObject_o *)v45,
                                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___);
          v48 = this->fields.eventDetailEntity;
          if ( !v48 )
            goto LABEL_63;
          v49 = (WarBoardEvalValueSquare_EvalValueSquare_o *)Component_srcLineSprite;
          if ( !Component_srcLineSprite )
            goto LABEL_63;
          TitleInfoEventFactoryUnit__Open(
            Component_srcLineSprite,
            v48->fields.eventId,
            v38->fields.id,
            v41->fields.num,
            v47);
          unitDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.unitDictionary;
          if ( !unitDictionary )
            goto LABEL_63;
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            unitDictionary,
            v38->fields.id,
            v49,
            (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__);
        }
      }
      ++v36;
    }
    while ( (int)v36 < max_length );
    rateLabel = this->fields.rateLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v61 = LocalizationManager__Get((System_String_o *)StringLiteral_5611, 0LL);
    v69 = (double)v37 / 1000.0;
    v62 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v69);
    v63 = System_String__Format(v61, v62, 0LL);
    if ( !rateLabel
      || (UILabel__set_text(rateLabel, v63, 0LL), (RateBase = (UnityEngine_Component_o *)this->fields.RateBase) == 0LL)
      || (v65 = UnityEngine_Component__get_gameObject(RateBase, 0LL),
          GameObjectExtensions__SetParent(v65, (UnityEngine_Component_o *)this->fields.grid, 0LL),
          (grid = this->fields.grid) == 0LL) )
    {
LABEL_63:
      sub_B170D4();
    }
    ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))grid->klass->vtable._8_Reposition.method)(
      grid,
      grid->klass->vtable._9_ResetPosition.methodPtr);
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
  WebViewManager_o *Instance; // x0
  EventFactoryMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventDetailEntity_o *eventDetailEntity; // x8
  EventFactoryEntity_array *Datas; // x0
  int max_length; // w23
  EventFactoryEntity_array *v14; // x20
  WebViewManager_o *v15; // x0
  UserShopMaster_o *EntityDefinitely; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  UserShopMaster_o *v19; // x21
  __int64 v20; // x24
  int v21; // w22
  EventFactoryEntity_o *v22; // x27
  int64_t UserId; // x0
  int MasterName_k__BackingField_high; // w8
  bool v25; // vf
  int v26; // w8
  struct System_Int32_array *calcValues; // x9
  UILabel_o *rateLabel; // x19
  System_String_o *v29; // x20
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  double v32; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FDFB4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventFactoryMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, v3);
    sub_B16FFC(&double_TypeInfo, v4);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_5611, v8);
    byte_40FDFB4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (EventFactoryMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventFactoryMaster___);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( !eventDetailEntity )
    goto LABEL_28;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  Datas = EventFactoryMaster__GetDatas(MasterData_WarQuestSelectionMaster, eventDetailEntity->fields.eventId, 0LL);
  if ( !Datas )
    goto LABEL_28;
  max_length = Datas->max_length;
  v14 = Datas;
  if ( max_length < 1 )
    return;
  v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v15 )
    goto LABEL_28;
  EntityDefinitely = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v15,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
  v19 = EntityDefinitely;
  v20 = 0LL;
  v21 = 1000;
  do
  {
    if ( (unsigned int)v20 >= v14->max_length )
    {
LABEL_29:
      sub_B17100(EntityDefinitely, v17, v18);
      sub_B170A0();
    }
    v22 = v14->m_Items[v20];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v22 )
      goto LABEL_28;
    if ( !v19 )
      goto LABEL_28;
    EntityDefinitely = (UserShopMaster_o *)UserShopMaster__GetEntityDefinitely(v19, UserId, v22->fields.shopId, 0LL);
    if ( !EntityDefinitely )
      goto LABEL_28;
    MasterName_k__BackingField_high = HIDWORD(EntityDefinitely->fields._MasterName_k__BackingField);
    v25 = __OFSUB__(MasterName_k__BackingField_high, 1);
    v26 = MasterName_k__BackingField_high - 1;
    if ( v26 < 0 == v25 )
    {
      calcValues = v22->fields.calcValues;
      if ( !calcValues )
        goto LABEL_28;
      if ( v26 >= calcValues->max_length )
        goto LABEL_29;
      v21 += calcValues->m_Items[v26 + 1];
    }
    ++v20;
  }
  while ( (int)v20 < max_length );
  rateLabel = this->fields.rateLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_5611, 0LL);
  v32 = (double)v21 / 1000.0;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v32);
  v31 = System_String__Format(v29, v30, 0LL);
  if ( !rateLabel )
LABEL_28:
    sub_B170D4();
  UILabel__set_text(rateLabel, v31, 0LL);
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
  __int64 v13; // x3
  __int64 v14; // x4
  BattleServantConfConponent_o *p_unitDictionary; // x19
  struct System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *unitDictionary; // t1
  System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_40FDFAD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__, eventDetailEntity);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo, v10);
    byte_40FDFAD = 1;
  }
  this->fields.eventDetailEntity = eventDetailEntity;
  sub_B16F98(
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
    v17 = (System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *)sub_B170CC(
                                                                                       System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo,
                                                                                       v11,
                                                                                       v12,
                                                                                       v13,
                                                                                       v14);
    System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit____ctor(
      v17,
      10,
      (const MethodInfo_2DE8834 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__);
    p_unitDictionary->klass = (BattleServantConfConponent_c *)v17;
    sub_B16F98(p_unitDictionary, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
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
  int32_t TargetId; // w0
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
  UnityEngine_Object_o *Object_29932412; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v35; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x21
  UnityEngine_Component_o *Item; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v40; // x20
  TitleInfoEventFactoryUnit_o *v41; // x0
  const MethodInfo *v42; // x1
  float v43; // s0
  float v44; // s1
  float v45; // s2
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct UnityEngine_Animation_o *v54; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  SimpleAnimation_o *v62; // x21
  SimpleAnimation_State_o *v63; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v65; // x21
  unsigned __int64 v66; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Animation_o *v69; // x20
  UnityEngine_Animation_o *v70; // x20
  UnityEngine_AnimationClip_o *Clip; // x0
  UnityEngine_Animation_o *v72; // x20
  UnityEngine_Object_o *v73; // x0
  System_String_o *v74; // x0
  UnityEngine_AnimationClip_o *v75; // x0
  SimpleAnimation_o *v76; // x20
  UnityEngine_Object_o *monitor; // x0
  System_String_o *name; // x0
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDFB1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__, shopEntity);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v12);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v13);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v14);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v17);
    sub_B16FFC(&TitleInfoEventFactory_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_8573, v19);
    byte_40FDFB1 = 1;
  }
  if ( shopEntity && shopEntity->fields.purchaseType == 17 )
  {
    unitDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.unitDictionary;
    TargetId = ShopEntity__get_TargetId(shopEntity, 0LL);
    if ( !unitDictionary )
      goto LABEL_56;
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           unitDictionary,
           TargetId,
           (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__) )
    {
      this->fields.effectAsset = effectAsset;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.effectAsset,
        (System_Int32_array **)effectAsset,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      this->fields.animationEndCallback = callback;
      sub_B16F98(
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
      if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      }
      if ( effectAsset )
      {
        Object_29932412 = AssetData__GetObject_29932412(
                            effectAsset,
                            TitleInfoEventFactory_TypeInfo->static_fields->OBJECT_NAME_EFFECT_1,
                            0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( Object_29932412 )
          v35 = (UnityEngine_GameObject_c *)Object_29932412->klass == UnityEngine_GameObject_TypeInfo
              ? (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_29932412
              : 0LL;
        else
          v35 = 0LL;
        v36 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                v35,
                (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( this->fields.unitDictionary )
        {
          v37 = (UnityEngine_GameObject_o *)v36;
          Item = (UnityEngine_Component_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                              (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.unitDictionary,
                                              this->fields.lvUpIndex,
                                              (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
          GameObjectExtensions__SafeSetParent(v37, Item, 0LL);
          if ( v37 )
          {
            transform = UnityEngine_GameObject__get_transform(v37, 0LL);
            if ( this->fields.unitDictionary )
            {
              v40 = transform;
              v41 = (TitleInfoEventFactoryUnit_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.unitDictionary,
                                                     this->fields.lvUpIndex,
                                                     (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
              if ( v41 )
              {
                *(UnityEngine_Vector3_o *)&v43 = TitleInfoEventFactoryUnit__GetLvUpEffectOffset(v41, v42);
                if ( v40 )
                {
                  v79.fields.x = v43 + this->fields.lvUpAnimetionOffset.fields.x;
                  v79.fields.y = v44 + this->fields.lvUpAnimetionOffset.fields.y;
                  v79.fields.z = v45 + this->fields.lvUpAnimetionOffset.fields.z;
                  UnityEngine_Transform__set_localPosition(v40, v79, 0LL);
                  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          v37,
                                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                  p_simpleAnimationData = &this->fields.simpleAnimationData;
                  this->fields.simpleAnimationData = Component_srcLineSprite;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&this->fields.simpleAnimationData,
                    (System_Int32_array **)Component_srcLineSprite,
                    v48,
                    v49,
                    v50,
                    v51,
                    v52,
                    v53);
                  v54 = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v37,
                                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                  p_animationData = &this->fields.animationData;
                  this->fields.animationData = v54;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&this->fields.animationData,
                    (System_Int32_array **)v54,
                    v56,
                    v57,
                    v58,
                    v59,
                    v60,
                    v61);
                  if ( UnityEngine_Object__op_Inequality(
                         (UnityEngine_Object_o *)this->fields.simpleAnimationData,
                         0LL,
                         0LL) )
                  {
                    v62 = *p_simpleAnimationData;
                    if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
                    }
                    if ( v62 )
                    {
                      v63 = SimpleAnimation__get_Item(
                              v62,
                              TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                              0LL);
                      if ( v63 )
                      {
                        klass = v63->klass;
                        v65 = v63;
                        if ( *(_WORD *)&v63->klass->_2.bitflags1 )
                        {
                          v66 = 0LL;
                          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
                          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                          {
                            ++v66;
                            p_offset += 2;
                            if ( v66 >= *(unsigned __int16 *)&v63->klass->_2.bitflags1 )
                              goto LABEL_37;
                          }
                          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14].method;
                        }
                        else
                        {
LABEL_37:
                          p_method = sub_AAFEF8(v63, SimpleAnimation_State_TypeInfo, 14LL);
                        }
                        v75 = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                                               v65,
                                                               *(_QWORD *)(p_method + 8));
                        if ( *p_simpleAnimationData )
                        {
                          SimpleAnimation__set_clip(*p_simpleAnimationData, v75, 0LL);
                          v76 = *p_simpleAnimationData;
                          if ( v76 )
                          {
                            monitor = (UnityEngine_Object_o *)v76[1].monitor;
                            if ( monitor )
                            {
                              name = UnityEngine_Object__get_name(monitor, 0LL);
                              SimpleAnimation__Play_16380456(v76, name, 0LL);
                              goto LABEL_55;
                            }
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    v69 = *p_animationData;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v69, 0LL, 0LL) )
                      goto LABEL_55;
                    v70 = *p_animationData;
                    if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
                    }
                    if ( v70 )
                    {
                      Clip = UnityEngine_Animation__GetClip(
                               v70,
                               TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                               0LL);
                      if ( *p_animationData )
                      {
                        UnityEngine_Animation__set_clip(*p_animationData, Clip, 0LL);
                        v72 = *p_animationData;
                        if ( *p_animationData )
                        {
                          v73 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(*p_animationData, 0LL);
                          if ( v73 )
                          {
                            v74 = UnityEngine_Object__get_name(v73, 0LL);
                            UnityEngine_Animation__Play_49744236(v72, v74, 0LL);
LABEL_55:
                            UnityEngine_MonoBehaviour__Invoke(
                              (UnityEngine_MonoBehaviour_o *)this,
                              (System_String_o *)StringLiteral_8573,
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
      sub_B170D4();
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
  UnityEngine_Object_o *Object_29932412; // x0
  UnityEngine_GameObject_c **v19; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v20; // x0
  BattleServantConfConponent_o *p_animationEndCallback; // x19
  System_Action_o *v22; // x20
  struct System_Action_o *animationEndCallback; // t1
  UnityEngine_GameObject_o *v24; // x21
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct UnityEngine_Animation_o *v33; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  SimpleAnimation_o *v41; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v44; // x21
  unsigned __int64 v45; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Animation_o *v48; // x20
  UnityEngine_Animation_o *v49; // x20
  UnityEngine_AnimationClip_o *Clip; // x0
  UnityEngine_Animation_o *v51; // x20
  UnityEngine_Object_o *v52; // x0
  System_String_o *v53; // x0
  UnityEngine_AnimationClip_o *v54; // x0
  SimpleAnimation_o *v55; // x20
  UnityEngine_Object_o *monitor; // x0
  System_String_o *name; // x0

  if ( (byte_40FDFB3 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v9);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v10);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v13);
    sub_B16FFC(&TitleInfoEventFactory_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_11248, v15);
    byte_40FDFB3 = 1;
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
    Object_29932412 = AssetData__GetObject_29932412(effectAsset, v17->static_fields->OBJECT_NAME_EFFECT_2, 0LL);
    v19 = (UnityEngine_GameObject_c **)Object_29932412;
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
                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        GameObjectExtensions__SafeSetParent(v24, (UnityEngine_Component_o *)this->fields.RateBase, 0LL);
        if ( v24 )
        {
          Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v24,
                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          this->fields.simpleAnimationData = Component_srcLineSprite;
          p_simpleAnimationData = &this->fields.simpleAnimationData;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.simpleAnimationData,
            (System_Int32_array **)Component_srcLineSprite,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32);
          v33 = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    v24,
                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
          p_animationData = &this->fields.animationData;
          this->fields.animationData = v33;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.animationData,
            (System_Int32_array **)v33,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.simpleAnimationData, 0LL, 0LL) )
          {
            v41 = *p_simpleAnimationData;
            if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
            }
            if ( v41 )
            {
              Item = SimpleAnimation__get_Item(
                       v41,
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
                  p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14].method;
                }
                else
                {
LABEL_29:
                  p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 14LL);
                }
                v54 = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                                       v44,
                                                       *(_QWORD *)(p_method + 8));
                if ( *p_simpleAnimationData )
                {
                  SimpleAnimation__set_clip(*p_simpleAnimationData, v54, 0LL);
                  v55 = *p_simpleAnimationData;
                  if ( v55 )
                  {
                    monitor = (UnityEngine_Object_o *)v55[1].monitor;
                    if ( monitor )
                    {
                      name = UnityEngine_Object__get_name(monitor, 0LL);
                      SimpleAnimation__Play_16380456(v55, name, 0LL);
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
            v49 = *p_animationData;
            if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
            }
            if ( v49 )
            {
              Clip = UnityEngine_Animation__GetClip(
                       v49,
                       TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                       0LL);
              if ( *p_animationData )
              {
                UnityEngine_Animation__set_clip(*p_animationData, Clip, 0LL);
                v51 = *p_animationData;
                if ( *p_animationData )
                {
                  v52 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(*p_animationData, 0LL);
                  if ( v52 )
                  {
                    v53 = UnityEngine_Object__get_name(v52, 0LL);
                    UnityEngine_Animation__Play_49744236(v51, v53, 0LL);
LABEL_47:
                    UnityEngine_MonoBehaviour__Invoke(
                      (UnityEngine_MonoBehaviour_o *)this,
                      (System_String_o *)StringLiteral_11248,
                      this->fields.rateChangeTime,
                      0LL);
                    return;
                  }
                }
              }
            }
          }
        }
        sub_B170D4();
      }
    }
    else if ( Object_29932412 )
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
    sub_B16F98(p_animationEndCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v22, 0LL);
  }
}


void __fastcall TitleInfoEventFactory__Update(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o **p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Component_o *v6; // x21
  UnityEngine_Object_o *v7; // x0
  System_String_o *name; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v11; // x21
  unsigned __int64 v12; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *animationData; // x21
  UnityEngine_Animation_o *v16; // x21
  UnityEngine_Object_o *clip; // x0
  System_String_o *v18; // x0
  UnityEngine_AnimationState_o *v19; // x0
  UnityEngine_AnimationState_o *v20; // x21
  float time; // s8
  UnityEngine_AnimationClip_o *v22; // x0
  long double v23; // q0
  SimpleAnimation_State_c *v24; // x8
  unsigned __int64 v25; // x10
  SimpleAnimation_State_c **v26; // x11
  __int64 v27; // x0
  UnityEngine_Object_o *v28; // x21
  UnityEngine_Object_o *v29; // x21
  const MethodInfo *v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  int32_t effectIndex; // w8
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  BattleServantConfConponent_o *p_animationEndCallback; // x19
  System_Action_o *v52; // x20
  struct System_Action_o *animationEndCallback; // t1

  if ( (byte_40FDFB0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v3);
    byte_40FDFB0 = 1;
  }
  p_simpleAnimationData = (UnityEngine_Component_o **)&this->fields.simpleAnimationData;
  simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimationData, 0LL, 0LL) )
  {
    v6 = *p_simpleAnimationData;
    if ( !*p_simpleAnimationData )
      goto LABEL_52;
    v7 = *(UnityEngine_Object_o **)&v6[4].fields.m_CachedPtr;
    if ( !v7 )
      goto LABEL_52;
    name = UnityEngine_Object__get_name(v7, 0LL);
    Item = SimpleAnimation__get_Item((SimpleAnimation_o *)v6, name, 0LL);
    if ( !Item )
      goto LABEL_52;
    klass = Item->klass;
    v11 = Item;
    if ( *(_WORD *)&Item->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v12;
        p_offset += 2;
        if ( v12 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3].method;
    }
    else
    {
LABEL_14:
      p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 3LL);
    }
    v23 = ((long double (__fastcall *)(SimpleAnimation_State_o *, _QWORD))*(_QWORD *)p_method)(
            v11,
            *(_QWORD *)(p_method + 8));
    v24 = v11->klass;
    time = *(float *)&v23;
    if ( *(_WORD *)&v11->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      v26 = (SimpleAnimation_State_c **)&v24->_1.interfaceOffsets->offset;
      while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v25;
        v26 += 2;
        if ( v25 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      v27 = (__int64)&v24->vtable[*(_DWORD *)v26 + 14].method;
    }
    else
    {
LABEL_29:
      v27 = sub_AAFEF8(v11, SimpleAnimation_State_TypeInfo, 14LL);
    }
    v22 = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v27)(
                                           v11,
                                           *(_QWORD *)(v27 + 8));
    if ( !v22 )
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
    if ( !UnityEngine_Object__op_Inequality(animationData, 0LL, 0LL) )
      goto LABEL_33;
    v16 = this->fields.animationData;
    if ( !v16 )
      goto LABEL_52;
    clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animationData, 0LL);
    if ( !clip )
      goto LABEL_52;
    v18 = UnityEngine_Object__get_name(clip, 0LL);
    v19 = UnityEngine_Animation__get_Item(v16, v18, 0LL);
    if ( !v19 )
      goto LABEL_52;
    v20 = v19;
    time = UnityEngine_AnimationState__get_time(v19, 0LL);
    v22 = UnityEngine_AnimationState__get_clip(v20, 0LL);
    if ( !v22 )
      goto LABEL_52;
  }
  if ( time < UnityEngine_AnimationClip__get_length(v22, 0LL) )
    return;
LABEL_33:
  v28 = (UnityEngine_Object_o *)*p_simpleAnimationData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
  {
    p_simpleAnimationData = (UnityEngine_Component_o **)&this->fields.animationData;
    v29 = (UnityEngine_Object_o *)this->fields.animationData;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
      goto LABEL_46;
  }
  if ( !*p_simpleAnimationData )
LABEL_52:
    sub_B170D4();
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_simpleAnimationData, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_34809676(gameObject, 0LL);
  *p_simpleAnimationData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)p_simpleAnimationData, 0LL, v38, v39, v40, v41, v42, v43);
LABEL_46:
  effectIndex = this->fields.effectIndex;
  if ( effectIndex == 2 )
  {
    this->fields.effectIndex = 0;
    this->fields.effectAsset = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.effectAsset, 0LL, v31, v32, v33, v34, v35, v36);
    animationEndCallback = this->fields.animationEndCallback;
    p_animationEndCallback = (BattleServantConfConponent_o *)&this->fields.animationEndCallback;
    v52 = animationEndCallback;
    if ( animationEndCallback )
    {
      p_animationEndCallback->klass = 0LL;
      sub_B16F98(p_animationEndCallback, 0LL, v45, v46, v47, v48, v49, v50);
      System_Action__Invoke(v52, 0LL);
    }
  }
  else if ( effectIndex == 1 )
  {
    TitleInfoEventFactory__StartRateEffect(this, v30);
  }
}