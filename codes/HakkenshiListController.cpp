void HakkenshiListController___cctor(const MethodInfo *method)
{
  struct HakkenshiListController_StaticFields *static_fields; // x8

  if ( (byte_596A612 & 1) == 0 )
  {
    sub_2213A60(&HakkenshiListController_TypeInfo);
    byte_596A612 = 1;
  }
  static_fields = HakkenshiListController_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->BASE_WINDOW_HEIGHT = 0x21FFFFFFABLL;
  *(_QWORD *)&static_fields->FULL_SCREEN_BASE_POSITION.fields.x = 0x42400000C3580000LL;
  static_fields->FULL_SCREEN_BASE_POSITION.fields.z = 0.0;
}


void HakkenshiListController___ctor(HakkenshiListController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_int__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_object__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596A611 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_596A611 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
  this->fields.releaseHakkenshiList = (struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.releaseHakkenshiList,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.runningHakkenshiList = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.runningHakkenshiList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.hakkenshiList = (struct System_Collections_Generic_List_GameObject__o *)v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.hakkenshiList,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void HakkenshiListController__Awake(HakkenshiListController_o *this, const MethodInfo *method)
{
  ;
}


void HakkenshiListController__CreateHakkenshiObject(HakkenshiListController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *releaseHakkenshiList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  Il2CppObject *current; // x26
  ExpeditionAssetManager_o *assetData; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *StayHakkenshiObj; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x21
  Il2CppObject *Component_object; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v19; // x1
  UnityEngine_Transform_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x0
  __int64 v23; // x1
  UnityEngine_Transform_o *v24; // x22
  __int64 v25; // x1
  struct System_Collections_Generic_List_GameObject__o *hakkenshiList; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A610 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_HakkenshiAnimationPlayer___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Insert__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A610 = 1;
  }
  releaseHakkenshiList = (System_Collections_Generic_List_object__o *)this->fields.releaseHakkenshiList;
  memset(&v28, 0, sizeof(v28));
  if ( !releaseHakkenshiList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    releaseHakkenshiList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
  v28 = v27;
  v27.fields._list = 0;
  *(_QWORD *)&v27.fields._index = &v28;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v28,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
    if ( !v4 )
      break;
    current = v28.fields._current;
    if ( !v28.fields._current )
      sub_2213CDC(v4, v5);
    assetData = this->fields.assetData;
    if ( !assetData )
      sub_2213CDC(0, v5);
    StayHakkenshiObj = (Il2CppObject *)ExpeditionAssetManager__GetStayHakkenshiObj(
                                         assetData,
                                         HIDWORD(v28.fields._current[1].klass),
                                         v6);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)StayHakkenshiObj, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
      v14 = UnityEngine_Object__Instantiate_object_(
              StayHakkenshiObj,
              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v16 = (UnityEngine_GameObject_o *)v14;
      if ( !v14 )
        sub_2213CDC(0, v15);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v14, 0, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v16,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_HakkenshiAnimationPlayer___);
      transform = UnityEngine_GameObject__get_transform(v16, 0);
      if ( !transform )
        sub_2213CDC(0, v19);
      UnityEngine_Transform__SetParent(transform, this->fields.hakkenshiContainer, 0);
      v20 = UnityEngine_GameObject__get_transform(v16, 0);
      if ( !Component_object )
        sub_2213CDC(v20, v21);
      if ( !v20 )
        sub_2213CDC(0, v21);
      v29.fields.x = *(float *)&Component_object[2].monitor;
      v29.fields.y = *((float *)&Component_object[2].monitor + 1);
      v29.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(v20, v29, 0);
      v22 = (__int64)UnityEngine_GameObject__get_transform(v16, 0);
      v24 = (UnityEngine_Transform_o *)v22;
      if ( !byte_5969AE5 )
      {
        v22 = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      if ( !v24 )
        sub_2213CDC(v22, v23);
      UnityEngine_Transform__set_localScale(v24, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      hakkenshiList = this->fields.hakkenshiList;
      if ( !hakkenshiList )
        sub_2213CDC(0, v25);
      System_Collections_Generic_List_object___Insert(
        (System_Collections_Generic_List_object__o *)hakkenshiList,
        SHIDWORD(current[1].klass) / 10 - 1,
        (Il2CppObject *)v16,
        (const MethodInfo_4484A00 *)Method_System_Collections_Generic_List_GameObject__Insert__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
}


void HakkenshiListController__CreateHakkenshiWindow(
        HakkenshiListController_o *this,
        int32_t eventId,
        ExpeditionAssetManager_o *assetData,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v11; // w20
  UISprite_o *bgSprite; // x21
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x22
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *infoPanel; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Component_o *transform; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  float z; // s8
  float ItemBaseWindowX; // s9
  int v28; // w20
  __int64 v29; // x1
  __int64 v30; // x2
  UnityEngine_GameObject_o *gameObject; // x19
  HakkenshiListController_c *v32; // x8
  int32_t v33; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A60D & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&EventItemWindowMaker_TypeInfo);
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&HakkenshiListController_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_21100/*"icon_bg_{0}"*/);
    byte_596A60D = 1;
  }
  this->fields.assetData = assetData;
  this->fields.eventId = eventId;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.assetData,
    (int32_t)assetData,
    (System_String_o *)assetData,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v11 = this->fields.eventId;
  bgSprite = this->fields.bgSprite;
  v33 = v11;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v33);
  v16 = System_String__Format((System_String_o *)StringLiteral_21100/*"icon_bg_{0}"*/, v13, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14, v15);
  AtlasManager__SetEventUI_47569484(v11, bgSprite, v16, 0);
  HakkenshiListController__RefreshHakkenshiInfo(this, v17);
  infoPanel = (UnityEngine_Object_o *)this->fields.infoPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
  if ( UnityEngine_Object__op_Inequality(infoPanel, 0, 0) )
  {
    transform = (UnityEngine_Component_o *)this->fields.infoPanel;
    if ( !transform )
      goto LABEL_22;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_22;
    z = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0).fields.z;
    if ( !*(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v24, v25);
    ItemBaseWindowX = EventItemWindowMaker__GetItemBaseWindowX(0);
    transform = (UnityEngine_Component_o *)EventItemWindowMaker__GetItemBaseWindowHeight(0, 1, 0);
    if ( !this->fields.infoPanel
      || (v28 = (int)transform,
          (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this->fields.infoPanel,
                                                    0)) == 0) )
    {
LABEL_22:
      sub_2213CDC(transform, v21);
    }
    v34.fields.y = (float)v28;
    v34.fields.x = ItemBaseWindowX;
    v34.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v34, 0);
  }
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v21, v22);
  if ( !FSUtility__IsUnderVista(0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v32 = HakkenshiListController_TypeInfo;
    if ( !*(&HakkenshiListController_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo, v29, v30);
      v32 = HakkenshiListController_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(gameObject, v32->static_fields->FULL_SCREEN_BASE_POSITION, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void HakkenshiListController__DisplayHakkenshiObj(
        HakkenshiListController_o *this,
        int32_t Idx,
        bool isDisp,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *hakkenshiList; // x0

  if ( (byte_596A60F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_596A60F = 1;
  }
  hakkenshiList = (System_Collections_Generic_List_object__o *)this->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_7;
  if ( hakkenshiList->fields._size < Idx / 10 )
    return;
  hakkenshiList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 hakkenshiList,
                                                                 Idx / 10 - 1,
                                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !hakkenshiList )
LABEL_7:
    sub_2213CDC(hakkenshiList, *(_QWORD *)&Idx);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hakkenshiList, isDisp, 0);
}


void HakkenshiListController__RefreshHakkenshiInfo(HakkenshiListController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *hakkenshiList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_int__o *v10; // x21
  System_Collections_Generic_List_int__o **p_runningHakkenshiList; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *ReleasePieceEntityList; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x2
  Il2CppObject *MasterData_object; // x21
  struct ExpeditionInfo_array *expeditionInfos; // x21
  int max_length; // w8
  unsigned int v29; // w26
  ExpeditionInfo_o *v30; // x9
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  _BOOL8 v34; // x0
  __int64 v35; // x1
  int32_t klass_high; // w21
  __int64 v37; // x1
  System_Collections_Generic_List_object__o *v38; // x0
  Il2CppObject *Item; // x0
  __int64 v40; // x1
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+40h] [xbp-80h] BYREF
  UserEventExpeditionEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_596A60E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A60E = 1;
  }
  hakkenshiList = (System_Collections_Generic_List_object__o *)this->fields.hakkenshiList;
  entity = 0;
  memset(&v43, 0, sizeof(v43));
  memset(&v42, 0, sizeof(v42));
  if ( !hakkenshiList )
    goto LABEL_48;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    hakkenshiList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v43 = v41;
  v41.fields._list = 0;
  *(_QWORD *)&v41.fields._index = &v43;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v43.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v7 = this->fields.hakkenshiList;
  if ( !v7 )
    goto LABEL_48;
  size = v7->fields._size;
  v9 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
  v10 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.runningHakkenshiList = v10;
  p_runningHakkenshiList = &this->fields.runningHakkenshiList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.runningHakkenshiList,
    (int32_t)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  hakkenshiList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hakkenshiList )
    goto LABEL_48;
  hakkenshiList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)hakkenshiList,
                                                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !hakkenshiList )
    goto LABEL_48;
  ReleasePieceEntityList = EventExpeditionPieceMaster__GetReleasePieceEntityList(
                             (EventExpeditionPieceMaster_o *)hakkenshiList,
                             this->fields.eventId,
                             0);
  this->fields.releaseHakkenshiList = ReleasePieceEntityList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.releaseHakkenshiList,
    (int32_t)ReleasePieceEntityList,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  hakkenshiList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hakkenshiList )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)hakkenshiList,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v25);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  hakkenshiList = (System_Collections_Generic_List_object__o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v25);
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
                                                                 0);
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
      v29 = 0;
      while ( 1 )
      {
        if ( v29 >= max_length )
          sub_2213CE4(hakkenshiList);
        v30 = expeditionInfos->m_Items[v29];
        if ( !v30 )
          break;
        hakkenshiList = (System_Collections_Generic_List_object__o *)*p_runningHakkenshiList;
        if ( !*p_runningHakkenshiList )
          break;
        items = (struct System_Int32_array *)hakkenshiList->fields._items;
        method = (const MethodInfo *)(unsigned int)v30->fields.pieceIdx;
        v32 = Method_System_Collections_Generic_List_int__Add__;
        ++hakkenshiList->fields._version;
        if ( !items )
          break;
        v33 = hakkenshiList->fields._size;
        if ( (unsigned int)v33 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)hakkenshiList,
            (int32_t)method,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          hakkenshiList->fields._size = v33 + 1;
          items->m_Items[v33] = (int)method;
        }
        max_length = expeditionInfos->max_length;
        if ( (int)++v29 >= max_length )
          goto LABEL_35;
      }
