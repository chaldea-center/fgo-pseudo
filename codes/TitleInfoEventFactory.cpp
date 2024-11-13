void __fastcall TitleInfoEventFactory___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t v24; // x1
  struct TitleInfoEventFactory_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  struct TitleInfoEventFactory_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  struct TitleInfoEventFactory_StaticFields *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  struct TitleInfoEventFactory_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  struct TitleInfoEventFactory_StaticFields *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x1
  struct TitleInfoEventFactory_StaticFields *v65; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x1
  struct TitleInfoEventFactory_StaticFields *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7

  if ( (byte_4B144F5 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventFactory_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_19028/*"ef_factory_open"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_19029/*"ef_factory_open1"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_19562/*"factory_icon_possible"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_19561/*"factory_bg_rate"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_19027/*"ef_factory_flash1"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_19564/*"factory_title_chocolate"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_19563/*"factory_line"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_19026/*"ef_factory_flash"*/, v22, v23);
    byte_4B144F5 = 1;
  }
  TitleInfoEventFactory_TypeInfo->static_fields->SPRITE_NAME_TITLE = (struct System_String_o *)StringLiteral_19564/*"factory_title_chocolate"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TitleInfoEventFactory_TypeInfo->static_fields,
    StringLiteral_19564/*"factory_title_chocolate"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v24 = StringLiteral_19562/*"factory_icon_possible"*/;
  static_fields = TitleInfoEventFactory_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_POSSIBLE = (struct System_String_o *)StringLiteral_19562/*"factory_icon_possible"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->SPRITE_NAME_POSSIBLE, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_19563/*"factory_line"*/;
  v33 = TitleInfoEventFactory_TypeInfo->static_fields;
  v33->SPRITE_NAME_LINE = (struct System_String_o *)StringLiteral_19563/*"factory_line"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v33->SPRITE_NAME_LINE, v32, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_19561/*"factory_bg_rate"*/;
  v41 = TitleInfoEventFactory_TypeInfo->static_fields;
  v41->SPRITE_NAME_BG_RATE = (struct System_String_o *)StringLiteral_19561/*"factory_bg_rate"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v41->SPRITE_NAME_BG_RATE, v40, v42, v43, v44, v45, v46, v47);
  v48 = StringLiteral_19028/*"ef_factory_open"*/;
  v49 = TitleInfoEventFactory_TypeInfo->static_fields;
  v49->OBJECT_NAME_EFFECT_1 = (struct System_String_o *)StringLiteral_19028/*"ef_factory_open"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v49->OBJECT_NAME_EFFECT_1, v48, v50, v51, v52, v53, v54, v55);
  v56 = StringLiteral_19026/*"ef_factory_flash"*/;
  v57 = TitleInfoEventFactory_TypeInfo->static_fields;
  v57->OBJECT_NAME_EFFECT_2 = (struct System_String_o *)StringLiteral_19026/*"ef_factory_flash"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v57->OBJECT_NAME_EFFECT_2, v56, v58, v59, v60, v61, v62, v63);
  v64 = StringLiteral_19029/*"ef_factory_open1"*/;
  v65 = TitleInfoEventFactory_TypeInfo->static_fields;
  v65->EFFECT_ANIMATION_START_1 = (struct System_String_o *)StringLiteral_19029/*"ef_factory_open1"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v65->EFFECT_ANIMATION_START_1, v64, v66, v67, v68, v69, v70, v71);
  v72 = StringLiteral_19027/*"ef_factory_flash1"*/;
  v73 = TitleInfoEventFactory_TypeInfo->static_fields;
  v73->EFFECT_ANIMATION_START_2 = (struct System_String_o *)StringLiteral_19027/*"ef_factory_flash1"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v73->EFFECT_ANIMATION_START_2, v72, v74, v75, v76, v77, v78, v79);
}


void __fastcall TitleInfoEventFactory___ctor(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventFactory__Close(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x1
  PartyOrganizationUtility_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x19
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct UnityEngine_Animation_o **p_animationData; // x19
  UnityEngine_Object_o *v24; // x20
  struct UnityEngine_Animation_o *animationData; // t1
  __int64 v26; // x1
  UnityEngine_Object_o *v27; // x20

  if ( (byte_4B144EF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B144EF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.effectAsset = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectAsset, 0LL, v6, v7, v8, v9, v10, v11);
  p_simpleAnimationData = (PartyOrganizationUtility_o *)&this->fields.simpleAnimationData;
  simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
  this->fields.effectIndex = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationData, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)p_simpleAnimationData->klass;
    if ( p_simpleAnimationData->klass )
    {
      v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      UnityEngine_Object__DestroyImmediate_70154432(v16, 0LL);
      p_simpleAnimationData->klass = 0LL;
LABEL_18:
      sub_1BCA784(p_simpleAnimationData, 0LL, v17, v18, v19, v20, v21, v22);
      return;
    }
    goto LABEL_20;
  }
  animationData = this->fields.animationData;
  p_animationData = &this->fields.animationData;
  v24 = (UnityEngine_Object_o *)animationData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)*p_animationData;
    if ( *p_animationData )
    {
      v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
      UnityEngine_Object__DestroyImmediate_70154432(v27, 0LL);
      p_simpleAnimationData = (PartyOrganizationUtility_o *)p_animationData;
      *p_animationData = 0LL;
      goto LABEL_18;
    }
LABEL_20:
    sub_1BCAA3C(gameObject, v5);
  }
}


void __fastcall TitleInfoEventFactory__LvUpIconCreate(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_Dictionary_int__object__o *unitDictionary; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4B144F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__, method, v2);
    byte_4B144F2 = 1;
  }
  unitDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary;
  if ( !unitDictionary
    || (unitDictionary = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                   unitDictionary,
                                                                                   this->fields.lvUpIndex,
                                                                                   (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(unitDictionary, method);
  }
  if ( SHIDWORD(unitDictionary->fields._syncRoot) >= 1 )
    TitleInfoEventFactoryUnit__CreateIcon((TitleInfoEventFactoryUnit_o *)unitDictionary, this->fields.lvUpCount, 1, v5);
}


void __fastcall TitleInfoEventFactory__Open(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  int64_t Instance; // x0
  __int64 v35; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  int v37; // w26
  int64_t v38; // x20
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v40; // x22
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  UISprite_o *titleSprite; // x24
  TitleInfoEventFactory_c *v44; // x8
  System_String_o *SPRITE_NAME_TITLE; // x25
  unsigned int v46; // w28
  int v47; // w27
  __int64 v48; // x23
  int v49; // w9
  int64_t v50; // x24
  __int64 v51; // x8
  unsigned int v52; // w9
  int v53; // w21
  Il2CppObject *titleInfoEventFactoryUnitPrefab; // x25
  Il2CppObject *v55; // x25
  const MethodInfo *v56; // x4
  struct EventDetailEntity_o *v57; // x8
  Il2CppObject *v58; // x25
  ShopEntity_o *v59; // x24
  int64_t UserId; // x25
  int32_t ItemID; // w2
  int v62; // w21
  __int64 v63; // x1
  Il2CppObject *gameObject; // x24
  Il2CppObject *v65; // x24
  UILabel_o *rateLabel; // x20
  System_String_o *v67; // x21
  Il2CppObject *v68; // x0
  UnityEngine_GameObject_o *v69; // x0
  UserItemMaster_o *v70; // [xsp+8h] [xbp-78h]
  DataMasterBase_TMaster__TEntity__PKType__o *v71; // [xsp+10h] [xbp-70h]
  double v72; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B144EE & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventFactoryMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__, v14, v15);
    sub_1BCA7E0(&double_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___, v18, v19);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v24, v25);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29);
    sub_1BCA7E0(&TitleInfoEventFactory_TypeInfo, v30, v31);
    sub_1BCA7E0(&StringLiteral_5702/*"EVENT_FACTORY_GET_EP_RATE"*/, v32, v33);
    byte_4B144EE = 1;
  }
  if ( this->fields.eventDetailEntity )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_56;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventFactoryMaster___);
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
    v37 = *(_DWORD *)(Instance + 24);
    v38 = Instance;
    if ( v37 < 1 )
      return;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_56;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_56;
    v71 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    v40 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_56;
    v41 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
    titleSprite = this->fields.titleSprite;
    v70 = (UserItemMaster_o *)v41;
    v44 = TitleInfoEventFactory_TypeInfo;
    if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo, v42);
      v44 = TitleInfoEventFactory_TypeInfo;
    }
    SPRITE_NAME_TITLE = v44->static_fields->SPRITE_NAME_TITLE;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v42);
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
    v46 = 0;
    v47 = 1000;
    do
    {
      if ( v46 >= *(_DWORD *)(v38 + 24) )
LABEL_57:
        sub_1BCAA44(Instance, v35);
      v48 = *(_QWORD *)(v38 + 8LL * (int)v46 + 32);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v35);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v48 )
        goto LABEL_56;
      if ( !v40 )
        goto LABEL_56;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(
                            (UserShopMaster_o *)v40,
                            Instance,
                            *(_DWORD *)(v48 + 24),
                            0LL);
      if ( !Instance )
        goto LABEL_56;
      v49 = *(_DWORD *)(Instance + 28);
      v50 = Instance;
      if ( v49 <= 0 )
      {
        Instance = (int64_t)v71;
        if ( !v71 )
          goto LABEL_56;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              v71,
                              *(_DWORD *)(v48 + 24),
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_56;
        v59 = (ShopEntity_o *)Instance;
        Instance = ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v35);
          UserId = NetworkManager__get_UserId(0LL);
          ItemID = ShopEntity__GetItemID(v59, 0LL);
          Instance = (int64_t)v70;
          if ( !v70 )
            goto LABEL_56;
          Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v70, UserId, ItemID, 0LL);
          if ( !Instance )
            goto LABEL_56;
          v62 = *(_DWORD *)(Instance + 28);
          Instance = ShopEntity__GetPrice(v59, 0LL);
          if ( v62 >= (int)Instance )
          {
            Instance = (int64_t)this->fields.createSprite;
            if ( !Instance )
              goto LABEL_56;
            gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63);
            v65 = UnityEngine_Object__Instantiate_object_(
                    gameObject,
                    (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
            Instance = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v65, 0LL, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v65 )
                goto LABEL_56;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v65, 1, 0LL);
              GameObjectExtensions__SafeSetParent(
                (UnityEngine_GameObject_o *)v65,
                (UnityEngine_Component_o *)this->fields.grid,
                0LL);
            }
          }
        }
      }
      else
      {
        v51 = *(_QWORD *)(v48 + 40);
        if ( !v51 )
          goto LABEL_56;
        v52 = v49 - 1;
        if ( v52 >= *(_DWORD *)(v51 + 24) )
          goto LABEL_57;
        v53 = *(_DWORD *)(v51 + 4LL * v52 + 32);
        titleInfoEventFactoryUnitPrefab = (Il2CppObject *)this->fields.titleInfoEventFactoryUnitPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
        v47 += v53;
        v55 = UnityEngine_Object__Instantiate_object_(
                titleInfoEventFactoryUnitPrefab,
                (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        Instance = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v55, 0LL, 0LL);
        if ( (Instance & 1) != 0 )
        {
          GameObjectExtensions__SafeSetParent(
            (UnityEngine_GameObject_o *)v55,
            (UnityEngine_Component_o *)this->fields.grid,
            0LL);
          if ( !v55 )
            goto LABEL_56;
          Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)v55,
                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___);
          v57 = this->fields.eventDetailEntity;
          if ( !v57 )
            goto LABEL_56;
          v58 = (Il2CppObject *)Instance;
          if ( !Instance )
            goto LABEL_56;
          TitleInfoEventFactoryUnit__Open(
            (TitleInfoEventFactoryUnit_o *)Instance,
            v57->fields.eventId,
            *(_DWORD *)(v48 + 16),
            *(_DWORD *)(v50 + 28),
            v56);
          Instance = (int64_t)this->fields.unitDictionary;
          if ( !Instance )
            goto LABEL_56;
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)Instance,
            *(_DWORD *)(v48 + 16),
            v58,
            (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__);
        }
      }
      ++v46;
    }
    while ( v37 != v46 );
    rateLabel = this->fields.rateLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_5702/*"EVENT_FACTORY_GET_EP_RATE"*/, 0LL);
    v72 = (double)v47 / 1000.0;
    v68 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v72);
    Instance = (int64_t)System_String__Format(v67, v68, 0LL);
    if ( !rateLabel
      || (UILabel__set_text(rateLabel, (System_String_o *)Instance, 0LL),
          (Instance = (int64_t)this->fields.RateBase) == 0)
      || (v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL),
          GameObjectExtensions__SetParent(v69, (UnityEngine_Component_o *)this->fields.grid, 0LL),
          (Instance = (int64_t)this->fields.grid) == 0) )
    {
LABEL_56:
      sub_1BCAA3C(Instance, v35);
    }
    (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 448LL));
  }
}


