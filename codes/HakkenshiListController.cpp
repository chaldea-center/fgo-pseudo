void __fastcall HakkenshiListController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct HakkenshiListController_StaticFields *static_fields; // x8

  if ( (byte_4188F45 & 1) == 0 )
  {
    sub_B2C35C(&HakkenshiListController_TypeInfo, v1);
    byte_4188F45 = 1;
  }
  HakkenshiListController_TypeInfo->static_fields->BASE_WINDOW_HEIGHT = -85;
  HakkenshiListController_TypeInfo->static_fields->ADD_HEIGHT = 33;
  static_fields = HakkenshiListController_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FULL_SCREEN_BASE_POSITION.fields.x = 0x42400000C3580000LL;
  static_fields->FULL_SCREEN_BASE_POSITION.fields.z = 0.0;
}


void __fastcall HakkenshiListController___ctor(HakkenshiListController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_List_int__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_4188F44 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v7);
    byte_4188F44 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
  this->fields.releaseHakkenshiList = (struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v8;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.releaseHakkenshiList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.runningHakkenshiList = v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.runningHakkenshiList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.hakkenshiList = (struct System_Collections_Generic_List_GameObject__o *)v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.hakkenshiList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall HakkenshiListController__Awake(HakkenshiListController_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HakkenshiListController__CreateHakkenshiObject(
        HakkenshiListController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *releaseHakkenshiList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x28
  ExpeditionAssetManager_o *assetData; // x0
  UnityEngine_GameObject_o *StayHakkenshiObj; // x20
  UnityEngine_GameObject_o *v16; // x0
  __int64 v17; // x1
  UnityEngine_GameObject_o *v18; // x20
  srcLineSprite_o *Component_srcLineSprite; // x21
  UnityEngine_Transform_o *transform; // x0
  __int64 v21; // x1
  UnityEngine_Transform_o *v22; // x0
  __int64 v23; // x1
  UnityEngine_Transform_o *v24; // x21
  __int64 v25; // x0
  __int64 v26; // x1
  int v27; // s0
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *hakkenshiList; // x0
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4188F43 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_HakkenshiAnimationPlayer___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Insert__, v7);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_4188F43 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  releaseHakkenshiList = this->fields.releaseHakkenshiList;
  if ( !releaseHakkenshiList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)releaseHakkenshiList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v33,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
    if ( !v11 )
      break;
    current = v33.fields.current;
    if ( !v33.fields.current )
      sub_B2C434(v11, v12);
    assetData = this->fields.assetData;
    if ( !assetData )
      sub_B2C434(0LL, v12);
    StayHakkenshiObj = ExpeditionAssetManager__GetStayHakkenshiObj(assetData, HIDWORD(v33.fields.current[1].klass), 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)StayHakkenshiObj, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v16 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)StayHakkenshiObj,
                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v18 = v16;
      if ( !v16 )
        sub_B2C434(0LL, v17);
      UnityEngine_GameObject__SetActive(v16, 0, 0LL);
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v18,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_HakkenshiAnimationPlayer___);
      transform = UnityEngine_GameObject__get_transform(v18, 0LL);
      if ( !transform )
        sub_B2C434(0LL, v21);
      UnityEngine_Transform__SetParent(transform, this->fields.hakkenshiContainer, 0LL);
      v22 = UnityEngine_GameObject__get_transform(v18, 0LL);
      if ( !Component_srcLineSprite )
        sub_B2C434(v22, v23);
      if ( !v22 )
        sub_B2C434(0LL, v23);
      v34.fields.x = *(float *)&Component_srcLineSprite->fields.mtIsUpdate;
      v34.fields.y = *((float *)&Component_srcLineSprite->fields.mtIsUpdate + 1);
      v34.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(v22, v34, 0LL);
      v24 = UnityEngine_GameObject__get_transform(v18, 0LL);
      *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_one(0LL);
      if ( !v24 )
        sub_B2C434(v25, v26);
      UnityEngine_Transform__set_localScale(v24, *(UnityEngine_Vector3_o *)&v27, 0LL);
      hakkenshiList = this->fields.hakkenshiList;
      if ( !hakkenshiList )
        sub_B2C434(0LL, v30);
      System_Collections_Generic_List_XWeaponTrail_Element___Insert(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)hakkenshiList,
        SHIDWORD(current[1].klass) / 10 - 1,
        (XWeaponTrail_Element_o *)v18,
        (const MethodInfo_2EF5674 *)Method_System_Collections_Generic_List_GameObject__Insert__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v33,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HakkenshiListController__CreateHakkenshiWindow(
        HakkenshiListController_o *this,
        int32_t eventId,
        ExpeditionAssetManager_o *assetData,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int v17; // w20
  UISprite_o *bgSprite; // x21
  Il2CppObject *v19; // x0
  System_String_o *v20; // x22
  const MethodInfo *v21; // x1
  UnityEngine_Object_o *infoPanel; // x20
  __int64 v23; // x1
  UnityEngine_Component_o *transform; // x0
  float z; // s8
  float ItemBaseWindowX; // s9
  int v27; // w20
  UnityEngine_GameObject_o *gameObject; // x19
  HakkenshiListController_c *v29; // x8
  int v30; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4188F40 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&EventItemWindowMaker_TypeInfo, v11);
    sub_B2C35C(&FSUtility_TypeInfo, v12);
    sub_B2C35C(&HakkenshiListController_TypeInfo, v13);
    sub_B2C35C(&int_TypeInfo, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_19278/*"icon_bg_{0}"*/, v16);
    byte_4188F40 = 1;
  }
  this->fields.assetData = assetData;
  this->fields.eventId = eventId;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.assetData,
    (System_Int32_array **)assetData,
    (System_String_array **)assetData,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v17 = this->fields.eventId;
  bgSprite = this->fields.bgSprite;
  v30 = v17;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  v20 = System_String__Format((System_String_o *)StringLiteral_19278/*"icon_bg_{0}"*/, v19, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28451336(v17, bgSprite, v20, 0LL);
  HakkenshiListController__RefreshHakkenshiInfo(this, v21);
  infoPanel = (UnityEngine_Object_o *)this->fields.infoPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(infoPanel, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.infoPanel;
    if ( !transform )
      goto LABEL_27;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_27;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    z = localPosition.fields.z;
    if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    }
    ItemBaseWindowX = EventItemWindowMaker__GetItemBaseWindowX(0LL);
    transform = (UnityEngine_Component_o *)EventItemWindowMaker__GetItemBaseWindowHeight(0, 1, 0LL);
    if ( !this->fields.infoPanel
      || (v27 = (int)transform,
          (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this->fields.infoPanel,
                                                    0LL)) == 0LL) )
    {
LABEL_27:
      sub_B2C434(transform, v23);
    }
    v32.fields.y = (float)v27;
    v32.fields.x = ItemBaseWindowX;
    v32.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v32, 0LL);
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( !FSUtility__IsUnderVista(0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v29 = HakkenshiListController_TypeInfo;
    if ( (BYTE3(HakkenshiListController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !HakkenshiListController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo);
      v29 = HakkenshiListController_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(gameObject, v29->static_fields->FULL_SCREEN_BASE_POSITION, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HakkenshiListController__DisplayHakkenshiObj(
        HakkenshiListController_o *this,
        int32_t Idx,
        bool isDisp,
        const MethodInfo *method)
{
  HakkenshiListController_o *v6; // x21
  __int64 v7; // x1
  struct System_Collections_Generic_List_GameObject__o *hakkenshiList; // x21
  int size; // w8
  __int64 v10; // x20

  v6 = this;
  if ( (byte_4188F42 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, *(_QWORD *)&Idx);
    this = (HakkenshiListController_o *)sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    byte_4188F42 = 1;
  }
  hakkenshiList = v6->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_9;
  size = hakkenshiList->fields._size;
  if ( size < Idx / 10 )
    return;
  v10 = Idx / 10 - 1LL;
  if ( size <= (unsigned int)v10 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  this = (HakkenshiListController_o *)hakkenshiList->fields._items->m_Items[v10];
  if ( !this )
LABEL_9:
    sub_B2C434(this, *(_QWORD *)&Idx);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isDisp, 0LL);
}


void __fastcall HakkenshiListController__RefreshHakkenshiInfo(
        HakkenshiListController_o *this,
        const MethodInfo *method)
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  int64_t hakkenshiList; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_int__o *v25; // x21
  System_Collections_Generic_List_int__o **p_runningHakkenshiList; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *ReleasePieceEntityList; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UserEventExpeditionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct ExpeditionInfo_array *expeditionInfos; // x21
  int max_length; // w8
  unsigned int v43; // w22
  ExpeditionInfo_o *v44; // x8
  _BOOL8 v45; // x0
  __int64 v46; // x1
  int32_t klass_high; // w21
  _BOOL8 v48; // x0
  __int64 v49; // x1
  struct System_Collections_Generic_List_GameObject__o *v50; // x25
  int size; // w8
  __int64 v52; // x21
  UnityEngine_GameObject_o *v53; // x0
  int v54; // w19
  __int64 v55; // x0
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+8h] [xbp-A8h] BYREF
  int v57[2]; // [xsp+20h] [xbp-90h]
  int v58; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+50h] [xbp-60h] BYREF
  UserEventExpeditionEntity_o *entity; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_4188F41 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v18);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_B2C35C(&NetworkManager_TypeInfo, v20);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4188F41 = 1;
  }
  entity = 0LL;
  memset(&v60, 0, sizeof(v60));
  memset(&v59, 0, sizeof(v59));
  v58 = 0;
  hakkenshiList = (int64_t)this->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_44;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v56,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)hakkenshiList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v60 = v56;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v60,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v60.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)current, 0LL);
  }
  v57[0] = 51;
  v58 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v60,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v58 = 0;
  hakkenshiList = (int64_t)this->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_44;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)hakkenshiList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  v25 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.runningHakkenshiList = v25;
  p_runningHakkenshiList = &this->fields.runningHakkenshiList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.runningHakkenshiList,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  hakkenshiList = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hakkenshiList )
    goto LABEL_44;
  hakkenshiList = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)hakkenshiList,
                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !hakkenshiList )
    goto LABEL_44;
  ReleasePieceEntityList = EventExpeditionPieceMaster__GetReleasePieceEntityList(
                             (EventExpeditionPieceMaster_o *)hakkenshiList,
                             this->fields.eventId,
                             0LL);
  this->fields.releaseHakkenshiList = ReleasePieceEntityList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.releaseHakkenshiList,
    (System_Int32_array **)ReleasePieceEntityList,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  hakkenshiList = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hakkenshiList )
    goto LABEL_44;
  MasterData_WarQuestSelectionMaster = (UserEventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)hakkenshiList,
                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  hakkenshiList = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_44;
  hakkenshiList = UserEventExpeditionMaster__TryGetEntity(
                    MasterData_WarQuestSelectionMaster,
                    &entity,
                    hakkenshiList,
                    this->fields.eventId,
                    0LL);
  if ( (hakkenshiList & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_44;
    expeditionInfos = entity->fields.expeditionInfos;
    if ( !expeditionInfos )
      goto LABEL_44;
    max_length = expeditionInfos->max_length;
    if ( max_length >= 1 )
    {
      v43 = 0;
      while ( 1 )
      {
        if ( v43 >= max_length )
        {
          v55 = sub_B2C460(hakkenshiList);
          sub_B2C400(v55, 0LL);
        }
        v44 = expeditionInfos->m_Items[v43];
        if ( !v44 )
          break;
        hakkenshiList = (int64_t)*p_runningHakkenshiList;
        if ( !*p_runningHakkenshiList )
          break;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)hakkenshiList,
          v44->fields.pieceIdx,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        max_length = expeditionInfos->max_length;
        if ( (int)++v43 >= max_length )
          goto LABEL_27;
      }
LABEL_44:
      sub_B2C434(hakkenshiList, method);
    }
  }
