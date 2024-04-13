void __fastcall MapButtonControl___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E72D4 & 1) == 0 )
  {
    sub_B5D5C4(&MapButtonControl_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_9012/*"MapBtnPrefab"*/, v8, v9, v10);
    byte_42E72D4 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MapButtonControl_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_9012/*"MapBtnPrefab"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_9012/*"MapBtnPrefab"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
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
  BattleServantConfConponent_o *p_buttons; // x23
  const MethodInfo *v54; // x1
  UnityEngine_Object_o *MapButtonPrefab; // x27
  UnityEngine_Object_o *currentMapButtonPrefab; // x24
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 Master_WarQuestSelectionMaster; // x0
  MapControl_WarInfo_o *v76; // x1
  const MethodInfo *v77; // x3
  MapButtonEntity_array *OpenedButtons; // x22
  struct UIGrid_o *GridComponentBottom; // x1
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v86; // x20
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  struct UIGrid_o *GridComponentTop; // x1
  struct WarEntity_o *mWarEnt; // x8
  int v95; // w28
  int v96; // w2
  __int64 v97; // x3
  const MethodInfo *v98; // x4
  MapCondMaster_o *v99; // x19
  int32_t v100; // w26
  int v101; // w21
  bool v102; // w8
  struct UIGrid_o *v103; // x20
  float GridCellHeight; // s0
  System_Int32_array **v105; // x0
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  int max_length; // w8
  unsigned int v113; // w20
  int v114; // w28
  __int64 v115; // x27
  MapButtonEntity_o *v116; // x26
  MapButtonEntity_array *v117; // x19
  UnityEngine_GameObject_o *v118; // x0
  BattleServantConfConponent_c *klass; // x21
  UnityEngine_GameObject_o *v120; // x22
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Int32_array **v127; // x25
  const MethodInfo *v128; // x7
  bool v129; // w6
  BattleServantConfConponent_c *v130; // x8
  const MethodInfo *v131; // x5
  struct MapButtonPrefab_array *buttons; // x8
  bool v133; // w4
  BattleServantConfConponent_c *v134; // x8
  MapButtonPrefab_o *v135; // x25
  const MethodInfo *v136; // x2
  BattleServantConfConponent_c *v137; // x8
  MapButtonPrefab_o *v138; // x25
  const MethodInfo *v139; // x2
  UIGrid_o *v140; // x25
  __int64 v141; // x0
  __int64 v142; // x0
  bool v143; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_int__o *v144; // [xsp+8h] [xbp-98h]
  int32_t currentMapLayerId; // [xsp+10h] [xbp-90h]
  char isMapButtonTop; // [xsp+14h] [xbp-8Ch]
  UnityEngine_UI_Dropdown_DropdownItem_o *original; // [xsp+18h] [xbp-88h]
  ScrTerminalMap_o *v148; // [xsp+20h] [xbp-80h]
  int32_t mapId; // [xsp+30h] [xbp-70h]
  char v151; // [xsp+34h] [xbp-6Ch]
  struct UIGrid_o **p_gridComponent; // [xsp+38h] [xbp-68h]
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_42E72CE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventDetailMaster___, (_DWORD)warInf, (_DWORD)mapInf, mapAtlases);
    sub_B5D5C4(&Method_DataManager_GetMaster_MapButtonMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMaster_MapCondMaster___, v14, v15, v16);
    sub_B5D5C4(&DataManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v20, v21, v22);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___, v23, v24, v25);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v32, v33, v34);
    sub_B5D5C4(&MapButtonPrefab___TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v38, v39, v40);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v44, v45, v46);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v47, v48, v49);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v50, v51, v52);
    byte_42E72CE = 1;
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
  MapButtonControl__DestroyButtons(this, v54);
  this->fields.newButtonEntryAnimAction = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.newButtonEntryAnimAction, 0LL, v57, v58, v59, v60, v61, v62);
  this->fields.terminalMap = terminalMap;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.terminalMap,
    (System_Int32_array **)terminalMap,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  this->fields.currentMapButtonPrefab = (struct UnityEngine_GameObject_o *)MapButtonPrefab;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentMapButtonPrefab,
    (System_Int32_array **)MapButtonPrefab,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_MapButtonMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_92;
  OpenedButtons = MapButtonMaster__GetOpenedButtons(
                    (MapButtonMaster_o *)Master_WarQuestSelectionMaster,
                    v76,
                    mapInf,
                    v77);
  GridComponentBottom = this->fields.GridComponentBottom;
  p_gridComponent = &this->fields.gridComponent;
  this->fields.gridComponent = GridComponentBottom;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.gridComponent,
    (System_Int32_array **)GridComponentBottom,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !warInf )
    goto LABEL_92;
  v86 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = MapControl_WarInfo__GetEventId(warInf, 0LL);
  if ( !v86 )
    goto LABEL_92;
  Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                     v86,
                                     &entity,
                                     Master_WarQuestSelectionMaster,
                                     (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( (Master_WarQuestSelectionMaster & 1) == 0 )
    goto LABEL_19;
  Master_WarQuestSelectionMaster = (__int64)entity;
  if ( !entity )
    goto LABEL_92;
  Master_WarQuestSelectionMaster = EventDetailEntity__IsMapSwitchButtonTop((EventDetailEntity_o *)entity, 0LL);
  if ( (Master_WarQuestSelectionMaster & 1) != 0 )
  {
    GridComponentTop = this->fields.GridComponentTop;
    this->fields.gridComponent = GridComponentTop;
    sub_B5D560(
      (BattleServantConfConponent_o *)p_gridComponent,
      (System_Int32_array **)GridComponentTop,
      v87,
      v88,
      v89,
      v90,
      v91,
      v92);
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
  Master_WarQuestSelectionMaster = ScrTerminalMap__IsMapModel(terminalMap, 0LL);
  mWarEnt = terminalMap->fields.mWarEnt;
  if ( !mWarEnt )
    goto LABEL_92;
  v95 = Master_WarQuestSelectionMaster;
  mapId = *(&mWarEnt->fields.id + 1);
  currentMapLayerId = (int32_t)terminalMap->fields.servantRoot;
  if ( (Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v99 = (MapCondMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_MapCondMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B49 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v76, v96, v97);
      byte_42E4B49 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    v100 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 140LL);
    if ( !byte_42E4B4A )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v76, v96, v97);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      byte_42E4B4A = 1;
    }
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v99 )
      goto LABEL_92;
    Master_WarQuestSelectionMaster = (__int64)MapCondMaster__GetReleasedMapButtonIdList(
                                                v99,
                                                mapId,
                                                v100,
                                                *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 144LL),
                                                v98);
    if ( Master_WarQuestSelectionMaster )
    {
      if ( !OpenedButtons )
        goto LABEL_92;
      v101 = 1;
      v102 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24) < (signed int)OpenedButtons->max_length;
      goto LABEL_45;
    }
    v101 = 0;
  }
  else
  {
    v101 = 0;
    Master_WarQuestSelectionMaster = 0LL;
  }
  v102 = 1;
LABEL_45:
  v143 = v102;
  v144 = (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster;
  if ( !MapButtonPrefab )
    goto LABEL_92;
  v103 = *p_gridComponent;
  Master_WarQuestSelectionMaster = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)MapButtonPrefab,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_92;
  GridCellHeight = MapButtonPrefab__GetGridCellHeight(
                     (MapButtonPrefab_o *)Master_WarQuestSelectionMaster,
                     (const MethodInfo *)v76);
  if ( !v103 )
    goto LABEL_92;
  v151 = v95;
  original = (UnityEngine_UI_Dropdown_DropdownItem_o *)MapButtonPrefab;
  v148 = terminalMap;
  *(float *)&v103->fields.animateSmoothly = GridCellHeight;
  if ( !OpenedButtons )
    goto LABEL_92;
  v105 = (System_Int32_array **)sub_B5D5DC(MapButtonPrefab___TypeInfo, OpenedButtons->max_length);
  p_buttons->klass = (BattleServantConfConponent_c *)v105;
  sub_B5D560(p_buttons, v105, v106, v107, v108, v109, v110, v111);
  max_length = OpenedButtons->max_length;
  if ( max_length >= 1 )
  {
    v113 = 0;
    v114 = v95 & v101;
    v115 = 32LL;
    while ( 1 )
    {
      if ( v113 >= max_length )
        goto LABEL_93;
      v116 = *(MapButtonEntity_o **)((char *)&OpenedButtons->obj.klass + v115);
      v117 = OpenedButtons;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v118 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           original,
                                           (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      klass = p_buttons->klass;
      v120 = v118;
      Master_WarQuestSelectionMaster = (__int64)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                  v118,
                                                  (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
      if ( !klass )
        break;
      v127 = (System_Int32_array **)Master_WarQuestSelectionMaster;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = sub_B5D684(Master_WarQuestSelectionMaster, *((_QWORD *)klass->_1.image + 8));
        if ( !Master_WarQuestSelectionMaster )
        {
          v142 = sub_B5D6BC();
          sub_B5D668(v142, 0LL);
        }
      }
      if ( v113 >= LODWORD(klass->_1.namespaze) )
        goto LABEL_93;
      *(void **)((char *)&klass->_1.image + v115) = v127;
      sub_B5D560((BattleServantConfConponent_o *)((char *)klass + v115), v127, v121, v122, v123, v124, v125, v126);
      if ( v114 )
      {
        if ( !v116 )
          break;
        Master_WarQuestSelectionMaster = (__int64)v144;
        if ( !v144 )
          break;
        Master_WarQuestSelectionMaster = System_Collections_Generic_List_int___Contains(
                                           v144,
                                           v116->fields.id,
                                           (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
        v129 = Master_WarQuestSelectionMaster & 1;
      }
      else
      {
        v129 = 0;
      }
      v130 = p_buttons->klass;
      if ( !p_buttons->klass )
        break;
      if ( v113 >= LODWORD(v130->_1.namespaze) )
      {
LABEL_93:
        v141 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v141, 0LL);
      }
      Master_WarQuestSelectionMaster = *(__int64 *)((char *)&v130->_1.image + v115);
      if ( !Master_WarQuestSelectionMaster )
        break;
      MapButtonPrefab__SetupButton(
        (MapButtonPrefab_o *)Master_WarQuestSelectionMaster,
        mapAtlases,
        this->fields.commonUI,
        v148,
        v116,
        isMapButtonTop,
        v129,
        v128);
      buttons = this->fields.buttons;
      if ( !buttons )
        break;
      if ( v113 >= buttons->max_length )
        goto LABEL_93;
      Master_WarQuestSelectionMaster = *(__int64 *)((char *)&buttons->obj.klass + v115);
      if ( !v114 )
        goto LABEL_72;
      if ( !v144 )
        break;
      v133 = v143;
      if ( v144->fields._size <= 0 )
LABEL_72:
        v133 = 0;
      if ( !Master_WarQuestSelectionMaster )
        break;
      MapButtonPrefab__SetButtonSprite(
        (MapButtonPrefab_o *)Master_WarQuestSelectionMaster,
        v151 & 1,
        mapId,
        currentMapLayerId,
        v133,
        v131);
      v134 = p_buttons->klass;
      if ( !p_buttons->klass )
        break;
      if ( v113 >= LODWORD(v134->_1.namespaze) )
        goto LABEL_93;
      v135 = *(MapButtonPrefab_o **)((char *)&v134->_1.image + v115);
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      Master_WarQuestSelectionMaster = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v116 )
        break;
      if ( !Master_WarQuestSelectionMaster )
        break;
      Master_WarQuestSelectionMaster = QuestTree__GetQuestCountForMap(
                                         (QuestTree_o *)Master_WarQuestSelectionMaster,
                                         v116->fields.targetMapId,
                                         v116->fields.layer,
                                         0LL);
      if ( !v135 )
        break;
      MapButtonPrefab__SetBadge(v135, Master_WarQuestSelectionMaster, v136);
      v137 = p_buttons->klass;
      if ( !p_buttons->klass )
        break;
      if ( v113 >= LODWORD(v137->_1.namespaze) )
        goto LABEL_93;
      v138 = *(MapButtonPrefab_o **)((char *)&v137->_1.image + v115);
      Master_WarQuestSelectionMaster = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Master_WarQuestSelectionMaster )
        break;
      Master_WarQuestSelectionMaster = QuestTree__IsNextSpotForMap(
                                         (QuestTree_o *)Master_WarQuestSelectionMaster,
                                         v116->fields.targetMapId,
                                         v116->fields.layer,
                                         0LL);
      if ( !v138 )
        break;
      MapButtonPrefab__SetNext(v138, Master_WarQuestSelectionMaster & 1, v139);
      if ( !v120 )
        break;
      v140 = *p_gridComponent;
      Master_WarQuestSelectionMaster = (__int64)UnityEngine_GameObject__get_transform(v120, 0LL);
      if ( !v140 )
        break;
      UIGrid__AddChild(v140, (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster, 0LL);
      GameObjectExtensions__ResetLocalScale(v120, 0LL);
      UnityEngine_GameObject__SetActive(v120, 0, 0LL);
      max_length = v117->max_length;
      ++v113;
      OpenedButtons = v117;
      v115 += 8LL;
      if ( (int)v113 >= max_length )
        goto LABEL_89;
    }
LABEL_92:
    sub_B5D69C(Master_WarQuestSelectionMaster, v76);
  }
LABEL_89:
  Master_WarQuestSelectionMaster = (__int64)*p_gridComponent;
  if ( !*p_gridComponent )
    goto LABEL_92;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_WarQuestSelectionMaster + 440LL))(
    Master_WarQuestSelectionMaster,
    *(_QWORD *)(*(_QWORD *)Master_WarQuestSelectionMaster + 448LL));
}


void __fastcall MapButtonControl__DestroyButtons(MapButtonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *GridComponentBottom; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *transform; // x0
  int32_t v8; // w21
  UnityEngine_Object_o *Child; // x22
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *GridComponentTop; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  int32_t v18; // w21
  UnityEngine_Object_o *v19; // x22
  UnityEngine_Object_o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42E72D2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E72D2 = 1;
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
      transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
      if ( transform )
      {
        v8 = 0;
        do
        {
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          if ( v8 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) )
            goto LABEL_25;
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          if ( !transform )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v8, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(Child, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            if ( !Child )
              break;
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)Child,
                                                   0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          ++v8;
        }
        while ( transform );
      }
LABEL_45:
      sub_B5D69C(transform, v6);
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
      transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
      if ( transform )
      {
        v18 = 0;
        do
        {
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          if ( v18 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) )
            goto LABEL_46;
          transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          if ( !transform )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          v19 = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v18, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(v19, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            if ( !v19 )
              goto LABEL_45;
            v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_35620236(v20, 0LL);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          ++v18;
        }
        while ( transform );
      }
      goto LABEL_45;
    }
LABEL_46:
    this->fields.buttons = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.buttons, 0LL, v12, v13, v14, v15, v16, v17);
    this->fields.currentMapButtonPrefab = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.currentMapButtonPrefab, 0LL, v21, v22, v23, v24, v25, v26);
  }
}


void __fastcall MapButtonControl__FrameIn(MapButtonControl_o *this, const MethodInfo *method)
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
  __int64 v38; // x21
  struct MapButtonPrefab_array *buttons; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x23
  System_String_o *string; // x0
  __int64 v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_o **v50; // x22
  struct MapButtonPrefab_array *v51; // x24
  int max_length; // w8
  unsigned int v53; // w25
  MapButtonPrefab_o *v54; // x23
  System_Action_o *v55; // x22
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x1
  const MethodInfo *v63; // x2
  __int64 v64; // x0
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E72D3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Last_MapButtonPrefab___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapButtonPrefab__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapButtonPrefab___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_MapButtonPrefab__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, v32, v33, v34);
    sub_B5D5C4(&MapButtonControl___c__DisplayClass16_0_TypeInfo, v35, v36, v37);
    byte_42E72D3 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  v38 = sub_B5D694(MapButtonControl___c__DisplayClass16_0_TypeInfo);
  MapButtonControl___c__DisplayClass16_0___ctor((MapButtonControl___c__DisplayClass16_0_o *)v38, 0LL);
  buttons = this->fields.buttons;
  if ( buttons && *(_QWORD *)&buttons->max_length )
  {
    v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v40,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v41,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    if ( !v38 )
      goto LABEL_25;
    *(_QWORD *)(v38 + 16) = v41;
    v50 = (System_String_o **)(v38 + 16);
    sub_B5D560((BattleServantConfConponent_o *)(v38 + 16), (System_Int32_array **)v41, v44, v45, v46, v47, v48, v49);
    v51 = this->fields.buttons;
    if ( !v51 )
      goto LABEL_25;
    max_length = v51->max_length;
    if ( max_length >= 1 )
    {
      v53 = 0;
      while ( 1 )
      {
        if ( v53 >= max_length )
        {
          v64 = sub_B5D6C8(string);
          sub_B5D668(v64, 0LL);
        }
        v54 = v51->m_Items[v53];
        if ( !v54 )
          break;
        if ( v54->fields.isNew )
        {
          string = *v50;
          if ( !*v50 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)string,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MapButtonPrefab__Add__);
          v54->fields.isNew = 0;
        }
        else
        {
          if ( !v40 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v40,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MapButtonPrefab__Add__);
        }
        max_length = v51->max_length;
        if ( (int)++v53 >= max_length )
          goto LABEL_17;
      }
LABEL_25:
      sub_B5D69C(string, v43);
    }
LABEL_17:
    v55 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v55, (Il2CppObject *)v38, Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, 0LL);
    this->fields.newButtonEntryAnimAction = v55;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.newButtonEntryAnimAction,
      (System_Int32_array **)v55,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v40,
           (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
    {
      string = System_Linq_Enumerable__Last_string_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v40,
                 (const MethodInfo_1CAD41C *)Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
      if ( !v40 )
        goto LABEL_25;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v65,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v40,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v65,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
      {
        if ( !v65.fields.current )
          sub_B5D69C(0LL, v62);
        MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v65.fields.current, 0LL, v63);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v65,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
    }
  }
}


void __fastcall MapButtonControl__FrameOut(MapButtonControl_o *this, const MethodInfo *method)
{
  struct MapButtonPrefab_array *buttons; // x19
  int max_length; // w8
  __int64 v4; // x20
  MapButtonPrefab_o *v5; // x0
  __int64 v6; // x0

  buttons = this->fields.buttons;
  if ( buttons )
  {
    max_length = buttons->max_length;
    if ( max_length >= 1 )
    {
      v4 = 0LL;
      do
      {
        if ( (unsigned int)v4 >= max_length )
        {
          v6 = sub_B5D6C8(this);
          sub_B5D668(v6, 0LL);
        }
        v5 = buttons->m_Items[v4];
        if ( !v5 )
          sub_B5D69C(0LL, method);
        MapButtonPrefab__FrameOut(v5, method);
        max_length = buttons->max_length;
        ++v4;
      }
      while ( (int)v4 < max_length );
    }
  }
}


UnityEngine_GameObject_o *__fastcall MapButtonControl__GetMapButtonPrefab(
        MapButtonControl_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  MapButtonControl_c *v12; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20

  if ( (byte_42E72CF & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)mapAssetData, (_DWORD)method, v3);
    sub_B5D5C4(&MapButtonControl_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E72CF = 1;
  }
  if ( !mapAssetData )
    return this->fields.buttonPrefab;
  v12 = MapButtonControl_TypeInfo;
  if ( (BYTE3(MapButtonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapButtonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonControl_TypeInfo);
    v12 = MapButtonControl_TypeInfo;
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             mapAssetData,
                                                             v12->static_fields->MAP_BUTTON_PREFAB_NAME,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
  sub_B5D560(p_newButtonEntryAnimAction, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall MapButtonControl__SetNext(
        MapButtonControl_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        MapControl_SpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  MapButtonMaster_o *Master_WarQuestSelectionMaster; // x0
  MapControl_WarInfo_o *v12; // x1
  const MethodInfo *v13; // x3
  int MasterName_k__BackingField; // w8
  MapButtonPrefab_o *v15; // x21
  il2cpp_array_size_t v16; // w22
  struct MapButtonPrefab_array *buttons; // x9
  MapButtonPrefab_c **v18; // x24
  MapButtonPrefab_c *v19; // x8
  char *v20; // x24
  MapButtonPrefab_c *v21; // t1
  int namespaze; // w25
  int v23; // w24
  const MethodInfo *v24; // x2
  struct MapButtonPrefab_array *v25; // x8
  __int64 v26; // x0

  if ( (byte_42E72D0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_MapButtonMaster___, (_DWORD)warInf, (_DWORD)mapInf, spotInfo);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    byte_42E72D0 = 1;
  }
  if ( this->fields.buttons )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (MapButtonMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_26;
    Master_WarQuestSelectionMaster = (MapButtonMaster_o *)MapButtonMaster__GetOpenedButtons(
                                                            Master_WarQuestSelectionMaster,
                                                            v12,
                                                            mapInf,
                                                            v13);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_26;
    MasterName_k__BackingField = (int)Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
    v15 = (MapButtonPrefab_o *)Master_WarQuestSelectionMaster;
    if ( MasterName_k__BackingField >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        buttons = this->fields.buttons;
        if ( !buttons )
          break;
        if ( (signed int)v16 >= (signed int)buttons->max_length )
          return;
        if ( v16 >= MasterName_k__BackingField )
          goto LABEL_27;
        v18 = &v15->klass + (int)v16;
        v21 = v18[4];
        v20 = (char *)(v18 + 4);
        v19 = v21;
        if ( !v21 || !spotInfo )
          break;
        namespaze = (int)v19->_1.namespaze;
        Master_WarQuestSelectionMaster = (MapButtonMaster_o *)MapControl_SpotInfo__GetMapID(spotInfo, 0LL);
        if ( namespaze == (_DWORD)Master_WarQuestSelectionMaster )
        {
          if ( v16 >= LODWORD(v15->fields.mNoticeNumberObj) )
            goto LABEL_27;
          if ( !*(_QWORD *)v20 )
            break;
          v23 = *(_DWORD *)(*(_QWORD *)v20 + 28LL);
          Master_WarQuestSelectionMaster = (MapButtonMaster_o *)MapControl_SpotInfo__GetLayer(spotInfo, 0LL);
          if ( v23 == (_DWORD)Master_WarQuestSelectionMaster )
          {
            v25 = this->fields.buttons;
            if ( !v25 )
              break;
            if ( v16 >= v25->max_length )
            {
LABEL_27:
              v26 = sub_B5D6C8(Master_WarQuestSelectionMaster);
              sub_B5D668(v26, 0LL);
            }
            Master_WarQuestSelectionMaster = (MapButtonMaster_o *)v25->m_Items[v16];
            if ( !Master_WarQuestSelectionMaster )
              break;
            MapButtonPrefab__SetNext((MapButtonPrefab_o *)Master_WarQuestSelectionMaster, 1, v24);
          }
        }
        MasterName_k__BackingField = (int)v15->fields.mNoticeNumberObj;
        if ( (int)++v16 >= MasterName_k__BackingField )
          return;
      }
LABEL_26:
      sub_B5D69C(Master_WarQuestSelectionMaster, v12);
    }
  }
}


void __fastcall MapButtonControl__UpdateBadge(
        MapButtonControl_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  MapControl_WarInfo_o *v16; // x1
  const MethodInfo *v17; // x3
  DataManager_o *v18; // x20
  il2cpp_array_size_t v19; // w21
  struct MapButtonPrefab_array *buttons; // x8
  __int64 v21; // x8
  const MethodInfo *v22; // x2
  struct MapButtonPrefab_array *v23; // x8
  __int64 v24; // x0

  if ( (byte_42E72D1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_MapButtonMaster___, (_DWORD)warInf, (_DWORD)mapInf, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v12, v13, v14);
    byte_42E72D1 = 1;
  }
  if ( this->fields.buttons )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MapButtonMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Instance, v16, mapInf, v17);
    if ( !Instance )
      goto LABEL_22;
    v18 = Instance;
    if ( SLODWORD(Instance->fields.datalist) >= 1 )
    {
      v19 = 0;
      while ( 1 )
      {
        buttons = this->fields.buttons;
        if ( !buttons )
          break;
        if ( (signed int)v19 >= (signed int)buttons->max_length )
          return;
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( v19 >= LODWORD(v18->fields.datalist) )
        {
LABEL_23:
          v24 = sub_B5D6C8(Instance);
          sub_B5D668(v24, 0LL);
        }
        v21 = *((_QWORD *)&v18->fields.lookup + (int)v19);
        if ( !v21 )
          break;
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestTree__GetQuestCountForMap(
                                      (QuestTree_o *)Instance,
                                      *(_DWORD *)(v21 + 24),
                                      *(_DWORD *)(v21 + 28),
                                      0LL);
        v23 = this->fields.buttons;
        if ( !v23 )
          break;
        if ( v19 >= v23->max_length )
          goto LABEL_23;
        v16 = (MapControl_WarInfo_o *)(unsigned int)Instance;
        Instance = (DataManager_o *)v23->m_Items[v19];
        if ( !Instance )
          break;
        MapButtonPrefab__SetBadge((MapButtonPrefab_o *)Instance, (int32_t)v16, v22);
        if ( (signed int)++v19 >= SLODWORD(v18->fields.datalist) )
          return;
      }
LABEL_22:
      sub_B5D69C(Instance, v16);
    }
  }
}


void __fastcall MapButtonControl__UpdateButtonSprite(MapButtonControl_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *terminalMap; // x0
  const MethodInfo *v4; // x5
  struct ScrTerminalMap_o *v5; // x9
  struct WarEntity_o *mWarEnt; // x10
  struct MapButtonPrefab_array *buttons; // x22
  int max_length; // w8
  int32_t v9; // w19
  int32_t servantRoot; // w20
  unsigned int v11; // w23
  bool v12; // w21
  __int64 v13; // x0

  if ( this->fields.buttons )
  {
    terminalMap = this->fields.terminalMap;
    if ( !terminalMap )
      goto LABEL_12;
    terminalMap = (ScrTerminalMap_o *)ScrTerminalMap__IsMapModel(terminalMap, 0LL);
    v5 = this->fields.terminalMap;
    if ( !v5 )
      goto LABEL_12;
    mWarEnt = v5->fields.mWarEnt;
    if ( !mWarEnt )
      goto LABEL_12;
    buttons = this->fields.buttons;
    if ( !buttons )
      goto LABEL_12;
    max_length = buttons->max_length;
    if ( max_length >= 1 )
    {
      v9 = *(&mWarEnt->fields.id + 1);
      servantRoot = (int32_t)v5->fields.servantRoot;
      v11 = 0;
      v12 = (unsigned __int8)terminalMap & 1;
      while ( 1 )
      {
        if ( v11 >= max_length )
        {
          v13 = sub_B5D6C8(terminalMap);
          sub_B5D668(v13, 0LL);
        }
        terminalMap = (ScrTerminalMap_o *)buttons->m_Items[v11];
        if ( !terminalMap )
          break;
        MapButtonPrefab__SetButtonSprite((MapButtonPrefab_o *)terminalMap, v12, v9, servantRoot, 0, v4);
        max_length = buttons->max_length;
        if ( (int)++v11 >= max_length )
          return;
      }
LABEL_12:
      sub_B5D69C(terminalMap, method);
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
  __int64 v17; // x1
  struct System_Collections_Generic_List_MapButtonPrefab__o *newButtonList; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E5EE8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__, v14, v15, v16);
    byte_42E5EE8 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.newButtonList,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
  {
    newButtonList = this->fields.newButtonList;
    if ( !newButtonList )
      sub_B5D69C(0LL, v17);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)newButtonList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
    {
      if ( !v20.fields.current )
        sub_B5D69C(0LL, v19);
      MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v20.fields.current, 0LL, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
  }
}