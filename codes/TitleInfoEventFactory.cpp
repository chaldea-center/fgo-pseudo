void __fastcall TitleInfoEventFactory___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v33; // x1
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
  struct TitleInfoEventFactory_StaticFields *v74; // x0
  System_Int32_array **v75; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  struct TitleInfoEventFactory_StaticFields *v82; // x0
  System_Int32_array **v83; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7

  if ( (byte_42ECBDC & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventFactory_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_18416/*"ef_factory_open"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18417/*"ef_factory_open1"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_18909/*"factory_icon_possible"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_18908/*"factory_bg_rate"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_18415/*"ef_factory_flash1"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_18911/*"factory_title_chocolate"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_18910/*"factory_line"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_18414/*"ef_factory_flash"*/, v29, v30, v31);
    byte_42ECBDC = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventFactory_TypeInfo->static_fields;
  v33 = (System_Int32_array **)StringLiteral_18911/*"factory_title_chocolate"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18911/*"factory_title_chocolate"*/;
  sub_B5D560(static_fields, v33, v2, v3, v4, v5, v6, v7);
  v34 = TitleInfoEventFactory_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_18909/*"factory_icon_possible"*/;
  v34->SPRITE_NAME_POSSIBLE = (struct System_String_o *)StringLiteral_18909/*"factory_icon_possible"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v34->SPRITE_NAME_POSSIBLE, v35, v36, v37, v38, v39, v40, v41);
  v42 = TitleInfoEventFactory_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_18910/*"factory_line"*/;
  v42->SPRITE_NAME_LINE = (struct System_String_o *)StringLiteral_18910/*"factory_line"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v42->SPRITE_NAME_LINE, v43, v44, v45, v46, v47, v48, v49);
  v50 = TitleInfoEventFactory_TypeInfo->static_fields;
  v51 = (System_Int32_array **)StringLiteral_18908/*"factory_bg_rate"*/;
  v50->SPRITE_NAME_BG_RATE = (struct System_String_o *)StringLiteral_18908/*"factory_bg_rate"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v50->SPRITE_NAME_BG_RATE, v51, v52, v53, v54, v55, v56, v57);
  v58 = TitleInfoEventFactory_TypeInfo->static_fields;
  v59 = (System_Int32_array **)StringLiteral_18416/*"ef_factory_open"*/;
  v58->OBJECT_NAME_EFFECT_1 = (struct System_String_o *)StringLiteral_18416/*"ef_factory_open"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v58->OBJECT_NAME_EFFECT_1, v59, v60, v61, v62, v63, v64, v65);
  v66 = TitleInfoEventFactory_TypeInfo->static_fields;
  v67 = (System_Int32_array **)StringLiteral_18414/*"ef_factory_flash"*/;
  v66->OBJECT_NAME_EFFECT_2 = (struct System_String_o *)StringLiteral_18414/*"ef_factory_flash"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v66->OBJECT_NAME_EFFECT_2, v67, v68, v69, v70, v71, v72, v73);
  v74 = TitleInfoEventFactory_TypeInfo->static_fields;
  v75 = (System_Int32_array **)StringLiteral_18417/*"ef_factory_open1"*/;
  v74->EFFECT_ANIMATION_START_1 = (struct System_String_o *)StringLiteral_18417/*"ef_factory_open1"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v74->EFFECT_ANIMATION_START_1, v75, v76, v77, v78, v79, v80, v81);
  v82 = TitleInfoEventFactory_TypeInfo->static_fields;
  v83 = (System_Int32_array **)StringLiteral_18415/*"ef_factory_flash1"*/;
  v82->EFFECT_ANIMATION_START_2 = (struct System_String_o *)StringLiteral_18415/*"ef_factory_flash1"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v82->EFFECT_ANIMATION_START_2, v83, v84, v85, v86, v87, v88, v89);
}


void __fastcall TitleInfoEventFactory___ctor(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventFactory__Close(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct SimpleAnimation_o **p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Object_o *v15; // x19
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BattleServantConfConponent_o *v22; // x0
  struct UnityEngine_Animation_o **p_animationData; // x19
  UnityEngine_Object_o *v24; // x20
  struct UnityEngine_Animation_o *animationData; // t1
  UnityEngine_Object_o *v26; // x20

  if ( (byte_42ECBD6 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECBD6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.effectAsset = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.effectAsset, 0LL, v7, v8, v9, v10, v11, v12);
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
      v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35620448(v15, 0LL);
      v22 = (BattleServantConfConponent_o *)p_simpleAnimationData;
      *p_simpleAnimationData = 0LL;
LABEL_22:
      sub_B5D560(v22, 0LL, v16, v17, v18, v19, v20, v21);
      return;
    }
    goto LABEL_24;
  }
  animationData = this->fields.animationData;
  p_animationData = &this->fields.animationData;
  v24 = (UnityEngine_Object_o *)animationData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)*p_animationData;
    if ( *p_animationData )
    {
      v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35620448(v26, 0LL);
      *p_animationData = 0LL;
      v22 = (BattleServantConfConponent_o *)p_animationData;
      goto LABEL_22;
    }
LABEL_24:
    sub_B5D69C(gameObject, v6);
  }
}


void __fastcall TitleInfoEventFactory__LvUpIconCreate(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *unitDictionary; // x0
  const MethodInfo *v6; // x3

  if ( (byte_42ECBD9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__,
      (_DWORD)method,
      v2,
      v3);
    byte_42ECBD9 = 1;
  }
  unitDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.unitDictionary;
  if ( !unitDictionary
    || (unitDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(unitDictionary, this->fields.lvUpIndex, (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__)) == 0LL )
  {
    sub_B5D69C(unitDictionary, method);
  }
  if ( SHIDWORD(unitDictionary->fields.values) >= 1 )
    TitleInfoEventFactoryUnit__CreateIcon((TitleInfoEventFactoryUnit_o *)unitDictionary, this->fields.lvUpCount, 1, v6);
}


void __fastcall TitleInfoEventFactory__Open(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int64_t Instance; // x0
  __int64 v51; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  int v53; // w26
  int64_t v54; // x20
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserShopMaster_o *v56; // x22
  WarQuestSelectionMaster_o *v57; // x0
  UISprite_o *titleSprite; // x24
  TitleInfoEventFactory_c *v59; // x8
  System_String_o *SPRITE_NAME_TITLE; // x25
  __int64 v61; // x28
  int v62; // w27
  __int64 v63; // x21
  int v64; // w9
  int64_t v65; // x24
  __int64 v66; // x8
  int v67; // w9
  struct UnityEngine_GameObject_o *titleInfoEventFactoryUnitPrefab; // x25
  UnityEngine_Object_o *v69; // x25
  const MethodInfo *v70; // x4
  struct EventDetailEntity_o *v71; // x8
  WarBoardEvalValueSquare_EvalValueSquare_o *v72; // x25
  ShopEntity_o *v73; // x24
  int64_t UserId; // x25
  int32_t ItemID; // w2
  int v76; // w21
  UnityEngine_GameObject_o *gameObject; // x24
  UnityEngine_Object_o *v78; // x24
  UILabel_o *rateLabel; // x20
  System_String_o *v80; // x21
  Il2CppObject *v81; // x0
  UnityEngine_GameObject_o *v82; // x0
  __int64 v83; // x0
  UserItemMaster_o *v84; // [xsp+8h] [xbp-68h]
  DataMasterBase_WarMaster__WarEntity__int__o *v85; // [xsp+10h] [xbp-60h]
  double v86; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42ECBD5 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventFactoryMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__, v20, v21, v22);
    sub_B5D5C4(&double_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___, v26, v27, v28);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&NetworkManager_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v35, v36, v37);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42, v43);
    sub_B5D5C4(&TitleInfoEventFactory_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_5703/*"EVENT_FACTORY_GET_EP_RATE"*/, v47, v48, v49);
    byte_42ECBD5 = 1;
  }
  if ( this->fields.eventDetailEntity )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventFactoryMaster___);
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
    v53 = *(_DWORD *)(Instance + 24);
    v54 = Instance;
    if ( v53 < 1 )
      return;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    v85 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v56 = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    v57 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)Instance,
            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
    titleSprite = this->fields.titleSprite;
    v84 = (UserItemMaster_o *)v57;
    v59 = TitleInfoEventFactory_TypeInfo;
    if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      v59 = TitleInfoEventFactory_TypeInfo;
    }
    SPRITE_NAME_TITLE = v59->static_fields->SPRITE_NAME_TITLE;
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
    v61 = 0LL;
    v62 = 1000;
    do
    {
      if ( (unsigned int)v61 >= *(_DWORD *)(v54 + 24) )
      {
LABEL_64:
        v83 = sub_B5D6C8(Instance);
        sub_B5D668(v83, 0LL);
      }
      v63 = *(_QWORD *)(v54 + 32 + 8 * v61);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v63 )
        goto LABEL_63;
      if ( !v56 )
        goto LABEL_63;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v56, Instance, *(_DWORD *)(v63 + 24), 0LL);
      if ( !Instance )
        goto LABEL_63;
      v64 = *(_DWORD *)(Instance + 28);
      v65 = Instance;
      if ( v64 <= 0 )
      {
        Instance = (int64_t)v85;
        if ( !v85 )
          goto LABEL_63;
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v85,
                              *(_DWORD *)(v63 + 24),
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_63;
        v73 = (ShopEntity_o *)Instance;
        Instance = ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          ItemID = ShopEntity__GetItemID(v73, 0LL);
          Instance = (int64_t)v84;
          if ( !v84 )
            goto LABEL_63;
          Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v84, UserId, ItemID, 0LL);
          if ( !Instance )
            goto LABEL_63;
          v76 = *(_DWORD *)(Instance + 28);
          Instance = ShopEntity__GetPrice(v73, 0LL);
          if ( v76 >= (int)Instance )
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
            v78 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)gameObject,
                                            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            Instance = UnityEngine_Object__op_Inequality(v78, 0LL, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v78 )
                goto LABEL_63;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v78, 1, 0LL);
              GameObjectExtensions__SafeSetParent(
                (UnityEngine_GameObject_o *)v78,
                (UnityEngine_Component_o *)this->fields.grid,
                0LL);
            }
          }
        }
      }
      else
      {
        v66 = *(_QWORD *)(v63 + 40);
        if ( !v66 )
          goto LABEL_63;
        v67 = v64 - 1;
        if ( (unsigned int)v67 >= *(_DWORD *)(v66 + 24) )
          goto LABEL_64;
        titleInfoEventFactoryUnitPrefab = this->fields.titleInfoEventFactoryUnitPrefab;
        v62 += *(_DWORD *)(v66 + 4LL * v67 + 32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v69 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)titleInfoEventFactoryUnitPrefab,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        Instance = UnityEngine_Object__op_Inequality(v69, 0LL, 0LL);
        if ( (Instance & 1) != 0 )
        {
          GameObjectExtensions__SafeSetParent(
            (UnityEngine_GameObject_o *)v69,
            (UnityEngine_Component_o *)this->fields.grid,
            0LL);
          if ( !v69 )
            goto LABEL_63;
          Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)v69,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventFactoryUnit___);
          v71 = this->fields.eventDetailEntity;
          if ( !v71 )
            goto LABEL_63;
          v72 = (WarBoardEvalValueSquare_EvalValueSquare_o *)Instance;
          if ( !Instance )
            goto LABEL_63;
          TitleInfoEventFactoryUnit__Open(
            (TitleInfoEventFactoryUnit_o *)Instance,
            v71->fields.eventId,
            *(_DWORD *)(v63 + 16),
            *(_DWORD *)(v65 + 28),
            v70);
          Instance = (int64_t)this->fields.unitDictionary;
          if ( !Instance )
            goto LABEL_63;
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
            *(_DWORD *)(v63 + 16),
            v72,
            (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__Add__);
        }
      }
      ++v61;
    }
    while ( (int)v61 < v53 );
    rateLabel = this->fields.rateLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v80 = LocalizationManager__Get((System_String_o *)StringLiteral_5703/*"EVENT_FACTORY_GET_EP_RATE"*/, 0LL);
    v86 = (double)v62 / 1000.0;
    v81 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v86);
    Instance = (int64_t)System_String__Format(v80, v81, 0LL);
    if ( !rateLabel
      || (UILabel__set_text(rateLabel, (System_String_o *)Instance, 0LL),
          (Instance = (int64_t)this->fields.RateBase) == 0)
      || (v82 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL),
          GameObjectExtensions__SetParent(v82, (UnityEngine_Component_o *)this->fields.grid, 0LL),
          (Instance = (int64_t)this->fields.grid) == 0) )
    {
LABEL_63:
      sub_B5D69C(Instance, v51);
    }
    (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 448LL));
  }
}


