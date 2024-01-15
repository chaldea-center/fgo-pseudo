void __fastcall MapButtonControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_40FB57E & 1) == 0 )
  {
    sub_B16FFC(&MapButtonControl_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_8890/*"MapBtnPrefab"*/, v8);
    byte_40FB57E = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MapButtonControl_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_8890/*"MapBtnPrefab"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_8890/*"MapBtnPrefab"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall MapButtonControl___ctor(MapButtonControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MapButtonControl__CreateMapButtons(
        MapButtonControl_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        System_Collections_Generic_List_UIAtlas__o *mapAtlases,
        ScrTerminalMap_o *terminalMap,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
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
  __int64 v23; // x1
  __int64 v24; // x1
  BattleServantConfConponent_o *p_buttons; // x23
  const MethodInfo *v26; // x1
  UnityEngine_Object_o *MapButtonPrefab; // x27
  UnityEngine_Object_o *currentMapButtonPrefab; // x24
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  MapButtonMaster_o *Master_WarQuestSelectionMaster; // x0
  MapControl_WarInfo_o *v48; // x1
  const MethodInfo *v49; // x3
  MapButtonEntity_array *OpenedButtons; // x22
  struct UIGrid_o *GridComponentBottom; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  WarQuestSelectionMaster_o *v58; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v59; // x20
  int32_t EventId; // w0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct UIGrid_o *GridComponentTop; // x1
  _BOOL4 IsMapModel; // w0
  struct WarEntity_o *mWarEnt; // x8
  _BOOL4 v70; // w28
  __int64 v71; // x1
  const MethodInfo *v72; // x4
  MapCondMaster_o *v73; // x19
  TerminalPramsManager_c *v74; // x0
  int32_t MapModelClearQuestId_k__BackingField; // w26
  System_Collections_Generic_List_int__o *ReleasedMapButtonIdList; // x0
  int v77; // w21
  bool v78; // w8
  struct UIGrid_o *v79; // x20
  MapButtonPrefab_o *Component_srcLineSprite; // x0
  const MethodInfo *v81; // x1
  __int64 v82; // x2
  float GridCellHeight; // s0
  System_Int32_array **v84; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  UIWidget_o *Component_UIWidget; // x0
  __int64 v92; // x1
  System_String_array **v93; // x2
  int max_length; // w8
  unsigned int v95; // w20
  int v96; // w28
  __int64 v97; // x27
  MapButtonEntity_o *v98; // x26
  MapButtonEntity_array *v99; // x19
  UnityEngine_GameObject_o *v100; // x0
  BattleServantConfConponent_c *klass; // x21
  UnityEngine_GameObject_o *v102; // x22
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Int32_array **v108; // x25
  const MethodInfo *v109; // x7
  bool v110; // w6
  BattleServantConfConponent_c *v111; // x8
  MapButtonPrefab_o *v112; // x0
  const MethodInfo *v113; // x5
  struct MapButtonPrefab_array *buttons; // x8
  MapButtonPrefab_o *v115; // x0
  bool v116; // w4
  BattleServantConfConponent_c *v117; // x8
  MapButtonPrefab_o *v118; // x25
  QuestTree_o *v119; // x0
  int32_t QuestCountForMap; // w0
  const MethodInfo *v121; // x2
  BattleServantConfConponent_c *v122; // x8
  MapButtonPrefab_o *v123; // x25
  QuestTree_o *v124; // x0
  bool IsNextSpotForMap; // w0
  const MethodInfo *v126; // x2
  UIGrid_o *v127; // x25
  UnityEngine_Transform_o *transform; // x0
  bool v129; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_int__o *v130; // [xsp+8h] [xbp-98h]
  int32_t currentMapLayerId; // [xsp+10h] [xbp-90h]
  char isMapButtonTop; // [xsp+14h] [xbp-8Ch]
  UnityEngine_UI_Dropdown_DropdownItem_o *original; // [xsp+18h] [xbp-88h]
  ScrTerminalMap_o *v134; // [xsp+20h] [xbp-80h]
  int32_t mapId; // [xsp+30h] [xbp-70h]
  bool v137; // [xsp+34h] [xbp-6Ch]
  struct UIGrid_o **p_gridComponent; // [xsp+38h] [xbp-68h]
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_40FB578 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventDetailMaster___, warInf);
    sub_B16FFC(&Method_DataManager_GetMaster_MapButtonMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_MapCondMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v14);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___, v15);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_B16FFC(&MapButtonPrefab___TypeInfo, v19);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v20);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v22);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v23);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v24);
    byte_40FB578 = 1;
  }
  entity = 0LL;
  p_buttons = (BattleServantConfConponent_o *)&this->fields.buttons;
  MapButtonPrefab = (UnityEngine_Object_o *)MapButtonControl__GetMapButtonPrefab(
                                              this,
                                              mapAssetData,
                                              (const MethodInfo *)mapInf);
  if ( this->fields.buttons )
  {
    currentMapButtonPrefab = (UnityEngine_Object_o *)this->fields.currentMapButtonPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(currentMapButtonPrefab, MapButtonPrefab, 0LL) )
      return;
  }
  MapButtonControl__DestroyButtons(this, v26);
  this->fields.newButtonEntryAnimAction = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.newButtonEntryAnimAction, 0LL, v29, v30, v31, v32, v33, v34);
  this->fields.terminalMap = terminalMap;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.terminalMap,
    (System_Int32_array **)terminalMap,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.currentMapButtonPrefab = (struct UnityEngine_GameObject_o *)MapButtonPrefab;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentMapButtonPrefab,
    (System_Int32_array **)MapButtonPrefab,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (MapButtonMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_MapButtonMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_92;
  OpenedButtons = MapButtonMaster__GetOpenedButtons(Master_WarQuestSelectionMaster, v48, mapInf, v49);
  GridComponentBottom = this->fields.GridComponentBottom;
  p_gridComponent = &this->fields.gridComponent;
  this->fields.gridComponent = GridComponentBottom;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.gridComponent,
    (System_Int32_array **)GridComponentBottom,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v58 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !warInf )
    goto LABEL_92;
  v59 = (DataMasterBase_WarMaster__WarEntity__int__o *)v58;
  EventId = MapControl_WarInfo__GetEventId(warInf, 0LL);
  if ( !v59 )
    goto LABEL_92;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v59,
          &entity,
          EventId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_19;
  if ( !entity )
    goto LABEL_92;
  if ( EventDetailEntity__IsMapSwitchButtonTop((EventDetailEntity_o *)entity, 0LL) )
  {
    GridComponentTop = this->fields.GridComponentTop;
    this->fields.gridComponent = GridComponentTop;
    sub_B16F98(
      (BattleServantConfConponent_o *)p_gridComponent,
      (System_Int32_array **)GridComponentTop,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
    isMapButtonTop = 1;
    if ( !terminalMap )
      goto LABEL_92;
  }
  else
  {
LABEL_19:
    isMapButtonTop = 0;
    if ( !terminalMap )
      goto LABEL_92;
  }
  IsMapModel = ScrTerminalMap__IsMapModel(terminalMap, 0LL);
  mWarEnt = terminalMap->fields.mWarEnt;
  if ( !mWarEnt )
    goto LABEL_92;
  v70 = IsMapModel;
  mapId = *(&mWarEnt->fields.id + 1);
  currentMapLayerId = (int32_t)terminalMap->fields.servantRoot;
  if ( IsMapModel )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v73 = (MapCondMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_MapCondMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F606D )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v71);
      byte_40F606D = 1;
    }
    v74 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v74 = TerminalPramsManager_TypeInfo;
    }
    MapModelClearQuestId_k__BackingField = v74->static_fields->_MapModelClearQuestId_k__BackingField;
    if ( !byte_40F606E )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v71);
      v74 = TerminalPramsManager_TypeInfo;
      byte_40F606E = 1;
    }
    if ( (BYTE3(v74->vtable._0_Equals.methodPtr) & 4) != 0 && !v74->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v74);
      v74 = TerminalPramsManager_TypeInfo;
    }
    if ( !v73 )
      goto LABEL_92;
    ReleasedMapButtonIdList = MapCondMaster__GetReleasedMapButtonIdList(
                                v73,
                                mapId,
                                MapModelClearQuestId_k__BackingField,
                                v74->static_fields->_MapModelClearPhaseCount_k__BackingField,
                                v72);
    if ( ReleasedMapButtonIdList )
    {
      if ( !OpenedButtons )
        goto LABEL_92;
      v77 = 1;
      v78 = ReleasedMapButtonIdList->fields._size < (signed int)OpenedButtons->max_length;
      goto LABEL_45;
    }
    v77 = 0;
  }
  else
  {
    v77 = 0;
    ReleasedMapButtonIdList = 0LL;
  }
  v78 = 1;
LABEL_45:
  v129 = v78;
  v130 = ReleasedMapButtonIdList;
  if ( !MapButtonPrefab )
    goto LABEL_92;
  v79 = *p_gridComponent;
  Component_srcLineSprite = (MapButtonPrefab_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   (UnityEngine_GameObject_o *)MapButtonPrefab,
                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
  if ( !Component_srcLineSprite )
    goto LABEL_92;
  GridCellHeight = MapButtonPrefab__GetGridCellHeight(Component_srcLineSprite, v81);
  if ( !v79 )
    goto LABEL_92;
  v137 = v70;
  original = (UnityEngine_UI_Dropdown_DropdownItem_o *)MapButtonPrefab;
  v134 = terminalMap;
  *(float *)&v79->fields.animateSmoothly = GridCellHeight;
  if ( !OpenedButtons )
    goto LABEL_92;
  v84 = (System_Int32_array **)sub_B17014(MapButtonPrefab___TypeInfo, OpenedButtons->max_length, v82);
  p_buttons->klass = (BattleServantConfConponent_c *)v84;
  sub_B16F98(p_buttons, v84, v85, v86, v87, v88, v89, v90);
  max_length = OpenedButtons->max_length;
  if ( max_length >= 1 )
  {
    v95 = 0;
    v96 = v70 & v77;
    v97 = 32LL;
    while ( 1 )
    {
      if ( v95 >= max_length )
        goto LABEL_93;
      v98 = *(MapButtonEntity_o **)((char *)&OpenedButtons->obj.klass + v97);
      v99 = OpenedButtons;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v100 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           original,
                                           (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      klass = p_buttons->klass;
      v102 = v100;
      Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                             v100,
                             (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
      if ( !klass )
        break;
      v108 = (System_Int32_array **)Component_UIWidget;
      if ( Component_UIWidget )
      {
        Component_UIWidget = (UIWidget_o *)sub_B170BC(Component_UIWidget, *((_QWORD *)klass->_1.image + 8));
        if ( !Component_UIWidget )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v95 >= LODWORD(klass->_1.namespaze) )
        goto LABEL_93;
      *(void **)((char *)&klass->_1.image + v97) = v108;
      sub_B16F98((BattleServantConfConponent_o *)((char *)klass + v97), v108, v93, v103, v104, v105, v106, v107);
      if ( v96 )
      {
        if ( !v98 || !v130 )
          break;
        Component_UIWidget = (UIWidget_o *)System_Collections_Generic_List_int___Contains(
                                             v130,
                                             v98->fields.id,
                                             (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
        v110 = (unsigned __int8)Component_UIWidget & 1;
      }
      else
      {
        v110 = 0;
      }
      v111 = p_buttons->klass;
      if ( !p_buttons->klass )
        break;
      if ( v95 >= LODWORD(v111->_1.namespaze) )
      {
LABEL_93:
        sub_B17100(Component_UIWidget, v92, v93);
        sub_B170A0();
      }
      v112 = *(MapButtonPrefab_o **)((char *)&v111->_1.image + v97);
      if ( !v112 )
        break;
      MapButtonPrefab__SetupButton(v112, mapAtlases, this->fields.commonUI, v134, v98, isMapButtonTop, v110, v109);
      buttons = this->fields.buttons;
      if ( !buttons )
        break;
      if ( v95 >= buttons->max_length )
        goto LABEL_93;
      v115 = *(MapButtonPrefab_o **)((char *)&buttons->obj.klass + v97);
      if ( !v96 )
        goto LABEL_72;
      if ( !v130 )
        break;
      v116 = v129;
      if ( v130->fields._size <= 0 )
LABEL_72:
        v116 = 0;
      if ( !v115 )
        break;
      MapButtonPrefab__SetButtonSprite(v115, v137, mapId, currentMapLayerId, v116, v113);
      v117 = p_buttons->klass;
      if ( !p_buttons->klass )
        break;
      if ( v95 >= LODWORD(v117->_1.namespaze) )
        goto LABEL_93;
      v118 = *(MapButtonPrefab_o **)((char *)&v117->_1.image + v97);
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      v119 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v98 )
        break;
      if ( !v119 )
        break;
      QuestCountForMap = QuestTree__GetQuestCountForMap(v119, v98->fields.targetMapId, v98->fields.layer, 0LL);
      if ( !v118 )
        break;
      MapButtonPrefab__SetBadge(v118, QuestCountForMap, v121);
      v122 = p_buttons->klass;
      if ( !p_buttons->klass )
        break;
      if ( v95 >= LODWORD(v122->_1.namespaze) )
        goto LABEL_93;
      v123 = *(MapButtonPrefab_o **)((char *)&v122->_1.image + v97);
      v124 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v124 )
        break;
      IsNextSpotForMap = QuestTree__IsNextSpotForMap(v124, v98->fields.targetMapId, v98->fields.layer, 0LL);
      if ( !v123 )
        break;
      MapButtonPrefab__SetNext(v123, IsNextSpotForMap, v126);
      if ( !v102 )
        break;
      v127 = *p_gridComponent;
      transform = UnityEngine_GameObject__get_transform(v102, 0LL);
      if ( !v127 )
        break;
      UIGrid__AddChild(v127, transform, 0LL);
      GameObjectExtensions__ResetLocalScale(v102, 0LL);
      UnityEngine_GameObject__SetActive(v102, 0, 0LL);
      max_length = v99->max_length;
      ++v95;
      OpenedButtons = v99;
      v97 += 8LL;
      if ( (int)v95 >= max_length )
        goto LABEL_89;
    }
LABEL_92:
    sub_B170D4();
  }
LABEL_89:
  if ( !*p_gridComponent )
    goto LABEL_92;
  ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))(*p_gridComponent)->klass->vtable._8_Reposition.method)(
    *p_gridComponent,
    (*p_gridComponent)->klass->vtable._9_ResetPosition.methodPtr);
}


void __fastcall MapButtonControl__DestroyButtons(MapButtonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *GridComponentBottom; // x21
  UnityEngine_Component_o *v4; // x0
  int32_t v5; // w21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v7; // x0
  UnityEngine_Transform_o *v8; // x0
  UnityEngine_Component_o *Child; // x22
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *GridComponentTop; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Component_o *v18; // x0
  int32_t v19; // w21
  UnityEngine_Transform_o *v20; // x0
  UnityEngine_Component_o *v21; // x0
  UnityEngine_Transform_o *v22; // x0
  UnityEngine_Component_o *v23; // x22
  UnityEngine_Object_o *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_40FB57C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB57C = 1;
  }
  if ( this->fields.buttons )
  {
    GridComponentBottom = (UnityEngine_Object_o *)this->fields.GridComponentBottom;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(GridComponentBottom, 0LL, 0LL) )
    {
      v4 = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
      if ( v4 )
      {
        v5 = 0;
        do
        {
          transform = UnityEngine_Component__get_transform(v4, 0LL);
          if ( !transform )
            break;
          if ( v5 >= UnityEngine_Transform__get_childCount(transform, 0LL) )
            goto LABEL_25;
          v7 = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          if ( !v7 )
            break;
          v8 = UnityEngine_Component__get_transform(v7, 0LL);
          if ( !v8 )
            break;
          Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v8, v5, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Child, 0LL, 0LL) )
          {
            if ( !Child )
              break;
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
          }
          v4 = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          ++v5;
        }
        while ( v4 );
      }
LABEL_45:
      sub_B170D4();
    }
LABEL_25:
    GridComponentTop = (UnityEngine_Object_o *)this->fields.GridComponentTop;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(GridComponentTop, 0LL, 0LL) )
    {
      v18 = (UnityEngine_Component_o *)this->fields.GridComponentTop;
      if ( v18 )
      {
        v19 = 0;
        do
        {
          v20 = UnityEngine_Component__get_transform(v18, 0LL);
          if ( !v20 )
            break;
          if ( v19 >= UnityEngine_Transform__get_childCount(v20, 0LL) )
            goto LABEL_46;
          v21 = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          if ( !v21 )
            break;
          v22 = UnityEngine_Component__get_transform(v21, 0LL);
          if ( !v22 )
            break;
          v23 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v22, v19, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v23, 0LL, 0LL) )
          {
            if ( !v23 )
              goto LABEL_45;
            v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v23, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_34809464(v24, 0LL);
          }
          v18 = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          ++v19;
        }
        while ( v18 );
      }
      goto LABEL_45;
    }
LABEL_46:
    this->fields.buttons = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.buttons, 0LL, v12, v13, v14, v15, v16, v17);
    this->fields.currentMapButtonPrefab = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.currentMapButtonPrefab, 0LL, v25, v26, v27, v28, v29, v30);
  }
}


void __fastcall MapButtonControl__FrameIn(MapButtonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct MapButtonPrefab_array *buttons; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v35; // x22
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  struct MapButtonPrefab_array *v41; // x24
  int max_length; // w8
  unsigned int v43; // w25
  MapButtonPrefab_o *v44; // x23
  System_Action_o *v45; // x22
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  const MethodInfo *v52; // x2
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FB57D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_Last_MapButtonPrefab___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapButtonPrefab__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapButtonPrefab___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_MapButtonPrefab__TypeInfo, v14);
    sub_B16FFC(&Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, v15);
    sub_B16FFC(&MapButtonControl___c__DisplayClass16_0_TypeInfo, v16);
    byte_40FB57D = 1;
  }
  memset(&v53, 0, sizeof(v53));
  v17 = sub_B170CC(MapButtonControl___c__DisplayClass16_0_TypeInfo, method, v2, v3, v4);
  MapButtonControl___c__DisplayClass16_0___ctor((MapButtonControl___c__DisplayClass16_0_o *)v17, 0LL);
  buttons = this->fields.buttons;
  if ( buttons && *(_QWORD *)&buttons->max_length )
  {
    v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_MapButtonPrefab__TypeInfo,
                                                                                                    v18,
                                                                                                    v19,
                                                                                                    v20,
                                                                                                    v21);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v23,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_MapButtonPrefab__TypeInfo,
                                                                                                    v24,
                                                                                                    v25,
                                                                                                    v26,
                                                                                                    v27);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v28,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    if ( !v17 )
      goto LABEL_25;
    *(_QWORD *)(v17 + 16) = v28;
    v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v17 + 16);
    sub_B16F98((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
    v41 = this->fields.buttons;
    if ( !v41 )
      goto LABEL_25;
    max_length = v41->max_length;
    if ( max_length >= 1 )
    {
      v43 = 0;
      while ( 1 )
      {
        if ( v43 >= max_length )
        {
          sub_B17100(v36, v37, v38);
          sub_B170A0();
        }
        v44 = v41->m_Items[v43];
        if ( !v44 )
          break;
        if ( v44->fields.isNew )
        {
          if ( !*v35 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            *v35,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MapButtonPrefab__Add__);
          v44->fields.isNew = 0;
        }
        else
        {
          if ( !v23 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v23,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MapButtonPrefab__Add__);
        }
        max_length = v41->max_length;
        if ( (int)++v43 >= max_length )
          goto LABEL_17;
      }
LABEL_25:
      sub_B170D4();
    }
LABEL_17:
    v45 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v37, v38, v39, v40);
    System_Action___ctor(v45, (Il2CppObject *)v17, Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, 0LL);
    this->fields.newButtonEntryAnimAction = v45;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.newButtonEntryAnimAction,
      (System_Int32_array **)v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v23,
           (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
    {
      System_Linq_Enumerable__Last_string_(
        (System_Collections_Generic_IEnumerable_TSource__o *)v23,
        (const MethodInfo_18D901C *)Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
      if ( !v23 )
        goto LABEL_25;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v53,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v23,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v53,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
      {
        if ( !v53.fields.current )
          sub_B170D4();
        MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v53.fields.current, 0LL, v52);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v53,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
    }
  }
}


void __fastcall MapButtonControl__FrameOut(MapButtonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct MapButtonPrefab_array *buttons; // x19
  int max_length; // w8
  __int64 v5; // x20
  MapButtonPrefab_o *v6; // x0

  buttons = this->fields.buttons;
  if ( buttons )
  {
    max_length = buttons->max_length;
    if ( max_length >= 1 )
    {
      v5 = 0LL;
      do
      {
        if ( (unsigned int)v5 >= max_length )
        {
          sub_B17100(this, method, v2);
          sub_B170A0();
        }
        v6 = buttons->m_Items[v5];
        if ( !v6 )
          sub_B170D4();
        MapButtonPrefab__FrameOut(v6, method);
        max_length = buttons->max_length;
        ++v5;
      }
      while ( (int)v5 < max_length );
    }
  }
}


UnityEngine_GameObject_o *__fastcall MapButtonControl__GetMapButtonPrefab(
        MapButtonControl_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  MapButtonControl_c *v7; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20

  if ( (byte_40FB579 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, mapAssetData);
    sub_B16FFC(&MapButtonControl_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FB579 = 1;
  }
  if ( !mapAssetData )
    return this->fields.buttonPrefab;
  v7 = MapButtonControl_TypeInfo;
  if ( (BYTE3(MapButtonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapButtonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonControl_TypeInfo);
    v7 = MapButtonControl_TypeInfo;
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             mapAssetData,
                                                             v7->static_fields->MAP_BUTTON_PREFAB_NAME,
                                                             (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    return this->fields.buttonPrefab;
  return (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
}


void __fastcall MapButtonControl__PlayNewButtonEntryAnim(MapButtonControl_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_newButtonEntryAnimAction; // x19
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  p_newButtonEntryAnimAction = (BattleServantConfConponent_o *)&this->fields.newButtonEntryAnimAction;
  ActionExtensions__Call(this->fields.newButtonEntryAnimAction, 0LL);
  p_newButtonEntryAnimAction->klass = 0LL;
  sub_B16F98(p_newButtonEntryAnimAction, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall MapButtonControl__SetNext(
        MapButtonControl_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        MapControl_SpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  __int64 v8; // x1
  MapButtonMaster_o *Master_WarQuestSelectionMaster; // x0
  MapControl_WarInfo_o *v10; // x1
  const MethodInfo *v11; // x3
  MapButtonEntity_array *OpenedButtons; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  int max_length; // w8
  MapButtonEntity_array *v16; // x21
  il2cpp_array_size_t v17; // w22
  struct MapButtonPrefab_array *buttons; // x9
  Il2CppClass **v19; // x24
  Il2CppClass *v20; // x8
  char *v21; // x24
  Il2CppClass *v22; // t1
  int namespaze; // w25
  int v24; // w24
  struct MapButtonPrefab_array *v25; // x8
  MapButtonPrefab_o *v26; // x0

  if ( (byte_40FB57A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_MapButtonMaster___, warInf);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    byte_40FB57A = 1;
  }
  if ( this->fields.buttons )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (MapButtonMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_26;
    OpenedButtons = MapButtonMaster__GetOpenedButtons(Master_WarQuestSelectionMaster, v10, mapInf, v11);
    if ( !OpenedButtons )
      goto LABEL_26;
    max_length = OpenedButtons->max_length;
    v16 = OpenedButtons;
    if ( max_length >= 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        buttons = this->fields.buttons;
        if ( !buttons )
          break;
        if ( (signed int)v17 >= (signed int)buttons->max_length )
          return;
        if ( v17 >= max_length )
          goto LABEL_27;
        v19 = &v16->obj.klass + (int)v17;
        v22 = v19[4];
        v21 = (char *)(v19 + 4);
        v20 = v22;
        if ( !v22 || !spotInfo )
          break;
        namespaze = (int)v20->_1.namespaze;
        OpenedButtons = (MapButtonEntity_array *)MapControl_SpotInfo__GetMapID(spotInfo, 0LL);
        if ( namespaze == (_DWORD)OpenedButtons )
        {
          if ( v17 >= v16->max_length )
            goto LABEL_27;
          if ( !*(_QWORD *)v21 )
            break;
          v24 = *(_DWORD *)(*(_QWORD *)v21 + 28LL);
          OpenedButtons = (MapButtonEntity_array *)MapControl_SpotInfo__GetLayer(spotInfo, 0LL);
          if ( v24 == (_DWORD)OpenedButtons )
          {
            v25 = this->fields.buttons;
            if ( !v25 )
              break;
            if ( v17 >= v25->max_length )
            {
LABEL_27:
              sub_B17100(OpenedButtons, v13, v14);
              sub_B170A0();
            }
            v26 = v25->m_Items[v17];
            if ( !v26 )
              break;
            MapButtonPrefab__SetNext(v26, 1, v14);
          }
        }
        max_length = v16->max_length;
        if ( (int)++v17 >= max_length )
          return;
      }
LABEL_26:
      sub_B170D4();
    }
  }
}


void __fastcall MapButtonControl__UpdateBadge(
        MapButtonControl_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  MapButtonMaster_o *MasterData_WarQuestSelectionMaster; // x0
  MapControl_WarInfo_o *v11; // x1
  const MethodInfo *v12; // x3
  MapButtonEntity_array *OpenedButtons; // x0
  MapButtonEntity_array *v14; // x20
  il2cpp_array_size_t v15; // w21
  struct MapButtonPrefab_array *buttons; // x8
  clsQuestCheck_o *QuestCountForMap; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  MapButtonEntity_o *v20; // x8
  struct MapButtonPrefab_array *v21; // x8
  int32_t v22; // w1
  MapButtonPrefab_o *v23; // x0

  if ( (byte_40FB57B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_MapButtonMaster___, warInf);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v7);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v8);
    byte_40FB57B = 1;
  }
  if ( this->fields.buttons )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_WarQuestSelectionMaster = (MapButtonMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MapButtonMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_22;
    OpenedButtons = MapButtonMaster__GetOpenedButtons(MasterData_WarQuestSelectionMaster, v11, mapInf, v12);
    if ( !OpenedButtons )
      goto LABEL_22;
    v14 = OpenedButtons;
    if ( (int)OpenedButtons->max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        buttons = this->fields.buttons;
        if ( !buttons )
          break;
        if ( (signed int)v15 >= (signed int)buttons->max_length )
          return;
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        QuestCountForMap = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( v15 >= v14->max_length )
        {
LABEL_23:
          sub_B17100(QuestCountForMap, v18, v19);
          sub_B170A0();
        }
        v20 = v14->m_Items[v15];
        if ( !v20 )
          break;
        if ( !QuestCountForMap )
          break;
        QuestCountForMap = (clsQuestCheck_o *)QuestTree__GetQuestCountForMap(
                                                (QuestTree_o *)QuestCountForMap,
                                                v20->fields.targetMapId,
                                                v20->fields.layer,
                                                0LL);
        v21 = this->fields.buttons;
        if ( !v21 )
          break;
        if ( v15 >= v21->max_length )
          goto LABEL_23;
        v22 = (int)QuestCountForMap;
        v23 = v21->m_Items[v15];
        if ( !v23 )
          break;
        MapButtonPrefab__SetBadge(v23, v22, v19);
        if ( (signed int)++v15 >= (signed int)v14->max_length )
          return;
      }
LABEL_22:
      sub_B170D4();
    }
  }
}


void __fastcall MapButtonControl__UpdateButtonSprite(MapButtonControl_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *terminalMap; // x0
  _BOOL8 IsMapModel; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x5
  struct ScrTerminalMap_o *v8; // x9
  struct WarEntity_o *mWarEnt; // x10
  struct MapButtonPrefab_array *buttons; // x22
  int max_length; // w8
  int32_t v12; // w19
  int32_t servantRoot; // w20
  unsigned int v14; // w23
  bool v15; // w21
  MapButtonPrefab_o *v16; // x0

  if ( this->fields.buttons )
  {
    terminalMap = this->fields.terminalMap;
    if ( !terminalMap )
      goto LABEL_12;
    IsMapModel = ScrTerminalMap__IsMapModel(terminalMap, 0LL);
    v8 = this->fields.terminalMap;
    if ( !v8 )
      goto LABEL_12;
    mWarEnt = v8->fields.mWarEnt;
    if ( !mWarEnt )
      goto LABEL_12;
    buttons = this->fields.buttons;
    if ( !buttons )
      goto LABEL_12;
    max_length = buttons->max_length;
    if ( max_length >= 1 )
    {
      v12 = *(&mWarEnt->fields.id + 1);
      servantRoot = (int32_t)v8->fields.servantRoot;
      v14 = 0;
      v15 = IsMapModel;
      while ( 1 )
      {
        if ( v14 >= max_length )
        {
          sub_B17100(IsMapModel, v5, v6);
          sub_B170A0();
        }
        v16 = buttons->m_Items[v14];
        if ( !v16 )
          break;
        MapButtonPrefab__SetButtonSprite(v16, v15, v12, servantRoot, 0, v7);
        max_length = buttons->max_length;
        if ( (int)++v14 >= max_length )
          return;
      }
LABEL_12:
      sub_B170D4();
    }
  }
}


void __fastcall MapButtonControl___c__DisplayClass16_0___ctor(
        MapButtonControl___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapButtonControl___c__DisplayClass16_0___FrameIn_b__0(
        MapButtonControl___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_MapButtonPrefab__o *newButtonList; // x0
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F6914 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__, v6);
    byte_40F6914 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.newButtonList,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
  {
    newButtonList = this->fields.newButtonList;
    if ( !newButtonList )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v8,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)newButtonList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v8,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
    {
      if ( !v8.fields.current )
        sub_B170D4();
      MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v8.fields.current, 0LL, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v8,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
  }
}