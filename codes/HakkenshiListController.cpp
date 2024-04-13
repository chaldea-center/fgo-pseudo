void __fastcall HakkenshiListController___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  struct HakkenshiListController_StaticFields *static_fields; // x8

  if ( (byte_42EA497 & 1) == 0 )
  {
    sub_B5D5C4(&HakkenshiListController_TypeInfo, v1, v2, v3);
    byte_42EA497 = 1;
  }
  HakkenshiListController_TypeInfo->static_fields->BASE_WINDOW_HEIGHT = -85;
  HakkenshiListController_TypeInfo->static_fields->ADD_HEIGHT = 33;
  static_fields = HakkenshiListController_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FULL_SCREEN_BASE_POSITION.fields.x = 0x42400000C3580000LL;
  static_fields->FULL_SCREEN_BASE_POSITION.fields.z = 0.0;
}


void __fastcall HakkenshiListController___ctor(HakkenshiListController_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_List_int__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_42EA496 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v17, v18, v19);
    byte_42EA496 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
  this->fields.releaseHakkenshiList = (struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.releaseHakkenshiList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.runningHakkenshiList = v27;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.runningHakkenshiList,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.hakkenshiList = (struct System_Collections_Generic_List_GameObject__o *)v34;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.hakkenshiList,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
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
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *releaseHakkenshiList; // x0
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *current; // x28
  ExpeditionAssetManager_o *assetData; // x0
  UnityEngine_GameObject_o *StayHakkenshiObj; // x20
  UnityEngine_GameObject_o *v32; // x0
  __int64 v33; // x1
  UnityEngine_GameObject_o *v34; // x20
  srcLineSprite_o *Component_srcLineSprite; // x21
  UnityEngine_Transform_o *transform; // x0
  __int64 v37; // x1
  UnityEngine_Transform_o *v38; // x0
  __int64 v39; // x1
  UnityEngine_Transform_o *v40; // x21
  __int64 v41; // x0
  __int64 v42; // x1
  int v43; // s0
  __int64 v46; // x1
  struct System_Collections_Generic_List_GameObject__o *hakkenshiList; // x0
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EA495 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_HakkenshiAnimationPlayer___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Insert__, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    byte_42EA495 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  releaseHakkenshiList = this->fields.releaseHakkenshiList;
  if ( !releaseHakkenshiList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v48,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)releaseHakkenshiList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
  v49 = v48;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v49,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
    if ( !v27 )
      break;
    current = v49.fields.current;
    if ( !v49.fields.current )
      sub_B5D69C(v27, v28);
    assetData = this->fields.assetData;
    if ( !assetData )
      sub_B5D69C(0LL, v28);
    StayHakkenshiObj = ExpeditionAssetManager__GetStayHakkenshiObj(assetData, HIDWORD(v49.fields.current[1].klass), 0LL);
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
      v32 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)StayHakkenshiObj,
                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v34 = v32;
      if ( !v32 )
        sub_B5D69C(0LL, v33);
      UnityEngine_GameObject__SetActive(v32, 0, 0LL);
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v34,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_HakkenshiAnimationPlayer___);
      transform = UnityEngine_GameObject__get_transform(v34, 0LL);
      if ( !transform )
        sub_B5D69C(0LL, v37);
      UnityEngine_Transform__SetParent(transform, this->fields.hakkenshiContainer, 0LL);
      v38 = UnityEngine_GameObject__get_transform(v34, 0LL);
      if ( !Component_srcLineSprite )
        sub_B5D69C(v38, v39);
      if ( !v38 )
        sub_B5D69C(0LL, v39);
      v50.fields.x = *(float *)&Component_srcLineSprite->fields.mtIsUpdate;
      v50.fields.y = *((float *)&Component_srcLineSprite->fields.mtIsUpdate + 1);
      v50.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(v38, v50, 0LL);
      v40 = UnityEngine_GameObject__get_transform(v34, 0LL);
      *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Vector3__get_one(0LL);
      if ( !v40 )
        sub_B5D69C(v41, v42);
      UnityEngine_Transform__set_localScale(v40, *(UnityEngine_Vector3_o *)&v43, 0LL);
      hakkenshiList = this->fields.hakkenshiList;
      if ( !hakkenshiList )
        sub_B5D69C(0LL, v46);
      System_Collections_Generic_List_XWeaponTrail_Element___Insert(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)hakkenshiList,
        SHIDWORD(current[1].klass) / 10 - 1,
        (XWeaponTrail_Element_o *)v34,
        (const MethodInfo_30581D4 *)Method_System_Collections_Generic_List_GameObject__Insert__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v49,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
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
  int v29; // w20
  UISprite_o *bgSprite; // x21
  Il2CppObject *v31; // x0
  System_String_o *v32; // x22
  const MethodInfo *v33; // x1
  UnityEngine_Object_o *infoPanel; // x20
  __int64 v35; // x1
  UnityEngine_Component_o *transform; // x0
  float z; // s8
  float ItemBaseWindowX; // s9
  int v39; // w20
  UnityEngine_GameObject_o *gameObject; // x19
  HakkenshiListController_c *v41; // x8
  int v42; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EA492 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, eventId, (_DWORD)assetData, method);
    sub_B5D5C4(&EventItemWindowMaker_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&FSUtility_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&HakkenshiListController_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&int_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_19522/*"icon_bg_{0}"*/, v26, v27, v28);
    byte_42EA492 = 1;
  }
  this->fields.assetData = assetData;
  this->fields.eventId = eventId;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.assetData,
    (System_Int32_array **)assetData,
    (System_String_array **)assetData,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v29 = this->fields.eventId;
  bgSprite = this->fields.bgSprite;
  v42 = v29;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  v32 = System_String__Format((System_String_o *)StringLiteral_19522/*"icon_bg_{0}"*/, v31, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_31190412(v29, bgSprite, v32, 0LL);
  HakkenshiListController__RefreshHakkenshiInfo(this, v33);
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
      || (v39 = (int)transform,
          (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this->fields.infoPanel,
                                                    0LL)) == 0LL) )
    {
LABEL_27:
      sub_B5D69C(transform, v35);
    }
    v44.fields.y = (float)v39;
    v44.fields.x = ItemBaseWindowX;
    v44.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v44, 0LL);
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( !FSUtility__IsUnderVista(0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v41 = HakkenshiListController_TypeInfo;
    if ( (BYTE3(HakkenshiListController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !HakkenshiListController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo);
      v41 = HakkenshiListController_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(gameObject, v41->static_fields->FULL_SCREEN_BASE_POSITION, 0LL);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  struct System_Collections_Generic_List_GameObject__o *hakkenshiList; // x21
  int size; // w8
  __int64 v12; // x20

  v6 = this;
  if ( (byte_42EA494 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, Idx, isDisp, method);
    this = (HakkenshiListController_o *)sub_B5D5C4(
                                          &Method_System_Collections_Generic_List_GameObject__get_Item__,
                                          v7,
                                          v8,
                                          v9);
    byte_42EA494 = 1;
  }
  hakkenshiList = v6->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_9;
  size = hakkenshiList->fields._size;
  if ( size < Idx / 10 )
    return;
  v12 = Idx / 10 - 1LL;
  if ( size <= (unsigned int)v12 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  this = (HakkenshiListController_o *)hakkenshiList->fields._items->m_Items[v12];
  if ( !this )
LABEL_9:
    sub_B5D69C(this, *(_QWORD *)&Idx);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isDisp, 0LL);
}


void __fastcall HakkenshiListController__RefreshHakkenshiInfo(
        HakkenshiListController_o *this,
        const MethodInfo *method)
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
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int64_t hakkenshiList; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_int__o *v67; // x21
  System_Collections_Generic_List_int__o **p_runningHakkenshiList; // x20
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  struct System_Collections_Generic_List_EventExpeditionPieceEntity__o *ReleasePieceEntityList; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  UserEventExpeditionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct ExpeditionInfo_array *expeditionInfos; // x21
  int max_length; // w8
  unsigned int v85; // w22
  ExpeditionInfo_o *v86; // x8
  _BOOL8 v87; // x0
  __int64 v88; // x1
  int32_t klass_high; // w21
  _BOOL8 v90; // x0
  __int64 v91; // x1
  struct System_Collections_Generic_List_GameObject__o *v92; // x25
  int size; // w8
  __int64 v94; // x21
  UnityEngine_GameObject_o *v95; // x0
  int v96; // w19
  __int64 v97; // x0
  System_Collections_Generic_List_Enumerator_T__o v98; // [xsp+8h] [xbp-A8h] BYREF
  int v99[2]; // [xsp+20h] [xbp-90h]
  int v100; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v101; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v102; // [xsp+50h] [xbp-60h] BYREF
  UserEventExpeditionEntity_o *entity; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_42EA493 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventExpeditionPieceMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventExpeditionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v17, v18, v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__get_Current__,
      v20,
      v21,
      v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__get_Count__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v50, v51, v52);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v53, v54, v55);
    sub_B5D5C4(&NetworkManager_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v59, v60, v61);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v62, v63, v64);
    byte_42EA493 = 1;
  }
  entity = 0LL;
  memset(&v102, 0, sizeof(v102));
  memset(&v101, 0, sizeof(v101));
  v100 = 0;
  hakkenshiList = (int64_t)this->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_44;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v98,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)hakkenshiList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v102 = v98;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v102,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v102.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)current, 0LL);
  }
  v99[0] = 51;
  v100 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v102,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v100 = 0;
  hakkenshiList = (int64_t)this->fields.hakkenshiList;
  if ( !hakkenshiList )
    goto LABEL_44;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)hakkenshiList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  v67 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v67,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.runningHakkenshiList = v67;
  p_runningHakkenshiList = &this->fields.runningHakkenshiList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.runningHakkenshiList,
    (System_Int32_array **)v67,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  hakkenshiList = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hakkenshiList )
    goto LABEL_44;
  hakkenshiList = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)hakkenshiList,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventExpeditionPieceMaster___);
  if ( !hakkenshiList )
    goto LABEL_44;
  ReleasePieceEntityList = EventExpeditionPieceMaster__GetReleasePieceEntityList(
                             (EventExpeditionPieceMaster_o *)hakkenshiList,
                             this->fields.eventId,
                             0LL);
  this->fields.releaseHakkenshiList = ReleasePieceEntityList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.releaseHakkenshiList,
    (System_Int32_array **)ReleasePieceEntityList,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  hakkenshiList = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hakkenshiList )
    goto LABEL_44;
  MasterData_WarQuestSelectionMaster = (UserEventExpeditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)hakkenshiList,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventExpeditionMaster___);
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
      v85 = 0;
      while ( 1 )
      {
        if ( v85 >= max_length )
        {
          v97 = sub_B5D6C8(hakkenshiList);
          sub_B5D668(v97, 0LL);
        }
        v86 = expeditionInfos->m_Items[v85];
        if ( !v86 )
          break;
        hakkenshiList = (int64_t)*p_runningHakkenshiList;
        if ( !*p_runningHakkenshiList )
          break;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)hakkenshiList,
          v86->fields.pieceIdx,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        max_length = expeditionInfos->max_length;
        if ( (int)++v85 >= max_length )
          goto LABEL_27;
      }
