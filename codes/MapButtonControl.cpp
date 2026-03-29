void MapButtonControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D2D3D1 & 1) == 0 )
  {
    sub_1C93AD4(&MapButtonControl_TypeInfo);
    sub_1C93AD4(&StringLiteral_8945/*"MapBtnPrefab"*/);
    byte_4D2D3D1 = 1;
  }
  MapButtonControl_TypeInfo->static_fields->MAP_BUTTON_PREFAB_NAME = (struct System_String_o *)StringLiteral_8945/*"MapBtnPrefab"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)MapButtonControl_TypeInfo->static_fields,
    StringLiteral_8945/*"MapBtnPrefab"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
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
  struct UnityEngine_GameObject_o *MapButtonPrefab; // x26
  UnityEngine_Object_o *currentMapButtonPrefab; // x24
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  __int64 Master_object; // x0
  const MethodInfo *v34; // x1
  MapButtonEntity_array *OpenedButtons; // x0
  struct UIGrid_o *GridComponentBottom; // x1
  MapButtonEntity_array *v37; // x20
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x22
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  struct UIGrid_o *GridComponentTop; // x1
  struct MapControl_MapInfo_o *mMapInfo; // x8
  int v53; // w22
  Il2CppObject *v54; // x19
  int32_t v55; // w29
  bool v56; // w8
  struct UIGrid_o *v57; // x19
  float GridCellHeight; // s0
  __int64 v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  int max_length; // w8
  unsigned int v67; // w25
  int32_t v68; // w23
  int32_t v69; // w21
  __int64 v70; // x24
  MapButtonEntity_o *v71; // x19
  int32_t v72; // w28
  int v73; // w23
  ScrTerminalMap_o *v74; // x22
  Il2CppObject *v75; // x20
  GrandQuestFolderBoardItem_c *klass; // x27
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  __int64 v83; // x26
  const MethodInfo *v84; // x7
  bool v85; // w6
  GrandQuestFolderBoardItem_c *v86; // x8
  const MethodInfo *v87; // x5
  struct MapButtonPrefab_array *buttons; // x8
  __int64 v89; // x10
  int32_t v90; // w2
  int32_t v91; // w3
  int v92; // w9
  char v93; // w8
  bool v94; // w4
  GrandQuestFolderBoardItem_c *v95; // x8
  MapButtonPrefab_o *v96; // x26
  const MethodInfo *v97; // x2
  GrandQuestFolderBoardItem_c *v98; // x8
  MapButtonPrefab_o *v99; // x26
  const MethodInfo *v100; // x2
  UIGrid_o *v101; // x19
  const MethodInfo *v102; // x1
  __int64 v103; // x0
  bool v104; // [xsp+0h] [xbp-D0h]
  char v105; // [xsp+4h] [xbp-CCh]
  System_Collections_Generic_List_int__o *v106; // [xsp+8h] [xbp-C8h]
  MapButtonEntity_array *v107; // [xsp+10h] [xbp-C0h]
  struct UnityEngine_GameObject_o *v108; // [xsp+18h] [xbp-B8h]
  char v109; // [xsp+20h] [xbp-B0h]
  int32_t currentMapLayerId; // [xsp+24h] [xbp-ACh]
  MapButtonControl_o *v111; // [xsp+28h] [xbp-A8h]
  bool isMapButtonTop; // [xsp+34h] [xbp-9Ch]
  unsigned int mapId; // [xsp+44h] [xbp-8Ch]
  struct UIGrid_o **p_gridComponent; // [xsp+48h] [xbp-88h]
  int v116; // [xsp+54h] [xbp-7Ch]
  __int64 v117; // [xsp+58h] [xbp-78h]
  GrandQuestFolderBoardItem_o *p_buttons; // [xsp+60h] [xbp-70h]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4D2D3CB & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_MapButtonMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_MapCondMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&MapButtonPrefab___TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D3CB = 1;
  }
  entity = 0;
  MapButtonPrefab = MapButtonControl__GetMapButtonPrefab(this, mapAssetData, (const MethodInfo *)mapInf);
  p_buttons = (GrandQuestFolderBoardItem_o *)&this->fields.buttons;
  if ( !this->fields.buttons )
    goto LABEL_7;
  currentMapButtonPrefab = (UnityEngine_Object_o *)this->fields.currentMapButtonPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(currentMapButtonPrefab, (UnityEngine_Object_o *)MapButtonPrefab, 0) )
  {
LABEL_7:
    MapButtonControl__DestroyButtons(this, v12);
    this->fields.newButtonEntryAnimAction = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.newButtonEntryAnimAction, 0, v15, v16, v17, v18, v19, v20);
    this->fields.terminalMap = terminalMap;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.terminalMap,
      (int32_t)terminalMap,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    this->fields.currentMapButtonPrefab = MapButtonPrefab;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.currentMapButtonPrefab,
      (int32_t)MapButtonPrefab,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_object )
      goto LABEL_88;
    OpenedButtons = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Master_object, warInf, mapInf, 0);
    GridComponentBottom = this->fields.GridComponentBottom;
    v37 = OpenedButtons;
    this->fields.gridComponent = GridComponentBottom;
    p_gridComponent = &this->fields.gridComponent;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.gridComponent,
      (int32_t)GridComponentBottom,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( !warInf )
      goto LABEL_88;
    v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    Master_object = MapControl_WarInfo__GetEventId(warInf, 0);
    if ( !v44 )
      goto LABEL_88;
    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                      v44,
                      &entity,
                      Master_object,
                      (const MethodInfo_34632C0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
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
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)p_gridComponent,
        (int32_t)GridComponentTop,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
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
      sub_1C93D2C(Master_object, v34);
    }
    v53 = Master_object;
    mapId = mMapInfo->fields.mapId;
    currentMapLayerId = terminalMap->fields.currentMapLayerId;
    if ( (Master_object & 1) != 0 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v54 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_MapCondMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D2D3F8 )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2D3F8 = 1;
      }
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      v55 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 140LL);
      if ( !byte_4D2D3F9 )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
        byte_4D2D3F9 = 1;
      }
      if ( !*(_DWORD *)(Master_object + 224) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      v34 = (const MethodInfo *)mapId;
      if ( !v54 )
        goto LABEL_88;
      Master_object = (__int64)MapCondMaster__GetReleasedMapButtonIdList(
                                 (MapCondMaster_o *)v54,
                                 mapId,
                                 v55,
                                 *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 144LL),
                                 0);
      if ( Master_object )
      {
        if ( !v37 )
          goto LABEL_88;
        v105 = 0;
        v56 = *(_DWORD *)(Master_object + 24) < SLODWORD(v37->max_length);
        goto LABEL_38;
      }
    }
    else
    {
      Master_object = 0;
    }
    v105 = 1;
    v56 = 1;
LABEL_38:
    v104 = v56;
    v106 = (System_Collections_Generic_List_int__o *)Master_object;
    if ( MapButtonPrefab )
    {
      v57 = *p_gridComponent;
      Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 MapButtonPrefab,
                                 (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
      if ( Master_object )
      {
        GridCellHeight = MapButtonPrefab__GetGridCellHeight((MapButtonPrefab_o *)Master_object, v34);
        if ( v57 )
        {
          v111 = this;
          v57->fields.cellHeight = GridCellHeight;
          if ( v37 )
          {
            v59 = sub_1C93B7C(MapButtonPrefab___TypeInfo, LODWORD(v37->max_length));
            p_buttons->klass = (GrandQuestFolderBoardItem_c *)v59;
            sub_1C93A78(p_buttons, v59, v60, v61, v62, v63, v64, v65);
            max_length = v37->max_length;
            if ( max_length >= 1 )
            {
              v116 = 0;
              v117 = 0;
              v67 = 0;
              v68 = 0;
              v69 = 0;
              v70 = 32;
              v109 = v105 | v53 ^ 1;
              v107 = v37;
              v108 = MapButtonPrefab;
              do
              {
                if ( v67 >= max_length )
                  goto LABEL_89;
                v71 = *(MapButtonEntity_o **)((char *)&v37->obj.klass + v70);
                v72 = v68;
                v73 = v53;
                v74 = terminalMap;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v75 = UnityEngine_Object__Instantiate_object_(
                        (Il2CppObject *)MapButtonPrefab,
                        (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
                klass = p_buttons->klass;
                Master_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                           (UnityEngine_GameObject_o *)v75,
                                           (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
                if ( !klass )
                  goto LABEL_88;
                v83 = Master_object;
                if ( Master_object )
                {
                  Master_object = sub_1C93C10(Master_object, *((_QWORD *)klass->_1.image + 8));
                  if ( !Master_object )
                  {
                    v103 = sub_1C93D50();
                    sub_1C93BFC(v103, 0);
                  }
                }
                if ( v67 >= LODWORD(klass->_1.namespaze) )
                  goto LABEL_89;
                *(void **)((char *)&klass->_1.image + v70) = (void *)v83;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)((char *)klass + v70), v83, v77, v78, v79, v80, v81, v82);
                if ( (v109 & 1) != 0 )
                {
                  v85 = 0;
                  terminalMap = v74;
                }
                else
                {
                  if ( !v71 )
                    goto LABEL_88;
                  Master_object = (__int64)v106;
                  if ( !v106 )
                    goto LABEL_88;
                  terminalMap = v74;
                  Master_object = System_Collections_Generic_List_int___Contains(
                                    v106,
                                    v71->fields.id,
                                    (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
                  v85 = Master_object & 1;
                }
                v86 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_88;
                if ( v67 >= LODWORD(v86->_1.namespaze) )
LABEL_89:
                  sub_1C93D34(Master_object);
                Master_object = *(__int64 *)((char *)&v86->_1.image + v70);
                if ( !Master_object )
                  goto LABEL_88;
                MapButtonPrefab__SetupButton(
                  (MapButtonPrefab_o *)Master_object,
                  mapAtlases,
                  v111->fields.commonUI,
                  terminalMap,
                  v71,
                  isMapButtonTop,
                  v85,
                  v84);
                buttons = v111->fields.buttons;
                if ( !buttons )
                  goto LABEL_88;
                v89 = v117;
                if ( v67 >= LODWORD(buttons->max_length) )
                  goto LABEL_89;
                Master_object = *(__int64 *)((char *)&buttons->obj.klass + v70);
                v90 = mapId;
                v91 = currentMapLayerId;
                v53 = v73;
                v92 = v73 | v116;
                if ( (v73 & 1) != 0 )
                {
                  v69 = mapId;
                  v89 = *(__int64 *)((char *)&buttons->obj.klass + v70);
                  v68 = currentMapLayerId;
                }
                else
                {
                  v68 = v72;
                }
                v117 = v89;
                if ( (v53 & 1) != 0 )
                {
                  if ( (v105 & 1) != 0 )
                  {
                    v93 = 1;
                  }
                  else
                  {
                    v94 = v104;
                    Master_object = v89;
                    v90 = v69;
                    v91 = v68;
                    v93 = v92;
                    if ( v106->fields._size > 0 )
                      goto LABEL_69;
                  }
                }
                else
                {
                  v93 = 0;
                }
                v94 = 0;
LABEL_69:
                v116 = v92;
                if ( !Master_object )
                  goto LABEL_88;
                MapButtonPrefab__SetButtonSprite((MapButtonPrefab_o *)Master_object, v93 & 1, v90, v91, v94, v87);
                v95 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_88;
                if ( v67 >= LODWORD(v95->_1.namespaze) )
                  goto LABEL_89;
                v96 = *(MapButtonPrefab_o **)((char *)&v95->_1.image + v70);
                Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
                if ( !v71 )
                  goto LABEL_88;
                if ( !Master_object )
                  goto LABEL_88;
                Master_object = QuestTree__GetQuestCountForMap(
                                  (QuestTree_o *)Master_object,
                                  v71->fields.targetMapId,
                                  v71->fields.layer,
                                  0);
                if ( !v96 )
                  goto LABEL_88;
                MapButtonPrefab__SetBadge(v96, Master_object, v97);
                v98 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_88;
                if ( v67 >= LODWORD(v98->_1.namespaze) )
                  goto LABEL_89;
                v99 = *(MapButtonPrefab_o **)((char *)&v98->_1.image + v70);
                Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
                if ( !Master_object )
                  goto LABEL_88;
                Master_object = QuestTree__IsNextSpotForMap(
                                  (QuestTree_o *)Master_object,
                                  v71->fields.targetMapId,
                                  v71->fields.layer,
                                  0);
                if ( !v99 )
                  goto LABEL_88;
                MapButtonPrefab__SetNext(v99, Master_object & 1, v100);
                if ( !v75 )
                  goto LABEL_88;
                v101 = *p_gridComponent;
                Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v75, 0);
                MapButtonPrefab = v108;
                if ( !v101 )
                  goto LABEL_88;
                UIGrid__AddChild(v101, (UnityEngine_Transform_o *)Master_object, 0);
                GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v75, v102);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v75, 0, 0);
                v37 = v107;
                ++v67;
                v70 += 8;
                max_length = v107->max_length;
              }
              while ( (int)v67 < max_length );
            }
            Master_object = (__int64)*p_gridComponent;
            if ( *p_gridComponent )
            {
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 440LL))(
                Master_object,
                *(_QWORD *)(*(_QWORD *)Master_object + 448LL));
              return;
            }
          }
        }
      }
    }
    goto LABEL_88;
  }
}


void MapButtonControl__DestroyButtons(MapButtonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *GridComponentBottom; // x21
  __int64 v4; // x1
  UnityEngine_Component_o *transform; // x0
  int32_t v6; // w21
  UnityEngine_Object_o *Child; // x22
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *GridComponentTop; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w21
  UnityEngine_Object_o *v17; // x22
  UnityEngine_Object_o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  if ( (byte_4D2D3CF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D3CF = 1;
  }
  if ( this->fields.buttons )
  {
    GridComponentBottom = (UnityEngine_Object_o *)this->fields.GridComponentBottom;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(GridComponentBottom, 0, 0) )
    {
      transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
      if ( transform )
      {
        v6 = 0;
        do
        {
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
          if ( !transform )
            break;
          if ( v6 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0) )
            goto LABEL_22;
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          if ( !transform )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
          if ( !transform )
            break;
          Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v6, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(Child, 0, 0);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            if ( !Child )
              break;
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)Child,
                                                   0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_72119908(gameObject, 0);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          ++v6;
        }
        while ( transform );
      }
LABEL_39:
      sub_1C93D2C(transform, v4);
    }
LABEL_22:
    GridComponentTop = (UnityEngine_Object_o *)this->fields.GridComponentTop;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(GridComponentTop, 0, 0) )
    {
      transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
      if ( transform )
      {
        v16 = 0;
        do
        {
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
          if ( !transform )
            break;
          if ( v16 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0) )
            goto LABEL_40;
          transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          if ( !transform )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
          if ( !transform )
            break;
          v17 = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v16, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(v17, 0, 0);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            if ( !v17 )
              goto LABEL_39;
            v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v17, 0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_72119908(v18, 0);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          ++v16;
        }
        while ( transform );
      }
      goto LABEL_39;
    }
LABEL_40:
    this->fields.buttons = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.buttons, 0, v10, v11, v12, v13, v14, v15);
    this->fields.currentMapButtonPrefab = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.currentMapButtonPrefab, 0, v19, v20, v21, v22, v23, v24);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_List_object__o **v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct MapButtonPrefab_array *v22; // x24
  int max_length; // w8
  unsigned int v24; // w25
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
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D2D3D0 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MapButtonPrefab__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    sub_1C93AD4(&Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__);
    sub_1C93AD4(&MapButtonControl___c__DisplayClass16_0_TypeInfo);
    byte_4D2D3D0 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v3 = sub_1C93D20(MapButtonControl___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  buttons = this->fields.buttons;
  if ( buttons && buttons->max_length )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    v6 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    if ( !v3 )
      goto LABEL_32;
    *(_QWORD *)(v3 + 16) = v6;
    v15 = (System_Collections_Generic_List_object__o **)(v3 + 16);
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)v6, v9, v10, v11, v12, v13, v14);
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
          sub_1C93D34(object);
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
              *(const MethodInfo_387999C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            object->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v25;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v29 + 4), (int32_t)v25, v16, v17, v18, v19, v20, v21);
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
              *(const MethodInfo_387999C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &v30->obj.klass + v32;
            v5->fields._size = v32 + 1;
            v33[4] = (Il2CppClass *)v25;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v25, v16, v17, v18, v19, v20, v21);
          }
        }
        max_length = v22->max_length;
        if ( (int)++v24 >= max_length )
          goto LABEL_24;
      }
LABEL_32:
      sub_1C93D2C(object, v8);
    }
LABEL_24:
    v34 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v34, (Il2CppObject *)v3, Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, 0);
    this->fields.newButtonEntryAnimAction = v34;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.newButtonEntryAnimAction,
      (int32_t)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
    {
      object = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Last_object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                              (const MethodInfo_31CEB48 *)Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
      if ( !v5 )
        goto LABEL_32;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v43,
        v5,
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v43,
                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
      {
        if ( !v43.fields._current )
          sub_1C93D2C(0, v41);
        MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v43.fields._current, 0, v42);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v43,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
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
          sub_1C93D34(this);
        v5 = buttons->m_Items[v4];
        if ( !v5 )
          sub_1C93D2C(0, method);
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
  Il2CppObject *Object_object__51927708; // x20

  if ( (byte_4D2D3CC & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&MapButtonControl_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D3CC = 1;
  }
  if ( !mapAssetData )
    return this->fields.buttonPrefab;
  v5 = MapButtonControl_TypeInfo;
  if ( !MapButtonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonControl_TypeInfo);
    v5 = MapButtonControl_TypeInfo;
  }
  Object_object__51927708 = AssetData__GetObject_object__51927708(
                              mapAssetData,
                              v5->static_fields->MAP_BUTTON_PREFAB_NAME,
                              (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51927708, 0, 0) )
    return this->fields.buttonPrefab;
  return (UnityEngine_GameObject_o *)Object_object__51927708;
}


void MapButtonControl__PlayNewButtonEntryAnim(MapButtonControl_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_newButtonEntryAnimAction; // x19
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7

  p_newButtonEntryAnimAction = (GrandQuestFolderBoardItem_o *)&this->fields.newButtonEntryAnimAction;
  ActionExtensions__Call(this->fields.newButtonEntryAnimAction, 0);
  p_newButtonEntryAnimAction->klass = 0;
  sub_1C93A78(p_newButtonEntryAnimAction, 0, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4D2D3CD & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_MapButtonMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D2D3CD = 1;
  }
  if ( this->fields.buttons )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (MapButtonEntity_array *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_MapButtonMaster___);
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
              sub_1C93D34(Master_object);
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
      sub_1C93D2C(Master_object, v10);
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
  unsigned int v10; // w21
  struct MapButtonPrefab_array *buttons; // x8
  MapButtonEntity_o *v12; // x8
  const MethodInfo *v13; // x2
  struct MapButtonPrefab_array *v14; // x8

  if ( (byte_4D2D3CE & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_MapButtonMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4D2D3CE = 1;
  }
  if ( this->fields.buttons )
  {
    Instance = (MapButtonEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (MapButtonEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_MapButtonMaster___);
    if ( !Instance )
      goto LABEL_19;
    Instance = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Instance, warInf, mapInf, 0);
    if ( !Instance )
      goto LABEL_19;
    v9 = Instance;
    if ( SLODWORD(Instance->max_length) >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        buttons = this->fields.buttons;
        if ( !buttons )
          break;
        if ( (signed int)v10 >= SLODWORD(buttons->max_length) )
          return;
        Instance = (MapButtonEntity_array *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( v10 >= LODWORD(v9->max_length) )
LABEL_20:
          sub_1C93D34(Instance);
        v12 = v9->m_Items[v10];
        if ( !v12 )
          break;
        if ( !Instance )
          break;
        Instance = (MapButtonEntity_array *)QuestTree__GetQuestCountForMap(
                                              (QuestTree_o *)Instance,
                                              v12->fields.targetMapId,
                                              v12->fields.layer,
                                              0);
        v14 = this->fields.buttons;
        if ( !v14 )
          break;
        if ( v10 >= LODWORD(v14->max_length) )
          goto LABEL_20;
        v8 = (unsigned int)Instance;
        Instance = (MapButtonEntity_array *)v14->m_Items[v10];
        if ( !Instance )
          break;
        MapButtonPrefab__SetBadge((MapButtonPrefab_o *)Instance, v8, v13);
        if ( (signed int)++v10 >= SLODWORD(v9->max_length) )
          return;
      }
LABEL_19:
      sub_1C93D2C(Instance, v8);
    }
  }
}


void MapButtonControl__UpdateButtonSprite(MapButtonControl_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *terminalMap; // x0
  const MethodInfo *v4; // x5
  struct ScrTerminalMap_o *v5; // x9
  struct MapControl_MapInfo_o *mMapInfo; // x10
  struct MapButtonPrefab_array *buttons; // x22
  int max_length; // w8
  int32_t mapId; // w19
  int32_t currentMapLayerId; // w20
  unsigned int v11; // w23
  bool v12; // w21

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
      v11 = 0;
      v12 = (unsigned __int8)terminalMap & 1;
      while ( 1 )
      {
        if ( v11 >= max_length )
          sub_1C93D34(terminalMap);
        terminalMap = (ScrTerminalMap_o *)buttons->m_Items[v11];
        if ( !terminalMap )
          break;
        MapButtonPrefab__SetButtonSprite((MapButtonPrefab_o *)terminalMap, v12, mapId, currentMapLayerId, 0, v4);
        max_length = buttons->max_length;
        if ( (int)++v11 >= max_length )
          return;
      }
LABEL_12:
      sub_1C93D2C(terminalMap, method);
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
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *newButtonList; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2D3D2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    byte_4D2D3D2 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.newButtonList,
         (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
  {
    newButtonList = (System_Collections_Generic_List_object__o *)this->fields.newButtonList;
    if ( !newButtonList )
      sub_1C93D2C(0, v3);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      newButtonList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
    {
      if ( !v7.fields._current )
        sub_1C93D2C(0, v5);
      MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v7.fields._current, 0, v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
  }
}