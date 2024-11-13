void __fastcall HakkenshiListController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct HakkenshiListController_StaticFields *static_fields; // x8

  if ( (byte_4B1A0AB & 1) == 0 )
  {
    sub_1BCA7E0(&HakkenshiListController_TypeInfo, v1, v2);
    byte_4B1A0AB = 1;
  }
  static_fields = HakkenshiListController_TypeInfo->static_fields;
  static_fields->FULL_SCREEN_BASE_POSITION.fields.z = 0.0;
  *(_QWORD *)&static_fields->BASE_WINDOW_HEIGHT = 0x21FFFFFFABLL;
  *(_QWORD *)&static_fields->FULL_SCREEN_BASE_POSITION.fields.x = 0x42400000C3580000LL;
}


void __fastcall HakkenshiListController___ctor(HakkenshiListController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_Generic_List_int__o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Collections_Generic_List_object__o *v35; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4B1A0AA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v13, v14);
    byte_4B1A0AA = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
  this->fields.releaseHakkenshiList = (struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v15;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.releaseHakkenshiList,
    (int64_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v25 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v22,
                                                    v23,
                                                    v24);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.runningHakkenshiList = v25;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.runningHakkenshiList,
    (int64_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v32,
                                                       v33,
                                                       v34);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.hakkenshiList = (struct System_Collections_Generic_List_GameObject__o *)v35;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.hakkenshiList, (int64_t)v35, v36, v37, v38, v39, v40, v41);
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
  System_Collections_Generic_List_object__o *releaseHakkenshiList; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  Il2CppObject *current; // x26
  ExpeditionAssetManager_o *assetData; // x0
  __int64 v24; // x1
  Il2CppObject *StayHakkenshiObj; // x21
  __int64 v26; // x1
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  UnityEngine_GameObject_o *v29; // x21
  Il2CppObject *Component_object; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v32; // x1
  UnityEngine_Transform_o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  UnityEngine_Transform_o *v38; // x22
  __int64 v39; // x1
  struct System_Collections_Generic_List_GameObject__o *hakkenshiList; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1A0A9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_HakkenshiAnimationPlayer___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Insert__, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    byte_4B1A0A9 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  releaseHakkenshiList = (System_Collections_Generic_List_object__o *)this->fields.releaseHakkenshiList;
  if ( !releaseHakkenshiList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    releaseHakkenshiList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
  v42 = v41;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
    if ( !v19 )
      break;
    current = v42.fields._current;
    if ( !v42.fields._current )
      sub_1BCAA3C(v19, v20);
    assetData = this->fields.assetData;
    if ( !assetData )
      sub_1BCAA3C(0LL, v20);
    StayHakkenshiObj = (Il2CppObject *)ExpeditionAssetManager__GetStayHakkenshiObj(
                                         assetData,
                                         HIDWORD(v42.fields._current[1].klass),
                                         v21);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)StayHakkenshiObj, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
      v27 = UnityEngine_Object__Instantiate_object_(
              StayHakkenshiObj,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v29 = (UnityEngine_GameObject_o *)v27;
      if ( !v27 )
        sub_1BCAA3C(0LL, v28);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v27, 0, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v29,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_HakkenshiAnimationPlayer___);
      transform = UnityEngine_GameObject__get_transform(v29, 0LL);
      if ( !transform )
        sub_1BCAA3C(0LL, v32);
      UnityEngine_Transform__SetParent(transform, this->fields.hakkenshiContainer, 0LL);
      v33 = UnityEngine_GameObject__get_transform(v29, 0LL);
      if ( !Component_object )
        sub_1BCAA3C(v33, v34);
      if ( !v33 )
        sub_1BCAA3C(0LL, v34);
      v43.fields.x = *(float *)&Component_object[2].monitor;
      v43.fields.y = *((float *)&Component_object[2].monitor + 1);
      v43.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(v33, v43, 0LL);
      v35 = (__int64)UnityEngine_GameObject__get_transform(v29, 0LL);
      v38 = (UnityEngine_Transform_o *)v35;
      if ( !byte_4B109C6 )
      {
        v35 = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v36, v37);
        byte_4B109C6 = 1;
      }
      if ( !v38 )
        sub_1BCAA3C(v35, v36);
      UnityEngine_Transform__set_localScale(v38, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      hakkenshiList = this->fields.hakkenshiList;
      if ( !hakkenshiList )
        sub_1BCAA3C(0LL, v39);
      System_Collections_Generic_List_object___Insert(
        (System_Collections_Generic_List_object__o *)hakkenshiList,
        SHIDWORD(current[1].klass) / 10 - 1,
        (Il2CppObject *)v29,
        (const MethodInfo_35A2A0C *)Method_System_Collections_Generic_List_GameObject__Insert__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
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
  int v23; // w20
  UISprite_o *bgSprite; // x21
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x22
  const MethodInfo *v28; // x1
  __int64 v29; // x1
  UnityEngine_Object_o *infoPanel; // x20
  __int64 v31; // x1
  UnityEngine_Component_o *transform; // x0
  __int64 v33; // x1
  float z; // s8
  float ItemBaseWindowX; // s9
  int v36; // w20
  __int64 v37; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  HakkenshiListController_c *v39; // x8
  int v40; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1A0A6 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&eventId, assetData);
    sub_1BCA7E0(&EventItemWindowMaker_TypeInfo, v11, v12);
    sub_1BCA7E0(&FSUtility_TypeInfo, v13, v14);
    sub_1BCA7E0(&HakkenshiListController_TypeInfo, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_20294/*"icon_bg_{0}"*/, v21, v22);
    byte_4B1A0A6 = 1;
  }
  this->fields.assetData = assetData;
  this->fields.eventId = eventId;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.assetData,
    (int64_t)assetData,
    (int64_t)assetData,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v23 = this->fields.eventId;
  bgSprite = this->fields.bgSprite;
  v40 = v23;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
  v27 = System_String__Format((System_String_o *)StringLiteral_20294/*"icon_bg_{0}"*/, v25, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v26);
  AtlasManager__SetEventUI_38574572(v23, bgSprite, v27, 0LL);
  HakkenshiListController__RefreshHakkenshiInfo(this, v28);
  infoPanel = (UnityEngine_Object_o *)this->fields.infoPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
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
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v33);
    ItemBaseWindowX = EventItemWindowMaker__GetItemBaseWindowX(0LL);
    transform = (UnityEngine_Component_o *)EventItemWindowMaker__GetItemBaseWindowHeight(0, 1, 0LL);
    if ( !this->fields.infoPanel
      || (v36 = (int)transform,
          (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this->fields.infoPanel,
                                                    0LL)) == 0LL) )
    {
LABEL_22:
      sub_1BCAA3C(transform, v31);
    }
    v42.fields.y = (float)v36;
    v42.fields.x = ItemBaseWindowX;
    v42.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v42, 0LL);
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v31);
  if ( !FSUtility__IsUnderVista(0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v39 = HakkenshiListController_TypeInfo;
    if ( !HakkenshiListController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo, v37);
      v39 = HakkenshiListController_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(gameObject, v39->static_fields->FULL_SCREEN_BASE_POSITION, 0LL);
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
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *hakkenshiList; // x0

  if ( (byte_4B1A0A8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, *(_QWORD *)&Idx, isDisp);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7, v8);
    byte_4B1A0A8 = 1;
  }
  hakkenshiList = (System_Collections_Generic_List_object__o *)this->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_7;
  if ( hakkenshiList->fields._size < Idx / 10 )
    return;
  hakkenshiList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 hakkenshiList,
                                                                 Idx / 10 - 1,
                                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !hakkenshiList )
