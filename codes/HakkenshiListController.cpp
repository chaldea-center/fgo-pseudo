void __fastcall HakkenshiListController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct HakkenshiListController_StaticFields *static_fields; // x8

  if ( (byte_4215CA2 & 1) == 0 )
  {
    sub_B0D8A4(&HakkenshiListController_TypeInfo, v1);
    byte_4215CA2 = 1;
  }
  HakkenshiListController_TypeInfo->static_fields->BASE_WINDOW_HEIGHT = -85;
  HakkenshiListController_TypeInfo->static_fields->ADD_HEIGHT = 33;
  static_fields = HakkenshiListController_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FULL_SCREEN_BASE_POSITION.fields.x = 0x42400000C3580000LL;
  static_fields->FULL_SCREEN_BASE_POSITION.fields.z = 0.0;
}


void __fastcall HakkenshiListController___ctor(HakkenshiListController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_int__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_4215CA1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    byte_4215CA1 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
  this->fields.releaseHakkenshiList = (struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v9;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.releaseHakkenshiList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v18 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v16, v17);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.runningHakkenshiList = v18;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.runningHakkenshiList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.hakkenshiList = (struct System_Collections_Generic_List_GameObject__o *)v27;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.hakkenshiList,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
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
  Il2CppObject *current; // x28
  ExpeditionAssetManager_o *assetData; // x0
  UnityEngine_GameObject_o *StayHakkenshiObj; // x20
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x20
  srcLineSprite_o *Component_srcLineSprite; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v19; // x0
  UnityEngine_Transform_o *v20; // x21
  __int64 v21; // x0
  int v22; // s0
  struct System_Collections_Generic_List_GameObject__o *hakkenshiList; // x0
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4215CA0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__get_Current__, v4);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_HakkenshiAnimationPlayer___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Insert__, v7);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_4215CA0 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  releaseHakkenshiList = this->fields.releaseHakkenshiList;
  if ( !releaseHakkenshiList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)releaseHakkenshiList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
    if ( !v11 )
      break;
    current = v27.fields.current;
    if ( !v27.fields.current )
      sub_B0D97C(v11);
    assetData = this->fields.assetData;
    if ( !assetData )
      sub_B0D97C(0LL);
    StayHakkenshiObj = ExpeditionAssetManager__GetStayHakkenshiObj(assetData, HIDWORD(v27.fields.current[1].klass), 0LL);
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
      v15 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)StayHakkenshiObj,
                                          (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v16 = v15;
      if ( !v15 )
        sub_B0D97C(0LL);
      UnityEngine_GameObject__SetActive(v15, 0, 0LL);
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v16,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_HakkenshiAnimationPlayer___);
      transform = UnityEngine_GameObject__get_transform(v16, 0LL);
      if ( !transform )
        sub_B0D97C(0LL);
      UnityEngine_Transform__SetParent(transform, this->fields.hakkenshiContainer, 0LL);
      v19 = UnityEngine_GameObject__get_transform(v16, 0LL);
      if ( !Component_srcLineSprite )
        sub_B0D97C(v19);
      if ( !v19 )
        sub_B0D97C(0LL);
      v28.fields.x = *(float *)&Component_srcLineSprite->fields.mtIsUpdate;
      v28.fields.y = *((float *)&Component_srcLineSprite->fields.mtIsUpdate + 1);
      v28.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(v19, v28, 0LL);
      v20 = UnityEngine_GameObject__get_transform(v16, 0LL);
      *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_one(0LL);
      if ( !v20 )
        sub_B0D97C(v21);
      UnityEngine_Transform__set_localScale(v20, *(UnityEngine_Vector3_o *)&v22, 0LL);
      hakkenshiList = this->fields.hakkenshiList;
      if ( !hakkenshiList )
        sub_B0D97C(0LL);
      System_Collections_Generic_List_XWeaponTrail_Element___Insert(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)hakkenshiList,
        SHIDWORD(current[1].klass) / 10 - 1,
        (XWeaponTrail_Element_o *)v16,
        (const MethodInfo_2FC68FC *)Method_System_Collections_Generic_List_GameObject__Insert__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
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
  UnityEngine_Component_o *transform; // x0
  float z; // s8
  float ItemBaseWindowX; // s9
  int v26; // w20
  UnityEngine_GameObject_o *gameObject; // x19
  HakkenshiListController_c *v28; // x8
  int v29; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4215C9D & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&EventItemWindowMaker_TypeInfo, v11);
    sub_B0D8A4(&FSUtility_TypeInfo, v12);
    sub_B0D8A4(&HakkenshiListController_TypeInfo, v13);
    sub_B0D8A4(&int_TypeInfo, v14);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_19339/*"icon_bg_{0}"*/, v16);
    byte_4215C9D = 1;
  }
  this->fields.assetData = assetData;
  this->fields.eventId = eventId;
  sub_B0D840(
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
  v29 = v17;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  v20 = System_String__Format((System_String_o *)StringLiteral_19339/*"icon_bg_{0}"*/, v19, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_27921852(v17, bgSprite, v20, 0LL);
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
      || (v26 = (int)transform,
          (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this->fields.infoPanel,
                                                    0LL)) == 0LL) )
    {
LABEL_27:
      sub_B0D97C(transform);
    }
    v31.fields.y = (float)v26;
    v31.fields.x = ItemBaseWindowX;
    v31.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v31, 0LL);
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( !FSUtility__IsUnderVista(0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v28 = HakkenshiListController_TypeInfo;
    if ( (BYTE3(HakkenshiListController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !HakkenshiListController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo);
      v28 = HakkenshiListController_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(gameObject, v28->static_fields->FULL_SCREEN_BASE_POSITION, 0LL);
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
  if ( (byte_4215C9F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, *(_QWORD *)&Idx);
    this = (HakkenshiListController_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    byte_4215C9F = 1;
  }
  hakkenshiList = v6->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_9;
  size = hakkenshiList->fields._size;
  if ( size < Idx / 10 )
    return;
  v10 = Idx / 10 - 1LL;
  if ( size <= (unsigned int)v10 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  this = (HakkenshiListController_o *)hakkenshiList->fields._items->m_Items[v10];
  if ( !this )
LABEL_9:
    sub_B0D97C(this);
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
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_int__o *v27; // x21
  System_Collections_Generic_List_int__o **p_runningHakkenshiList; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *ReleasePieceEntityList; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UserEventExpeditionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v43; // x1
  struct ExpeditionInfo_array *expeditionInfos; // x21
  int max_length; // w8
  unsigned int v46; // w22
  ExpeditionInfo_o *v47; // x8
  _BOOL8 v48; // x0
  int32_t klass_high; // w21
  _BOOL8 v50; // x0
  struct System_Collections_Generic_List_GameObject__o *v51; // x25
  int size; // w8
  __int64 v53; // x21
  UnityEngine_GameObject_o *v54; // x0
  int v55; // w19
  __int64 v56; // x0
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+8h] [xbp-A8h] BYREF
  int v58[2]; // [xsp+20h] [xbp-90h]
  int v59; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+50h] [xbp-60h] BYREF
  UserEventExpeditionEntity_o *entity; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_4215C9E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Clear__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_B0D8A4(&NetworkManager_TypeInfo, v20);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4215C9E = 1;
  }
  entity = 0LL;
  memset(&v61, 0, sizeof(v61));
  memset(&v60, 0, sizeof(v60));
  v59 = 0;
  hakkenshiList = (int64_t)this->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_44;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v57,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)hakkenshiList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v61 = v57;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v61,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v61.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)current, 0LL);
  }
  v58[0] = 51;
  v59 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v61,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v59 = 0;
  hakkenshiList = (int64_t)this->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_44;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)hakkenshiList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  v27 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v25, v26);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.runningHakkenshiList = v27;
  p_runningHakkenshiList = &this->fields.runningHakkenshiList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.runningHakkenshiList,
    (System_Int32_array **)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  hakkenshiList = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hakkenshiList )
    goto LABEL_44;
  hakkenshiList = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)hakkenshiList,
                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !hakkenshiList )
    goto LABEL_44;
  ReleasePieceEntityList = EventExpeditionPieceMaster__GetReleasePieceEntityList(
                             (EventExpeditionPieceMaster_o *)hakkenshiList,
                             this->fields.eventId,
                             0LL);
  this->fields.releaseHakkenshiList = ReleasePieceEntityList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.releaseHakkenshiList,
    (System_Int32_array **)ReleasePieceEntityList,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  hakkenshiList = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hakkenshiList )
    goto LABEL_44;
  MasterData_WarQuestSelectionMaster = (UserEventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)hakkenshiList,
                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
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
      v46 = 0;
      while ( 1 )
      {
        if ( v46 >= max_length )
        {
          v56 = sub_B0D9A8(hakkenshiList);
          sub_B0D948(v56, 0LL);
        }
        v47 = expeditionInfos->m_Items[v46];
        if ( !v47 )
          break;
        hakkenshiList = (int64_t)*p_runningHakkenshiList;
        if ( !*p_runningHakkenshiList )
          break;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)hakkenshiList,
          v47->fields.pieceIdx,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        max_length = expeditionInfos->max_length;
        if ( (int)++v46 >= max_length )
          goto LABEL_27;
      }
