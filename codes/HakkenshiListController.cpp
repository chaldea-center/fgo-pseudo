void __fastcall HakkenshiListController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct HakkenshiListController_StaticFields *static_fields; // x8

  if ( (byte_4A000D1 & 1) == 0 )
  {
    sub_1B640C8(&HakkenshiListController_TypeInfo, v1);
    byte_4A000D1 = 1;
  }
  static_fields = HakkenshiListController_TypeInfo->static_fields;
  static_fields->FULL_SCREEN_BASE_POSITION.fields.z = 0.0;
  *(_QWORD *)&static_fields->BASE_WINDOW_HEIGHT = 0x21FFFFFFABLL;
  *(_QWORD *)&static_fields->FULL_SCREEN_BASE_POSITION.fields.x = 0x42400000C3580000LL;
}


void __fastcall HakkenshiListController___ctor(HakkenshiListController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_int__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_4A000D0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    byte_4A000D0 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
  this->fields.releaseHakkenshiList = (struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.releaseHakkenshiList, (int32_t)v9, v10, v11);
  v14 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v12, v13);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.runningHakkenshiList = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.runningHakkenshiList, (int32_t)v14, v15, v16);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.hakkenshiList = (struct System_Collections_Generic_List_GameObject__o *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.hakkenshiList, (int32_t)v19, v20, v21);
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
  const MethodInfo *v12; // x2
  Il2CppObject *current; // x26
  ExpeditionAssetManager_o *assetData; // x0
  Il2CppObject *StayHakkenshiObj; // x21
  Il2CppObject *v16; // x0
  UnityEngine_GameObject_o *v17; // x21
  Il2CppObject *Component_object; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  UnityEngine_Transform_o *v23; // x22
  struct System_Collections_Generic_List_GameObject__o *hakkenshiList; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A000CF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__get_Current__, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_HakkenshiAnimationPlayer___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Insert__, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_4A000CF = 1;
  }
  memset(&v26, 0, sizeof(v26));
  releaseHakkenshiList = (System_Collections_Generic_List_object__o *)this->fields.releaseHakkenshiList;
  if ( !releaseHakkenshiList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    releaseHakkenshiList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
    if ( !v11 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1B64324(v11);
    assetData = this->fields.assetData;
    if ( !assetData )
      sub_1B64324(0LL);
    StayHakkenshiObj = (Il2CppObject *)ExpeditionAssetManager__GetStayHakkenshiObj(
                                         assetData,
                                         HIDWORD(v26.fields._current[1].klass),
                                         v12);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)StayHakkenshiObj, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = UnityEngine_Object__Instantiate_object_(
              StayHakkenshiObj,
              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v17 = (UnityEngine_GameObject_o *)v16;
      if ( !v16 )
        sub_1B64324(0LL);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, 0, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v17,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_HakkenshiAnimationPlayer___);
      transform = UnityEngine_GameObject__get_transform(v17, 0LL);
      if ( !transform )
        sub_1B64324(0LL);
      UnityEngine_Transform__SetParent(transform, this->fields.hakkenshiContainer, 0LL);
      v20 = UnityEngine_GameObject__get_transform(v17, 0LL);
      if ( !Component_object )
        sub_1B64324(v20);
      if ( !v20 )
        sub_1B64324(0LL);
      v27.fields.x = *(float *)&Component_object[2].monitor;
      v27.fields.y = *((float *)&Component_object[2].monitor + 1);
      v27.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(v20, v27, 0LL);
      v21 = (__int64)UnityEngine_GameObject__get_transform(v17, 0LL);
      v23 = (UnityEngine_Transform_o *)v21;
      if ( !byte_49F7116 )
      {
        v21 = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v22);
        byte_49F7116 = 1;
      }
      if ( !v23 )
        sub_1B64324(v21);
      UnityEngine_Transform__set_localScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      hakkenshiList = this->fields.hakkenshiList;
      if ( !hakkenshiList )
        sub_1B64324(0LL);
      System_Collections_Generic_List_object___Insert(
        (System_Collections_Generic_List_object__o *)hakkenshiList,
        SHIDWORD(current[1].klass) / 10 - 1,
        (Il2CppObject *)v17,
        (const MethodInfo_34AE524 *)Method_System_Collections_Generic_List_GameObject__Insert__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HakkenshiListController__CreateHakkenshiWindow(
        HakkenshiListController_o *this,
        int32_t eventId,
        ExpeditionAssetManager_o *assetData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int v13; // w20
  UISprite_o *bgSprite; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x22
  const MethodInfo *v17; // x1
  UnityEngine_Object_o *infoPanel; // x20
  UnityEngine_Component_o *transform; // x0
  float z; // s8
  float ItemBaseWindowX; // s9
  int v22; // w20
  UnityEngine_GameObject_o *gameObject; // x19
  HakkenshiListController_c *v24; // x8
  int v25; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A000CC & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&EventItemWindowMaker_TypeInfo, v7);
    sub_1B640C8(&FSUtility_TypeInfo, v8);
    sub_1B640C8(&HakkenshiListController_TypeInfo, v9);
    sub_1B640C8(&int_TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_20007/*"icon_bg_{0}"*/, v12);
    byte_4A000CC = 1;
  }
  this->fields.assetData = assetData;
  this->fields.eventId = eventId;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.assetData,
    (int32_t)assetData,
    (int32_t)assetData,
    (int32_t)method);
  v13 = this->fields.eventId;
  bgSprite = this->fields.bgSprite;
  v25 = v13;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v16 = System_String__Format((System_String_o *)StringLiteral_20007/*"icon_bg_{0}"*/, v15, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37544692(v13, bgSprite, v16, 0LL);
  HakkenshiListController__RefreshHakkenshiInfo(this, v17);
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
      || (v22 = (int)transform,
          (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this->fields.infoPanel,
                                                    0LL)) == 0LL) )
    {
LABEL_22:
      sub_1B64324(transform);
    }
    v27.fields.y = (float)v22;
    v27.fields.x = ItemBaseWindowX;
    v27.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v27, 0LL);
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( !FSUtility__IsUnderVista(0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v24 = HakkenshiListController_TypeInfo;
    if ( !HakkenshiListController_TypeInfo->_2.cctor_finished )
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
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *hakkenshiList; // x0

  if ( (byte_4A000CE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, *(_QWORD *)&Idx);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    byte_4A000CE = 1;
  }
  hakkenshiList = (System_Collections_Generic_List_object__o *)this->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_7;
  if ( hakkenshiList->fields._size < Idx / 10 )
    return;
  hakkenshiList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 hakkenshiList,
                                                                 Idx / 10 - 1,
                                                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !hakkenshiList )
LABEL_7:
    sub_1B64324(hakkenshiList);
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
  int64_t hakkenshiList; // x0
  Il2CppObject *current; // x20
  __int64 v25; // x1
  struct System_Collections_Generic_List_GameObject__o *v26; // x8
  __int64 size; // x2
  int v28; // w9
  System_Collections_Generic_List_int__o *v29; // x21
  System_Collections_Generic_List_int__o **p_runningHakkenshiList; // x20
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *ReleasePieceEntityList; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *pieceIdx; // x1
  struct ExpeditionInfo_array *expeditionInfos; // x21
  int max_length; // w8
  unsigned int v40; // w22
  ExpeditionInfo_o *v41; // x8
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  _BOOL8 v45; // x0
  int32_t klass_high; // w21
  _BOOL8 v47; // x0
  struct System_Collections_Generic_List_GameObject__o *v48; // x8
  Il2CppObject *Item; // x0
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+40h] [xbp-80h] BYREF
  UserEventExpeditionEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4A000CD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Clear__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v18);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_1B640C8(&NetworkManager_TypeInfo, v20);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4A000CD = 1;
  }
  entity = 0LL;
  memset(&v52, 0, sizeof(v52));
  memset(&v51, 0, sizeof(v51));
  hakkenshiList = (int64_t)this->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_44;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    (System_Collections_Generic_List_object__o *)hakkenshiList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v52 = v50;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v52.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v26 = this->fields.hakkenshiList;
  if ( !v26 )
    goto LABEL_44;
  size = (unsigned int)v26->fields._size;
  v28 = v26->fields._version + 1;
  v26->fields._size = 0;
  v26->fields._version = v28;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v26->fields._items, 0, size, 0LL);
  v29 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v25, size);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.runningHakkenshiList = v29;
  p_runningHakkenshiList = &this->fields.runningHakkenshiList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.runningHakkenshiList, (int32_t)v29, v31, v32);
  hakkenshiList = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hakkenshiList )
    goto LABEL_44;
  hakkenshiList = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)hakkenshiList,
                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !hakkenshiList )
    goto LABEL_44;
  ReleasePieceEntityList = EventExpeditionPieceMaster__GetReleasePieceEntityList(
                             (EventExpeditionPieceMaster_o *)hakkenshiList,
                             this->fields.eventId,
                             0LL);
  this->fields.releaseHakkenshiList = ReleasePieceEntityList;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.releaseHakkenshiList,
    (int32_t)ReleasePieceEntityList,
    v34,
    v35);
  hakkenshiList = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hakkenshiList )
    goto LABEL_44;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)hakkenshiList,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
      v40 = 0;
      while ( 1 )
      {
        if ( v40 >= max_length )
          sub_1B6432C(hakkenshiList, pieceIdx);
        v41 = expeditionInfos->m_Items[v40];
        if ( !v41 )
          break;
        hakkenshiList = (int64_t)*p_runningHakkenshiList;
        if ( !*p_runningHakkenshiList )
          break;
        pieceIdx = (const MethodInfo *)(unsigned int)v41->fields.pieceIdx;
        v42 = *(struct System_Object_array **)(hakkenshiList + 16);
        v43 = Method_System_Collections_Generic_List_int__Add__;
        ++*(_DWORD *)(hakkenshiList + 28);
        if ( !v42 )
          break;
        v44 = *(int *)(hakkenshiList + 24);
        if ( (unsigned int)v44 >= v42->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)hakkenshiList,
            (int32_t)pieceIdx,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          *(_DWORD *)(hakkenshiList + 24) = v44 + 1;
          *((_DWORD *)v42->m_Items + v44) = (_DWORD)pieceIdx;
        }
        max_length = expeditionInfos->max_length;
        if ( (int)++v40 >= max_length )
          goto LABEL_31;
      }