void __fastcall TitleInfoEventFactory__RateChange(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int64_t Instance; // x0
  __int64 v24; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  int v26; // w23
  int64_t v27; // x20
  UserShopMaster_o *v28; // x21
  __int64 v29; // x24
  int v30; // w22
  __int64 v31; // x27
  int v32; // w8
  bool v33; // vf
  int v34; // w8
  __int64 v35; // x9
  UILabel_o *rateLabel; // x19
  System_String_o *v37; // x20
  Il2CppObject *v38; // x0
  __int64 v39; // x0
  double v40; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42ECBDB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventFactoryMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, v5, v6, v7);
    sub_B5D5C4(&double_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_5703/*"EVENT_FACTORY_GET_EP_RATE"*/, v20, v21, v22);
    byte_42ECBDB = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventFactoryMaster___);
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
  v26 = *(_DWORD *)(Instance + 24);
  v27 = Instance;
  if ( v26 < 1 )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
  v28 = (UserShopMaster_o *)Instance;
  v29 = 0LL;
  v30 = 1000;
  do
  {
    if ( (unsigned int)v29 >= *(_DWORD *)(v27 + 24) )
    {
LABEL_29:
      v39 = sub_B5D6C8(Instance);
      sub_B5D668(v39, 0LL);
    }
    v31 = *(_QWORD *)(v27 + 32 + 8 * v29);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v31 )
      goto LABEL_28;
    if ( !v28 )
      goto LABEL_28;
    Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v28, Instance, *(_DWORD *)(v31 + 24), 0LL);
    if ( !Instance )
      goto LABEL_28;
    v32 = *(_DWORD *)(Instance + 28);
    v33 = __OFSUB__(v32, 1);
    v34 = v32 - 1;
    if ( v34 < 0 == v33 )
    {
      v35 = *(_QWORD *)(v31 + 40);
      if ( !v35 )
        goto LABEL_28;
      if ( (unsigned int)v34 >= *(_DWORD *)(v35 + 24) )
        goto LABEL_29;
      v30 += *(_DWORD *)(v35 + 4LL * v34 + 32);
    }
    ++v29;
  }
  while ( (int)v29 < v26 );
  rateLabel = this->fields.rateLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_5703/*"EVENT_FACTORY_GET_EP_RATE"*/, 0LL);
  v40 = (double)v30 / 1000.0;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(double_TypeInfo, &v40);
  Instance = (int64_t)System_String__Format(v37, v38, 0LL);
  if ( !rateLabel )
