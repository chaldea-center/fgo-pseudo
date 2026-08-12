void MapButtonControl___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596D092 & 1) == 0 )
  {
    sub_2213A60(&MapButtonControl_TypeInfo);
    sub_2213A60(&StringLiteral_9262/*"MapBtnPrefab"*/);
    byte_596D092 = 1;
  }
  v7 = StringLiteral_9262/*"MapBtnPrefab"*/;
  MapButtonControl_TypeInfo->static_fields->MAP_BUTTON_PREFAB_NAME = (struct System_String_o *)StringLiteral_9262/*"MapBtnPrefab"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)MapButtonControl_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
}


void MapButtonControl___ctor(MapButtonControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MapButtonControl__CreateMapButtons(
        MapButtonControl_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        System_Collections_Generic_List_UIAtlas__o *mapAtlases,
        ScrTerminalMap_o *terminalMap,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  const MethodInfo *v12; // x1
  __int64 v13; // x2
  struct UnityEngine_GameObject_o *MapButtonPrefab; // x26
  struct MapButtonPrefab_array **p_buttons; // x22
  UnityEngine_Object_o *currentMapButtonPrefab; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 Master_object; // x0
  const MethodInfo *v38; // x1
  MapButtonEntity_array *OpenedButtons; // x0
  struct UIGrid_o *GridComponentBottom; // x1
  MapButtonEntity_array *v41; // x29
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  DataMasterBase_TMaster__TEntity__PKType__o *v48; // x20
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  struct UIGrid_o *GridComponentTop; // x1
  __int64 v56; // x2
  struct MapControl_MapInfo_o *mMapInfo; // x8
  char v58; // w27
  __int64 v59; // x2
  Il2CppObject *v60; // x19
  int32_t v61; // w23
  char v62; // w21
  bool v63; // w19
  struct UIGrid_o *v64; // x20
  float GridCellHeight; // s0
  __int64 v66; // x0
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  __int64 v73; // x2
  int max_length; // w8
  unsigned int v75; // w25
  char v76; // w21
  __int64 v77; // x24
  MapButtonEntity_o *v78; // x23
  struct UnityEngine_GameObject_o *v79; // x29
  Il2CppObject *v80; // x0
  struct MapButtonPrefab_array *v81; // x20
  UnityEngine_GameObject_o *v82; // x19
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  __int64 v89; // x26
  __int64 v90; // x1
  const MethodInfo *v91; // x7
  struct MapButtonPrefab_array *v92; // x8
  MapButtonPrefab_o *v93; // x8
  const MethodInfo *v94; // x5
  struct MapButtonPrefab_array *buttons; // x8
  bool v96; // w4
  const MethodInfo *v97; // x5
  struct MapButtonPrefab_array *v98; // x8
  bool v99; // w4
  struct MapButtonPrefab_array *v100; // x8
  MapButtonPrefab_o *v101; // x26
  const MethodInfo *v102; // x2
  struct MapButtonPrefab_array *v103; // x8
  MapButtonPrefab_o *v104; // x26
  const MethodInfo *v105; // x2
  UIGrid_o *v106; // x23
  const MethodInfo *v107; // x1
  __int64 v108; // x0
  MapButtonEntity_array *v109; // [xsp+0h] [xbp-B0h]
  bool v110; // [xsp+Ch] [xbp-A4h]
  MapButtonControl_o *v111; // [xsp+10h] [xbp-A0h]
  ScrTerminalMap_o *v112; // [xsp+18h] [xbp-98h]
  bool isMapButtonTop; // [xsp+24h] [xbp-8Ch]
  struct UIGrid_o **p_gridComponent; // [xsp+30h] [xbp-80h]
  System_Collections_Generic_List_int__o *v116; // [xsp+38h] [xbp-78h]
  int32_t currentMapLayerId; // [xsp+40h] [xbp-70h]
  int32_t mapId; // [xsp+44h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_596D08C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_MapButtonMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_MapCondMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&MapButtonPrefab___TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D08C = 1;
  }
  entity = 0;
  MapButtonPrefab = MapButtonControl__GetMapButtonPrefab(this, mapAssetData, (const MethodInfo *)mapInf);
  p_buttons = &this->fields.buttons;
  if ( !this->fields.buttons )
    goto LABEL_7;
  currentMapButtonPrefab = (UnityEngine_Object_o *)this->fields.currentMapButtonPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
  if ( !UnityEngine_Object__op_Equality(currentMapButtonPrefab, (UnityEngine_Object_o *)MapButtonPrefab, 0) )
  {
LABEL_7:
    MapButtonControl__DestroyButtons(this, v12);
    this->fields.newButtonEntryAnimAction = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.newButtonEntryAnimAction,
      0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    this->fields.terminalMap = terminalMap;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.terminalMap,
      (int32_t)terminalMap,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    this->fields.currentMapButtonPrefab = MapButtonPrefab;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.currentMapButtonPrefab,
      (int32_t)MapButtonPrefab,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v35, v36);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_object )
      goto LABEL_88;
    OpenedButtons = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Master_object, warInf, mapInf, 0);
    GridComponentBottom = this->fields.GridComponentBottom;
    v41 = OpenedButtons;
    this->fields.gridComponent = GridComponentBottom;
    p_gridComponent = &this->fields.gridComponent;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.gridComponent,
      (int32_t)GridComponentBottom,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( !warInf )
      goto LABEL_88;
    v48 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    Master_object = MapControl_WarInfo__GetEventId(warInf, 0);
    if ( !v48 )
      goto LABEL_88;
    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                      v48,
                      &entity,
                      Master_object,
                      (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    if ( (Master_object & 1) == 0 )
      goto LABEL_16;
    Master_object = (__int64)entity;
    if ( !entity )
      goto LABEL_88;
    Master_object = EventDetailEntity__IsMapSwitchButtonTop((EventDetailEntity_o *)entity, 0);
    if ( (Master_object & 1) != 0 )
    {
      GridComponentTop = this->fields.GridComponentTop;
      this->fields.gridComponent = GridComponentTop;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)p_gridComponent,
        (int32_t)GridComponentTop,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
      isMapButtonTop = 1;
    }
    else
    {
LABEL_16:
      isMapButtonTop = 0;
    }
    if ( !terminalMap
      || (Master_object = ScrTerminalMap__IsMapModel(terminalMap, 0), (mMapInfo = terminalMap->fields.mMapInfo) == 0) )
    {
LABEL_88:
      sub_2213CDC(Master_object, v38);
    }
    v58 = Master_object;
    currentMapLayerId = terminalMap->fields.currentMapLayerId;
    mapId = mMapInfo->fields.mapId;
    if ( (Master_object & 1) == 0 )
      goto LABEL_36;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v38, v56);
    v60 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_MapCondMaster___);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v38, v59);
    if ( !byte_596D0BA )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D0BA = 1;
    }
    Master_object = (__int64)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v38, v59);
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
    }
    v61 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 140LL);
    if ( !byte_596D0BB )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
      byte_596D0BB = 1;
    }
    if ( !*(_DWORD *)(Master_object + 228) )
    {
      j_il2cpp_runtime_class_init_0(Master_object, v38, v59);
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v60 )
      goto LABEL_88;
    Master_object = (__int64)MapCondMaster__GetReleasedMapButtonIdList(
                               (MapCondMaster_o *)v60,
                               mapId,
                               v61,
                               *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 144LL),
                               0);
    v116 = (System_Collections_Generic_List_int__o *)Master_object;
    if ( Master_object )
    {
      if ( !v41 )
        goto LABEL_88;
      v62 = 0;
      v63 = *(_DWORD *)(Master_object + 24) >= SLODWORD(v41->max_length);
    }
    else
    {
LABEL_36:
      v116 = 0;
      v63 = 0;
      v62 = 1;
    }
    if ( !MapButtonPrefab )
      goto LABEL_88;
    v64 = *p_gridComponent;
    Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               MapButtonPrefab,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
    if ( !Master_object )
      goto LABEL_88;
    GridCellHeight = MapButtonPrefab__GetGridCellHeight((MapButtonPrefab_o *)Master_object, v38);
    if ( !v64 )
      goto LABEL_88;
    v111 = this;
    v112 = terminalMap;
    v64->fields.cellHeight = GridCellHeight;
    if ( !v41 )
      goto LABEL_88;
    v66 = sub_2213B20(MapButtonPrefab___TypeInfo, LODWORD(v41->max_length));
    *p_buttons = (struct MapButtonPrefab_array *)v66;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.buttons, v66, v67, v68, v69, v70, v71, v72);
    max_length = v41->max_length;
    if ( max_length >= 1 )
    {
      v75 = 0;
      v76 = v62 | v58 ^ 1;
      v77 = 32;
      v110 = !v63;
      v109 = v41;
      do
      {
        if ( v75 >= max_length )
LABEL_89:
          sub_2213CE4(Master_object);
        v78 = *(MapButtonEntity_o **)((char *)&v41->obj.klass + v77);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38, v73);
        v79 = MapButtonPrefab;
        v80 = UnityEngine_Object__Instantiate_object_(
                (Il2CppObject *)MapButtonPrefab,
                (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        v81 = *p_buttons;
        v82 = (UnityEngine_GameObject_o *)v80;
        Master_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                   (UnityEngine_GameObject_o *)v80,
                                   (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
        if ( !v81 )
          goto LABEL_88;
        v89 = Master_object;
        if ( Master_object )
        {
          Master_object = sub_2213BB4(Master_object, v81->obj.klass->_1.element_class);
          if ( !Master_object )
          {
            v108 = sub_2213D00(0, v90);
            sub_2213BA0(v108, 0);
          }
        }
        if ( v75 >= LODWORD(v81->max_length) )
          goto LABEL_89;
        *(Il2CppClass **)((char *)&v81->obj.klass + v77) = (Il2CppClass *)v89;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)v81 + v77), v89, v83, v84, v85, v86, v87, v88);
        if ( (v76 & 1) != 0 )
        {
          Master_object = 0;
        }
        else
        {
          if ( !v78 )
            goto LABEL_88;
          Master_object = System_Collections_Generic_List_int___Contains(
                            v116,
                            v78->fields.id,
                            (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
        }
        v92 = *p_buttons;
        if ( !*p_buttons )
          goto LABEL_88;
        if ( v75 >= LODWORD(v92->max_length) )
          goto LABEL_89;
        v93 = *(MapButtonPrefab_o **)((char *)&v92->obj.klass + v77);
        if ( !v93 )
          goto LABEL_88;
        MapButtonPrefab__SetupButton(
          v93,
          mapAtlases,
          v111->fields.commonUI,
          v112,
          v78,
          isMapButtonTop,
          Master_object & 1,
          v91);
        buttons = v111->fields.buttons;
        if ( !buttons )
          goto LABEL_88;
        if ( v75 >= LODWORD(buttons->max_length) )
          goto LABEL_89;
        v96 = (v76 & 1) == 0 && v116->fields._size > 0 && v110;
        Master_object = *(__int64 *)((char *)&buttons->obj.klass + v77);
        if ( !Master_object )
          goto LABEL_88;
        MapButtonPrefab__SetButtonSprite(
          (MapButtonPrefab_o *)Master_object,
          v58 & 1,
          mapId,
          currentMapLayerId,
          v96,
          v94);
        v98 = *p_buttons;
        if ( !*p_buttons )
          goto LABEL_88;
        if ( v75 >= LODWORD(v98->max_length) )
          goto LABEL_89;
        v99 = (v76 & 1) == 0 && v116->fields._size > 0 && v110;
        Master_object = *(__int64 *)((char *)&v98->obj.klass + v77);
        if ( !Master_object )
          goto LABEL_88;
        MapButtonPrefab__SetMapNameLabel(
          (MapButtonPrefab_o *)Master_object,
          v58 & 1,
          mapId,
          currentMapLayerId,
          v99,
          v97);
        v100 = *p_buttons;
        if ( !*p_buttons )
          goto LABEL_88;
        if ( v75 >= LODWORD(v100->max_length) )
          goto LABEL_89;
        v101 = *(MapButtonPrefab_o **)((char *)&v100->obj.klass + v77);
        Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !v78 )
          goto LABEL_88;
        if ( !Master_object )
          goto LABEL_88;
        Master_object = QuestTree__GetQuestCountForMap(
                          (QuestTree_o *)Master_object,
                          v78->fields.targetMapId,
                          v78->fields.layer,
                          0);
        if ( !v101 )
          goto LABEL_88;
        MapButtonPrefab__SetBadge(v101, Master_object, v102);
        v103 = *p_buttons;
        if ( !*p_buttons )
          goto LABEL_88;
        if ( v75 >= LODWORD(v103->max_length) )
          goto LABEL_89;
        v104 = *(MapButtonPrefab_o **)((char *)&v103->obj.klass + v77);
        Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !Master_object )
          goto LABEL_88;
        Master_object = QuestTree__IsNextSpotForMap(
                          (QuestTree_o *)Master_object,
                          v78->fields.targetMapId,
                          v78->fields.layer,
                          0);
        if ( !v104 )
          goto LABEL_88;
        MapButtonPrefab__SetNext(v104, Master_object & 1, v105);
        if ( !v82 )
          goto LABEL_88;
        v106 = *p_gridComponent;
        Master_object = (__int64)UnityEngine_GameObject__get_transform(v82, 0);
        if ( !v106 )
          goto LABEL_88;
        MapButtonPrefab = v79;
        UIGrid__AddChild(v106, (UnityEngine_Transform_o *)Master_object, 0);
        GameObjectExtensions__ResetLocalScale(v82, v107);
        UnityEngine_GameObject__SetActive(v82, 0, 0);
        v41 = v109;
        ++v75;
        v77 += 8;
        max_length = v109->max_length;
      }
      while ( (int)v75 < max_length );
    }
    Master_object = (__int64)*p_gridComponent;
    if ( !*p_gridComponent )
      goto LABEL_88;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 440LL))(
      Master_object,
      *(_QWORD *)(*(_QWORD *)Master_object + 448LL));
  }
}


void MapButtonControl__DestroyButtons(MapButtonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *GridComponentBottom; // x21
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Component_o *transform; // x0
  int32_t v8; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *Child; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *GridComponentTop; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // w21
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_Object_o *v28; // x22
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  if ( (byte_596D090 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D090 = 1;
  }
  if ( this->fields.buttons )
  {
    GridComponentBottom = (UnityEngine_Object_o *)this->fields.GridComponentBottom;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    if ( UnityEngine_Object__op_Inequality(GridComponentBottom, 0, 0) )
    {
      transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
      if ( transform )
      {
        v8 = 0;
        do
        {
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
          if ( !transform )
            break;
          if ( v8 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0) )
            goto LABEL_22;
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          if ( !transform )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
          if ( !transform )
            break;
          Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v8, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(Child, 0, 0);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            if ( !Child )
              break;
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)Child,
                                                   0);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
            UnityEngine_Object__Destroy_83459800(gameObject, 0);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          ++v8;
        }
        while ( transform );
      }
LABEL_39:
      sub_2213CDC(transform, v5);
    }
LABEL_22:
    GridComponentTop = (UnityEngine_Object_o *)this->fields.GridComponentTop;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( UnityEngine_Object__op_Inequality(GridComponentTop, 0, 0) )
    {
      transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
      if ( transform )
      {
        v22 = 0;
        do
        {
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
          if ( !transform )
            break;
          if ( v22 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0) )
            goto LABEL_40;
          transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          if ( !transform )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
          if ( !transform )
            break;
          v25 = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v22, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(v25, 0, 0);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            if ( !v25 )
              goto LABEL_39;
            v28 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25, 0);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
            UnityEngine_Object__Destroy_83459800(v28, 0);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          ++v22;
        }
        while ( transform );
      }
      goto LABEL_39;
    }
LABEL_40:
    this->fields.buttons = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.buttons, 0, v16, v17, v18, v19, v20, v21);
    this->fields.currentMapButtonPrefab = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.currentMapButtonPrefab,
      0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
}


void MapButtonControl__FrameIn(MapButtonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x21
  struct MapButtonPrefab_array *buttons; // x8
  System_Collections_Generic_List_object__o *v5; // x20
  System_Collections_Generic_List_object__o *v6; // x23
  System_Collections_Generic_List_object__o *object; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_object__o **v15; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct MapButtonPrefab_array *v22; // x24
  int max_length; // w8
  unsigned int v24; // w26
  MapButtonPrefab_o *v25; // x23
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x0
  System_Action_o *v34; // x22
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596D091 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___);
    sub_2213A60(&Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapButtonPrefab__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    sub_2213A60(&Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__);
    sub_2213A60(&MapButtonControl___c__DisplayClass16_0_TypeInfo);
    byte_596D091 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v3 = sub_2213CCC(MapButtonControl___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  buttons = this->fields.buttons;
  if ( buttons && buttons->max_length )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    if ( !v3 )
      goto LABEL_32;
    *(_QWORD *)(v3 + 16) = v6;
    v15 = (System_Collections_Generic_List_object__o **)(v3 + 16);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)v6, v9, v10, v11, v12, v13, v14);
    v22 = this->fields.buttons;
    if ( !v22 )
      goto LABEL_32;
    max_length = v22->max_length;
    if ( max_length >= 1 )
    {
      v24 = 0;
      while ( 1 )
      {
        if ( v24 >= max_length )
          sub_2213CE4(object);
        v25 = v22->m_Items[v24];
        if ( !v25 )
          break;
        if ( v25->fields.isNew )
        {
          object = *v15;
          if ( !*v15 )
            break;
          items = object->fields._items;
          v27 = Method_System_Collections_Generic_List_MapButtonPrefab__Add__;
          ++object->fields._version;
          if ( !items )
            break;
          size = object->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              object,
              (Il2CppObject *)v25,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            object->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v25;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)v25, v16, v17, v18, v19, v20, v21);
          }
          v25->fields.isNew = 0;
        }
        else
        {
          if ( !v5 )
            break;
          v30 = v5->fields._items;
          v31 = Method_System_Collections_Generic_List_MapButtonPrefab__Add__;
          ++v5->fields._version;
          if ( !v30 )
            break;
          v32 = v5->fields._size;
          if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v25,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &v30->obj.klass + v32;
            v5->fields._size = v32 + 1;
            v33[4] = (Il2CppClass *)v25;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v25, v16, v17, v18, v19, v20, v21);
          }
        }
        max_length = v22->max_length;
        if ( (int)++v24 >= max_length )
          goto LABEL_24;
      }
LABEL_32:
      sub_2213CDC(object, v8);
    }
LABEL_24:
    v34 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v34, (Il2CppObject *)v3, Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, 0);
    this->fields.newButtonEntryAnimAction = v34;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.newButtonEntryAnimAction,
      (int32_t)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
    {
      object = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Last_object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                              (const MethodInfo_3883CD8 *)Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
      if ( !v5 )
        goto LABEL_32;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v43,
        v5,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v43,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
      {
        if ( !v43.fields._current )
          sub_2213CDC(0, v41);
        MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v43.fields._current, 0, v42);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v43,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
    }
  }
}


void MapButtonControl__FrameOut(MapButtonControl_o *this, const MethodInfo *method)
{
  struct MapButtonPrefab_array *buttons; // x19
  int max_length; // w8
  __int64 v4; // x20
  MapButtonPrefab_o *v5; // x0

  buttons = this->fields.buttons;
  if ( buttons )
  {
    max_length = buttons->max_length;
    if ( max_length >= 1 )
    {
      v4 = 0;
      do
      {
        if ( (unsigned int)v4 >= max_length )
          sub_2213CE4(this);
        v5 = buttons->m_Items[v4];
        if ( !v5 )
          sub_2213CDC(0, method);
        MapButtonPrefab__FrameOut(v5, method);
        max_length = buttons->max_length;
        ++v4;
      }
      while ( (int)v4 < max_length );
    }
  }
}


UnityEngine_GameObject_o *MapButtonControl__GetMapButtonPrefab(
        MapButtonControl_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  MapButtonControl_c *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Object_object__58532980; // x20

  if ( (byte_596D08D & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&MapButtonControl_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D08D = 1;
  }
  if ( !mapAssetData )
    return this->fields.buttonPrefab;
  v5 = MapButtonControl_TypeInfo;
  if ( !*(&MapButtonControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapButtonControl_TypeInfo, mapAssetData, method);
    v5 = MapButtonControl_TypeInfo;
  }
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              mapAssetData,
                              v5->static_fields->MAP_BUTTON_PREFAB_NAME,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58532980, 0, 0) )
    return this->fields.buttonPrefab;
  return (UnityEngine_GameObject_o *)Object_object__58532980;
}


void MapButtonControl__PlayNewButtonEntryAnim(MapButtonControl_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_newButtonEntryAnimAction; // x19
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  p_newButtonEntryAnimAction = (MissionNaviTransitionBoardItem_o *)&this->fields.newButtonEntryAnimAction;
  ActionExtensions__Call(this->fields.newButtonEntryAnimAction, 0);
  p_newButtonEntryAnimAction->klass = 0;
  sub_2213A04(p_newButtonEntryAnimAction, 0, v3, v4, v5, v6, v7, v8);
}


void MapButtonControl__SetNext(
        MapButtonControl_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        MapControl_SpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  MapButtonEntity_array *Master_object; // x0
  __int64 v10; // x1
  int max_length; // w8
  MapButtonEntity_array *v12; // x21
  unsigned int v13; // w22
  struct MapButtonPrefab_array *buttons; // x9
  Il2CppClass **v15; // x24
  Il2CppClass *v16; // x8
  char *v17; // x24
  Il2CppClass *v18; // t1
  int namespaze; // w25
  int v20; // w24
  const MethodInfo *v21; // x2
  struct MapButtonPrefab_array *v22; // x8

  if ( (byte_596D08E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_MapButtonMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596D08E = 1;
  }
  if ( this->fields.buttons )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, warInf, mapInf);
    Master_object = (MapButtonEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_object )
      goto LABEL_25;
    Master_object = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Master_object, warInf, mapInf, 0);
    if ( !Master_object )
      goto LABEL_25;
    max_length = Master_object->max_length;
    v12 = Master_object;
    if ( max_length >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        buttons = this->fields.buttons;
        if ( !buttons )
          break;
        if ( (signed int)v13 >= SLODWORD(buttons->max_length) )
          return;
        if ( v13 >= max_length )
          goto LABEL_26;
        v15 = &v12->obj.klass + (int)v13;
        v18 = v15[4];
        v17 = (char *)(v15 + 4);
        v16 = v18;
        if ( !v18 || !spotInfo )
          break;
        namespaze = (int)v16->_1.namespaze;
        Master_object = (MapButtonEntity_array *)MapControl_SpotInfo__GetMapID(spotInfo, 0);
        if ( namespaze == (_DWORD)Master_object )
        {
          if ( v13 >= LODWORD(v12->max_length) )
            goto LABEL_26;
          if ( !*(_QWORD *)v17 )
            break;
          v20 = *(_DWORD *)(*(_QWORD *)v17 + 28LL);
          Master_object = (MapButtonEntity_array *)MapControl_SpotInfo__GetLayer(spotInfo, 0);
          if ( v20 == (_DWORD)Master_object )
          {
            v22 = this->fields.buttons;
            if ( !v22 )
              break;
            if ( v13 >= LODWORD(v22->max_length) )
LABEL_26:
              sub_2213CE4(Master_object);
            Master_object = (MapButtonEntity_array *)v22->m_Items[v13];
            if ( !Master_object )
              break;
            MapButtonPrefab__SetNext((MapButtonPrefab_o *)Master_object, 1, v21);
          }
        }
        max_length = v12->max_length;
        if ( (int)++v13 >= max_length )
          return;
      }
LABEL_25:
      sub_2213CDC(Master_object, v10);
    }
  }
}


void MapButtonControl__UpdateBadge(
        MapButtonControl_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        const MethodInfo *method)
{
  MapButtonEntity_array *Instance; // x0
  __int64 v8; // x1
  MapButtonEntity_array *v9; // x20
  __int64 v10; // x22
  struct MapButtonPrefab_array *buttons; // x8
  unsigned int v12; // w23
  __int64 v13; // x8
  const MethodInfo *v14; // x2
  struct MapButtonPrefab_array *v15; // x8

  if ( (byte_596D08F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_MapButtonMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_596D08F = 1;
  }
  if ( this->fields.buttons )
  {
    Instance = (MapButtonEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (MapButtonEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MapButtonMaster___);
    if ( !Instance )
      goto LABEL_19;
    Instance = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Instance, warInf, mapInf, 0);
    if ( !Instance )
      goto LABEL_19;
    v9 = Instance;
    if ( SLODWORD(Instance->max_length) >= 1 )
    {
      v10 = 4;
      while ( 1 )
      {
        buttons = this->fields.buttons;
        if ( !buttons )
          break;
        v12 = v10 - 4;
        if ( (int)v10 - 4 >= SLODWORD(buttons->max_length) )
          return;
        Instance = (MapButtonEntity_array *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( v12 >= LODWORD(v9->max_length) )
LABEL_20:
          sub_2213CE4(Instance);
        v13 = *((_QWORD *)&v9->obj.klass + v10);
        if ( !v13 )
          break;
        if ( !Instance )
          break;
        Instance = (MapButtonEntity_array *)QuestTree__GetQuestCountForMap(
                                              (QuestTree_o *)Instance,
                                              *(_DWORD *)(v13 + 24),
                                              *(_DWORD *)(v13 + 28),
                                              0);
        v15 = this->fields.buttons;
        if ( !v15 )
          break;
        if ( v12 >= LODWORD(v15->max_length) )
          goto LABEL_20;
        v8 = (unsigned int)Instance;
        Instance = (MapButtonEntity_array *)*((_QWORD *)&v15->obj.klass + v10);
        if ( !Instance )
          break;
        MapButtonPrefab__SetBadge((MapButtonPrefab_o *)Instance, v8, v14);
        if ( (int)++v10 - 4 >= SLODWORD(v9->max_length) )
          return;
      }
LABEL_19:
      sub_2213CDC(Instance, v8);
    }
  }
}


void MapButtonControl__UpdateButtonSprite(MapButtonControl_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *terminalMap; // x0
  const MethodInfo *v4; // x5
  struct ScrTerminalMap_o *v5; // x9
  struct MapControl_MapInfo_o *mMapInfo; // x10
  struct MapButtonPrefab_array *buttons; // x23
  int max_length; // w8
  int32_t mapId; // w20
  int32_t currentMapLayerId; // w21
  char v11; // w19
  __int64 v12; // x24
  MapButtonPrefab_o *v13; // x22
  const MethodInfo *v14; // x5

  if ( this->fields.buttons )
  {
    terminalMap = this->fields.terminalMap;
    if ( !terminalMap )
      goto LABEL_12;
    terminalMap = (ScrTerminalMap_o *)ScrTerminalMap__IsMapModel(terminalMap, 0);
    v5 = this->fields.terminalMap;
    if ( !v5 )
      goto LABEL_12;
    mMapInfo = v5->fields.mMapInfo;
    if ( !mMapInfo )
      goto LABEL_12;
    buttons = this->fields.buttons;
    if ( !buttons )
      goto LABEL_12;
    max_length = buttons->max_length;
    if ( max_length >= 1 )
    {
      mapId = mMapInfo->fields.mapId;
      currentMapLayerId = v5->fields.currentMapLayerId;
      v11 = (char)terminalMap;
      v12 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= max_length )
          sub_2213CE4(terminalMap);
        v13 = buttons->m_Items[v12];
        if ( !v13 )
          break;
        MapButtonPrefab__SetButtonSprite(buttons->m_Items[v12], v11 & 1, mapId, currentMapLayerId, 0, v4);
        MapButtonPrefab__SetMapNameLabel(v13, v11 & 1, mapId, currentMapLayerId, 0, v14);
        max_length = buttons->max_length;
        if ( (int)++v12 >= max_length )
          return;
      }
LABEL_12:
      sub_2213CDC(terminalMap, method);
    }
  }
}


void MapButtonControl___c__DisplayClass16_0___ctor(
        MapButtonControl___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapButtonControl___c__DisplayClass16_0___FrameIn_b__0(
        MapButtonControl___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_MapButtonPrefab__o *newButtonList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596D093 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    byte_596D093 = 1;
  }
  newButtonList = this->fields.newButtonList;
  memset(&v8, 0, sizeof(v8));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)newButtonList,
         (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
  {
    v5 = (System_Collections_Generic_List_object__o *)this->fields.newButtonList;
    if ( !v5 )
      sub_2213CDC(0, v4);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      v5,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
    {
      if ( !v8.fields._current )
        sub_2213CDC(0, v6);
      MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v8.fields._current, 0, v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
  }
}