void __fastcall TitleInfoEventFactory__RateChange(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t Instance; // x0
  __int64 v17; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  int v19; // w23
  int64_t v20; // x20
  UserShopMaster_o *v21; // x21
  unsigned int v22; // w28
  int v23; // w24
  __int64 v24; // x29
  int v25; // w8
  bool v26; // vf
  int v27; // w8
  __int64 v28; // x9
  UILabel_o *rateLabel; // x19
  System_String_o *v30; // x20
  Il2CppObject *v31; // x0
  double v32; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B144F4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventFactoryMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, v4, v5);
    sub_1BCA7E0(&double_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_5702/*"EVENT_FACTORY_GET_EP_RATE"*/, v14, v15);
    byte_4B144F4 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventFactoryMaster___);
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
  v19 = *(_DWORD *)(Instance + 24);
  v20 = Instance;
  if ( v19 < 1 )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
  v21 = (UserShopMaster_o *)Instance;
  v22 = 0;
  v23 = 1000;
  do
  {
    if ( v22 >= *(_DWORD *)(v20 + 24) )
LABEL_27:
      sub_1BCAA44(Instance, v17);
    v24 = *(_QWORD *)(v20 + 8LL * (int)v22 + 32);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v24 )
      goto LABEL_26;
    if ( !v21 )
      goto LABEL_26;
    Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v21, Instance, *(_DWORD *)(v24 + 24), 0LL);
    if ( !Instance )
      goto LABEL_26;
    v25 = *(_DWORD *)(Instance + 28);
    v26 = __OFSUB__(v25, 1);
    v27 = v25 - 1;
    if ( v27 < 0 == v26 )
    {
      v28 = *(_QWORD *)(v24 + 40);
      if ( !v28 )
        goto LABEL_26;
      if ( (unsigned int)v27 >= *(_DWORD *)(v28 + 24) )
        goto LABEL_27;
      v23 += *(_DWORD *)(v28 + 4LL * (unsigned int)v27 + 32);
    }
    ++v22;
  }
  while ( v19 != v22 );
  rateLabel = this->fields.rateLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5702/*"EVENT_FACTORY_GET_EP_RATE"*/, 0LL);
  v32 = (double)v23 / 1000.0;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v32);
  Instance = (int64_t)System_String__Format(v30, v31, 0LL);
  if ( !rateLabel )