LABEL_48:
      sub_2213CDC(hakkenshiList, method);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v41,
      hakkenshiList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
    v42 = v41;
    v41.fields._list = 0;
    *(_QWORD *)&v41.fields._index = &v42;
    while ( 1 )
    {
      v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
      if ( !v34 )
        break;
      if ( !v42.fields._current )
        sub_2213CDC(v34, v35);
      if ( !*p_runningHakkenshiList )
        sub_2213CDC(0, v35);
      klass_high = HIDWORD(v42.fields._current[1].klass);
      if ( !System_Collections_Generic_List_int___Contains(
              *p_runningHakkenshiList,
              klass_high,
              (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        v38 = (System_Collections_Generic_List_object__o *)this->fields.hakkenshiList;
        if ( !v38 )
          sub_2213CDC(0, v37);
        if ( v38->fields._size >= klass_high / 10 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v38,
                   klass_high / 10 - 1,
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !Item )
            sub_2213CDC(0, v40);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, 1, 0);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v42,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
  }
}


int32_t HakkenshiListController__get_HakkenshiBaseWindowHeight(
        HakkenshiListController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  HakkenshiListController_c *v3; // x0
  int32_t BASE_WINDOW_HEIGHT; // w20
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t ADD_HEIGHT; // w8
  HakkenshiListController_c *v8; // x0

  if ( (byte_596A60C & 1) == 0 )
  {
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&HakkenshiListController_TypeInfo);
    byte_596A60C = 1;
  }
  v3 = HakkenshiListController_TypeInfo;
  if ( !*(&HakkenshiListController_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo, method, v2);
    v3 = HakkenshiListController_TypeInfo;
  }
  BASE_WINDOW_HEIGHT = v3->static_fields->BASE_WINDOW_HEIGHT;
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method, v2);
  if ( FSUtility__IsUnderVista(0) )
  {
    ADD_HEIGHT = 0;
  }
  else
  {
    v8 = HakkenshiListController_TypeInfo;
    if ( !*(&HakkenshiListController_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo, v5, v6);
      v8 = HakkenshiListController_TypeInfo;
    }
    ADD_HEIGHT = v8->static_fields->ADD_HEIGHT;
  }
  return ADD_HEIGHT + BASE_WINDOW_HEIGHT;
}