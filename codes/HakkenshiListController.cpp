void __fastcall HakkenshiListController___cctor(const MethodInfo *method)
{
  struct HakkenshiListController_StaticFields *static_fields; // x8

  if ( (byte_4353195 & 1) == 0 )
  {
    sub_B70694(&HakkenshiListController_TypeInfo);
    byte_4353195 = 1;
  }
  HakkenshiListController_TypeInfo->static_fields->BASE_WINDOW_HEIGHT = -85;
  HakkenshiListController_TypeInfo->static_fields->ADD_HEIGHT = 33;
  static_fields = HakkenshiListController_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FULL_SCREEN_BASE_POSITION.fields.x = 0x42400000C3580000LL;
  static_fields->FULL_SCREEN_BASE_POSITION.fields.z = 0.0;
}


void __fastcall HakkenshiListController___ctor(HakkenshiListController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_int__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4353194 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4353194 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
  this->fields.releaseHakkenshiList = (struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.releaseHakkenshiList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.runningHakkenshiList = v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.runningHakkenshiList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.hakkenshiList = (struct System_Collections_Generic_List_GameObject__o *)v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.hakkenshiList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *releaseHakkenshiList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x28
  ExpeditionAssetManager_o *assetData; // x0
  UnityEngine_GameObject_o *StayHakkenshiObj; // x20
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x20
  srcLineSprite_o *Component_srcLineSprite; // x21
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  UnityEngine_Transform_o *v15; // x0
  __int64 v16; // x1
  UnityEngine_Transform_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  int v20; // s0
  __int64 v23; // x1
  struct System_Collections_Generic_List_GameObject__o *hakkenshiList; // x0
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4353193 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_HakkenshiAnimationPlayer___);
    sub_B70694(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Insert__);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353193 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  releaseHakkenshiList = this->fields.releaseHakkenshiList;
  if ( !releaseHakkenshiList )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)releaseHakkenshiList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v26,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
    if ( !v4 )
      break;
    current = v26.fields.current;
    if ( !v26.fields.current )
      sub_B7076C(v4, v5);
    assetData = this->fields.assetData;
    if ( !assetData )
      sub_B7076C(0LL, v5);
    StayHakkenshiObj = ExpeditionAssetManager__GetStayHakkenshiObj(assetData, HIDWORD(v26.fields.current[1].klass), 0LL);
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
      v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         (UnityEngine_UI_Dropdown_DropdownItem_o *)StayHakkenshiObj,
                                         (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v11 = v9;
      if ( !v9 )
        sub_B7076C(0LL, v10);
      UnityEngine_GameObject__SetActive(v9, 0, 0LL);
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v11,
                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_HakkenshiAnimationPlayer___);
      transform = UnityEngine_GameObject__get_transform(v11, 0LL);
      if ( !transform )
        sub_B7076C(0LL, v14);
      UnityEngine_Transform__SetParent(transform, this->fields.hakkenshiContainer, 0LL);
      v15 = UnityEngine_GameObject__get_transform(v11, 0LL);
      if ( !Component_srcLineSprite )
        sub_B7076C(v15, v16);
      if ( !v15 )
        sub_B7076C(0LL, v16);
      v27.fields.x = *(float *)&Component_srcLineSprite->fields.mtIsUpdate;
      v27.fields.y = *((float *)&Component_srcLineSprite->fields.mtIsUpdate + 1);
      v27.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(v15, v27, 0LL);
      v17 = UnityEngine_GameObject__get_transform(v11, 0LL);
      *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_one(0LL);
      if ( !v17 )
        sub_B7076C(v18, v19);
      UnityEngine_Transform__set_localScale(v17, *(UnityEngine_Vector3_o *)&v20, 0LL);
      hakkenshiList = this->fields.hakkenshiList;
      if ( !hakkenshiList )
        sub_B7076C(0LL, v23);
      System_Collections_Generic_List_XWeaponTrail_Element___Insert(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)hakkenshiList,
        SHIDWORD(current[1].klass) / 10 - 1,
        (XWeaponTrail_Element_o *)v11,
        (const MethodInfo_302689C *)Method_System_Collections_Generic_List_GameObject__Insert__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
}


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
  int v11; // w20
  UISprite_o *bgSprite; // x21
  __int64 v13; // x2
  Il2CppObject *v14; // x0
  System_String_o *v15; // x22
  const MethodInfo *v16; // x1
  UnityEngine_Object_o *infoPanel; // x20
  __int64 v18; // x1
  UnityEngine_Component_o *transform; // x0
  float z; // s8
  float ItemBaseWindowX; // s9
  int v22; // w20
  UnityEngine_GameObject_o *gameObject; // x19
  HakkenshiListController_c *v24; // x8
  int v25; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4353190 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&EventItemWindowMaker_TypeInfo);
    sub_B70694(&FSUtility_TypeInfo);
    sub_B70694(&HakkenshiListController_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_19580/*"icon_bg_{0}"*/);
    byte_4353190 = 1;
  }
  this->fields.assetData = assetData;
  this->fields.eventId = eventId;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.assetData,
    (System_Int32_array **)assetData,
    (System_String_array **)assetData,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v11 = this->fields.eventId;
  bgSprite = this->fields.bgSprite;
  v25 = v11;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v13);
  v15 = System_String__Format((System_String_o *)StringLiteral_19580/*"icon_bg_{0}"*/, v14, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_31552376(v11, bgSprite, v15, 0LL);
  HakkenshiListController__RefreshHakkenshiInfo(this, v16);
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
      || (v22 = (int)transform,
          (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this->fields.infoPanel,
                                                    0LL)) == 0LL) )
    {
LABEL_27:
      sub_B7076C(transform, v18);
    }
    v27.fields.y = (float)v22;
    v27.fields.x = ItemBaseWindowX;
    v27.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v27, 0LL);
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( !FSUtility__IsUnderVista(0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v24 = HakkenshiListController_TypeInfo;
    if ( (BYTE3(HakkenshiListController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !HakkenshiListController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo);
      v24 = HakkenshiListController_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(gameObject, v24->static_fields->FULL_SCREEN_BASE_POSITION, 0LL);
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
  struct System_Collections_Generic_List_GameObject__o *hakkenshiList; // x21
  int size; // w8
  __int64 v9; // x20

  v6 = this;
  if ( (byte_4353192 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (HakkenshiListController_o *)sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4353192 = 1;
  }
  hakkenshiList = v6->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_9;
  size = hakkenshiList->fields._size;
  if ( size < Idx / 10 )
    return;
  v9 = Idx / 10 - 1LL;
  if ( size <= (unsigned int)v9 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  this = (HakkenshiListController_o *)hakkenshiList->fields._items->m_Items[v9];
  if ( !this )
LABEL_9:
    sub_B7076C(this, *(_QWORD *)&Idx);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isDisp, 0LL);
}


void __fastcall HakkenshiListController__RefreshHakkenshiInfo(
        HakkenshiListController_o *this,
        const MethodInfo *method)
{
  int64_t hakkenshiList; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_int__o *v5; // x21
  System_Collections_Generic_List_int__o **p_runningHakkenshiList; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *ReleasePieceEntityList; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UserEventExpeditionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct ExpeditionInfo_array *expeditionInfos; // x21
  int max_length; // w8
  unsigned int v23; // w22
  ExpeditionInfo_o *v24; // x8
  _BOOL8 v25; // x0
  __int64 v26; // x1
  int32_t klass_high; // w21
  _BOOL8 v28; // x0
  __int64 v29; // x1
  struct System_Collections_Generic_List_GameObject__o *v30; // x25
  int size; // w8
  __int64 v32; // x21
  UnityEngine_GameObject_o *v33; // x0
  int v34; // w19
  __int64 v35; // x0
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-A8h] BYREF
  int v37[2]; // [xsp+20h] [xbp-90h]
  int v38; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+50h] [xbp-60h] BYREF
  UserEventExpeditionEntity_o *entity; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_4353191 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353191 = 1;
  }
  entity = 0LL;
  memset(&v40, 0, sizeof(v40));
  memset(&v39, 0, sizeof(v39));
  v38 = 0;
  hakkenshiList = (int64_t)this->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_44;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)hakkenshiList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v40 = v36;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v40.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208((UnityEngine_Object_o *)current, 0LL);
  }
  v37[0] = 51;
  v38 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v38 = 0;
  hakkenshiList = (int64_t)this->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_44;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)hakkenshiList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  v5 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.runningHakkenshiList = v5;
  p_runningHakkenshiList = &this->fields.runningHakkenshiList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.runningHakkenshiList,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  hakkenshiList = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hakkenshiList )
    goto LABEL_44;
  hakkenshiList = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)hakkenshiList,
                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !hakkenshiList )
    goto LABEL_44;
  ReleasePieceEntityList = EventExpeditionPieceMaster__GetReleasePieceEntityList(
                             (EventExpeditionPieceMaster_o *)hakkenshiList,
                             this->fields.eventId,
                             0LL);
  this->fields.releaseHakkenshiList = ReleasePieceEntityList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.releaseHakkenshiList,
    (System_Int32_array **)ReleasePieceEntityList,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  hakkenshiList = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hakkenshiList )
    goto LABEL_44;
  MasterData_WarQuestSelectionMaster = (UserEventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)hakkenshiList,
                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
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
      v23 = 0;
      while ( 1 )
      {
        if ( v23 >= max_length )
        {
          v35 = sub_B70798(hakkenshiList);
          sub_B70738(v35, 0LL);
        }
        v24 = expeditionInfos->m_Items[v23];
        if ( !v24 )
          break;
        hakkenshiList = (int64_t)*p_runningHakkenshiList;
        if ( !*p_runningHakkenshiList )
          break;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)hakkenshiList,
          v24->fields.pieceIdx,
          (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
        max_length = expeditionInfos->max_length;
        if ( (int)++v23 >= max_length )
          goto LABEL_27;
      }
