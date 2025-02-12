void __fastcall HakkenshiListController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct HakkenshiListController_StaticFields *static_fields; // x8

  if ( (byte_4BCBA3A & 1) == 0 )
  {
    sub_1C1ABD4(&HakkenshiListController_TypeInfo, v1);
    byte_4BCBA3A = 1;
  }
  static_fields = HakkenshiListController_TypeInfo->static_fields;
  static_fields->FULL_SCREEN_BASE_POSITION.fields.z = 0.0;
  *(_QWORD *)&static_fields->BASE_WINDOW_HEIGHT = 0x21FFFFFFABLL;
  *(_QWORD *)&static_fields->FULL_SCREEN_BASE_POSITION.fields.x = 0x42400000C3580000LL;
}


void __fastcall HakkenshiListController___ctor(HakkenshiListController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_List_int__o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4BCBA39 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1C1ABD4(&System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo, v6);
    sub_1C1ABD4(&System_Collections_Generic_List_GameObject__TypeInfo, v7);
    byte_4BCBA39 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
  this->fields.releaseHakkenshiList = (struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v8;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.releaseHakkenshiList,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.runningHakkenshiList = v15;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.runningHakkenshiList,
    (int64_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.hakkenshiList = (struct System_Collections_Generic_List_GameObject__o *)v22;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.hakkenshiList, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall HakkenshiListController__Awake(HakkenshiListController_o *this, const MethodInfo *method)
{
  ;
}


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
  System_Collections_Generic_List_object__o *releaseHakkenshiList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  Il2CppObject *current; // x26
  ExpeditionAssetManager_o *assetData; // x0
  Il2CppObject *StayHakkenshiObj; // x21
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  UnityEngine_GameObject_o *v19; // x21
  Il2CppObject *Component_object; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v22; // x1
  UnityEngine_Transform_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x0
  __int64 v26; // x1
  UnityEngine_Transform_o *v27; // x22
  __int64 v28; // x1
  struct System_Collections_Generic_List_GameObject__o *hakkenshiList; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BCBA38 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__get_Current__, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_HakkenshiAnimationPlayer___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__Insert__, v7);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v9);
    byte_4BCBA38 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  releaseHakkenshiList = (System_Collections_Generic_List_object__o *)this->fields.releaseHakkenshiList;
  if ( !releaseHakkenshiList )
    sub_1C1AE30(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    releaseHakkenshiList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
  v31 = v30;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
    if ( !v11 )
      break;
    current = v31.fields._current;
    if ( !v31.fields._current )
      sub_1C1AE30(v11, v12);
    assetData = this->fields.assetData;
    if ( !assetData )
      sub_1C1AE30(0LL, v12);
    StayHakkenshiObj = (Il2CppObject *)ExpeditionAssetManager__GetStayHakkenshiObj(
                                         assetData,
                                         HIDWORD(v31.fields._current[1].klass),
                                         v13);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)StayHakkenshiObj, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v17 = UnityEngine_Object__Instantiate_object_(
              StayHakkenshiObj,
              (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v19 = (UnityEngine_GameObject_o *)v17;
      if ( !v17 )
        sub_1C1AE30(0LL, v18);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v17, 0, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v19,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_HakkenshiAnimationPlayer___);
      transform = UnityEngine_GameObject__get_transform(v19, 0LL);
      if ( !transform )
        sub_1C1AE30(0LL, v22);
      UnityEngine_Transform__SetParent(transform, this->fields.hakkenshiContainer, 0LL);
      v23 = UnityEngine_GameObject__get_transform(v19, 0LL);
      if ( !Component_object )
        sub_1C1AE30(v23, v24);
      if ( !v23 )
        sub_1C1AE30(0LL, v24);
      v32.fields.x = *(float *)&Component_object[2].monitor;
      v32.fields.y = *((float *)&Component_object[2].monitor + 1);
      v32.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(v23, v32, 0LL);
      v25 = (__int64)UnityEngine_GameObject__get_transform(v19, 0LL);
      v27 = (UnityEngine_Transform_o *)v25;
      if ( !byte_4BC2146 )
      {
        v25 = sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v26);
        byte_4BC2146 = 1;
      }
      if ( !v27 )
        sub_1C1AE30(v25, v26);
      UnityEngine_Transform__set_localScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      hakkenshiList = this->fields.hakkenshiList;
      if ( !hakkenshiList )
        sub_1C1AE30(0LL, v28);
      System_Collections_Generic_List_object___Insert(
        (System_Collections_Generic_List_object__o *)hakkenshiList,
        SHIDWORD(current[1].klass) / 10 - 1,
        (Il2CppObject *)v19,
        (const MethodInfo_363D640 *)Method_System_Collections_Generic_List_GameObject__Insert__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HakkenshiListController__CreateHakkenshiWindow(
        HakkenshiListController_o *this,
        int32_t eventId,
        ExpeditionAssetManager_o *assetData,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int v17; // w20
  UISprite_o *bgSprite; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  System_String_o *v23; // x22
  const MethodInfo *v24; // x1
  UnityEngine_Object_o *infoPanel; // x20
  __int64 v26; // x1
  UnityEngine_Component_o *transform; // x0
  float z; // s8
  float ItemBaseWindowX; // s9
  int v30; // w20
  UnityEngine_GameObject_o *gameObject; // x19
  HakkenshiListController_c *v32; // x8
  int v33; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BCBA35 & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1C1ABD4(&EventItemWindowMaker_TypeInfo, v11);
    sub_1C1ABD4(&FSUtility_TypeInfo, v12);
    sub_1C1ABD4(&HakkenshiListController_TypeInfo, v13);
    sub_1C1ABD4(&int_TypeInfo, v14);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v15);
    sub_1C1ABD4(&StringLiteral_20420/*"icon_bg_{0}"*/, v16);
    byte_4BCBA35 = 1;
  }
  this->fields.assetData = assetData;
  this->fields.eventId = eventId;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.assetData,
    (int64_t)assetData,
    (int64_t)assetData,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v17 = this->fields.eventId;
  bgSprite = this->fields.bgSprite;
  v33 = v17;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v19, v20, v21);
  v23 = System_String__Format((System_String_o *)StringLiteral_20420/*"icon_bg_{0}"*/, v22, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_39058000(v17, bgSprite, v23, 0LL);
  HakkenshiListController__RefreshHakkenshiInfo(this, v24);
  infoPanel = (UnityEngine_Object_o *)this->fields.infoPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoPanel, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.infoPanel;
    if ( !transform )
      goto LABEL_22;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_22;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    z = localPosition.fields.z;
    if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    ItemBaseWindowX = EventItemWindowMaker__GetItemBaseWindowX(0LL);
    transform = (UnityEngine_Component_o *)EventItemWindowMaker__GetItemBaseWindowHeight(0, 1, 0LL);
    if ( !this->fields.infoPanel
      || (v30 = (int)transform,
          (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this->fields.infoPanel,
                                                    0LL)) == 0LL) )
    {
LABEL_22:
      sub_1C1AE30(transform, v26);
    }
    v35.fields.y = (float)v30;
    v35.fields.x = ItemBaseWindowX;
    v35.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v35, 0LL);
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( !FSUtility__IsUnderVista(0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v32 = HakkenshiListController_TypeInfo;
    if ( !HakkenshiListController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo);
      v32 = HakkenshiListController_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(gameObject, v32->static_fields->FULL_SCREEN_BASE_POSITION, 0LL);
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
  System_Collections_Generic_List_object__o *hakkenshiList; // x0

  if ( (byte_4BCBA37 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Count__, *(_QWORD *)&Idx);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    byte_4BCBA37 = 1;
  }
  hakkenshiList = (System_Collections_Generic_List_object__o *)this->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_7;
  if ( hakkenshiList->fields._size < Idx / 10 )
    return;
  hakkenshiList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 hakkenshiList,
                                                                 Idx / 10 - 1,
                                                                 (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !hakkenshiList )
LABEL_7:
    sub_1C1AE30(hakkenshiList, *(_QWORD *)&Idx);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hakkenshiList, isDisp, 0LL);
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
  System_Collections_Generic_List_object__o *hakkenshiList; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v25; // x8
  int32_t size; // w2
  int v27; // w9
  System_Collections_Generic_List_int__o *v28; // x21
  System_Collections_Generic_List_int__o **p_runningHakkenshiList; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *ReleasePieceEntityList; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  Il2CppObject *MasterData_object; // x21
  struct ExpeditionInfo_array *expeditionInfos; // x21
  int max_length; // w8
  unsigned int v46; // w22
  ExpeditionInfo_o *v47; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  _BOOL8 v51; // x0
  __int64 v52; // x1
  int32_t klass_high; // w21
  _BOOL8 v54; // x0
  __int64 v55; // x1
  struct System_Collections_Generic_List_GameObject__o *v56; // x8
  Il2CppObject *Item; // x0
  __int64 v58; // x1
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+40h] [xbp-80h] BYREF
  UserEventExpeditionEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4BCBA36 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__get_Current__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__Clear__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v18);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v20);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v21);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4BCBA36 = 1;
  }
  entity = 0LL;
  memset(&v61, 0, sizeof(v61));
  memset(&v60, 0, sizeof(v60));
  hakkenshiList = (System_Collections_Generic_List_object__o *)this->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_48;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    hakkenshiList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v61 = v59;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v61,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v61.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70794412((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v61,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v25 = this->fields.hakkenshiList;
  if ( !v25 )
    goto LABEL_48;
  size = v25->fields._size;
  v27 = v25->fields._version + 1;
  v25->fields._size = 0;
  v25->fields._version = v27;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v25->fields._items, 0, size, 0LL);
  v28 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.runningHakkenshiList = v28;
  p_runningHakkenshiList = &this->fields.runningHakkenshiList;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.runningHakkenshiList,
    (int64_t)v28,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  hakkenshiList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hakkenshiList )
    goto LABEL_48;
  hakkenshiList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)hakkenshiList,
                                                                 (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !hakkenshiList )
    goto LABEL_48;
  ReleasePieceEntityList = EventExpeditionPieceMaster__GetReleasePieceEntityList(
                             (EventExpeditionPieceMaster_o *)hakkenshiList,
                             this->fields.eventId,
                             0LL);
  this->fields.releaseHakkenshiList = ReleasePieceEntityList;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.releaseHakkenshiList,
    (int64_t)ReleasePieceEntityList,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  hakkenshiList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hakkenshiList )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)hakkenshiList,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    byte_4BC2585 = 1;
  }
  hakkenshiList = (System_Collections_Generic_List_object__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    hakkenshiList = (System_Collections_Generic_List_object__o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_48;
  hakkenshiList = (System_Collections_Generic_List_object__o *)UserEventExpeditionMaster__TryGetEntity(
                                                                 (UserEventExpeditionMaster_o *)MasterData_object,
                                                                 &entity,
                                                                 *(_QWORD *)(*(_QWORD *)&hakkenshiList[4].fields._size
                                                                           + 64LL),
                                                                 this->fields.eventId,
                                                                 0LL);
  if ( ((unsigned __int8)hakkenshiList & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_48;
    expeditionInfos = entity->fields.expeditionInfos;
    if ( !expeditionInfos )
      goto LABEL_48;
    max_length = expeditionInfos->max_length;
    if ( max_length >= 1 )
    {
      v46 = 0;
      while ( 1 )
      {
        if ( v46 >= max_length )
          sub_1C1AE38(hakkenshiList, method);
        v47 = expeditionInfos->m_Items[v46];
        if ( !v47 )
          break;
        hakkenshiList = (System_Collections_Generic_List_object__o *)*p_runningHakkenshiList;
        if ( !*p_runningHakkenshiList )
          break;
        method = (const MethodInfo *)(unsigned int)v47->fields.pieceIdx;
        items = (struct System_Int32_array *)hakkenshiList->fields._items;
        v49 = Method_System_Collections_Generic_List_int__Add__;
        ++hakkenshiList->fields._version;
        if ( !items )
          break;
        v50 = hakkenshiList->fields._size;
        if ( (unsigned int)v50 >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)hakkenshiList,
            (int32_t)method,
            *(const MethodInfo_361F86C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          hakkenshiList->fields._size = v50 + 1;
          items->m_Items[v50 + 1] = (int)method;
        }
        max_length = expeditionInfos->max_length;
        if ( (int)++v46 >= max_length )
          goto LABEL_35;
      }
LABEL_48:
      sub_1C1AE30(hakkenshiList, method);
    }
  }
LABEL_35:
  HakkenshiListController__CreateHakkenshiObject(this, method);
  hakkenshiList = (System_Collections_Generic_List_object__o *)this->fields.releaseHakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_48;
  if ( hakkenshiList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v59,
      hakkenshiList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
    v60 = v59;
    while ( 1 )
    {
      v51 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v60,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
      if ( !v51 )
        break;
      if ( !v60.fields._current )
        sub_1C1AE30(v51, v52);
      if ( !*p_runningHakkenshiList )
        sub_1C1AE30(0LL, v52);
      klass_high = HIDWORD(v60.fields._current[1].klass);
      v54 = System_Collections_Generic_List_int___Contains(
              *p_runningHakkenshiList,
              klass_high,
              (const MethodInfo_361FBE4 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v54 )
      {
        v56 = this->fields.hakkenshiList;
        if ( !v56 )
          sub_1C1AE30(v54, v55);
        if ( v56->fields._size >= klass_high / 10 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this->fields.hakkenshiList,
                   klass_high / 10 - 1,
                   (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !Item )
            sub_1C1AE30(0LL, v58);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, 1, 0LL);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v60,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
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

  if ( (byte_4BCBA34 & 1) == 0 )
  {
    sub_1C1ABD4(&FSUtility_TypeInfo, method);
    sub_1C1ABD4(&HakkenshiListController_TypeInfo, v2);
    byte_4BCBA34 = 1;
  }
  v3 = HakkenshiListController_TypeInfo;
  if ( !HakkenshiListController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo);
    v3 = HakkenshiListController_TypeInfo;
  }
  BASE_WINDOW_HEIGHT = v3->static_fields->BASE_WINDOW_HEIGHT;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    ADD_HEIGHT = 0;
  }
  else
  {
    v6 = HakkenshiListController_TypeInfo;
    if ( !HakkenshiListController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo);
      v6 = HakkenshiListController_TypeInfo;
    }
    ADD_HEIGHT = v6->static_fields->ADD_HEIGHT;
  }
  return ADD_HEIGHT + BASE_WINDOW_HEIGHT;
}