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

  if ( (byte_4213006 & 1) == 0 )
  {
    sub_B0D8A4(&MapButtonControl_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_8942/*"MapBtnPrefab"*/, v8);
    byte_4213006 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MapButtonControl_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_8942/*"MapBtnPrefab"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_8942/*"MapBtnPrefab"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  __int64 Master_WarQuestSelectionMaster; // x0
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
  DataMasterBase_WarMaster__WarEntity__int__o *v58; // x20
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct UIGrid_o *GridComponentTop; // x1
  struct WarEntity_o *mWarEnt; // x8
  int v67; // w28
  __int64 v68; // x1
  const MethodInfo *v69; // x4
  MapCondMaster_o *v70; // x19
  int32_t v71; // w26
  int v72; // w21
  bool v73; // w8
  struct UIGrid_o *v74; // x20
  const MethodInfo *v75; // x1
  float GridCellHeight; // s0
  System_Int32_array **v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  int max_length; // w8
  unsigned int v85; // w20
  int v86; // w28
  __int64 v87; // x27
  MapButtonEntity_o *v88; // x26
  MapButtonEntity_array *v89; // x19
  UnityEngine_GameObject_o *v90; // x0
  BattleServantConfConponent_c *klass; // x21
  UnityEngine_GameObject_o *v92; // x22
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x25
  const MethodInfo *v100; // x7
  bool v101; // w6
  BattleServantConfConponent_c *v102; // x8
  const MethodInfo *v103; // x5
  struct MapButtonPrefab_array *buttons; // x8
  bool v105; // w4
  BattleServantConfConponent_c *v106; // x8
  MapButtonPrefab_o *v107; // x25
  const MethodInfo *v108; // x2
  BattleServantConfConponent_c *v109; // x8
  MapButtonPrefab_o *v110; // x25
  const MethodInfo *v111; // x2
  UIGrid_o *v112; // x25
  __int64 v113; // x0
  __int64 v114; // x0
  bool v115; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_int__o *v116; // [xsp+8h] [xbp-98h]
  int32_t currentMapLayerId; // [xsp+10h] [xbp-90h]
  char isMapButtonTop; // [xsp+14h] [xbp-8Ch]
  UnityEngine_UI_Dropdown_DropdownItem_o *original; // [xsp+18h] [xbp-88h]
  ScrTerminalMap_o *v120; // [xsp+20h] [xbp-80h]
  int32_t mapId; // [xsp+30h] [xbp-70h]
  char v123; // [xsp+34h] [xbp-6Ch]
  struct UIGrid_o **p_gridComponent; // [xsp+38h] [xbp-68h]
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4213000 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventDetailMaster___, warInf);
    sub_B0D8A4(&Method_DataManager_GetMaster_MapButtonMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_MapCondMaster___, v12);
    sub_B0D8A4(&DataManager_TypeInfo, v13);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v14);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___, v15);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_B0D8A4(&MapButtonPrefab___TypeInfo, v19);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v20);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v22);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v23);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v24);
    byte_4213000 = 1;
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.newButtonEntryAnimAction, 0LL, v29, v30, v31, v32, v33, v34);
  this->fields.terminalMap = terminalMap;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.terminalMap,
    (System_Int32_array **)terminalMap,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.currentMapButtonPrefab = (struct UnityEngine_GameObject_o *)MapButtonPrefab;
  sub_B0D840(
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
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_MapButtonMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_92;
  OpenedButtons = MapButtonMaster__GetOpenedButtons(
                    (MapButtonMaster_o *)Master_WarQuestSelectionMaster,
                    v48,
                    mapInf,
                    v49);
  GridComponentBottom = this->fields.GridComponentBottom;
  p_gridComponent = &this->fields.gridComponent;
  this->fields.gridComponent = GridComponentBottom;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.gridComponent,
    (System_Int32_array **)GridComponentBottom,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !warInf )
    goto LABEL_92;
  v58 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = MapControl_WarInfo__GetEventId(warInf, 0LL);
  if ( !v58 )
    goto LABEL_92;
  Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                     v58,
                                     &entity,
                                     Master_WarQuestSelectionMaster,
                                     (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
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
    sub_B0D840(
      (BattleServantConfConponent_o *)p_gridComponent,
      (System_Int32_array **)GridComponentTop,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
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
  v67 = Master_WarQuestSelectionMaster;
  mapId = *(&mWarEnt->fields.id + 1);
  currentMapLayerId = (int32_t)terminalMap->fields.servantRoot;
  if ( (Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v70 = (MapCondMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_MapCondMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210868 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v68);
      byte_4210868 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    v71 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 124LL);
    if ( !byte_4210869 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v68);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      byte_4210869 = 1;
    }
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v70 )
      goto LABEL_92;
    Master_WarQuestSelectionMaster = (__int64)MapCondMaster__GetReleasedMapButtonIdList(
                                                v70,
                                                mapId,
                                                v71,
                                                *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 128LL),
                                                v69);
    if ( Master_WarQuestSelectionMaster )
    {
      if ( !OpenedButtons )
        goto LABEL_92;
      v72 = 1;
      v73 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24) < (signed int)OpenedButtons->max_length;
      goto LABEL_45;
    }
    v72 = 0;
  }
  else
  {
    v72 = 0;
    Master_WarQuestSelectionMaster = 0LL;
  }
  v73 = 1;
LABEL_45:
  v115 = v73;
  v116 = (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster;
  if ( !MapButtonPrefab )
    goto LABEL_92;
  v74 = *p_gridComponent;
  Master_WarQuestSelectionMaster = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)MapButtonPrefab,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_92;
  GridCellHeight = MapButtonPrefab__GetGridCellHeight((MapButtonPrefab_o *)Master_WarQuestSelectionMaster, v75);
  if ( !v74 )
    goto LABEL_92;
  v123 = v67;
  original = (UnityEngine_UI_Dropdown_DropdownItem_o *)MapButtonPrefab;
  v120 = terminalMap;
  *(float *)&v74->fields.animateSmoothly = GridCellHeight;
  if ( !OpenedButtons )
    goto LABEL_92;
  v77 = (System_Int32_array **)sub_B0D8BC(MapButtonPrefab___TypeInfo, OpenedButtons->max_length);
  p_buttons->klass = (BattleServantConfConponent_c *)v77;
  sub_B0D840(p_buttons, v77, v78, v79, v80, v81, v82, v83);
  max_length = OpenedButtons->max_length;
  if ( max_length >= 1 )
  {
    v85 = 0;
    v86 = v67 & v72;
    v87 = 32LL;
    while ( 1 )
    {
      if ( v85 >= max_length )
        goto LABEL_93;
      v88 = *(MapButtonEntity_o **)((char *)&OpenedButtons->obj.klass + v87);
      v89 = OpenedButtons;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v90 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          original,
                                          (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      klass = p_buttons->klass;
      v92 = v90;
      Master_WarQuestSelectionMaster = (__int64)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                  v90,
                                                  (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
      if ( !klass )
        break;
      v99 = (System_Int32_array **)Master_WarQuestSelectionMaster;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = sub_B0D964(Master_WarQuestSelectionMaster, *((_QWORD *)klass->_1.image + 8));
        if ( !Master_WarQuestSelectionMaster )
        {
          v114 = sub_B0D99C();
          sub_B0D948(v114, 0LL);
        }
      }
      if ( v85 >= LODWORD(klass->_1.namespaze) )
        goto LABEL_93;
      *(void **)((char *)&klass->_1.image + v87) = v99;
      sub_B0D840((BattleServantConfConponent_o *)((char *)klass + v87), v99, v93, v94, v95, v96, v97, v98);
      if ( v86 )
      {
        if ( !v88 )
          break;
        Master_WarQuestSelectionMaster = (__int64)v116;
        if ( !v116 )
          break;
        Master_WarQuestSelectionMaster = System_Collections_Generic_List_int___Contains(
                                           v116,
                                           v88->fields.id,
                                           (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
        v101 = Master_WarQuestSelectionMaster & 1;
      }
      else
      {
        v101 = 0;
      }
      v102 = p_buttons->klass;
      if ( !p_buttons->klass )
        break;
      if ( v85 >= LODWORD(v102->_1.namespaze) )
      {
LABEL_93:
        v113 = sub_B0D9A8(Master_WarQuestSelectionMaster);
        sub_B0D948(v113, 0LL);
      }
      Master_WarQuestSelectionMaster = *(__int64 *)((char *)&v102->_1.image + v87);
      if ( !Master_WarQuestSelectionMaster )
        break;
      MapButtonPrefab__SetupButton(
        (MapButtonPrefab_o *)Master_WarQuestSelectionMaster,
        mapAtlases,
        this->fields.commonUI,
        v120,
        v88,
        isMapButtonTop,
        v101,
        v100);
      buttons = this->fields.buttons;
      if ( !buttons )
        break;
      if ( v85 >= buttons->max_length )
        goto LABEL_93;
      Master_WarQuestSelectionMaster = *(__int64 *)((char *)&buttons->obj.klass + v87);
      if ( !v86 )
        goto LABEL_72;
      if ( !v116 )
        break;
      v105 = v115;
      if ( v116->fields._size <= 0 )
LABEL_72:
        v105 = 0;
      if ( !Master_WarQuestSelectionMaster )
        break;
      MapButtonPrefab__SetButtonSprite(
        (MapButtonPrefab_o *)Master_WarQuestSelectionMaster,
        v123 & 1,
        mapId,
        currentMapLayerId,
        v105,
        v103);
      v106 = p_buttons->klass;
      if ( !p_buttons->klass )
        break;
      if ( v85 >= LODWORD(v106->_1.namespaze) )
        goto LABEL_93;
      v107 = *(MapButtonPrefab_o **)((char *)&v106->_1.image + v87);
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      Master_WarQuestSelectionMaster = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v88 )
        break;
      if ( !Master_WarQuestSelectionMaster )
        break;
      Master_WarQuestSelectionMaster = QuestTree__GetQuestCountForMap(
                                         (QuestTree_o *)Master_WarQuestSelectionMaster,
                                         v88->fields.targetMapId,
                                         v88->fields.layer,
                                         0LL);
      if ( !v107 )
        break;
      MapButtonPrefab__SetBadge(v107, Master_WarQuestSelectionMaster, v108);
      v109 = p_buttons->klass;
      if ( !p_buttons->klass )
        break;
      if ( v85 >= LODWORD(v109->_1.namespaze) )
        goto LABEL_93;
      v110 = *(MapButtonPrefab_o **)((char *)&v109->_1.image + v87);
      Master_WarQuestSelectionMaster = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Master_WarQuestSelectionMaster )
        break;
      Master_WarQuestSelectionMaster = QuestTree__IsNextSpotForMap(
                                         (QuestTree_o *)Master_WarQuestSelectionMaster,
                                         v88->fields.targetMapId,
                                         v88->fields.layer,
                                         0LL);
      if ( !v110 )
        break;
      MapButtonPrefab__SetNext(v110, Master_WarQuestSelectionMaster & 1, v111);
      if ( !v92 )
        break;
      v112 = *p_gridComponent;
      Master_WarQuestSelectionMaster = (__int64)UnityEngine_GameObject__get_transform(v92, 0LL);
      if ( !v112 )
        break;
      UIGrid__AddChild(v112, (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster, 0LL);
      GameObjectExtensions__ResetLocalScale(v92, 0LL);
      UnityEngine_GameObject__SetActive(v92, 0, 0LL);
      max_length = v89->max_length;
      ++v85;
      OpenedButtons = v89;
      v87 += 8LL;
      if ( (int)v85 >= max_length )
        goto LABEL_89;
    }
LABEL_92:
    sub_B0D97C(Master_WarQuestSelectionMaster);
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
  UnityEngine_Object_o *GridComponentBottom; // x21
  UnityEngine_Component_o *transform; // x0
  int32_t v5; // w21
  UnityEngine_Object_o *Child; // x22
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *GridComponentTop; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int32_t v15; // w21
  UnityEngine_Object_o *v16; // x22
  UnityEngine_Object_o *v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4213004 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4213004 = 1;
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
        v5 = 0;
        do
        {
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          if ( v5 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) )
            goto LABEL_25;
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          if ( !transform )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v5, 0LL);
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
            UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          ++v5;
        }
        while ( transform );
      }
LABEL_45:
      sub_B0D97C(transform);
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
        v15 = 0;
        do
        {
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          if ( v15 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) )
            goto LABEL_46;
          transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          if ( !transform )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          v16 = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v15, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(v16, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            if ( !v16 )
              goto LABEL_45;
            v17 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_34935276(v17, 0LL);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          ++v15;
        }
        while ( transform );
      }
      goto LABEL_45;
    }
LABEL_46:
    this->fields.buttons = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.buttons, 0LL, v9, v10, v11, v12, v13, v14);
    this->fields.currentMapButtonPrefab = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.currentMapButtonPrefab, 0LL, v18, v19, v20, v21, v22, v23);
  }
}


void __fastcall MapButtonControl__FrameIn(MapButtonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  struct MapButtonPrefab_array *buttons; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x23
  System_String_o *string; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_o **v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  struct MapButtonPrefab_array *v33; // x24
  int max_length; // w8
  unsigned int v35; // w25
  MapButtonPrefab_o *v36; // x23
  System_Action_o *v37; // x22
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  const MethodInfo *v44; // x2
  __int64 v45; // x0
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4213005 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Last_MapButtonPrefab___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapButtonPrefab__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapButtonPrefab___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_MapButtonPrefab__TypeInfo, v12);
    sub_B0D8A4(&Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, v13);
    sub_B0D8A4(&MapButtonControl___c__DisplayClass16_0_TypeInfo, v14);
    byte_4213005 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v15 = sub_B0D974(MapButtonControl___c__DisplayClass16_0_TypeInfo, method, v2);
  MapButtonControl___c__DisplayClass16_0___ctor((MapButtonControl___c__DisplayClass16_0_o *)v15, 0LL);
  buttons = this->fields.buttons;
  if ( buttons && *(_QWORD *)&buttons->max_length )
  {
    v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_MapButtonPrefab__TypeInfo,
                                                                                                    v16,
                                                                                                    v17);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v19,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_MapButtonPrefab__TypeInfo,
                                                                                                    v20,
                                                                                                    v21);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v22,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    if ( !v15 )
      goto LABEL_25;
    *(_QWORD *)(v15 + 16) = v22;
    v30 = (System_String_o **)(v15 + 16);
    sub_B0D840((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)v22, v24, v25, v26, v27, v28, v29);
    v33 = this->fields.buttons;
    if ( !v33 )
      goto LABEL_25;
    max_length = v33->max_length;
    if ( max_length >= 1 )
    {
      v35 = 0;
      while ( 1 )
      {
        if ( v35 >= max_length )
        {
          v45 = sub_B0D9A8(string);
          sub_B0D948(v45, 0LL);
        }
        v36 = v33->m_Items[v35];
        if ( !v36 )
          break;
        if ( v36->fields.isNew )
        {
          string = *v30;
          if ( !*v30 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)string,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MapButtonPrefab__Add__);
          v36->fields.isNew = 0;
        }
        else
        {
          if ( !v19 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v19,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MapButtonPrefab__Add__);
        }
        max_length = v33->max_length;
        if ( (int)++v35 >= max_length )
          goto LABEL_17;
      }
LABEL_25:
      sub_B0D97C(string);
    }
LABEL_17:
    v37 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v31, v32);
    System_Action___ctor(v37, (Il2CppObject *)v15, Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, 0LL);
    this->fields.newButtonEntryAnimAction = v37;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.newButtonEntryAnimAction,
      (System_Int32_array **)v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v19,
           (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
    {
      string = System_Linq_Enumerable__Last_string_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                 (const MethodInfo_1B4CFD4 *)Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
      if ( !v19 )
        goto LABEL_25;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v46,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v19,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v46,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
      {
        if ( !v46.fields.current )
          sub_B0D97C(0LL);
        MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v46.fields.current, 0LL, v44);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v46,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
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
          v6 = sub_B0D9A8(this);
          sub_B0D948(v6, 0LL);
        }
        v5 = buttons->m_Items[v4];
        if ( !v5 )
          sub_B0D97C(0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  MapButtonControl_c *v7; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20

  if ( (byte_4213001 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, mapAssetData);
    sub_B0D8A4(&MapButtonControl_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_4213001 = 1;
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
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
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
  sub_B0D840(p_newButtonEntryAnimAction, 0LL, v3, v4, v5, v6, v7, v8);
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
  int MasterName_k__BackingField; // w8
  MapButtonPrefab_o *v13; // x21
  il2cpp_array_size_t v14; // w22
  struct MapButtonPrefab_array *buttons; // x9
  MapButtonPrefab_c **v16; // x24
  MapButtonPrefab_c *v17; // x8
  char *v18; // x24
  MapButtonPrefab_c *v19; // t1
  int namespaze; // w25
  int v21; // w24
  const MethodInfo *v22; // x2
  struct MapButtonPrefab_array *v23; // x8
  __int64 v24; // x0

  if ( (byte_4213002 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_MapButtonMaster___, warInf);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    byte_4213002 = 1;
  }
  if ( this->fields.buttons )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (MapButtonMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_26;
    Master_WarQuestSelectionMaster = (MapButtonMaster_o *)MapButtonMaster__GetOpenedButtons(
                                                            Master_WarQuestSelectionMaster,
                                                            v10,
                                                            mapInf,
                                                            v11);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_26;
    MasterName_k__BackingField = (int)Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
    v13 = (MapButtonPrefab_o *)Master_WarQuestSelectionMaster;
    if ( MasterName_k__BackingField >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        buttons = this->fields.buttons;
        if ( !buttons )
          break;
        if ( (signed int)v14 >= (signed int)buttons->max_length )
          return;
        if ( v14 >= MasterName_k__BackingField )
          goto LABEL_27;
        v16 = &v13->klass + (int)v14;
        v19 = v16[4];
        v18 = (char *)(v16 + 4);
        v17 = v19;
        if ( !v19 || !spotInfo )
          break;
        namespaze = (int)v17->_1.namespaze;
        Master_WarQuestSelectionMaster = (MapButtonMaster_o *)MapControl_SpotInfo__GetMapID(spotInfo, 0LL);
        if ( namespaze == (_DWORD)Master_WarQuestSelectionMaster )
        {
          if ( v14 >= LODWORD(v13->fields.mNoticeNumberObj) )
            goto LABEL_27;
          if ( !*(_QWORD *)v18 )
            break;
          v21 = *(_DWORD *)(*(_QWORD *)v18 + 28LL);
          Master_WarQuestSelectionMaster = (MapButtonMaster_o *)MapControl_SpotInfo__GetLayer(spotInfo, 0LL);
          if ( v21 == (_DWORD)Master_WarQuestSelectionMaster )
          {
            v23 = this->fields.buttons;
            if ( !v23 )
              break;
            if ( v14 >= v23->max_length )
            {
LABEL_27:
              v24 = sub_B0D9A8(Master_WarQuestSelectionMaster);
              sub_B0D948(v24, 0LL);
            }
            Master_WarQuestSelectionMaster = (MapButtonMaster_o *)v23->m_Items[v14];
            if ( !Master_WarQuestSelectionMaster )
              break;
            MapButtonPrefab__SetNext((MapButtonPrefab_o *)Master_WarQuestSelectionMaster, 1, v22);
          }
        }
        MasterName_k__BackingField = (int)v13->fields.mNoticeNumberObj;
        if ( (int)++v14 >= MasterName_k__BackingField )
          return;
      }
LABEL_26:
      sub_B0D97C(Master_WarQuestSelectionMaster);
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
  DataManager_o *Instance; // x0
  MapControl_WarInfo_o *v10; // x1
  const MethodInfo *v11; // x3
  DataManager_o *v12; // x20
  il2cpp_array_size_t v13; // w21
  struct MapButtonPrefab_array *buttons; // x8
  __int64 v15; // x8
  const MethodInfo *v16; // x2
  struct MapButtonPrefab_array *v17; // x8
  int32_t v18; // w1
  __int64 v19; // x0

  if ( (byte_4213003 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_MapButtonMaster___, warInf);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v7);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v8);
    byte_4213003 = 1;
  }
  if ( this->fields.buttons )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_MapButtonMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Instance, v10, mapInf, v11);
    if ( !Instance )
      goto LABEL_22;
    v12 = Instance;
    if ( SLODWORD(Instance->fields.datalist) >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        buttons = this->fields.buttons;
        if ( !buttons )
          break;
        if ( (signed int)v13 >= (signed int)buttons->max_length )
          return;
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( v13 >= LODWORD(v12->fields.datalist) )
        {
LABEL_23:
          v19 = sub_B0D9A8(Instance);
          sub_B0D948(v19, 0LL);
        }
        v15 = *((_QWORD *)&v12->fields.lookup + (int)v13);
        if ( !v15 )
          break;
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestTree__GetQuestCountForMap(
                                      (QuestTree_o *)Instance,
                                      *(_DWORD *)(v15 + 24),
                                      *(_DWORD *)(v15 + 28),
                                      0LL);
        v17 = this->fields.buttons;
        if ( !v17 )
          break;
        if ( v13 >= v17->max_length )
          goto LABEL_23;
        v18 = (int)Instance;
        Instance = (DataManager_o *)v17->m_Items[v13];
        if ( !Instance )
          break;
        MapButtonPrefab__SetBadge((MapButtonPrefab_o *)Instance, v18, v16);
        if ( (signed int)++v13 >= SLODWORD(v12->fields.datalist) )
          return;
      }
LABEL_22:
      sub_B0D97C(Instance);
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
          v13 = sub_B0D9A8(terminalMap);
          sub_B0D948(v13, 0LL);
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
      sub_B0D97C(terminalMap);
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

  if ( (byte_42126C6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__, v6);
    byte_42126C6 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.newButtonList,
         (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
  {
    newButtonList = this->fields.newButtonList;
    if ( !newButtonList )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v8,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)newButtonList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v8,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
    {
      if ( !v8.fields.current )
        sub_B0D97C(0LL);
      MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v8.fields.current, 0LL, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v8,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
  }
}