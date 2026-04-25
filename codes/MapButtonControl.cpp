void MapButtonControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4E01402 & 1) == 0 )
  {
    sub_1CE6700(&MapButtonControl_TypeInfo);
    sub_1CE6700(&StringLiteral_8962/*"MapBtnPrefab"*/);
    byte_4E01402 = 1;
  }
  MapButtonControl_TypeInfo->static_fields->MAP_BUTTON_PREFAB_NAME = (struct System_String_o *)StringLiteral_8962/*"MapBtnPrefab"*/;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)MapButtonControl_TypeInfo->static_fields,
    StringLiteral_8962/*"MapBtnPrefab"*/,
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
  struct UnityEngine_GameObject_o *MapButtonPrefab; // x29
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
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x20
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  struct UIGrid_o *GridComponentTop; // x1
  struct MapControl_MapInfo_o *mMapInfo; // x8
  int32_t mapId; // w28
  int32_t currentMapLayerId; // w23
  MapButtonEntity_array *v54; // x26
  unsigned __int8 v55; // w27
  Il2CppObject *v56; // x19
  struct UnityEngine_GameObject_o *v57; // x24
  bool v58; // w8
  int32_t v59; // w29
  struct UIGrid_o *v60; // x19
  float GridCellHeight; // s0
  __int64 v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  int max_length; // w8
  unsigned int v70; // w25
  int32_t v71; // w21
  char v72; // w22
  __int64 v73; // x24
  MapButtonEntity_o *v74; // x19
  Il2CppObject *v75; // x20
  GrandQuestFolderBoardItem_c *klass; // x21
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
  __int64 v89; // x9
  char v90; // w8
  int32_t v91; // w2
  int32_t v92; // w3
  bool v93; // w4
  const MethodInfo *v94; // x5
  GrandQuestFolderBoardItem_c *v95; // x8
  int32_t v96; // w2
  __int64 v97; // x11
  int32_t v98; // w9
  char v99; // w10
  char v100; // w8
  int32_t v101; // w3
  bool v102; // w4
  GrandQuestFolderBoardItem_c *v103; // x8
  MapButtonPrefab_o *v104; // x26
  const MethodInfo *v105; // x2
  GrandQuestFolderBoardItem_c *v106; // x8
  MapButtonPrefab_o *v107; // x26
  const MethodInfo *v108; // x2
  UIGrid_o *v109; // x19
  const MethodInfo *v110; // x1
  __int64 v111; // x0
  char v112; // [xsp+0h] [xbp-E0h]
  System_Collections_Generic_List_int__o *v113; // [xsp+8h] [xbp-D8h]
  ScrTerminalMap_o *v114; // [xsp+10h] [xbp-D0h]
  MapButtonControl_o *v115; // [xsp+18h] [xbp-C8h]
  bool isMapButtonTop; // [xsp+24h] [xbp-BCh]
  char v118; // [xsp+3Ch] [xbp-A4h]
  MapButtonEntity_array *v119; // [xsp+40h] [xbp-A0h]
  struct UIGrid_o **p_gridComponent; // [xsp+48h] [xbp-98h]
  int32_t v121; // [xsp+50h] [xbp-90h]
  int32_t v122; // [xsp+54h] [xbp-8Ch]
  __int64 v123; // [xsp+58h] [xbp-88h]
  __int64 v124; // [xsp+60h] [xbp-80h]
  __int64 v125; // [xsp+68h] [xbp-78h]
  GrandQuestFolderBoardItem_o *p_buttons; // [xsp+70h] [xbp-70h]
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4E013FC & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_MapButtonMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_MapCondMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1CE6700(&Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1CE6700(&MapButtonPrefab___TypeInfo);
    sub_1CE6700(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E013FC = 1;
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
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.newButtonEntryAnimAction, 0, v15, v16, v17, v18, v19, v20);
    this->fields.terminalMap = terminalMap;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.terminalMap,
      (int32_t)terminalMap,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    this->fields.currentMapButtonPrefab = MapButtonPrefab;
    sub_1CE66A4(
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
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_object )
      goto LABEL_101;
    OpenedButtons = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Master_object, warInf, mapInf, 0);
    GridComponentBottom = this->fields.GridComponentBottom;
    v119 = OpenedButtons;
    this->fields.gridComponent = GridComponentBottom;
    p_gridComponent = &this->fields.gridComponent;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.gridComponent,
      (int32_t)GridComponentBottom,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( !warInf )
      goto LABEL_101;
    v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    Master_object = MapControl_WarInfo__GetEventId(warInf, 0);
    if ( !v43 )
      goto LABEL_101;
    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                      v43,
                      &entity,
                      Master_object,
                      (const MethodInfo_34E92A8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    if ( (Master_object & 1) == 0 )
      goto LABEL_16;
    Master_object = (__int64)entity;
    if ( !entity )
      goto LABEL_101;
    Master_object = EventDetailEntity__IsMapSwitchButtonTop((EventDetailEntity_o *)entity, 0);
    if ( (Master_object & 1) != 0 )
    {
      GridComponentTop = this->fields.GridComponentTop;
      this->fields.gridComponent = GridComponentTop;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)p_gridComponent,
        (int32_t)GridComponentTop,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
      isMapButtonTop = 1;
    }
    else
    {
LABEL_16:
      isMapButtonTop = 0;
    }
    if ( !terminalMap
      || (v115 = this,
          Master_object = ScrTerminalMap__IsMapModel(terminalMap, 0),
          (mMapInfo = terminalMap->fields.mMapInfo) == 0) )
    {
LABEL_101:
      sub_1CE6958(Master_object, v34);
    }
    mapId = mMapInfo->fields.mapId;
    currentMapLayerId = terminalMap->fields.currentMapLayerId;
    v54 = v119;
    v55 = Master_object;
    if ( (Master_object & 1) != 0 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v56 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_MapCondMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4E0142A )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4E0142A = 1;
      }
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
      v57 = MapButtonPrefab;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      v59 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 140LL);
      if ( !byte_4E0142B )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
        byte_4E0142B = 1;
      }
      if ( !*(_DWORD *)(Master_object + 224) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      if ( !v56 )
        goto LABEL_101;
      Master_object = (__int64)MapCondMaster__GetReleasedMapButtonIdList(
                                 (MapCondMaster_o *)v56,
                                 mapId,
                                 v59,
                                 *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 144LL),
                                 0);
      if ( !Master_object )
      {
        v118 = 1;
        v112 = 1;
        MapButtonPrefab = v57;
LABEL_39:
        v113 = (System_Collections_Generic_List_int__o *)Master_object;
        if ( MapButtonPrefab )
        {
          v60 = *p_gridComponent;
          Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                     MapButtonPrefab,
                                     (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
          if ( Master_object )
          {
            GridCellHeight = MapButtonPrefab__GetGridCellHeight((MapButtonPrefab_o *)Master_object, v34);
            if ( v60 )
            {
              v114 = terminalMap;
              v60->fields.cellHeight = GridCellHeight;
              if ( v119 )
              {
                v62 = sub_1CE67A8(MapButtonPrefab___TypeInfo, LODWORD(v119->max_length));
                p_buttons->klass = (GrandQuestFolderBoardItem_c *)v62;
                sub_1CE66A4(p_buttons, v62, v63, v64, v65, v66, v67, v68);
                max_length = v119->max_length;
                if ( max_length >= 1 )
                {
                  v70 = 0;
                  v71 = 0;
                  v72 = 0;
                  v73 = 32;
                  v124 = 0;
                  v125 = 0;
                  v122 = 0;
                  v123 = 0;
                  do
                  {
                    if ( v70 >= max_length )
                      goto LABEL_102;
                    v121 = v71;
                    v74 = *(MapButtonEntity_o **)((char *)&v54->obj.klass + v73);
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    v75 = UnityEngine_Object__Instantiate_object_(
                            (Il2CppObject *)MapButtonPrefab,
                            (const MethodInfo_3290C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                    klass = p_buttons->klass;
                    Master_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                               (UnityEngine_GameObject_o *)v75,
                                               (const MethodInfo_325D924 *)Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
                    if ( !klass )
                      goto LABEL_101;
                    v83 = Master_object;
                    if ( Master_object )
                    {
                      Master_object = sub_1CE683C(Master_object, *((_QWORD *)klass->_1.image + 8));
                      if ( !Master_object )
                      {
                        v111 = sub_1CE697C();
                        sub_1CE6828(v111, 0);
                      }
                    }
                    if ( v70 >= LODWORD(klass->_1.namespaze) )
                      goto LABEL_102;
                    *(void **)((char *)&klass->_1.image + v73) = (void *)v83;
                    sub_1CE66A4((GrandQuestFolderBoardItem_o *)((char *)klass + v73), v83, v77, v78, v79, v80, v81, v82);
                    if ( (((unsigned __int8)v118 | v55 ^ 1) & 1) != 0 )
                    {
                      v85 = 0;
                    }
                    else
                    {
                      if ( !v74 )
                        goto LABEL_101;
                      Master_object = (__int64)v113;
                      if ( !v113 )
                        goto LABEL_101;
                      Master_object = System_Collections_Generic_List_int___Contains(
                                        v113,
                                        v74->fields.id,
                                        (const MethodInfo_38E92BC *)Method_System_Collections_Generic_List_int__Contains__);
                      v85 = Master_object & 1;
                    }
                    v86 = p_buttons->klass;
                    if ( !p_buttons->klass )
                      goto LABEL_101;
                    if ( v70 >= LODWORD(v86->_1.namespaze) )
LABEL_102:
                      sub_1CE6960(Master_object);
                    Master_object = *(__int64 *)((char *)&v86->_1.image + v73);
                    if ( !Master_object )
                      goto LABEL_101;
                    MapButtonPrefab__SetupButton(
                      (MapButtonPrefab_o *)Master_object,
                      mapAtlases,
                      v115->fields.commonUI,
                      v114,
                      v74,
                      isMapButtonTop,
                      v85,
                      v84);
                    buttons = v115->fields.buttons;
                    if ( !buttons )
                      goto LABEL_101;
                    v71 = v121;
                    if ( v70 >= LODWORD(buttons->max_length) )
                      goto LABEL_102;
                    Master_object = *(__int64 *)((char *)&buttons->obj.klass + v73);
                    v89 = v125;
                    v72 |= v55;
                    if ( (v55 & 1) != 0 )
                    {
                      v89 = *(__int64 *)((char *)&buttons->obj.klass + v73);
                      v71 = currentMapLayerId;
                      if ( (v118 & 1) == 0 )
                      {
                        v93 = v112;
                        Master_object = *(__int64 *)((char *)&buttons->obj.klass + v73);
                        v91 = mapId;
                        v92 = currentMapLayerId;
                        v90 = v72;
                        if ( v113->fields._size > 0 )
                          goto LABEL_68;
                        goto LABEL_67;
                      }
                      v90 = 1;
                    }
                    else
                    {
                      v90 = 0;
                    }
                    v91 = mapId;
                    v92 = currentMapLayerId;
LABEL_67:
                    v93 = 0;
LABEL_68:
                    v125 = v89;
                    if ( !Master_object )
                      goto LABEL_101;
                    MapButtonPrefab__SetButtonSprite((MapButtonPrefab_o *)Master_object, v90 & 1, v91, v92, v93, v87);
                    v95 = p_buttons->klass;
                    if ( !p_buttons->klass )
                      goto LABEL_101;
                    v96 = HIDWORD(v124);
                    v97 = v123;
                    if ( v70 >= LODWORD(v95->_1.namespaze) )
                      goto LABEL_102;
                    Master_object = *(__int64 *)((char *)&v95->_1.image + v73);
                    v98 = v122;
                    v99 = v55 | v124;
                    if ( (v55 & 1) != 0 )
                    {
                      v96 = mapId;
                      v97 = *(__int64 *)((char *)&v95->_1.image + v73);
                      v98 = currentMapLayerId;
                    }
                    LOBYTE(v124) = v55 | v124;
                    HIDWORD(v124) = v96;
                    v123 = v97;
                    if ( (v55 & 1) != 0 )
                    {
                      if ( (v118 & 1) == 0 )
                      {
                        v102 = v112;
                        Master_object = v97;
                        v101 = v98;
                        v100 = v99;
                        if ( v113->fields._size > 0 )
                          goto LABEL_79;
                        goto LABEL_78;
                      }
                      v100 = 1;
                    }
                    else
                    {
                      v100 = 0;
                    }
                    v96 = mapId;
                    v101 = currentMapLayerId;
LABEL_78:
                    v102 = 0;
LABEL_79:
                    v122 = v98;
                    if ( !Master_object )
                      goto LABEL_101;
                    MapButtonPrefab__SetMapNameLabel((MapButtonPrefab_o *)Master_object, v100 & 1, v96, v101, v102, v94);
                    v103 = p_buttons->klass;
                    if ( !p_buttons->klass )
                      goto LABEL_101;
                    if ( v70 >= LODWORD(v103->_1.namespaze) )
                      goto LABEL_102;
                    v104 = *(MapButtonPrefab_o **)((char *)&v103->_1.image + v73);
                    Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                    if ( !v74 )
                      goto LABEL_101;
                    if ( !Master_object )
                      goto LABEL_101;
                    Master_object = QuestTree__GetQuestCountForMap(
                                      (QuestTree_o *)Master_object,
                                      v74->fields.targetMapId,
                                      v74->fields.layer,
                                      0);
                    if ( !v104 )
                      goto LABEL_101;
                    MapButtonPrefab__SetBadge(v104, Master_object, v105);
                    v106 = p_buttons->klass;
                    if ( !p_buttons->klass )
                      goto LABEL_101;
                    if ( v70 >= LODWORD(v106->_1.namespaze) )
                      goto LABEL_102;
                    v107 = *(MapButtonPrefab_o **)((char *)&v106->_1.image + v73);
                    Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                    if ( !Master_object )
                      goto LABEL_101;
                    Master_object = QuestTree__IsNextSpotForMap(
                                      (QuestTree_o *)Master_object,
                                      v74->fields.targetMapId,
                                      v74->fields.layer,
                                      0);
                    if ( !v107 )
                      goto LABEL_101;
                    MapButtonPrefab__SetNext(v107, Master_object & 1, v108);
                    if ( !v75 )
                      goto LABEL_101;
                    v109 = *p_gridComponent;
                    Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v75, 0);
                    v54 = v119;
                    if ( !v109 )
                      goto LABEL_101;
                    UIGrid__AddChild(v109, (UnityEngine_Transform_o *)Master_object, 0);
                    GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v75, v110);
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v75, 0, 0);
                    max_length = v119->max_length;
                    ++v70;
                    v73 += 8;
                  }
                  while ( (int)v70 < max_length );
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
        goto LABEL_101;
      }
      if ( !v119 )
        goto LABEL_101;
      MapButtonPrefab = v57;
      v118 = 0;
      v58 = *(_DWORD *)(Master_object + 24) < SLODWORD(v119->max_length);
    }
    else
    {
      Master_object = 0;
      v118 = 1;
      v58 = 1;
    }
    v112 = v58;
    goto LABEL_39;
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

  if ( (byte_4E01400 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E01400 = 1;
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
            UnityEngine_Object__Destroy_72918540(gameObject, 0);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          ++v6;
        }
        while ( transform );
      }
LABEL_39:
      sub_1CE6958(transform, v4);
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
            UnityEngine_Object__Destroy_72918540(v18, 0);
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
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.buttons, 0, v10, v11, v12, v13, v14, v15);
    this->fields.currentMapButtonPrefab = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.currentMapButtonPrefab, 0, v19, v20, v21, v22, v23, v24);
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

  if ( (byte_4E01401 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_MapButtonPrefab__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    sub_1CE6700(&Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__);
    sub_1CE6700(&MapButtonControl___c__DisplayClass16_0_TypeInfo);
    byte_4E01401 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v3 = sub_1CE694C(MapButtonControl___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  buttons = this->fields.buttons;
  if ( buttons && buttons->max_length )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    v6 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    if ( !v3 )
      goto LABEL_32;
    *(_QWORD *)(v3 + 16) = v6;
    v15 = (System_Collections_Generic_List_object__o **)(v3 + 16);
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)v6, v9, v10, v11, v12, v13, v14);
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
          sub_1CE6960(object);
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
              *(const MethodInfo_3905F68 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            object->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v25;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v29 + 4), (int32_t)v25, v16, v17, v18, v19, v20, v21);
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
              *(const MethodInfo_3905F68 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &v30->obj.klass + v32;
            v5->fields._size = v32 + 1;
            v33[4] = (Il2CppClass *)v25;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v25, v16, v17, v18, v19, v20, v21);
          }
        }
        max_length = v22->max_length;
        if ( (int)++v24 >= max_length )
          goto LABEL_24;
      }