LABEL_26:
    sub_1BCAA3C(Instance, v17);
  UILabel__set_text(rateLabel, (System_String_o *)Instance, 0LL);
}


void __fastcall TitleInfoEventFactory__Setup(
        TitleInfoEventFactory_o *this,
        EventDetailEntity_o *eventDetailEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  PartyOrganizationUtility_o *p_unitDictionary; // x19
  struct System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *unitDictionary; // t1
  System_Collections_Generic_Dictionary_int__object__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B144ED & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__,
      eventDetailEntity,
      method);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo, v10, v11);
    byte_4B144ED = 1;
  }
  this->fields.eventDetailEntity = eventDetailEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventDetailEntity,
    (int64_t)eventDetailEntity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  unitDictionary = this->fields.unitDictionary;
  p_unitDictionary = (PartyOrganizationUtility_o *)&this->fields.unitDictionary;
  if ( !unitDictionary )
  {
    v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo,
                                                                    v12,
                                                                    v13,
                                                                    v14);
    System_Collections_Generic_Dictionary_int__object____ctor_52450600(
      v17,
      10,
      (const MethodInfo_3205528 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__);
    p_unitDictionary->klass = (PartyOrganizationUtility_c *)v17;
    sub_1BCA784(p_unitDictionary, (int64_t)v17, v18, v19, v20, v21, v22, v23);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  struct System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *unitDictionary; // x24
  UnityEngine_GameObject_o *TargetId; // x0
  const MethodInfo *v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  UnityEngine_Object_o *Object_38483832; // x0
  __int64 v45; // x1
  UnityEngine_GameObject_c **v46; // x20
  Il2CppObject *v47; // x0
  UnityEngine_GameObject_o *v48; // x21
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *v50; // x20
  float v51; // s0
  float v52; // s1
  float v53; // s2
  Il2CppObject *Component_object; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  Il2CppObject *v62; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  SimpleAnimation_o *v70; // x21
  TitleInfoEventFactoryUnit_c *klass; // x8
  UnityEngine_GameObject_o *v72; // x21
  __int64 v73; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v75; // x0
  UnityEngine_Animation_o *v76; // x20
  UnityEngine_Animation_o *v77; // x20
  UnityEngine_Animation_o *v78; // x20
  System_String_o *v79; // x0
  SimpleAnimation_o *v80; // x20
  System_String_o *name; // x0
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B144F1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__,
      shopEntity,
      *(_QWORD *)&buyCount);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v15, v16);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v23, v24);
    sub_1BCA7E0(&TitleInfoEventFactory_TypeInfo, v25, v26);
    sub_1BCA7E0(&StringLiteral_8614/*"LvUpIconCreate"*/, v27, v28);
    byte_4B144F1 = 1;
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
           (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__) )
    {
      this->fields.effectAsset = effectAsset;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.effectAsset,
        (int64_t)effectAsset,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      this->fields.animationEndCallback = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.animationEndCallback,
        (int64_t)callback,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      this->fields.effectIndex = 1;
      this->fields.lvUpIndex = ShopEntity__get_TargetId(shopEntity, 0LL);
      this->fields.lvUpCount = buyCount;
      TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
      if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo, v31);
      if ( !effectAsset )
        goto LABEL_51;
      Object_38483832 = AssetData__GetObject_38483832(
                          effectAsset,
                          TitleInfoEventFactory_TypeInfo->static_fields->OBJECT_NAME_EFFECT_1,
                          0LL);
      v46 = (UnityEngine_GameObject_c **)Object_38483832;
      if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        if ( Object_38483832 )
          goto LABEL_12;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
        if ( v46 )
        {
LABEL_12:
          if ( *v46 == UnityEngine_GameObject_TypeInfo )
            v47 = (Il2CppObject *)v46;
          else
            v47 = 0LL;
LABEL_20:
          TargetId = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   v47,
                                                   (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( this->fields.unitDictionary )
          {
            v48 = TargetId;
            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                     (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary,
                     this->fields.lvUpIndex,
                     (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
            GameObjectExtensions__SafeSetParent(v48, (UnityEngine_Component_o *)Item, 0LL);
            if ( v48 )
            {
              TargetId = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v48, 0LL);
              if ( this->fields.unitDictionary )
              {
                v50 = (UnityEngine_Transform_o *)TargetId;
                TargetId = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                         (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary,
                                                         this->fields.lvUpIndex,
                                                         (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
                if ( TargetId )
                {
                  *(UnityEngine_Vector3_o *)&v51 = TitleInfoEventFactoryUnit__GetLvUpEffectOffset(
                                                     (TitleInfoEventFactoryUnit_o *)TargetId,
                                                     v31);
                  if ( v50 )
                  {
                    v82.fields.z = v53 + this->fields.lvUpAnimetionOffset.fields.z;
                    v82.fields.y = v52 + this->fields.lvUpAnimetionOffset.fields.y;
                    v82.fields.x = v51 + this->fields.lvUpAnimetionOffset.fields.x;
                    UnityEngine_Transform__set_localPosition(v50, v82, 0LL);
                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                         v48,
                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                    this->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
                    p_simpleAnimationData = &this->fields.simpleAnimationData;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)&this->fields.simpleAnimationData,
                      (int64_t)Component_object,
                      v56,
                      v57,
                      v58,
                      v59,
                      v60,
                      v61);
                    v62 = UnityEngine_GameObject__GetComponent_object_(
                            v48,
                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                    this->fields.animationData = (struct UnityEngine_Animation_o *)v62;
                    p_animationData = &this->fields.animationData;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)&this->fields.animationData,
                      (int64_t)v62,
                      v64,
                      v65,
                      v66,
                      v67,
                      v68,
                      v69);
                    if ( UnityEngine_Object__op_Inequality(
                           (UnityEngine_Object_o *)this->fields.simpleAnimationData,
                           0LL,
                           0LL) )
                    {
                      TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
                      v70 = *p_simpleAnimationData;
                      if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo, v31);
                      if ( v70 )
                      {
                        TargetId = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                                                 v70,
                                                                 TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                                                                 0LL);
                        if ( TargetId )
                        {
                          klass = (TitleInfoEventFactoryUnit_c *)TargetId->klass;
                          v72 = TargetId;
                          v73 = *(unsigned __int16 *)(&TargetId->klass->_2.bitflags2 + 3);
                          if ( *(_WORD *)(&TargetId->klass->_2.bitflags2 + 3) )
                          {
                            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
                            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                            {
                              --v73;
                              p_offset += 2;
                              if ( !v73 )
                                goto LABEL_34;
                            }
                            v75 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
                          }
                          else
                          {
LABEL_34:
                            v75 = sub_1C1C7C0(TargetId, SimpleAnimation_State_TypeInfo, 14LL);
                          }
                          TargetId = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v75)(
                                                                   v72,
                                                                   *(_QWORD *)(v75 + 8));
                          if ( *p_simpleAnimationData )
                          {
                            SimpleAnimation__set_clip(
                              *p_simpleAnimationData,
                              (UnityEngine_AnimationClip_o *)TargetId,
                              0LL);
                            v80 = *p_simpleAnimationData;
                            if ( v80 )
                            {
                              TargetId = (UnityEngine_GameObject_o *)v80[1].monitor;
                              if ( TargetId )
                              {
                                name = UnityEngine_Object__get_name((UnityEngine_Object_o *)TargetId, 0LL);
                                SimpleAnimation__Play_64539336(v80, name, 0LL);
                                goto LABEL_50;
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      v76 = *p_animationData;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
                      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v76, 0LL, 0LL) )
                        goto LABEL_50;
                      TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
                      v77 = *p_animationData;
                      if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo, v31);
                      if ( v77 )
                      {
                        TargetId = (UnityEngine_GameObject_o *)UnityEngine_Animation__GetClip(
                                                                 v77,
                                                                 TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                                                                 0LL);
                        if ( *p_animationData )
                        {
                          UnityEngine_Animation__set_clip(
                            *p_animationData,
                            (UnityEngine_AnimationClip_o *)TargetId,
                            0LL);
                          v78 = *p_animationData;
                          if ( *p_animationData )
                          {
                            TargetId = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(
                                                                     *p_animationData,
                                                                     0LL);
                            if ( TargetId )
                            {
                              v79 = UnityEngine_Object__get_name((UnityEngine_Object_o *)TargetId, 0LL);
                              UnityEngine_Animation__Play_69899248(v78, v79, 0LL);
LABEL_50:
                              UnityEngine_MonoBehaviour__Invoke(
                                (UnityEngine_MonoBehaviour_o *)this,
                                (System_String_o *)StringLiteral_8614/*"LvUpIconCreate"*/,
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
          sub_1BCAA3C(TargetId, v31);
        }
      }
      v47 = 0LL;
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  AssetData_o *effectAsset; // x20
  TitleInfoEventFactory_c *v24; // x0
  __int64 v25; // x1
  UnityEngine_Object_o *Object_38483832; // x20
  Il2CppObject *v27; // x0
  PartyOrganizationUtility_o *p_animationEndCallback; // x19
  struct System_Action_o *v29; // x20
  struct System_Action_o *animationEndCallback; // t1
  Il2CppObject *v31; // x21
  UnityEngine_AnimationClip_o *Item; // x0
  __int64 v33; // x1
  Il2CppObject *Component_object; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  Il2CppObject *v42; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  SimpleAnimation_o *v50; // x21
  UnityEngine_AnimationClip_c *klass; // x8
  UnityEngine_AnimationClip_o *v52; // x21
  __int64 v53; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v55; // x0
  UnityEngine_Animation_o *v56; // x20
  UnityEngine_Animation_o *v57; // x20
  UnityEngine_Animation_o *v58; // x20
  System_String_o *v59; // x0
  SimpleAnimation_o *v60; // x20
  System_String_o *name; // x0

  if ( (byte_4B144F3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v9, v10);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v17, v18);
    sub_1BCA7E0(&TitleInfoEventFactory_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_11294/*"RateChange"*/, v21, v22);
    byte_4B144F3 = 1;
  }
  effectAsset = this->fields.effectAsset;
  if ( effectAsset )
  {
    this->fields.effectIndex = 2;
    v24 = TitleInfoEventFactory_TypeInfo;
    if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo, method);
      v24 = TitleInfoEventFactory_TypeInfo;
    }
    Object_38483832 = AssetData__GetObject_38483832(effectAsset, v24->static_fields->OBJECT_NAME_EFFECT_2, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    if ( Object_38483832 )
    {
      if ( (UnityEngine_GameObject_c *)Object_38483832->klass == UnityEngine_GameObject_TypeInfo )
        v27 = (Il2CppObject *)Object_38483832;
      else
        v27 = 0LL;
    }
    else
    {
      v27 = 0LL;
    }
    v31 = UnityEngine_Object__Instantiate_object_(
            v27,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent(
      (UnityEngine_GameObject_o *)v31,
      (UnityEngine_Component_o *)this->fields.RateBase,
      0LL);
    if ( v31 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v31,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
      this->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
      p_simpleAnimationData = &this->fields.simpleAnimationData;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.simpleAnimationData,
        (int64_t)Component_object,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      v42 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v31,
              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      this->fields.animationData = (struct UnityEngine_Animation_o *)v42;
      p_animationData = &this->fields.animationData;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.animationData, (int64_t)v42, v44, v45, v46, v47, v48, v49);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.simpleAnimationData, 0LL, 0LL) )
      {
        Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
        v50 = *p_simpleAnimationData;
        if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo, v33);
        if ( v50 )
        {
          Item = (UnityEngine_AnimationClip_o *)SimpleAnimation__get_Item(
                                                  v50,
                                                  TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                                                  0LL);
          if ( Item )
          {
            klass = Item->klass;
            v52 = Item;
            v53 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
            {
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v53;
                p_offset += 2;
                if ( !v53 )
                  goto LABEL_25;
              }
              v55 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
            }
            else
            {
LABEL_25:
              v55 = sub_1C1C7C0(Item, SimpleAnimation_State_TypeInfo, 14LL);
            }
            Item = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(UnityEngine_AnimationClip_o *, _QWORD))v55)(
                                                    v52,
                                                    *(_QWORD *)(v55 + 8));
            if ( *p_simpleAnimationData )
            {
              SimpleAnimation__set_clip(*p_simpleAnimationData, Item, 0LL);
              v60 = *p_simpleAnimationData;
              if ( v60 )
              {
                Item = (UnityEngine_AnimationClip_o *)v60[1].monitor;
                if ( Item )
                {
                  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                  SimpleAnimation__Play_64539336(v60, name, 0LL);
                  goto LABEL_42;
                }
              }
            }
          }
        }
      }
      else
      {
        v56 = *p_animationData;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
        if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v56, 0LL, 0LL) )
          goto LABEL_42;
        Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
        v57 = *p_animationData;
        if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo, v33);
        if ( v57 )
        {
          Item = UnityEngine_Animation__GetClip(
                   v57,
                   TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                   0LL);
          if ( *p_animationData )
          {
            UnityEngine_Animation__set_clip(*p_animationData, Item, 0LL);
            v58 = *p_animationData;
            if ( *p_animationData )
            {
              Item = UnityEngine_Animation__get_clip(*p_animationData, 0LL);
              if ( Item )
              {
                v59 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                UnityEngine_Animation__Play_69899248(v58, v59, 0LL);
LABEL_42:
                UnityEngine_MonoBehaviour__Invoke(
                  (UnityEngine_MonoBehaviour_o *)this,
                  (System_String_o *)StringLiteral_11294/*"RateChange"*/,
                  this->fields.rateChangeTime,
                  0LL);
                return;
              }
            }
          }
        }
      }
    }
    sub_1BCAA3C(Item, v33);
  }
  animationEndCallback = this->fields.animationEndCallback;
  p_animationEndCallback = (PartyOrganizationUtility_o *)&this->fields.animationEndCallback;
  v29 = animationEndCallback;
  if ( animationEndCallback )
  {
    p_animationEndCallback->klass = 0LL;
    sub_1BCA784(p_animationEndCallback, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v29->fields.m_target)(
      v29->fields.original_method_info,
      *(_QWORD *)&v29->fields.extra_arg);
  }
}