LABEL_44:
      sub_B7076C(hakkenshiList, method);
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
      &v36,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)hakkenshiList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
    v39 = v36;
    while ( 1 )
    {
      v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v39,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
      if ( !v25 )
        break;
      if ( !v39.fields.current )
        sub_B7076C(v25, v26);
      if ( !*p_runningHakkenshiList )
        sub_B7076C(0LL, v26);
      klass_high = HIDWORD(v39.fields.current[1].klass);
      v28 = System_Collections_Generic_List_int___Contains(
              *p_runningHakkenshiList,
              klass_high,
              (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v28 )
      {
        v30 = this->fields.hakkenshiList;
        if ( !v30 )
          sub_B7076C(v28, v29);
        size = v30->fields._size;
        if ( size >= klass_high / 10 )
        {
          v32 = klass_high / 10 - 1LL;
          if ( size <= (unsigned int)v32 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v33 = v30->fields._items->m_Items[v32];
          if ( !v33 )
            sub_B7076C(0LL, v29);
          UnityEngine_GameObject__SetActive(v33, 1, 0LL);
        }
      }
    }
    v37[0] = 311;
    v34 = ++v38;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v39,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
    if ( v34 )
    {
      if ( v37[v34 - 1] == 311 )
        v38 = v34 - 1;
    }
  }
}