LABEL_44:
      sub_B5D69C(hakkenshiList, method);
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
      &v98,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)hakkenshiList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity__GetEnumerator__);
    v101 = v98;
    while ( 1 )
    {
      v87 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v101,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__MoveNext__);
      if ( !v87 )
        break;
      if ( !v101.fields.current )
        sub_B5D69C(v87, v88);
      if ( !*p_runningHakkenshiList )
        sub_B5D69C(0LL, v88);
      klass_high = HIDWORD(v101.fields.current[1].klass);
      v90 = System_Collections_Generic_List_int___Contains(
              *p_runningHakkenshiList,
              klass_high,
              (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v90 )
      {
        v92 = this->fields.hakkenshiList;
        if ( !v92 )
          sub_B5D69C(v90, v91);
        size = v92->fields._size;
        if ( size >= klass_high / 10 )
        {
          v94 = klass_high / 10 - 1LL;
          if ( size <= (unsigned int)v94 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v95 = v92->fields._items->m_Items[v94];
          if ( !v95 )
            sub_B5D69C(0LL, v91);
          UnityEngine_GameObject__SetActive(v95, 1, 0LL);
        }
      }
    }
    v99[0] = 311;
    v96 = ++v100;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v101,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventExpeditionPieceEntity__Dispose__);
    if ( v96 )
    {
      if ( v99[v96 - 1] == 311 )
        v100 = v96 - 1;
    }
  }
}


int32_t __fastcall HakkenshiListController__get_HakkenshiBaseWindowHeight(
        HakkenshiListController_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  HakkenshiListController_c *v7; // x0
  int32_t BASE_WINDOW_HEIGHT; // w20
  int32_t ADD_HEIGHT; // w8
  HakkenshiListController_c *v10; // x0

  if ( (byte_42EA491 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&HakkenshiListController_TypeInfo, v4, v5, v6);
    byte_42EA491 = 1;
  }
  v7 = HakkenshiListController_TypeInfo;
  if ( (BYTE3(HakkenshiListController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !HakkenshiListController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo);
    v7 = HakkenshiListController_TypeInfo;
  }
  BASE_WINDOW_HEIGHT = v7->static_fields->BASE_WINDOW_HEIGHT;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    ADD_HEIGHT = 0;
  }
  else
  {
    v10 = HakkenshiListController_TypeInfo;
    if ( (BYTE3(HakkenshiListController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !HakkenshiListController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HakkenshiListController_TypeInfo);
      v10 = HakkenshiListController_TypeInfo;
    }
    ADD_HEIGHT = v10->static_fields->ADD_HEIGHT;
  }
  return ADD_HEIGHT + BASE_WINDOW_HEIGHT;
}