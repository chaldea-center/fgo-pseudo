void HakkenshiListController___cctor(const MethodInfo *method)
{
  struct HakkenshiListController_StaticFields *static_fields; // x8

  if ( (byte_4C2163A & 1) == 0 )
  {
    sub_1C2D490(&HakkenshiListController_TypeInfo);
    byte_4C2163A = 1;
  }
  static_fields = HakkenshiListController_TypeInfo->static_fields;
  static_fields->FULL_SCREEN_BASE_POSITION.fields.z = 0.0;
  *(_QWORD *)&static_fields->BASE_WINDOW_HEIGHT = 0x21FFFFFFABLL;
  *(_QWORD *)&static_fields->FULL_SCREEN_BASE_POSITION.fields.x = 0x42400000C3580000LL;
}


void HakkenshiListController___ctor(HakkenshiListController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_int__o *v4; // x20
  System_Collections_Generic_List_object__o *v5; // x20

  if ( (byte_4C21639 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C21639 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
  this->fields.releaseHakkenshiList = (struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v3;
  sub_1C2D434(&this->fields.releaseHakkenshiList);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.runningHakkenshiList = v4;
  sub_1C2D434(&this->fields.runningHakkenshiList);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.hakkenshiList = (struct System_Collections_Generic_List_GameObject__o *)v5;
  sub_1C2D434(&this->fields.hakkenshiList);
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
  Il2CppObject *current; // x26
  ExpeditionAssetManager_o *assetData; // x0
  Il2CppObject *StayHakkenshiObj; // x21
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x21
  Il2CppObject *Component_object; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  UnityEngine_Transform_o *v15; // x0
  __int64 v16; // x1
  UnityEngine_Transform_o *v17; // x0
  __int64 v18; // x1
  UnityEngine_Transform_o *v19; // x22
  __int64 v20; // x1
  struct System_Collections_Generic_List_GameObject__o *hakkenshiList; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C21638 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_HakkenshiAnimationPlayer___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Insert__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21638 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  releaseHakkenshiList = (System_Collections_Generic_List_object__o *)this->fields.releaseHakkenshiList;
  if ( !releaseHakkenshiList )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    releaseHakkenshiList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v23,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
    if ( !v4 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1C2D6EC(v4, v5);
    assetData = this->fields.assetData;
    if ( !assetData )
      sub_1C2D6EC(0, v5);
    StayHakkenshiObj = (Il2CppObject *)ExpeditionAssetManager__GetStayHakkenshiObj(
                                         assetData,
                                         HIDWORD(v23.fields._current[1].klass),
                                         0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)StayHakkenshiObj, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = UnityEngine_Object__Instantiate_object_(
             StayHakkenshiObj,
             (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v11 = (UnityEngine_GameObject_o *)v9;
      if ( !v9 )
        sub_1C2D6EC(0, v10);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, 0, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v11,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_HakkenshiAnimationPlayer___);
      transform = UnityEngine_GameObject__get_transform(v11, 0);
      if ( !transform )
        sub_1C2D6EC(0, v14);
      UnityEngine_Transform__SetParent(transform, this->fields.hakkenshiContainer, 0);
      v15 = UnityEngine_GameObject__get_transform(v11, 0);
      if ( !Component_object )
        sub_1C2D6EC(v15, v16);
      if ( !v15 )
        sub_1C2D6EC(0, v16);
      v24.fields.x = *(float *)&Component_object[2].monitor;
      v24.fields.y = *((float *)&Component_object[2].monitor + 1);
      v24.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(v15, v24, 0);
      v17 = UnityEngine_GameObject__get_transform(v11, 0);
      v19 = v17;
      if ( !byte_4C20DA6 )
      {
        v17 = (UnityEngine_Transform_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA6 = 1;
      }
      if ( !v19 )
        sub_1C2D6EC(v17, v18);
      UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      hakkenshiList = this->fields.hakkenshiList;
      if ( !hakkenshiList )
        sub_1C2D6EC(0, v20);
      System_Collections_Generic_List_object___Insert(
        (System_Collections_Generic_List_object__o *)hakkenshiList,
        SHIDWORD(current[1].klass) / 10 - 1,
        (Il2CppObject *)v11,
        (const MethodInfo_378A934 *)Method_System_Collections_Generic_List_GameObject__Insert__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
}


void HakkenshiListController__CreateHakkenshiWindow(
        HakkenshiListController_o *this,
        int32_t eventId,
        ExpeditionAssetManager_o *assetData,
        const MethodInfo *method)
{
  int32_t v7; // w20
  UISprite_o *bgSprite; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  System_String_o *v13; // x22
  const MethodInfo *v14; // x1
  UnityEngine_Object_o *infoPanel; // x20
  __int64 v16; // x1
  UnityEngine_Component_o *transform; // x0
  float z; // s8
  float ItemBaseWindowX; // s9
  int v20; // w20
  UnityEngine_GameObject_o *gameObject; // x19
  HakkenshiListController_c *v22; // x8
  int32_t v23; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C21635 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&EventItemWindowMaker_TypeInfo);
    sub_1C2D490(&FSUtility_TypeInfo);
    sub_1C2D490(&HakkenshiListController_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_20114/*"icon_bg_{0}"*/);
    byte_4C21635 = 1;
  }
  this->fields.assetData = assetData;
  this->fields.eventId = eventId;
  sub_1C2D434(&this->fields.assetData);
  v7 = this->fields.eventId;
  bgSprite = this->fields.bgSprite;
  v23 = v7;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v9, v10, v11);
  v13 = System_String__Format((System_String_o *)StringLiteral_20114/*"icon_bg_{0}"*/, v12, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_40385372(v7, bgSprite, v13, 0);
  HakkenshiListController__RefreshHakkenshiInfo(this, v14);
  infoPanel = (UnityEngine_Object_o *)this->fields.infoPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoPanel, 0, 0) )
  {
    transform = (UnityEngine_Component_o *)this->fields.infoPanel;
    if ( !transform )
      goto LABEL_22;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_22;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    z = localPosition.fields.z;
    if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    ItemBaseWindowX = EventItemWindowMaker__GetItemBaseWindowX(0);
    transform = (UnityEngine_Component_o *)EventItemWindowMaker__GetItemBaseWindowHeight(0, 1, 0);
    if ( !this->fields.infoPanel
      || (v20 = (int)transform,
          (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this->fields.infoPanel,
                                                    0)) == 0) )
    {
LABEL_22:
      sub_1C2D6EC(transform, v16);
    }
    v25.fields.y = (float)v20;
    v25.fields.x = ItemBaseWindowX;
    v25.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v25, 0);
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( !FSUtility__IsUnderVista(0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v22 = HakkenshiListController_TypeInfo;
    if ( !HakkenshiListController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo);
      v22 = HakkenshiListController_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(gameObject, v22->static_fields->FULL_SCREEN_BASE_POSITION, 0);
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

  if ( (byte_4C21637 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4C21637 = 1;
  }
  hakkenshiList = (System_Collections_Generic_List_object__o *)this->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_7;
  if ( hakkenshiList->fields._size < Idx / 10 )
    return;
  hakkenshiList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 hakkenshiList,
                                                                 Idx / 10 - 1,
                                                                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !hakkenshiList )
LABEL_7:
    sub_1C2D6EC(hakkenshiList, *(_QWORD *)&Idx);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hakkenshiList, isDisp, 0);
}


void HakkenshiListController__RefreshHakkenshiInfo(HakkenshiListController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *hakkenshiList; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v5; // x8
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_int__o *v8; // x21
  System_Collections_Generic_List_int__o **p_runningHakkenshiList; // x20
  Il2CppObject *MasterData_object; // x21
  __int64 v11; // x2
  __int64 v12; // x3
  struct ExpeditionInfo_array *expeditionInfos; // x21
  int max_length; // w8
  unsigned int v15; // w22
  ExpeditionInfo_o *v16; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  _BOOL8 v20; // x0
  __int64 v21; // x1
  int32_t klass_high; // w21
  _BOOL8 v23; // x0
  __int64 v24; // x1
  struct System_Collections_Generic_List_GameObject__o *v25; // x8
  Il2CppObject *Item; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+40h] [xbp-80h] BYREF
  UserEventExpeditionEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C21636 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C21636 = 1;
  }
  entity = 0;
  memset(&v30, 0, sizeof(v30));
  memset(&v29, 0, sizeof(v29));
  hakkenshiList = (System_Collections_Generic_List_object__o *)this->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_48;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    hakkenshiList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v30 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v30.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v5 = this->fields.hakkenshiList;
  if ( !v5 )
    goto LABEL_48;
  size = v5->fields._size;
  v7 = v5->fields._version + 1;
  v5->fields._size = 0;
  v5->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v5->fields._items, 0, size, 0);
  v8 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.runningHakkenshiList = v8;
  p_runningHakkenshiList = &this->fields.runningHakkenshiList;
  sub_1C2D434(&this->fields.runningHakkenshiList);
  hakkenshiList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hakkenshiList )
    goto LABEL_48;
  hakkenshiList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)hakkenshiList,
                                                                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !hakkenshiList )
    goto LABEL_48;
  this->fields.releaseHakkenshiList = EventExpeditionPieceMaster__GetReleasePieceEntityList(
                                        (EventExpeditionPieceMaster_o *)hakkenshiList,
                                        this->fields.eventId,
                                        0);
  sub_1C2D434(&this->fields.releaseHakkenshiList);
  hakkenshiList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hakkenshiList )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)hakkenshiList,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= max_length )
          sub_1C2D6F4(hakkenshiList, method, v11, v12);
        v16 = expeditionInfos->m_Items[v15];
        if ( !v16 )
          break;
        hakkenshiList = (System_Collections_Generic_List_object__o *)*p_runningHakkenshiList;
        if ( !*p_runningHakkenshiList )
          break;
        method = (const MethodInfo *)(unsigned int)v16->fields.pieceIdx;
        items = (struct System_Int32_array *)hakkenshiList->fields._items;
        v18 = Method_System_Collections_Generic_List_int__Add__;
        ++hakkenshiList->fields._version;
        if ( !items )
          break;
        v19 = hakkenshiList->fields._size;
        if ( (unsigned int)v19 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)hakkenshiList,
            (int32_t)method,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          hakkenshiList->fields._size = v19 + 1;
          items->m_Items[v19] = (int)method;
        }
        max_length = expeditionInfos->max_length;
        if ( (int)++v15 >= max_length )
          goto LABEL_35;
      }