LABEL_28:
    sub_B5D69C(Instance, v24);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  BattleServantConfConponent_o *p_unitDictionary; // x19
  struct System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *unitDictionary; // t1
  System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42ECBD4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__,
      (_DWORD)eventDetailEntity,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo, v10, v11, v12);
    byte_42ECBD4 = 1;
  }
  this->fields.eventDetailEntity = eventDetailEntity;
  sub_B5D560(
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
    v15 = (System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__TypeInfo);
    System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit____ctor(
      v15,
      10,
      (const MethodInfo_2F3153C *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit___ctor__);
    p_unitDictionary->klass = (BattleServantConfConponent_c *)v15;
    sub_B5D560(p_unitDictionary, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *unitDictionary; // x24
  UnityEngine_GameObject_o *TargetId; // x0
  const MethodInfo *v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  UnityEngine_Object_o *Object_30642600; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x21
  UnityEngine_Component_o *Item; // x0
  UnityEngine_Transform_o *v57; // x20
  float v58; // s0
  float v59; // s1
  float v60; // s2
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  struct UnityEngine_Animation_o *v69; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  SimpleAnimation_o *v77; // x21
  __int64 v78; // x3
  TitleInfoEventFactoryUnit_c *klass; // x8
  UnityEngine_GameObject_o *v80; // x21
  unsigned __int64 v81; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v83; // x0
  UnityEngine_Animation_o *v84; // x20
  UnityEngine_Animation_o *v85; // x20
  UnityEngine_Animation_o *v86; // x20
  System_String_o *v87; // x0
  SimpleAnimation_o *v88; // x20
  System_String_o *name; // x0
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ECBD8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__,
      (_DWORD)shopEntity,
      buyCount,
      callback);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&TitleInfoEventFactory_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_8689/*"LvUpIconCreate"*/, v35, v36, v37);
    byte_42ECBD8 = 1;
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
           (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__ContainsKey__) )
    {
      this->fields.effectAsset = effectAsset;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.effectAsset,
        (System_Int32_array **)effectAsset,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
      this->fields.animationEndCallback = callback;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.animationEndCallback,
        (System_Int32_array **)callback,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
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
        Object_30642600 = AssetData__GetObject_30642600(
                            effectAsset,
                            TitleInfoEventFactory_TypeInfo->static_fields->OBJECT_NAME_EFFECT_1,
                            0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( Object_30642600 )
          v54 = (UnityEngine_GameObject_c *)Object_30642600->klass == UnityEngine_GameObject_TypeInfo
              ? (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_30642600
              : 0LL;
        else
          v54 = 0LL;
        TargetId = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                 v54,
                                                 (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( this->fields.unitDictionary )
        {
          v55 = TargetId;
          Item = (UnityEngine_Component_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                              (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.unitDictionary,
                                              this->fields.lvUpIndex,
                                              (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
          GameObjectExtensions__SafeSetParent(v55, Item, 0LL);
          if ( v55 )
          {
            TargetId = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v55, 0LL);
            if ( this->fields.unitDictionary )
            {
              v57 = (UnityEngine_Transform_o *)TargetId;
              TargetId = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                       (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.unitDictionary,
                                                       this->fields.lvUpIndex,
                                                       (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__TitleInfoEventFactoryUnit__get_Item__);
              if ( TargetId )
              {
                *(UnityEngine_Vector3_o *)&v58 = TitleInfoEventFactoryUnit__GetLvUpEffectOffset(
                                                   (TitleInfoEventFactoryUnit_o *)TargetId,
                                                   v40);
                if ( v57 )
                {
                  v90.fields.x = v58 + this->fields.lvUpAnimetionOffset.fields.x;
                  v90.fields.y = v59 + this->fields.lvUpAnimetionOffset.fields.y;
                  v90.fields.z = v60 + this->fields.lvUpAnimetionOffset.fields.z;
                  UnityEngine_Transform__set_localPosition(v57, v90, 0LL);
                  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          v55,
                                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                  p_simpleAnimationData = &this->fields.simpleAnimationData;
                  this->fields.simpleAnimationData = Component_srcLineSprite;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)&this->fields.simpleAnimationData,
                    (System_Int32_array **)Component_srcLineSprite,
                    v63,
                    v64,
                    v65,
                    v66,
                    v67,
                    v68);
                  v69 = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v55,
                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                  p_animationData = &this->fields.animationData;
                  this->fields.animationData = v69;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)&this->fields.animationData,
                    (System_Int32_array **)v69,
                    v71,
                    v72,
                    v73,
                    v74,
                    v75,
                    v76);
                  if ( UnityEngine_Object__op_Inequality(
                         (UnityEngine_Object_o *)this->fields.simpleAnimationData,
                         0LL,
                         0LL) )
                  {
                    TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
                    v77 = *p_simpleAnimationData;
                    if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
                    }
                    if ( v77 )
                    {
                      TargetId = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                                               v77,
                                                               TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                                                               0LL);
                      if ( TargetId )
                      {
                        klass = (TitleInfoEventFactoryUnit_c *)TargetId->klass;
                        v80 = TargetId;
                        if ( *(_WORD *)&TargetId->klass->_2.bitflags1 )
                        {
                          v81 = 0LL;
                          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
                          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                          {
                            ++v81;
                            p_offset += 2;
                            if ( v81 >= *(unsigned __int16 *)&TargetId->klass->_2.bitflags1 )
                              goto LABEL_37;
                          }
                          v83 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
                        }
                        else
                        {
LABEL_37:
                          v83 = sub_AF54C0(TargetId, SimpleAnimation_State_TypeInfo, 14LL, v78);
                        }
                        TargetId = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v83)(
                                                                 v80,
                                                                 *(_QWORD *)(v83 + 8));
                        if ( *p_simpleAnimationData )
                        {
                          SimpleAnimation__set_clip(
                            *p_simpleAnimationData,
                            (UnityEngine_AnimationClip_o *)TargetId,
                            0LL);
                          v88 = *p_simpleAnimationData;
                          if ( v88 )
                          {
                            TargetId = (UnityEngine_GameObject_o *)v88[1].monitor;
                            if ( TargetId )
                            {
                              name = UnityEngine_Object__get_name((UnityEngine_Object_o *)TargetId, 0LL);
                              SimpleAnimation__Play_16676044(v88, name, 0LL);
                              goto LABEL_55;
                            }
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    v84 = *p_animationData;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v84, 0LL, 0LL) )
                      goto LABEL_55;
                    TargetId = (UnityEngine_GameObject_o *)TitleInfoEventFactory_TypeInfo;
                    v85 = *p_animationData;
                    if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
                    }
                    if ( v85 )
                    {
                      TargetId = (UnityEngine_GameObject_o *)UnityEngine_Animation__GetClip(
                                                               v85,
                                                               TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_1,
                                                               0LL);
                      if ( *p_animationData )
                      {
                        UnityEngine_Animation__set_clip(*p_animationData, (UnityEngine_AnimationClip_o *)TargetId, 0LL);
                        v86 = *p_animationData;
                        if ( *p_animationData )
                        {
                          TargetId = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(*p_animationData, 0LL);
                          if ( TargetId )
                          {
                            v87 = UnityEngine_Object__get_name((UnityEngine_Object_o *)TargetId, 0LL);
                            UnityEngine_Animation__Play_51249124(v86, v87, 0LL);
LABEL_55:
                            UnityEngine_MonoBehaviour__Invoke(
                              (UnityEngine_MonoBehaviour_o *)this,
                              (System_String_o *)StringLiteral_8689/*"LvUpIconCreate"*/,
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
      sub_B5D69C(TargetId, v40);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  AssetData_o *effectAsset; // x20
  TitleInfoEventFactory_c *v31; // x0
  UnityEngine_Object_o *Object_30642600; // x0
  UnityEngine_GameObject_c **v33; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v34; // x0
  BattleServantConfConponent_o *p_animationEndCallback; // x19
  System_Action_o *v36; // x20
  struct System_Action_o *animationEndCallback; // t1
  UnityEngine_GameObject_o *v38; // x21
  UnityEngine_AnimationClip_o *Item; // x0
  __int64 v40; // x1
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  SimpleAnimation_o **p_simpleAnimationData; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct UnityEngine_Animation_o *v49; // x0
  UnityEngine_Animation_o **p_animationData; // x21
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  SimpleAnimation_o *v57; // x21
  __int64 v58; // x3
  UnityEngine_AnimationClip_c *klass; // x8
  UnityEngine_AnimationClip_o *v60; // x21
  unsigned __int64 v61; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v63; // x0
  UnityEngine_Animation_o *v64; // x20
  UnityEngine_Animation_o *v65; // x20
  UnityEngine_Animation_o *v66; // x20
  System_String_o *v67; // x0
  SimpleAnimation_o *v68; // x20
  System_String_o *name; // x0

  if ( (byte_42ECBDA & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&TitleInfoEventFactory_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_11417/*"RateChange"*/, v27, v28, v29);
    byte_42ECBDA = 1;
  }
  effectAsset = this->fields.effectAsset;
  if ( effectAsset )
  {
    this->fields.effectIndex = 2;
    v31 = TitleInfoEventFactory_TypeInfo;
    if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
      v31 = TitleInfoEventFactory_TypeInfo;
    }
    Object_30642600 = AssetData__GetObject_30642600(effectAsset, v31->static_fields->OBJECT_NAME_EFFECT_2, 0LL);
    v33 = (UnityEngine_GameObject_c **)Object_30642600;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( v33 )
      {
LABEL_10:
        if ( *v33 == UnityEngine_GameObject_TypeInfo )
          v34 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v33;
        else
          v34 = 0LL;
LABEL_18:
        v38 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            v34,
                                            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        GameObjectExtensions__SafeSetParent(v38, (UnityEngine_Component_o *)this->fields.RateBase, 0LL);
        if ( v38 )
        {
          Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v38,
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          this->fields.simpleAnimationData = Component_srcLineSprite;
          p_simpleAnimationData = &this->fields.simpleAnimationData;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.simpleAnimationData,
            (System_Int32_array **)Component_srcLineSprite,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48);
          v49 = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    v38,
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
          p_animationData = &this->fields.animationData;
          this->fields.animationData = v49;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.animationData,
            (System_Int32_array **)v49,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.simpleAnimationData, 0LL, 0LL) )
          {
            Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
            v57 = *p_simpleAnimationData;
            if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
            }
            if ( v57 )
            {
              Item = (UnityEngine_AnimationClip_o *)SimpleAnimation__get_Item(
                                                      v57,
                                                      TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                                                      0LL);
              if ( Item )
              {
                klass = Item->klass;
                v60 = Item;
                if ( *(_WORD *)&Item->klass->_2.bitflags1 )
                {
                  v61 = 0LL;
                  p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
                  while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    ++v61;
                    p_offset += 2;
                    if ( v61 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                      goto LABEL_29;
                  }
                  v63 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
                }
                else
                {
LABEL_29:
                  v63 = sub_AF54C0(Item, SimpleAnimation_State_TypeInfo, 14LL, v58);
                }
                Item = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(UnityEngine_AnimationClip_o *, _QWORD))v63)(
                                                        v60,
                                                        *(_QWORD *)(v63 + 8));
                if ( *p_simpleAnimationData )
                {
                  SimpleAnimation__set_clip(*p_simpleAnimationData, Item, 0LL);
                  v68 = *p_simpleAnimationData;
                  if ( v68 )
                  {
                    Item = (UnityEngine_AnimationClip_o *)v68[1].monitor;
                    if ( Item )
                    {
                      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                      SimpleAnimation__Play_16676044(v68, name, 0LL);
                      goto LABEL_47;
                    }
                  }
                }
              }
            }
          }
          else
          {
            v64 = *p_animationData;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v64, 0LL, 0LL) )
              goto LABEL_47;
            Item = (UnityEngine_AnimationClip_o *)TitleInfoEventFactory_TypeInfo;
            v65 = *p_animationData;
            if ( (BYTE3(TitleInfoEventFactory_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TitleInfoEventFactory_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventFactory_TypeInfo);
            }
            if ( v65 )
            {
              Item = UnityEngine_Animation__GetClip(
                       v65,
                       TitleInfoEventFactory_TypeInfo->static_fields->EFFECT_ANIMATION_START_2,
                       0LL);
              if ( *p_animationData )
              {
                UnityEngine_Animation__set_clip(*p_animationData, Item, 0LL);
                v66 = *p_animationData;
                if ( *p_animationData )
                {
                  Item = UnityEngine_Animation__get_clip(*p_animationData, 0LL);
                  if ( Item )
                  {
                    v67 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0LL);
                    UnityEngine_Animation__Play_51249124(v66, v67, 0LL);
LABEL_47:
                    UnityEngine_MonoBehaviour__Invoke(
                      (UnityEngine_MonoBehaviour_o *)this,
                      (System_String_o *)StringLiteral_11417/*"RateChange"*/,
                      this->fields.rateChangeTime,
                      0LL);
                    return;
                  }
                }
              }
            }
          }
        }
        sub_B5D69C(Item, v40);
      }
    }
    else if ( Object_30642600 )
    {
      goto LABEL_10;
    }
    v34 = 0LL;
    goto LABEL_18;
  }
  animationEndCallback = this->fields.animationEndCallback;
  p_animationEndCallback = (BattleServantConfConponent_o *)&this->fields.animationEndCallback;
  v36 = animationEndCallback;
  if ( animationEndCallback )
  {
    p_animationEndCallback->klass = 0LL;
    sub_B5D560(p_animationEndCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v36, 0LL);
  }
}


void __fastcall TitleInfoEventFactory__Update(TitleInfoEventFactory_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleServantConfConponent_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *simpleAnimationData; // x21
  UnityEngine_Object_o *monitor; // x0
  const MethodInfo *v11; // x1
  SimpleAnimation_o *klass; // x21
  System_String_o *name; // x0
  __int64 v14; // x3
  UnityEngine_Object_c *v15; // x8
  UnityEngine_Object_o *v16; // x21
  unsigned __int64 v17; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v19; // x0
  UnityEngine_Object_o *animationData; // x21
  UnityEngine_Animation_o *v21; // x21
  System_String_o *v22; // x0
  UnityEngine_AnimationState_o *v23; // x21
  float time; // s8
  __int64 v25; // x3
  long double v26; // q0
  UnityEngine_Object_c *v27; // x8
  unsigned __int64 v28; // x10
  SimpleAnimation_State_c **v29; // x11
  __int64 v30; // x0
  UnityEngine_Object_o *v31; // x21
  UnityEngine_Object_o *v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  int32_t effectIndex; // w8
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  BattleServantConfConponent_o *p_animationEndCallback; // x19
  System_Action_o *v54; // x20
  struct System_Action_o *animationEndCallback; // t1

  if ( (byte_42ECBD7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v5, v6, v7);
    byte_42ECBD7 = 1;
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
    v15 = monitor->klass;
    v16 = monitor;
    if ( *(_WORD *)&monitor->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v17;
        p_offset += 2;
        if ( v17 >= *(unsigned __int16 *)&monitor->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      v19 = (__int64)(&v15->vtable._3_ToString.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v19 = sub_AF54C0(monitor, SimpleAnimation_State_TypeInfo, 3LL, v14);
    }
    v26 = ((long double (__fastcall *)(UnityEngine_Object_o *, _QWORD))*(_QWORD *)v19)(v16, *(_QWORD *)(v19 + 8));
    v27 = v16->klass;
    time = *(float *)&v26;
    if ( *(_WORD *)&v16->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      v29 = (SimpleAnimation_State_c **)&v27->_1.interfaceOffsets->offset;
      while ( *(v29 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v28;
        v29 += 2;
        if ( v28 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      v30 = (__int64)(&v27[1]._1.implementedInterfaces + 2 * *(_DWORD *)v29);
    }
    else
    {
LABEL_29:
      v30 = sub_AF54C0(v16, SimpleAnimation_State_TypeInfo, 14LL, v25);
    }
    monitor = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v30)(
                                        v16,
                                        *(_QWORD *)(v30 + 8));
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
    v21 = this->fields.animationData;
    if ( !v21 )
      goto LABEL_52;
    monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animationData, 0LL);
    if ( !monitor )
      goto LABEL_52;
    v22 = UnityEngine_Object__get_name(monitor, 0LL);
    monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v21, v22, 0LL);
    if ( !monitor )
      goto LABEL_52;
    v23 = (UnityEngine_AnimationState_o *)monitor;
    time = UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)monitor, 0LL);
    monitor = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v23, 0LL);
    if ( !monitor )
      goto LABEL_52;
  }
  if ( time < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)monitor, 0LL) )
    return;