LABEL_7:
    sub_1BCAA3C(hakkenshiList, *(_QWORD *)&Idx);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hakkenshiList, isDisp, 0LL);
}


void __fastcall HakkenshiListController__RefreshHakkenshiInfo(
        HakkenshiListController_o *this,
        const MethodInfo *method)
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
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  int64_t hakkenshiList; // x0
  __int64 v45; // x1
  Il2CppObject *current; // x20
  __int64 v47; // x3
  struct System_Collections_Generic_List_GameObject__o *v48; // x8
  __int64 size; // x2
  int v50; // w9
  System_Collections_Generic_List_int__o *v51; // x21
  System_Collections_Generic_List_int__o **p_runningHakkenshiList; // x20
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *ReleasePieceEntityList; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // x1
  Il2CppObject *MasterData_object; // x21
  struct ExpeditionInfo_array *expeditionInfos; // x21
  int max_length; // w8
  unsigned int v70; // w22
  ExpeditionInfo_o *v71; // x8
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  _BOOL8 v75; // x0
  __int64 v76; // x1
  int32_t klass_high; // w21
  _BOOL8 v78; // x0
  __int64 v79; // x1
  struct System_Collections_Generic_List_GameObject__o *v80; // x8
  Il2CppObject *Item; // x0
  __int64 v82; // x1
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+40h] [xbp-80h] BYREF
  UserEventExpeditionEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B1A0A7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__get_Current__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v34, v35);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v36, v37);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v38, v39);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v40, v41);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42, v43);
    byte_4B1A0A7 = 1;
  }
  entity = 0LL;
  memset(&v85, 0, sizeof(v85));
  memset(&v84, 0, sizeof(v84));
  hakkenshiList = (int64_t)this->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_44;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v83,
    (System_Collections_Generic_List_object__o *)hakkenshiList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v85 = v83;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v85,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v85.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v85,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v48 = this->fields.hakkenshiList;
  if ( !v48 )
    goto LABEL_44;
  size = (unsigned int)v48->fields._size;
  v50 = v48->fields._version + 1;
  v48->fields._size = 0;
  v48->fields._version = v50;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v48->fields._items, 0, size, 0LL);
  v51 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    size,
                                                    v47);
  System_Collections_Generic_List_int____ctor(
    v51,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.runningHakkenshiList = v51;
  p_runningHakkenshiList = &this->fields.runningHakkenshiList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.runningHakkenshiList,
    (int64_t)v51,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  hakkenshiList = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hakkenshiList )
    goto LABEL_44;
  hakkenshiList = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)hakkenshiList,
                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !hakkenshiList )
    goto LABEL_44;
  ReleasePieceEntityList = EventExpeditionPieceMaster__GetReleasePieceEntityList(
                             (EventExpeditionPieceMaster_o *)hakkenshiList,
                             this->fields.eventId,
                             0LL);
  this->fields.releaseHakkenshiList = ReleasePieceEntityList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.releaseHakkenshiList,
    (int64_t)ReleasePieceEntityList,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  hakkenshiList = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hakkenshiList )
    goto LABEL_44;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)hakkenshiList,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v66);
  hakkenshiList = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_44;
  hakkenshiList = UserEventExpeditionMaster__TryGetEntity(
                    (UserEventExpeditionMaster_o *)MasterData_object,
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
      v70 = 0;
      while ( 1 )
      {
        if ( v70 >= max_length )
          sub_1BCAA44(hakkenshiList, method);
        v71 = expeditionInfos->m_Items[v70];
        if ( !v71 )
          break;
        hakkenshiList = (int64_t)*p_runningHakkenshiList;
        if ( !*p_runningHakkenshiList )
          break;
        method = (const MethodInfo *)(unsigned int)v71->fields.pieceIdx;
        v72 = *(struct System_Object_array **)(hakkenshiList + 16);
        v73 = Method_System_Collections_Generic_List_int__Add__;
        ++*(_DWORD *)(hakkenshiList + 28);
        if ( !v72 )
          break;
        v74 = *(int *)(hakkenshiList + 24);
        if ( (unsigned int)v74 >= v72->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)hakkenshiList,
            (int32_t)method,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
        }
        else
        {
          *(_DWORD *)(hakkenshiList + 24) = v74 + 1;
          *((_DWORD *)v72->m_Items + v74) = (_DWORD)method;
        }
        max_length = expeditionInfos->max_length;
        if ( (int)++v70 >= max_length )
          goto LABEL_31;
      }