LABEL_44:
      sub_1B64324(hakkenshiList);
    }
  }
LABEL_31:
  HakkenshiListController__CreateHakkenshiObject(this, pieceIdx);
  hakkenshiList = (int64_t)this->fields.releaseHakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_44;
  if ( *(int *)(hakkenshiList + 24) >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v50,
      (System_Collections_Generic_List_object__o *)hakkenshiList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
    v51 = v50;
    while ( 1 )
    {
      v45 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v51,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
      if ( !v45 )
        break;
      if ( !v51.fields._current )
        sub_1B64324(v45);
      if ( !*p_runningHakkenshiList )
        sub_1B64324(0LL);
      klass_high = HIDWORD(v51.fields._current[1].klass);
      v47 = System_Collections_Generic_List_int___Contains(
              *p_runningHakkenshiList,
              klass_high,
              (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v47 )
      {
        v48 = this->fields.hakkenshiList;
        if ( !v48 )
          sub_1B64324(v47);
        if ( v48->fields._size >= klass_high / 10 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this->fields.hakkenshiList,
                   klass_high / 10 - 1,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !Item )
            sub_1B64324(0LL);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, 1, 0LL);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v51,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
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

  if ( (byte_4A000CB & 1) == 0 )
  {
    sub_1B640C8(&FSUtility_TypeInfo, method);
    sub_1B640C8(&HakkenshiListController_TypeInfo, v2);
    byte_4A000CB = 1;
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