LABEL_27:
  HakkenshiListController__CreateHakkenshiObject(this, method);
  hakkenshiList = (int64_t)this->fields.releaseHakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_44;
  if ( *(int *)(hakkenshiList + 24) >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v56,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)hakkenshiList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
    v59 = v56;
    while ( 1 )
    {
      v45 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v59,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
      if ( !v45 )
        break;
      if ( !v59.fields.current )
        sub_B2C434(v45, v46);
      if ( !*p_runningHakkenshiList )
        sub_B2C434(0LL, v46);
      klass_high = HIDWORD(v59.fields.current[1].klass);
      v48 = System_Collections_Generic_List_int___Contains(
              *p_runningHakkenshiList,
              klass_high,
              (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v48 )
      {
        v50 = this->fields.hakkenshiList;
        if ( !v50 )
          sub_B2C434(v48, v49);
        size = v50->fields._size;
        if ( size >= klass_high / 10 )
        {
          v52 = klass_high / 10 - 1LL;
          if ( size <= (unsigned int)v52 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v53 = v50->fields._items->m_Items[v52];
          if ( !v53 )
            sub_B2C434(0LL, v49);
          UnityEngine_GameObject__SetActive(v53, 1, 0LL);
        }
      }
    }
    v57[0] = 311;
    v54 = ++v58;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v59,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
    if ( v54 )
    {
      if ( v57[v54 - 1] == 311 )
        v58 = v54 - 1;
    }
  }
}