LABEL_48:
      sub_1C2D6EC(hakkenshiList, method);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v28,
      hakkenshiList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
    v29 = v28;
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v29,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
      if ( !v20 )
        break;
      if ( !v29.fields._current )
        sub_1C2D6EC(v20, v21);
      if ( !*p_runningHakkenshiList )
        sub_1C2D6EC(0, v21);
      klass_high = HIDWORD(v29.fields._current[1].klass);
      v23 = System_Collections_Generic_List_int___Contains(
              *p_runningHakkenshiList,
              klass_high,
              (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v23 )
      {
        v25 = this->fields.hakkenshiList;
        if ( !v25 )
          sub_1C2D6EC(v23, v24);
        if ( v25->fields._size >= klass_high / 10 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this->fields.hakkenshiList,
                   klass_high / 10 - 1,
                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !Item )
            sub_1C2D6EC(0, v27);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, 1, 0);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
  }
}


int32_t HakkenshiListController__get_HakkenshiBaseWindowHeight(
        HakkenshiListController_o *this,
        const MethodInfo *method)
{
  HakkenshiListController_c *v2; // x0
  int32_t BASE_WINDOW_HEIGHT; // w20
  int32_t ADD_HEIGHT; // w8
  HakkenshiListController_c *v5; // x0

  if ( (byte_4C21634 & 1) == 0 )
  {
    sub_1C2D490(&FSUtility_TypeInfo);
    sub_1C2D490(&HakkenshiListController_TypeInfo);
    byte_4C21634 = 1;
  }
  v2 = HakkenshiListController_TypeInfo;
  if ( !HakkenshiListController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo);
    v2 = HakkenshiListController_TypeInfo;
  }
  BASE_WINDOW_HEIGHT = v2->static_fields->BASE_WINDOW_HEIGHT;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0) )
  {
    ADD_HEIGHT = 0;
  }
  else
  {
    v5 = HakkenshiListController_TypeInfo;
    if ( !HakkenshiListController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo);
      v5 = HakkenshiListController_TypeInfo;
    }
    ADD_HEIGHT = v5->static_fields->ADD_HEIGHT;
  }
  return ADD_HEIGHT + BASE_WINDOW_HEIGHT;
}