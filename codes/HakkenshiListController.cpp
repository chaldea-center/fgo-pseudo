void __fastcall HakkenshiListController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct HakkenshiListController_StaticFields *static_fields; // x8

  if ( (byte_40FC151 & 1) == 0 )
  {
    sub_B16FFC(&HakkenshiListController_TypeInfo, v1);
    byte_40FC151 = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_int__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_40FC150 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v10);
    byte_40FC150 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
  this->fields.releaseHakkenshiList = (struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.releaseHakkenshiList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v22 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v18,
                                                    v19,
                                                    v20,
                                                    v21);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.runningHakkenshiList = v22;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.runningHakkenshiList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v29,
                                                                                                  v30,
                                                                                                  v31,
                                                                                                  v32);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.hakkenshiList = (struct System_Collections_Generic_List_GameObject__o *)v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.hakkenshiList,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
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
  Il2CppObject *current; // x28
  ExpeditionAssetManager_o *assetData; // x0
  UnityEngine_GameObject_o *StayHakkenshiObj; // x20
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x20
  srcLineSprite_o *Component_srcLineSprite; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Transform_o *v19; // x21
  int v20; // s0
  struct System_Collections_Generic_List_GameObject__o *hakkenshiList; // x0
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC14F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__get_Current__, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_HakkenshiAnimationPlayer___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Insert__, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40FC14F = 1;
  }
  memset(&v25, 0, sizeof(v25));
  releaseHakkenshiList = this->fields.releaseHakkenshiList;
  if ( !releaseHakkenshiList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)releaseHakkenshiList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v25,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__) )
  {
    current = v25.fields.current;
    if ( !v25.fields.current )
      sub_B170D4();
    assetData = this->fields.assetData;
    if ( !assetData )
      sub_B170D4();
    StayHakkenshiObj = ExpeditionAssetManager__GetStayHakkenshiObj(assetData, HIDWORD(v25.fields.current[1].klass), 0LL);
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
      v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)StayHakkenshiObj,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v15 = v14;
      if ( !v14 )
        sub_B170D4();
      UnityEngine_GameObject__SetActive(v14, 0, 0LL);
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v15,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_HakkenshiAnimationPlayer___);
      transform = UnityEngine_GameObject__get_transform(v15, 0LL);
      if ( !transform )
        sub_B170D4();
      UnityEngine_Transform__SetParent(transform, this->fields.hakkenshiContainer, 0LL);
      v18 = UnityEngine_GameObject__get_transform(v15, 0LL);
      if ( !Component_srcLineSprite )
        sub_B170D4();
      if ( !v18 )
        sub_B170D4();
      v26.fields.x = *(float *)&Component_srcLineSprite->fields.mtIsUpdate;
      v26.fields.y = *((float *)&Component_srcLineSprite->fields.mtIsUpdate + 1);
      v26.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(v18, v26, 0LL);
      v19 = UnityEngine_GameObject__get_transform(v15, 0LL);
      *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_one(0LL);
      if ( !v19 )
        sub_B170D4();
      UnityEngine_Transform__set_localScale(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
      hakkenshiList = this->fields.hakkenshiList;
      if ( !hakkenshiList )
        sub_B170D4();
      System_Collections_Generic_List_XWeaponTrail_Element___Insert(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)hakkenshiList,
        SHIDWORD(current[1].klass) / 10 - 1,
        (XWeaponTrail_Element_o *)v15,
        (const MethodInfo_2F26EEC *)Method_System_Collections_Generic_List_GameObject__Insert__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
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
  UnityEngine_Component_o *v23; // x0
  UnityEngine_Transform_o *transform; // x0
  float z; // s8
  float ItemBaseWindowX; // s9
  int32_t ItemBaseWindowHeight; // w0
  int v28; // w20
  UnityEngine_Transform_o *v29; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  HakkenshiListController_c *v31; // x8
  int v32; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC14C & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&EventItemWindowMaker_TypeInfo, v11);
    sub_B16FFC(&FSUtility_TypeInfo, v12);
    sub_B16FFC(&HakkenshiListController_TypeInfo, v13);
    sub_B16FFC(&int_TypeInfo, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_19204/*"icon_bg_{0}"*/, v16);
    byte_40FC14C = 1;
  }
  this->fields.assetData = assetData;
  this->fields.eventId = eventId;
  sub_B16F98(
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
  v32 = v17;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
  v20 = System_String__Format((System_String_o *)StringLiteral_19204/*"icon_bg_{0}"*/, v19, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28584872(v17, bgSprite, v20, 0LL);
  HakkenshiListController__RefreshHakkenshiInfo(this, v21);
  infoPanel = (UnityEngine_Object_o *)this->fields.infoPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(infoPanel, 0LL, 0LL) )
  {
    v23 = (UnityEngine_Component_o *)this->fields.infoPanel;
    if ( !v23 )
      goto LABEL_27;
    transform = UnityEngine_Component__get_transform(v23, 0LL);
    if ( !transform )
      goto LABEL_27;
    localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
    z = localPosition.fields.z;
    if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    }
    ItemBaseWindowX = EventItemWindowMaker__GetItemBaseWindowX(0LL);
    ItemBaseWindowHeight = EventItemWindowMaker__GetItemBaseWindowHeight(0, 1, 0LL);
    if ( !this->fields.infoPanel
      || (v28 = ItemBaseWindowHeight,
          (v29 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.infoPanel, 0LL)) == 0LL) )
    {
LABEL_27:
      sub_B170D4();
    }
    v34.fields.y = (float)v28;
    v34.fields.x = ItemBaseWindowX;
    v34.fields.z = z;
    UnityEngine_Transform__set_localPosition(v29, v34, 0LL);
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( !FSUtility__IsUnderVista(0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v31 = HakkenshiListController_TypeInfo;
    if ( (BYTE3(HakkenshiListController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !HakkenshiListController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo);
      v31 = HakkenshiListController_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(gameObject, v31->static_fields->FULL_SCREEN_BASE_POSITION, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HakkenshiListController__DisplayHakkenshiObj(
        HakkenshiListController_o *this,
        int32_t Idx,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_List_GameObject__o *hakkenshiList; // x21
  int size; // w8
  __int64 v10; // x20
  UnityEngine_GameObject_o *v11; // x0

  if ( (byte_40FC14E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, *(_QWORD *)&Idx);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    byte_40FC14E = 1;
  }
  hakkenshiList = this->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_9;
  size = hakkenshiList->fields._size;
  if ( size < Idx / 10 )
    return;
  v10 = Idx / 10 - 1LL;
  if ( size <= (unsigned int)v10 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v11 = hakkenshiList->fields._items->m_Items[v10];
  if ( !v11 )
LABEL_9:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v11, isDisp, 0LL);
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
  struct System_Collections_Generic_List_GameObject__o *hakkenshiList; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_List_int__o *v30; // x21
  System_Collections_Generic_List_int__o **p_runningHakkenshiList; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  WebViewManager_o *Instance; // x0
  EventExpeditionPieceMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *ReleasePieceEntityList; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  WebViewManager_o *v47; // x0
  UserEventExpeditionMaster_o *v48; // x21
  int64_t UserId; // x0
  _BOOL8 v50; // x0
  const MethodInfo *v51; // x1
  __int64 v52; // x2
  struct ExpeditionInfo_array *expeditionInfos; // x21
  int max_length; // w8
  unsigned int v55; // w22
  ExpeditionInfo_o *v56; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *releaseHakkenshiList; // x0
  int32_t klass_high; // w21
  struct System_Collections_Generic_List_GameObject__o *v59; // x25
  int size; // w8
  __int64 v61; // x21
  UnityEngine_GameObject_o *v62; // x0
  int v63; // w19
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+8h] [xbp-A8h] BYREF
  int v65[2]; // [xsp+20h] [xbp-90h]
  int v66; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+50h] [xbp-60h] BYREF
  UserEventExpeditionEntity_o *entity; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_40FC14D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v18);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_B16FFC(&NetworkManager_TypeInfo, v20);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_40FC14D = 1;
  }
  entity = 0LL;
  memset(&v68, 0, sizeof(v68));
  memset(&v67, 0, sizeof(v67));
  v66 = 0;
  hakkenshiList = this->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_44;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v64,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)hakkenshiList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v68 = v64;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v68,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v68.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
  }
  v65[0] = 51;
  v66 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v68,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v66 = 0;
  v25 = this->fields.hakkenshiList;
  if ( !v25 )
    goto LABEL_44;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v25,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  v30 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v26,
                                                    v27,
                                                    v28,
                                                    v29);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.runningHakkenshiList = v30;
  p_runningHakkenshiList = &this->fields.runningHakkenshiList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.runningHakkenshiList,
    (System_Int32_array **)v30,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  MasterData_WarQuestSelectionMaster = (EventExpeditionPieceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_44;
  ReleasePieceEntityList = EventExpeditionPieceMaster__GetReleasePieceEntityList(
                             MasterData_WarQuestSelectionMaster,
                             this->fields.eventId,
                             0LL);
  this->fields.releaseHakkenshiList = ReleasePieceEntityList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.releaseHakkenshiList,
    (System_Int32_array **)ReleasePieceEntityList,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v47 )
    goto LABEL_44;
  v48 = (UserEventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v47,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v48 )
    goto LABEL_44;
  v50 = UserEventExpeditionMaster__TryGetEntity(v48, &entity, UserId, this->fields.eventId, 0LL);
  if ( v50 )
  {
    if ( !entity )
      goto LABEL_44;
    expeditionInfos = entity->fields.expeditionInfos;
    if ( !expeditionInfos )
      goto LABEL_44;
    max_length = expeditionInfos->max_length;
    if ( max_length >= 1 )
    {
      v55 = 0;
      while ( 1 )
      {
        if ( v55 >= max_length )
        {
          sub_B17100(v50, v51, v52);
          sub_B170A0();
        }
        v56 = expeditionInfos->m_Items[v55];
        if ( !v56 || !*p_runningHakkenshiList )
          break;
        System_Collections_Generic_List_int___Add(
          *p_runningHakkenshiList,
          v56->fields.pieceIdx,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        max_length = expeditionInfos->max_length;
        if ( (int)++v55 >= max_length )
          goto LABEL_27;
      }
LABEL_44:
      sub_B170D4();
    }
  }
LABEL_27:
  HakkenshiListController__CreateHakkenshiObject(this, v51);
  releaseHakkenshiList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.releaseHakkenshiList;
  if ( !releaseHakkenshiList )
    goto LABEL_44;
  if ( releaseHakkenshiList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v64,
      releaseHakkenshiList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
    v67 = v64;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v67,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__) )
    {
      if ( !v67.fields.current )
        sub_B170D4();
      if ( !*p_runningHakkenshiList )
        sub_B170D4();
      klass_high = HIDWORD(v67.fields.current[1].klass);
      if ( !System_Collections_Generic_List_int___Contains(
              *p_runningHakkenshiList,
              klass_high,
              (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        v59 = this->fields.hakkenshiList;
        if ( !v59 )
          sub_B170D4();
        size = v59->fields._size;
        if ( size >= klass_high / 10 )
        {
          v61 = klass_high / 10 - 1LL;
          if ( size <= (unsigned int)v61 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v62 = v59->fields._items->m_Items[v61];
          if ( !v62 )
            sub_B170D4();
          UnityEngine_GameObject__SetActive(v62, 1, 0LL);
        }
      }
    }
    v65[0] = 311;
    v63 = ++v66;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v67,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
    if ( v63 )
    {
      if ( v65[v63 - 1] == 311 )
        v66 = v63 - 1;
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

  if ( (byte_40FC14B & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    sub_B16FFC(&HakkenshiListController_TypeInfo, v2);
    byte_40FC14B = 1;
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