void __fastcall TitleInfoEventFactory__Update(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationUtility_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Object_o *monitor; // x0
  const MethodInfo *v9; // x1
  SimpleAnimation_o *klass; // x21
  System_String_o *name; // x0
  UnityEngine_Object_c *v12; // x8
  UnityEngine_Object_o *v13; // x21
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0
  UnityEngine_Object_o *animationData; // x21
  UnityEngine_Animation_o *v18; // x21
  System_String_o *v19; // x0
  UnityEngine_AnimationState_o *v20; // x21
  float time; // s8
  long double v22; // q0
  UnityEngine_Object_c *v23; // x8
  __int64 v24; // x9
  SimpleAnimation_State_c **v25; // x10
  __int64 v26; // x0
  UnityEngine_Object_o *v27; // x21
  UnityEngine_Object_o *v28; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int32_t effectIndex; // w8
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  PartyOrganizationUtility_o *p_animationEndCallback; // x19
  struct System_Action_o *v51; // x20
  struct System_Action_o *animationEndCallback; // t1

  if ( (byte_4B144F0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v4, v5);
    byte_4B144F0 = 1;
  }
  p_simpleAnimationData = (PartyOrganizationUtility_o *)&this->fields.simpleAnimationData;
  simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    v12 = monitor->klass;
    v13 = monitor;
    v14 = *(unsigned __int16 *)(&monitor->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&monitor->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v14;
        p_offset += 2;
        if ( !v14 )
          goto LABEL_13;
      }
      v16 = (__int64)(&v12->vtable._3_ToString.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_13:
      v16 = sub_1C1C7C0(monitor, SimpleAnimation_State_TypeInfo, 3LL);
    }
    v22 = ((long double (__fastcall *)(UnityEngine_Object_o *, _QWORD))*(_QWORD *)v16)(v13, *(_QWORD *)(v16 + 8));
    v23 = v13->klass;
    time = *(float *)&v22;
    v24 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
    {
      v25 = (SimpleAnimation_State_c **)&v23->_1.interfaceOffsets->offset;
      while ( *(v25 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v24;
        v25 += 2;
        if ( !v24 )
          goto LABEL_27;
      }
      v26 = (__int64)(&v23[1]._1.implementedInterfaces + 2 * *(_DWORD *)v25);
    }
    else
    {
LABEL_27:
      v26 = sub_1C1C7C0(v13, SimpleAnimation_State_TypeInfo, 14LL);
    }
    monitor = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v26)(
                                        v13,
                                        *(_QWORD *)(v26 + 8));
    if ( !monitor )
      goto LABEL_47;
  }
  else
  {
    animationData = (UnityEngine_Object_o *)this->fields.animationData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(animationData, 0LL, 0LL);
    if ( ((unsigned __int8)monitor & 1) == 0 )
      goto LABEL_31;
    v18 = this->fields.animationData;
    if ( !v18 )
      goto LABEL_47;
    monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animationData, 0LL);
    if ( !monitor )
      goto LABEL_47;
    v19 = UnityEngine_Object__get_name(monitor, 0LL);
    monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v18, v19, 0LL);
    if ( !monitor )
      goto LABEL_47;
    v20 = (UnityEngine_AnimationState_o *)monitor;
    time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)monitor, 0LL);
    monitor = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v20, 0LL);
    if ( !monitor )
      goto LABEL_47;
  }
  if ( time < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)monitor, 0LL) )
    return;