int32_t __fastcall HakkenshiListController__get_HakkenshiBaseWindowHeight(
        HakkenshiListController_o *this,
        const MethodInfo *method)
{
  HakkenshiListController_c *v2; // x0
  int32_t BASE_WINDOW_HEIGHT; // w20
  int32_t ADD_HEIGHT; // w8
  HakkenshiListController_c *v5; // x0

  if ( (byte_435318F & 1) == 0 )
  {
    sub_B70694(&FSUtility_TypeInfo);
    sub_B70694(&HakkenshiListController_TypeInfo);
    byte_435318F = 1;
  }
  v2 = HakkenshiListController_TypeInfo;
  if ( (BYTE3(HakkenshiListController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !HakkenshiListController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo);
    v2 = HakkenshiListController_TypeInfo;
  }
  BASE_WINDOW_HEIGHT = v2->static_fields->BASE_WINDOW_HEIGHT;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    ADD_HEIGHT = 0;
  }
  else
  {
    v5 = HakkenshiListController_TypeInfo;
    if ( (BYTE3(HakkenshiListController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !HakkenshiListController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo);
      v5 = HakkenshiListController_TypeInfo;
    }
    ADD_HEIGHT = v5->static_fields->ADD_HEIGHT;
  }
  return ADD_HEIGHT + BASE_WINDOW_HEIGHT;
}