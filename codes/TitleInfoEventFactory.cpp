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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t v16; // x1
  struct TitleInfoEventFactory_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct TitleInfoEventFactory_StaticFields *v25; // x0
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

  if ( (byte_4BFB9E5 & 1) == 0 )
  {
    sub_1C2E12C(&TitleInfoEventFactory_TypeInfo, v1);
    sub_1C2E12C(&StringLiteral_19168/*"ef_factory_open"*/, v8);
    sub_1C2E12C(&StringLiteral_19169/*"ef_factory_open1"*/, v9);
    sub_1C2E12C(&StringLiteral_19708/*"factory_icon_possible"*/, v10);
    sub_1C2E12C(&StringLiteral_19707/*"factory_bg_rate"*/, v11);
    sub_1C2E12C(&StringLiteral_19167/*"ef_factory_flash1"*/, v12);
    sub_1C2E12C(&StringLiteral_19710/*"factory_title_chocolate"*/, v13);
    sub_1C2E12C(&StringLiteral_19709/*"factory_line"*/, v14);
    sub_1C2E12C(&StringLiteral_19166/*"ef_factory_flash"*/, v15);
    byte_4BFB9E5 = 1;
  }
  TitleInfoEventFactory_TypeInfo->static_fields->SPRITE_NAME_TITLE = (struct System_String_o *)StringLiteral_19710/*"factory_title_chocolate"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)TitleInfoEventFactory_TypeInfo->static_fields,
    StringLiteral_19710/*"factory_title_chocolate"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = StringLiteral_19708/*"factory_icon_possible"*/;
  static_fields = TitleInfoEventFactory_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_POSSIBLE = (struct System_String_o *)StringLiteral_19708/*"factory_icon_possible"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->SPRITE_NAME_POSSIBLE, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_19709/*"factory_line"*/;
  v25 = TitleInfoEventFactory_TypeInfo->static_fields;
  v25->SPRITE_NAME_LINE = (struct System_String_o *)StringLiteral_19709/*"factory_line"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v25->SPRITE_NAME_LINE, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_19707/*"factory_bg_rate"*/;
  v33 = TitleInfoEventFactory_TypeInfo->static_fields;
  v33->SPRITE_NAME_BG_RATE = (struct System_String_o *)StringLiteral_19707/*"factory_bg_rate"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v33->SPRITE_NAME_BG_RATE, v32, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_19168/*"ef_factory_open"*/;
  v41 = TitleInfoEventFactory_TypeInfo->static_fields;
  v41->OBJECT_NAME_EFFECT_1 = (struct System_String_o *)StringLiteral_19168/*"ef_factory_open"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v41->OBJECT_NAME_EFFECT_1, v40, v42, v43, v44, v45, v46, v47);
  v48 = StringLiteral_19166/*"ef_factory_flash"*/;
  v49 = TitleInfoEventFactory_TypeInfo->static_fields;
  v49->OBJECT_NAME_EFFECT_2 = (struct System_String_o *)StringLiteral_19166/*"ef_factory_flash"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v49->OBJECT_NAME_EFFECT_2, v48, v50, v51, v52, v53, v54, v55);
  v56 = StringLiteral_19169/*"ef_factory_open1"*/;
  v57 = TitleInfoEventFactory_TypeInfo->static_fields;
  v57->EFFECT_ANIMATION_START_1 = (struct System_String_o *)StringLiteral_19169/*"ef_factory_open1"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v57->EFFECT_ANIMATION_START_1, v56, v58, v59, v60, v61, v62, v63);
  v64 = StringLiteral_19167/*"ef_factory_flash1"*/;
  v65 = TitleInfoEventFactory_TypeInfo->static_fields;
  v65->EFFECT_ANIMATION_START_2 = (struct System_String_o *)StringLiteral_19167/*"ef_factory_flash1"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v65->EFFECT_ANIMATION_START_2, v64, v66, v67, v68, v69, v70, v71);
}


void __fastcall TitleInfoEventFactory___ctor(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventFactory__Close(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Object_o *v13; // x19
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct UnityEngine_Animation_o **p_animationData; // x19
  UnityEngine_Object_o *v21; // x20
  struct UnityEngine_Animation_o *animationData; // t1
  UnityEngine_Object_o *v23; // x20

  if ( (byte_4BFB9DF & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFB9DF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.effectAsset = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.effectAsset, 0LL, v5, v6, v7, v8, v9, v10);
  p_simpleAnimationData = (PartyOrganizationUtility_o *)&this->fields.simpleAnimationData;
  simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
  this->fields.effectIndex = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationData, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)p_simpleAnimationData->klass;
    if ( p_simpleAnimationData->klass )
    {
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_70989908(v13, 0LL);
      p_simpleAnimationData->klass = 0LL;
LABEL_18:
      sub_1C2E0D0(p_simpleAnimationData, 0LL, v14, v15, v16, v17, v18, v19);
      return;
    }
    goto LABEL_20;
  }
  animationData = this->fields.animationData;
  p_animationData = &this->fields.animationData;
  v21 = (UnityEngine_Object_o *)animationData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)*p_animationData;
    if ( *p_animationData )
    {
      v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_70989908(v23, 0LL);
      p_simpleAnimationData = (PartyOrganizationUtility_o *)p_animationData;
      *p_animationData = 0LL;
      goto LABEL_18;
    }
LABEL_20:
    sub_1C2E388(gameObject, v4);
  }
}


void __fastcall TitleInfoEventFactory__LvUpIconCreate(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *unitDictionary; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4BFB9E2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__, method);
    byte_4BFB9E2 = 1;
  }
  unitDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary;
  if ( !unitDictionary
    || (unitDictionary = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                   unitDictionary,
                                                                                   this->fields.lvUpIndex,
                                                                                   (const MethodInfo_32D4E34 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__)) == 0LL )
  {
    sub_1C2E388(unitDictionary, method);
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
  void *Instance; // x0
  __int64 v19; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  _DWORD *v21; // x20
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v23; // x22
  Il2CppObject *v24; // x0
  UISprite_o *titleSprite; // x24
  TitleInfoEventFactory_c *v26; // x8
  System_String_o *SPRITE_NAME_TITLE; // x25
  unsigned int v28; // w29
  int v29; // w28
  __int64 v30; // x21
  int v31; // w9
  _DWORD *v32; // x25
  __int64 v33; // x8
  unsigned int v34; // w9
  int v35; // w23
  Il2CppObject *titleInfoEventFactoryUnitPrefab; // x26
  Il2CppObject *v37; // x26
  const MethodInfo *v38; // x4
  struct EventDetailEntity_o *v39; // x8
  Il2CppObject *v40; // x26
  ShopEntity_o *v41; // x25
  NetworkManager_c *v42; // x0
  int64_t userIdNumber; // x26
  int32_t ItemID; // w2
  int v45; // w21
  Il2CppObject *gameObject; // x25
  Il2CppObject *v47; // x25
  UILabel_o *rateLabel; // x20
  System_String_o *v49; // x21
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  UserItemMaster_o *v55; // [xsp+0h] [xbp-80h]
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // [xsp+8h] [xbp-78h]
  int v57; // [xsp+14h] [xbp-6Ch]
  double v58; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4BFB9DE & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, method);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventFactoryMaster___, v3);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ShopMaster___, v4);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserShopMaster___, v6);
    sub_1C2E12C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__, v8);
    sub_1C2E12C(&double_TypeInfo, v9);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___, v10);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v11);
    sub_1C2E12C(&NetworkManager_TypeInfo, v12);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v14);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1C2E12C(&TitleInfoEventFactory_TypeInfo, v16);
    sub_1C2E12C(&StringLiteral_5732/*"EVENT_FACTORY_GET_EP_RATE"*/, v17);
    byte_4BFB9DE = 1;
  }
  if ( this->fields.eventDetailEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_64;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventFactoryMaster___);
    eventDetailEntity = this->fields.eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_64;
    if ( !Instance )
      goto LABEL_64;
    Instance = EventFactoryMaster__GetDatas((EventFactoryMaster_o *)Instance, eventDetailEntity->fields.eventId, 0LL);
    if ( !Instance )
      goto LABEL_64;
    v21 = Instance;
    v57 = *((_DWORD *)Instance + 6);
    if ( v57 < 1 )
      return;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_64;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ShopMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_64;
    v23 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserShopMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_64;
    v24 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserItemMaster___);
    titleSprite = this->fields.titleSprite;
    v55 = (UserItemMaster_o *)v24;
    v56 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
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
    Instance = (void *)AtlasManager__SetEventUI(
                         this->fields.bgRateSprite,
                         TitleInfoEventFactory_TypeInfo->static_fields->SPRITE_NAME_BG_RATE,
                         0LL);
    v28 = 0;
    v29 = 1000;
    do
    {
      if ( v28 >= v21[6] )
LABEL_65:
        sub_1C2E390(Instance, v19);
      v30 = *(_QWORD *)&v21[2 * v28 + 8];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BF81D5 )
      {
        sub_1C2E12C(&NetworkManager_TypeInfo, v19);
        byte_4BF81D5 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      if ( !v30 )
        goto LABEL_64;
      if ( !v23 )
        goto LABEL_64;
      Instance = UserShopMaster__GetEntityDefinitely(
                   (UserShopMaster_o *)v23,
                   *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                   *(_DWORD *)(v30 + 24),
                   0LL);
      if ( !Instance )
        goto LABEL_64;
      v31 = *((_DWORD *)Instance + 7);
      v32 = Instance;
      if ( v31 <= 0 )
      {
        Instance = v56;
        if ( !v56 )
          goto LABEL_64;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v56,
                     *(_DWORD *)(v30 + 24),
                     (const MethodInfo_327B180 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_64;
        v41 = (ShopEntity_o *)Instance;
        Instance = (void *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BF81D5 )
          {
            sub_1C2E12C(&NetworkManager_TypeInfo, v19);
            byte_4BF81D5 = 1;
          }
          v42 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v42 = NetworkManager_TypeInfo;
          }
          userIdNumber = v42->static_fields->userIdNumber;
          ItemID = ShopEntity__GetItemID(v41, 0LL);
          Instance = v55;
          if ( !v55 )
            goto LABEL_64;
          Instance = UserItemMaster__GetEntityDefinitely(v55, userIdNumber, ItemID, 0LL);
          if ( !Instance )
            goto LABEL_64;
          v45 = *((_DWORD *)Instance + 7);
          Instance = (void *)ShopEntity__GetPrice(v41, 0LL);
          if ( v45 >= (int)Instance )
          {
            Instance = this->fields.createSprite;
            if ( !Instance )
              goto LABEL_64;
            gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v47 = UnityEngine_Object__Instantiate_object_(
                    gameObject,
                    (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v47, 0LL, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v47 )
                goto LABEL_64;
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
        v33 = *(_QWORD *)(v30 + 40);
        if ( !v33 )
          goto LABEL_64;
        v34 = v31 - 1;
        if ( v34 >= *(_DWORD *)(v33 + 24) )
          goto LABEL_65;
        v35 = *(_DWORD *)(v33 + 4LL * v34 + 32);
        titleInfoEventFactoryUnitPrefab = (Il2CppObject *)this->fields.titleInfoEventFactoryUnitPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v29 += v35;
        v37 = UnityEngine_Object__Instantiate_object_(
                titleInfoEventFactoryUnitPrefab,
                (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          GameObjectExtensions__SafeSetParent(
            (UnityEngine_GameObject_o *)v37,
            (UnityEngine_Component_o *)this->fields.grid,
            0LL);
          if ( !v37 )
            goto LABEL_64;
          Instance = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v37,
                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___);
          v39 = this->fields.eventDetailEntity;
          if ( !v39 )
            goto LABEL_64;
          v40 = (Il2CppObject *)Instance;
          if ( !Instance )
            goto LABEL_64;
          TitleInfoEventFactoryUnit__Open(
            (TitleInfoEventFactoryUnit_o *)Instance,
            v39->fields.eventId,
            *(_DWORD *)(v30 + 16),
            v32[7],
            v38);
          Instance = this->fields.unitDictionary;
          if ( !Instance )
            goto LABEL_64;
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)Instance,
            *(_DWORD *)(v30 + 16),
            v40,
            (const MethodInfo_32D4ED4 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__);
        }
      }
      ++v28;
    }
    while ( v57 != v28 );
    rateLabel = this->fields.rateLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v49 = LocalizationManager__Get((System_String_o *)StringLiteral_5732/*"EVENT_FACTORY_GET_EP_RATE"*/, 0LL);
    v58 = (double)v29 / 1000.0;
    v53 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v58, v50, v51, v52);
    Instance = System_String__Format(v49, v53, 0LL);
    if ( !rateLabel
      || (UILabel__set_text(rateLabel, (System_String_o *)Instance, 0LL), (Instance = this->fields.RateBase) == 0LL)
      || (v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL),
          GameObjectExtensions__SetParent(v54, (UnityEngine_Component_o *)this->fields.grid, 0LL),
          (Instance = this->fields.grid) == 0LL) )
    {
LABEL_64:
      sub_1C2E388(Instance, v19);
    }
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 440LL))(
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
  void *Instance; // x0
  __int64 v10; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  int v12; // w24
  _DWORD *v13; // x20
  UserShopMaster_o *v14; // x22
  unsigned int v15; // w28
  int v16; // w25
  __int64 v17; // x26
  int v18; // w8
  bool v19; // vf
  int v20; // w8
  __int64 v21; // x9
  UILabel_o *rateLabel; // x19
  System_String_o *v23; // x20
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  double v28; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BFB9E4 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventFactoryMaster___, method);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserShopMaster___, v3);
    sub_1C2E12C(&double_TypeInfo, v4);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v5);
    sub_1C2E12C(&NetworkManager_TypeInfo, v6);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C2E12C(&StringLiteral_5732/*"EVENT_FACTORY_GET_EP_RATE"*/, v8);
    byte_4BFB9E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventFactoryMaster___);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( !eventDetailEntity )
    goto LABEL_30;
  if ( !Instance )
    goto LABEL_30;
  Instance = EventFactoryMaster__GetDatas((EventFactoryMaster_o *)Instance, eventDetailEntity->fields.eventId, 0LL);
  if ( !Instance )
    goto LABEL_30;
  v12 = *((_DWORD *)Instance + 6);
  v13 = Instance;
  if ( v12 < 1 )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserShopMaster___);
  v14 = (UserShopMaster_o *)Instance;
  v15 = 0;
  v16 = 1000;
  do
  {
    if ( v15 >= v13[6] )
LABEL_31:
      sub_1C2E390(Instance, v10);
    v17 = *(_QWORD *)&v13[2 * v15 + 8];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BF81D5 )
    {
      sub_1C2E12C(&NetworkManager_TypeInfo, v10);
      byte_4BF81D5 = 1;
    }
    Instance = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager_TypeInfo;
    }
    if ( !v17 )
      goto LABEL_30;
    if ( !v14 )
      goto LABEL_30;
    Instance = UserShopMaster__GetEntityDefinitely(
                 v14,
                 *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                 *(_DWORD *)(v17 + 24),
                 0LL);
    if ( !Instance )
      goto LABEL_30;
    v18 = *((_DWORD *)Instance + 7);
    v19 = __OFSUB__(v18, 1);
    v20 = v18 - 1;
    if ( v20 < 0 == v19 )
    {
      v21 = *(_QWORD *)(v17 + 40);
      if ( !v21 )
        goto LABEL_30;
      if ( (unsigned int)v20 >= *(_DWORD *)(v21 + 24) )
        goto LABEL_31;
      v16 += *(_DWORD *)(v21 + 4LL * (unsigned int)v20 + 32);
    }
    ++v15;
  }
  while ( v12 != v15 );
  rateLabel = this->fields.rateLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5732/*"EVENT_FACTORY_GET_EP_RATE"*/, 0LL);
  v28 = (double)v16 / 1000.0;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v28, v24, v25, v26);
  Instance = System_String__Format(v23, v27, 0LL);
  if ( !rateLabel )