int32_t __fastcall HakkenshiListController__get_HakkenshiBaseWindowHeight(
        HakkenshiListController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  HakkenshiListController_c *v3; // x0
  int32_t BASE_WINDOW_HEIGHT; // w20
  int32_t ADD_HEIGHT; // w8
  HakkenshiListController_c *v6; // x0

  if ( (byte_4188F3F & 1) == 0 )
  {
    sub_B2C35C(&FSUtility_TypeInfo, method);
    sub_B2C35C(&HakkenshiListController_TypeInfo, v2);
    byte_4188F3F = 1;
  }
  v3 = HakkenshiListController_TypeInfo;
  if ( (BYTE3(HakkenshiListController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !HakkenshiListController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo);
    v3 = HakkenshiListController_TypeInfo;
  }
  BASE_WINDOW_HEIGHT = v3->static_fields->BASE_WINDOW_HEIGHT;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    ADD_HEIGHT = 0;
  }
  else
  {
    v6 = HakkenshiListController_TypeInfo;
    if ( (BYTE3(HakkenshiListController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !HakkenshiListController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo);
      v6 = HakkenshiListController_TypeInfo;
    }
    ADD_HEIGHT = v6->static_fields->ADD_HEIGHT;
  }
  return ADD_HEIGHT + BASE_WINDOW_HEIGHT;
}