LABEL_44:
      sub_1BCAA3C(hakkenshiList, method);
    }
  }
LABEL_31:
  HakkenshiListController__CreateHakkenshiObject(this, method);
  hakkenshiList = (int64_t)this->fields.releaseHakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_44;
  if ( *(int *)(hakkenshiList + 24) >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v83,
      (System_Collections_Generic_List_object__o *)hakkenshiList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
    v84 = v83;
    while ( 1 )
    {
      v75 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v84,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
      if ( !v75 )
        break;
      if ( !v84.fields._current )
        sub_1BCAA3C(v75, v76);
      if ( !*p_runningHakkenshiList )
        sub_1BCAA3C(0LL, v76);
      klass_high = HIDWORD(v84.fields._current[1].klass);
      v78 = System_Collections_Generic_List_int___Contains(
              *p_runningHakkenshiList,
              klass_high,
              (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v78 )
      {
        v80 = this->fields.hakkenshiList;
        if ( !v80 )
          sub_1BCAA3C(v78, v79);
        if ( v80->fields._size >= klass_high / 10 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this->fields.hakkenshiList,
                   klass_high / 10 - 1,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !Item )
            sub_1BCAA3C(0LL, v82);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, 1, 0LL);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v84,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
  }
}


int32_t __fastcall HakkenshiListController__get_HakkenshiBaseWindowHeight(
        HakkenshiListController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  HakkenshiListController_c *v5; // x0
  int32_t BASE_WINDOW_HEIGHT; // w20
  __int64 v7; // x1
  int32_t ADD_HEIGHT; // w8
  HakkenshiListController_c *v9; // x0

  if ( (byte_4B1A0A5 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&HakkenshiListController_TypeInfo, v3, v4);
    byte_4B1A0A5 = 1;
  }
  v5 = HakkenshiListController_TypeInfo;
  if ( !HakkenshiListController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo, method);
    v5 = HakkenshiListController_TypeInfo;
  }
  BASE_WINDOW_HEIGHT = v5->static_fields->BASE_WINDOW_HEIGHT;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    ADD_HEIGHT = 0;
  }
  else
  {
    v9 = HakkenshiListController_TypeInfo;
    if ( !HakkenshiListController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo, v7);
      v9 = HakkenshiListController_TypeInfo;
    }
    ADD_HEIGHT = v9->static_fields->ADD_HEIGHT;
  }
  return ADD_HEIGHT + BASE_WINDOW_HEIGHT;
}