LABEL_33:
  v31 = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
  {
    p_simpleAnimationData = (BattleServantConfConponent_o *)&this->fields.animationData;
    v32 = (UnityEngine_Object_o *)this->fields.animationData;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
      goto LABEL_46;
  }
  monitor = (UnityEngine_Object_o *)p_simpleAnimationData->klass;
  if ( !p_simpleAnimationData->klass )
LABEL_52:
    sub_B5D69C(monitor, v11);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)monitor, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_35620448(gameObject, 0LL);
  p_simpleAnimationData->klass = 0LL;
  sub_B5D560(p_simpleAnimationData, 0LL, v40, v41, v42, v43, v44, v45);
LABEL_46:
  effectIndex = this->fields.effectIndex;
  if ( effectIndex == 2 )
  {
    this->fields.effectIndex = 0;
    this->fields.effectAsset = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.effectAsset, 0LL, v33, v34, v35, v36, v37, v38);
    animationEndCallback = this->fields.animationEndCallback;
    p_animationEndCallback = (BattleServantConfConponent_o *)&this->fields.animationEndCallback;
    v54 = animationEndCallback;
    if ( animationEndCallback )
    {
      p_animationEndCallback->klass = 0LL;
      sub_B5D560(p_animationEndCallback, 0LL, v47, v48, v49, v50, v51, v52);
      System_Action__Invoke(v54, 0LL);
    }
  }
  else if ( effectIndex == 1 )
  {
    TitleInfoEventFactory__StartRateEffect(this, v11);
  }
}