LABEL_30:
    sub_1C2E388(Instance, v10);
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
  PartyOrganizationUtility_o *p_unitDictionary; // x19
  struct System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *unitDictionary; // t1
  System_Collections_Generic_Dictionary_int__object__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BFB9DD & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__,
      eventDetailEntity);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo, v10);
    byte_4BFB9DD = 1;
  }
  this->fields.eventDetailEntity = eventDetailEntity;
  sub_1C2E0D0(
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
    v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2E378(System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor_53298456(
      v13,
      10,
      (const MethodInfo_32D4518 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__);
    p_unitDictionary->klass = (PartyOrganizationUtility_c *)v13;
    sub_1C2E0D0(p_unitDictionary, (int64_t)v13, v14, v15, v16, v17, v18, v19);
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
  const MethodInfo *v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  UnityEngine_Object_o *Object_39082244; // x0
  UnityEngine_GameObject_c **v36; // x20
  Il2CppObject *v37; // x0
  UnityEngine_GameObject_o *v38; // x21
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *v40; // x20
  float v41; // s0
  float v42; // s1
  float v43; // s2
  Il2CppObject *Component_object; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  Il2CppObject *v52; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  SimpleAnimation_o *v60; // x21
  TitleInfoEventFactoryUnit_c *klass; // x8
  UnityEngine_GameObject_o *v62; // x21
  __int64 v63; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v65; // x0
  UnityEngine_Animation_o *v66; // x20
  UnityEngine_Animation_o *v67; // x20
  UnityEngine_Animation_o *v68; // x20
  System_String_o *v69; // x0
  SimpleAnimation_o *v70; // x20
  System_String_o *name; // x0
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BFB9E1 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__, shopEntity);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__, v11);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v12);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v13);
    sub_1C2E12C(&UnityEngine_GameObject_TypeInfo, v14);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v16);
    sub_1C2E12C(&SimpleAnimation_State_TypeInfo, v17);
    sub_1C2E12C(&TitleInfoEventFactory_TypeInfo, v18);
    sub_1C2E12C(&StringLiteral_8662/*"LvUpIconCreate"*/, v19);
    byte_4BFB9E1 = 1;
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
           (const MethodInfo_32D50C8 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__) )
    {
      this->fields.effectAsset = effectAsset;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&this->fields.effectAsset,
        (int64_t)effectAsset,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      this->fields.animationEndCallback = callback;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&this->fields.animationEndCallback,
        (int64_t)callback,
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
      if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      if ( !effectAsset )
        goto LABEL_51;
      Object_39082244 = AssetData__GetObject_39082244(
                          effectAsset,
                          TitleInfoEventFactory_TypeInfo->static_fields->OBJECT_NAME_EFFECT_1,
                          0LL);
      v36 = (UnityEngine_GameObject_c **)Object_39082244;
      if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        if ( Object_39082244 )
          goto LABEL_12;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( v36 )
        {
LABEL_12:
          if ( *v36 == UnityEngine_GameObject_TypeInfo )
            v37 = (Il2CppObject *)v36;
          else
            v37 = 0LL;
LABEL_20:
          TargetId = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   v37,
                                                   (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( this->fields.unitDictionary )
          {
            v38 = TargetId;
            Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                     (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary,
                     this->fields.lvUpIndex,
                     (const MethodInfo_32D4E34 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
            GameObjectExtensions__SafeSetParent(v38, (UnityEngine_Component_o *)Item, 0LL);
            if ( v38 )
            {
              TargetId = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v38, 0LL);
              if ( this->fields.unitDictionary )
              {
                v40 = (UnityEngine_Transform_o *)TargetId;
                TargetId = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                         (System_Collections_Generic_Dictionary_int__object__o *)this->fields.unitDictionary,
                                                         this->fields.lvUpIndex,
                                                         (const MethodInfo_32D4E34 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
                if ( TargetId )
                {
                  *(UnityEngine_Vector3_o *)&v41 = TitleInfoEventFactoryUnit__GetLvUpEffectOffset(
                                                     (TitleInfoEventFactoryUnit_o *)TargetId,
                                                     v22);
                  if ( v40 )
                  {
                    v72.fields.z = v43 + this->fields.lvUpAnimetionOffset.fields.z;
                    v72.fields.y = v42 + this->fields.lvUpAnimetionOffset.fields.y;
                    v72.fields.x = v41 + this->fields.lvUpAnimetionOffset.fields.x;
                    UnityEngine_Transform__set_localPosition(v40, v72, 0LL);
                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                         v38,
                                         (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                    this->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
                    p_simpleAnimationData = &this->fields.simpleAnimationData;
                    sub_1C2E0D0(
                      (PartyOrganizationUtility_o *)&this->fields.simpleAnimationData,
                      (int64_t)Component_object,
                      v46,
                      v47,
                      v48,
                      v49,
                      v50,
                      v51);
                    v52 = UnityEngine_GameObject__GetComponent_object_(
                            v38,
                            (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                    this->fields.animationData = (struct UnityEngine_Animation_o *)v52;
                    p_animationData = &this->fields.animationData;
                    sub_1C2E0D0(
                      (PartyOrganizationUtility_o *)&this->fields.animationData,
                      (int64_t)v52,
                      v54,
                      v55,
                      v56,
                      v57,
                      v58,
                      v59);
                    if ( UnityEngine_Object__op_Inequality(
                           (UnityEngine_Object_o *)this->fields.simpleAnimationData,
                           0LL,
                           0LL) )
                    {
                      TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
                      v60 = *p_simpleAnimationData;
                      if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
                      if ( v60 )
                      {
                        TargetId = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                                                 v60,
                                                                 TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                                                                 0LL);
                        if ( TargetId )
                        {
                          klass = (TitleInfoEventFactoryUnit_c *)TargetId->klass;
                          v62 = TargetId;
                          v63 = *(unsigned __int16 *)(&TargetId->klass->_2.bitflags2 + 3);
                          if ( *(_WORD *)(&TargetId->klass->_2.bitflags2 + 3) )
                          {
                            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
                            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                            {
                              --v63;
                              p_offset += 2;
                              if ( !v63 )
                                goto LABEL_34;
                            }
                            v65 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
                          }
                          else
                          {
LABEL_34:
                            v65 = sub_1C8010C(TargetId, SimpleAnimation_State_TypeInfo, 14LL);
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
                                SimpleAnimation__Play_65373960(v70, name, 0LL);
                                goto LABEL_50;
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      v66 = *p_animationData;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v66, 0LL, 0LL) )
                        goto LABEL_50;
                      TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
                      v67 = *p_animationData;
                      if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
                      if ( v67 )
                      {
                        TargetId = (UnityEngine_GameObject_o *)UnityEngine_Animation__GetClip(
                                                                 v67,
                                                                 TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                                                                 0LL);
                        if ( *p_animationData )
                        {
                          UnityEngine_Animation__set_clip(
                            *p_animationData,
                            (UnityEngine_AnimationClip_o *)TargetId,
                            0LL);
                          v68 = *p_animationData;
                          if ( *p_animationData )
                          {
                            TargetId = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(
                                                                     *p_animationData,
                                                                     0LL);
                            if ( TargetId )
                            {
                              v69 = UnityEngine_Object__get_name((UnityEngine_Object_o *)TargetId, 0LL);
                              UnityEngine_Animation__Play_70734128(v68, v69, 0LL);
LABEL_50:
                              UnityEngine_MonoBehaviour__Invoke(
                                (UnityEngine_MonoBehaviour_o *)this,
                                (System_String_o *)StringLiteral_8662/*"LvUpIconCreate"*/,
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
          sub_1C2E388(TargetId, v22);
        }
      }
      v37 = 0LL;
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  AssetData_o *effectAsset; // x20
  TitleInfoEventFactory_c *v17; // x0
  UnityEngine_Object_o *Object_39082244; // x20
  Il2CppObject *v19; // x0
  PartyOrganizationUtility_o *p_animationEndCallback; // x19
  struct System_Action_o *v21; // x20
  struct System_Action_o *animationEndCallback; // t1
  Il2CppObject *v23; // x21
  UnityEngine_AnimationClip_o *Item; // x0
  __int64 v25; // x1
  Il2CppObject *Component_object; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  Il2CppObject *v34; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  SimpleAnimation_o *v42; // x21
  UnityEngine_AnimationClip_c *klass; // x8
  UnityEngine_AnimationClip_o *v44; // x21
  __int64 v45; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v47; // x0
  UnityEngine_Animation_o *v48; // x20
  UnityEngine_Animation_o *v49; // x20
  UnityEngine_Animation_o *v50; // x20
  System_String_o *v51; // x0
  SimpleAnimation_o *v52; // x20
  System_String_o *name; // x0

  if ( (byte_4BFB9E3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v9);
    sub_1C2E12C(&UnityEngine_GameObject_TypeInfo, v10);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v12);
    sub_1C2E12C(&SimpleAnimation_State_TypeInfo, v13);
    sub_1C2E12C(&TitleInfoEventFactory_TypeInfo, v14);
    sub_1C2E12C(&StringLiteral_11366/*"RateChange"*/, v15);
    byte_4BFB9E3 = 1;
  }
  effectAsset = this->fields.effectAsset;
  if ( effectAsset )
  {
    this->fields.effectIndex = 2;
    v17 = TitleInfoEventFactory_TypeInfo;
    if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      v17 = TitleInfoEventFactory_TypeInfo;
    }
    Object_39082244 = AssetData__GetObject_39082244(effectAsset, v17->static_fields->OBJECT_NAME_EFFECT_2, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( Object_39082244 )
    {
      if ( (UnityEngine_GameObject_c *)Object_39082244->klass == UnityEngine_GameObject_TypeInfo )
        v19 = (Il2CppObject *)Object_39082244;
      else
        v19 = 0LL;
    }
    else
    {
      v19 = 0LL;
    }
    v23 = UnityEngine_Object__Instantiate_object_(
            v19,
            (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent(
      (UnityEngine_GameObject_o *)v23,
      (UnityEngine_Component_o *)this->fields.RateBase,
      0LL);
    if ( v23 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v23,
                           (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
      this->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
      p_simpleAnimationData = &this->fields.simpleAnimationData;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&this->fields.simpleAnimationData,
        (int64_t)Component_object,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      v34 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v23,
              (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      this->fields.animationData = (struct UnityEngine_Animation_o *)v34;
      p_animationData = &this->fields.animationData;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.animationData, (int64_t)v34, v36, v37, v38, v39, v40, v41);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.simpleAnimationData, 0LL, 0LL) )
      {
        Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
        v42 = *p_simpleAnimationData;
        if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
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
            v45 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
            {
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v45;
                p_offset += 2;
                if ( !v45 )
                  goto LABEL_25;
              }
              v47 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
            }
            else
            {
LABEL_25:
              v47 = sub_1C8010C(Item, SimpleAnimation_State_TypeInfo, 14LL);
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
                  SimpleAnimation__Play_65373960(v52, name, 0LL);
                  goto LABEL_42;
                }
              }
            }
          }
        }
      }
      else
      {
        v48 = *p_animationData;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v48, 0LL, 0LL) )
          goto LABEL_42;
        Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
        v49 = *p_animationData;
        if ( !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
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
                UnityEngine_Animation__Play_70734128(v50, v51, 0LL);
LABEL_42:
                UnityEngine_MonoBehaviour__Invoke(
                  (UnityEngine_MonoBehaviour_o *)this,
                  (System_String_o *)StringLiteral_11366/*"RateChange"*/,
                  this->fields.rateChangeTime,
                  0LL);
                return;
              }
            }
          }
        }
      }
    }
    sub_1C2E388(Item, v25);
  }
  animationEndCallback = this->fields.animationEndCallback;
  p_animationEndCallback = (PartyOrganizationUtility_o *)&this->fields.animationEndCallback;
  v21 = animationEndCallback;
  if ( animationEndCallback )
  {
    p_animationEndCallback->klass = 0LL;
    sub_1C2E0D0(p_animationEndCallback, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v21->fields.m_target)(
      v21->fields.original_method_info,
      *(_QWORD *)&v21->fields.extra_arg);
  }
}


void __fastcall TitleInfoEventFactory__Update(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyOrganizationUtility_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Object_o *monitor; // x0
  const MethodInfo *v7; // x1
  SimpleAnimation_o *klass; // x21
  System_String_o *name; // x0
  UnityEngine_Object_c *v10; // x8
  UnityEngine_Object_o *v11; // x21
  __int64 v12; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v14; // x0
  UnityEngine_Object_o *animationData; // x21
  UnityEngine_Animation_o *v16; // x21
  System_String_o *v17; // x0
  UnityEngine_AnimationState_o *v18; // x21
  float time; // s8
  long double v20; // q0
  UnityEngine_Object_c *v21; // x8
  __int64 v22; // x9
  SimpleAnimation_State_c **v23; // x10
  __int64 v24; // x0
  UnityEngine_Object_o *v25; // x21
  UnityEngine_Object_o *v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  UnityEngine_Object_o *gameObject; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int32_t effectIndex; // w8
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  PartyOrganizationUtility_o *p_animationEndCallback; // x19
  struct System_Action_o *v48; // x20
  struct System_Action_o *animationEndCallback; // t1

  if ( (byte_4BFB9E0 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    sub_1C2E12C(&SimpleAnimation_State_TypeInfo, v3);
    byte_4BFB9E0 = 1;
  }
  p_simpleAnimationData = (PartyOrganizationUtility_o *)&this->fields.simpleAnimationData;
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
    v10 = monitor->klass;
    v11 = monitor;
    v12 = *(unsigned __int16 *)(&monitor->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&monitor->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v12;
        p_offset += 2;
        if ( !v12 )
          goto LABEL_13;
      }
      v14 = (__int64)(&v10->vtable._3_ToString.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_13:
      v14 = sub_1C8010C(monitor, SimpleAnimation_State_TypeInfo, 3LL);
    }
    v20 = ((long double (__fastcall *)(UnityEngine_Object_o *, _QWORD))*(_QWORD *)v14)(v11, *(_QWORD *)(v14 + 8));
    v21 = v11->klass;
    time = *(float *)&v20;
    v22 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
    {
      v23 = (SimpleAnimation_State_c **)&v21->_1.interfaceOffsets->offset;
      while ( *(v23 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v22;
        v23 += 2;
        if ( !v22 )
          goto LABEL_27;
      }
      v24 = (__int64)(&v21[1]._1.implementedInterfaces + 2 * *(_DWORD *)v23);
    }
    else
    {
LABEL_27:
      v24 = sub_1C8010C(v11, SimpleAnimation_State_TypeInfo, 14LL);
    }
    monitor = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v24)(
                                        v11,
                                        *(_QWORD *)(v24 + 8));
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
    v16 = this->fields.animationData;
    if ( !v16 )
      goto LABEL_47;
    monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animationData, 0LL);
    if ( !monitor )
      goto LABEL_47;
    v17 = UnityEngine_Object__get_name(monitor, 0LL);
    monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v16, v17, 0LL);
    if ( !monitor )
      goto LABEL_47;
    v18 = (UnityEngine_AnimationState_o *)monitor;
    time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)monitor, 0LL);
    monitor = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v18, 0LL);
    if ( !monitor )
      goto LABEL_47;
  }
  if ( time < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)monitor, 0LL) )
    return;