LABEL_44:
      sub_B0D97C(hakkenshiList);
    }
  }
LABEL_27:
  HakkenshiListController__CreateHakkenshiObject(this, v43);
  hakkenshiList = (int64_t)this->fields.releaseHakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_44;
  if ( *(int *)(hakkenshiList + 24) >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v57,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)hakkenshiList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
    v60 = v57;
    while ( 1 )
    {
      v48 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v60,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
      if ( !v48 )
        break;
      if ( !v60.fields.current )
        sub_B0D97C(v48);
      if ( !*p_runningHakkenshiList )
        sub_B0D97C(0LL);
      klass_high = HIDWORD(v60.fields.current[1].klass);
      v50 = System_Collections_Generic_List_int___Contains(
              *p_runningHakkenshiList,
              klass_high,
              (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v50 )
      {
        v51 = this->fields.hakkenshiList;
        if ( !v51 )
          sub_B0D97C(v50);
        size = v51->fields._size;
        if ( size >= klass_high / 10 )
        {
          v53 = klass_high / 10 - 1LL;
          if ( size <= (unsigned int)v53 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v54 = v51->fields._items->m_Items[v53];
          if ( !v54 )
            sub_B0D97C(0LL);
          UnityEngine_GameObject__SetActive(v54, 1, 0LL);
        }
      }
    }
    v58[0] = 311;
    v55 = ++v59;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v60,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
    if ( v55 )
    {
      if ( v58[v55 - 1] == 311 )
        v59 = v55 - 1;
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

  if ( (byte_4215C9C & 1) == 0 )
  {
    sub_B0D8A4(&FSUtility_TypeInfo, method);
    sub_B0D8A4(&HakkenshiListController_TypeInfo, v2);
    byte_4215C9C = 1;
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