LABEL_32:
      sub_1CE6958(object, v8);
    }
LABEL_24:
    v34 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v34, (Il2CppObject *)v3, Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, 0);
    this->fields.newButtonEntryAnimAction = v34;
    sub_1CE66A4(
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
           (const MethodInfo_3210080 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
    {
      object = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Last_object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                              (const MethodInfo_322E56C *)Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
      if ( !v5 )
        goto LABEL_32;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v43,
        v5,
        (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v43,
                (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
      {
        if ( !v43.fields._current )
          sub_1CE6958(0, v41);
        MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v43.fields._current, 0, v42);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v43,
        (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
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
          sub_1CE6960(this);
        v5 = buttons->m_Items[v4];
        if ( !v5 )
          sub_1CE6958(0, method);
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
  Il2CppObject *Object_object__52317288; // x20

  if ( (byte_4E013FD & 1) == 0 )
  {
    sub_1CE6700(&Method_AssetData_GetObject_GameObject____79905008);
    sub_1CE6700(&MapButtonControl_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E013FD = 1;
  }
  if ( !mapAssetData )
    return this->fields.buttonPrefab;
  v5 = MapButtonControl_TypeInfo;
  if ( !MapButtonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonControl_TypeInfo);
    v5 = MapButtonControl_TypeInfo;
  }
  Object_object__52317288 = AssetData__GetObject_object__52317288(
                              mapAssetData,
                              v5->static_fields->MAP_BUTTON_PREFAB_NAME,
                              (const MethodInfo_31E4C68 *)Method_AssetData_GetObject_GameObject____79905008);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__52317288, 0, 0) )
    return this->fields.buttonPrefab;
  return (UnityEngine_GameObject_o *)Object_object__52317288;
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
  sub_1CE66A4(p_newButtonEntryAnimAction, 0, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4E013FE & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_MapButtonMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    byte_4E013FE = 1;
  }
  if ( this->fields.buttons )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (MapButtonEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_MapButtonMaster___);
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
              sub_1CE6960(Master_object);
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
      sub_1CE6958(Master_object, v10);
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

  if ( (byte_4E013FF & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_MapButtonMaster___);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4E013FF = 1;
  }
  if ( this->fields.buttons )
  {
    Instance = (MapButtonEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (MapButtonEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_MapButtonMaster___);
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
        Instance = (MapButtonEntity_array *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( v10 >= LODWORD(v9->max_length) )
LABEL_20:
          sub_1CE6960(Instance);
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
      sub_1CE6958(Instance, v8);
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
  int32_t mapId; // w19
  int32_t currentMapLayerId; // w20
  unsigned int v11; // w24
  bool v12; // w21
  Il2CppClass **v13; // x8
  MapButtonPrefab_o *v14; // x22
  const MethodInfo *v15; // x5

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
          sub_1CE6960(terminalMap);
        v13 = &buttons->obj.klass + (int)v11;
        v14 = (MapButtonPrefab_o *)v13[4];
        if ( !v14 )
          break;
        MapButtonPrefab__SetButtonSprite((MapButtonPrefab_o *)v13[4], v12, mapId, currentMapLayerId, 0, v4);
        MapButtonPrefab__SetMapNameLabel(v14, v12, mapId, currentMapLayerId, 0, v15);
        max_length = buttons->max_length;
        if ( (int)++v11 >= max_length )
          return;
      }
LABEL_12:
      sub_1CE6958(terminalMap, method);
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

  if ( (byte_4E01403 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    byte_4E01403 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.newButtonList,
         (const MethodInfo_3210080 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
  {
    newButtonList = (System_Collections_Generic_List_object__o *)this->fields.newButtonList;
    if ( !newButtonList )
      sub_1CE6958(0, v3);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      newButtonList,
      (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
    {
      if ( !v7.fields._current )
        sub_1CE6958(0, v5);
      MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v7.fields._current, 0, v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
  }
}