LABEL_31:
  v25 = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
  {
    p_simpleAnimationData = (PartyOrganizationUtility_o *)&this->fields.animationData;
    v26 = (UnityEngine_Object_o *)this->fields.animationData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
      goto LABEL_41;
  }
  monitor = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( !p_simpleAnimationData->klass )
LABEL_47:
    sub_1C2E388(monitor, v7);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)monitor, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_70989908(gameObject, 0LL);
  p_simpleAnimationData->klass = 0LL;
  sub_1C2E0D0(p_simpleAnimationData, 0LL, v34, v35, v36, v37, v38, v39);
LABEL_41:
  effectIndex = this->fields.effectIndex;
  if ( effectIndex == 2 )
  {
    this->fields.effectIndex = 0;
    this->fields.effectAsset = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.effectAsset, 0LL, v27, v28, v29, v30, v31, v32);
    animationEndCallback = this->fields.animationEndCallback;
    p_animationEndCallback = (PartyOrganizationUtility_o *)&this->fields.animationEndCallback;
    v48 = animationEndCallback;
    if ( animationEndCallback )
    {
      p_animationEndCallback->klass = 0LL;
      sub_1C2E0D0(p_animationEndCallback, 0LL, v41, v42, v43, v44, v45, v46);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v48->fields.m_target)(
        v48->fields.original_method_info,
        *(_QWORD *)&v48->fields.extra_arg);
    }
  }
  else if ( effectIndex == 1 )
  {
    TitleInfoEventFactory__StartRateEffect(this, v7);
  }
}