LABEL_31:
  v27 = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( !UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
  {
    p_simpleAnimationData = (PartyOrganizationUtility_o *)&this->fields.animationData;
    v28 = (UnityEngine_Object_o *)this->fields.animationData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( !UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
      goto LABEL_41;
  }
  monitor = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( !p_simpleAnimationData->klass )
LABEL_47:
    sub_1BCAA3C(monitor, v9);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)monitor, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
  UnityEngine_Object__DestroyImmediate_70154432(gameObject, 0LL);
  p_simpleAnimationData->klass = 0LL;
  sub_1BCA784(p_simpleAnimationData, 0LL, v37, v38, v39, v40, v41, v42);
LABEL_41:
  effectIndex = this->fields.effectIndex;
  if ( effectIndex == 2 )
  {
    this->fields.effectIndex = 0;
    this->fields.effectAsset = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectAsset, 0LL, v29, v30, v31, v32, v33, v34);
    animationEndCallback = this->fields.animationEndCallback;
    p_animationEndCallback = (PartyOrganizationUtility_o *)&this->fields.animationEndCallback;
    v51 = animationEndCallback;
    if ( animationEndCallback )
    {
      p_animationEndCallback->klass = 0LL;
      sub_1BCA784(p_animationEndCallback, 0LL, v44, v45, v46, v47, v48, v49);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v51->fields.m_target)(
        v51->fields.original_method_info,
        *(_QWORD *)&v51->fields.extra_arg);
    }
  }
  else if ( effectIndex == 1 )
  {
    TitleInfoEventFactory__StartRateEffect(this, v9);
  }
}