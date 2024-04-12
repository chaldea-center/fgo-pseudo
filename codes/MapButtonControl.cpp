void __fastcall MapButtonControl___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_42AE6B1 & 1) == 0 )
  {
    sub_B52984(&MapButtonControl_TypeInfo);
    sub_B52984(&StringLiteral_8974/*"MapBtnPrefab"*/);
    byte_42AE6B1 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MapButtonControl_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_8974/*"MapBtnPrefab"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_8974/*"MapBtnPrefab"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
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
  BattleServantConfConponent_o *p_buttons; // x23
  const MethodInfo *v12; // x1
  UnityEngine_Object_o *MapButtonPrefab; // x27
  UnityEngine_Object_o *currentMapButtonPrefab; // x24
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 Master_WarQuestSelectionMaster; // x0
  MapControl_WarInfo_o *v34; // x1
  const MethodInfo *v35; // x3
  MapButtonEntity_array *OpenedButtons; // x22
  struct UIGrid_o *GridComponentBottom; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v44; // x20
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct UIGrid_o *GridComponentTop; // x1
  struct WarEntity_o *mWarEnt; // x8
  int v53; // w28
  const MethodInfo *v54; // x4
  MapCondMaster_o *v55; // x19
  int32_t v56; // w26
  int v57; // w21
  bool v58; // w8
  struct UIGrid_o *v59; // x20
  float GridCellHeight; // s0
  System_Int32_array **v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  int max_length; // w8
  unsigned int v69; // w20
  int v70; // w28
  __int64 v71; // x27
  MapButtonEntity_o *v72; // x26
  MapButtonEntity_array *v73; // x19
  UnityEngine_GameObject_o *v74; // x0
  BattleServantConfConponent_c *klass; // x21
  UnityEngine_GameObject_o *v76; // x22
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x25
  const MethodInfo *v84; // x7
  bool v85; // w6
  BattleServantConfConponent_c *v86; // x8
  const MethodInfo *v87; // x5
  struct MapButtonPrefab_array *buttons; // x8
  bool v89; // w4
  BattleServantConfConponent_c *v90; // x8
  MapButtonPrefab_o *v91; // x25
  const MethodInfo *v92; // x2
  BattleServantConfConponent_c *v93; // x8
  MapButtonPrefab_o *v94; // x25
  const MethodInfo *v95; // x2
  UIGrid_o *v96; // x25
  __int64 v97; // x0
  __int64 v98; // x0
  bool v99; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_int__o *v100; // [xsp+8h] [xbp-98h]
  int32_t currentMapLayerId; // [xsp+10h] [xbp-90h]
  char isMapButtonTop; // [xsp+14h] [xbp-8Ch]
  UnityEngine_UI_Dropdown_DropdownItem_o *original; // [xsp+18h] [xbp-88h]
  ScrTerminalMap_o *v104; // [xsp+20h] [xbp-80h]
  int32_t mapId; // [xsp+30h] [xbp-70h]
  char v107; // [xsp+34h] [xbp-6Ch]
  struct UIGrid_o **p_gridComponent; // [xsp+38h] [xbp-68h]
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_42AE6AB & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_B52984(&Method_DataManager_GetMaster_MapButtonMaster___);
    sub_B52984(&Method_DataManager_GetMaster_MapCondMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B52984(&Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&MapButtonPrefab___TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B52984(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AE6AB = 1;
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
  MapButtonControl__DestroyButtons(this, v12);
  this->fields.newButtonEntryAnimAction = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.newButtonEntryAnimAction, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.terminalMap = terminalMap;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.terminalMap,
    (System_Int32_array **)terminalMap,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.currentMapButtonPrefab = (struct UnityEngine_GameObject_o *)MapButtonPrefab;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.currentMapButtonPrefab,
    (System_Int32_array **)MapButtonPrefab,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_MapButtonMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_92;
  OpenedButtons = MapButtonMaster__GetOpenedButtons(
                    (MapButtonMaster_o *)Master_WarQuestSelectionMaster,
                    v34,
                    mapInf,
                    v35);
  GridComponentBottom = this->fields.GridComponentBottom;
  p_gridComponent = &this->fields.gridComponent;
  this->fields.gridComponent = GridComponentBottom;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.gridComponent,
    (System_Int32_array **)GridComponentBottom,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !warInf )
    goto LABEL_92;
  v44 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = MapControl_WarInfo__GetEventId(warInf, 0LL);
  if ( !v44 )
    goto LABEL_92;
  Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                     v44,
                                     &entity,
                                     Master_WarQuestSelectionMaster,
                                     (const MethodInfo_23E2334 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
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
    sub_B52920(
      (BattleServantConfConponent_o *)p_gridComponent,
      (System_Int32_array **)GridComponentTop,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
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
  v53 = Master_WarQuestSelectionMaster;
  mapId = *(&mWarEnt->fields.id + 1);
  currentMapLayerId = (int32_t)terminalMap->fields.servantRoot;
  if ( (Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v55 = (MapCondMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_MapCondMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC2CB )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2CB = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    v56 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 140LL);
    if ( !byte_42AC2CC )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      byte_42AC2CC = 1;
    }
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v55 )
      goto LABEL_92;
    Master_WarQuestSelectionMaster = (__int64)MapCondMaster__GetReleasedMapButtonIdList(
                                                v55,
                                                mapId,
                                                v56,
                                                *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 144LL),
                                                v54);
    if ( Master_WarQuestSelectionMaster )
    {
      if ( !OpenedButtons )
        goto LABEL_92;
      v57 = 1;
      v58 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24) < (signed int)OpenedButtons->max_length;
      goto LABEL_45;
    }
    v57 = 0;
  }
  else
  {
    v57 = 0;
    Master_WarQuestSelectionMaster = 0LL;
  }
  v58 = 1;
LABEL_45:
  v99 = v58;
  v100 = (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster;
  if ( !MapButtonPrefab )
    goto LABEL_92;
  v59 = *p_gridComponent;
  Master_WarQuestSelectionMaster = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)MapButtonPrefab,
                                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_92;
  GridCellHeight = MapButtonPrefab__GetGridCellHeight(
                     (MapButtonPrefab_o *)Master_WarQuestSelectionMaster,
                     (const MethodInfo *)v34);
  if ( !v59 )
    goto LABEL_92;
  v107 = v53;
  original = (UnityEngine_UI_Dropdown_DropdownItem_o *)MapButtonPrefab;
  v104 = terminalMap;
  *(float *)&v59->fields.animateSmoothly = GridCellHeight;
  if ( !OpenedButtons )
    goto LABEL_92;
  v61 = (System_Int32_array **)sub_B5299C(MapButtonPrefab___TypeInfo, OpenedButtons->max_length);
  p_buttons->klass = (BattleServantConfConponent_c *)v61;
  sub_B52920(p_buttons, v61, v62, v63, v64, v65, v66, v67);
  max_length = OpenedButtons->max_length;
  if ( max_length >= 1 )
  {
    v69 = 0;
    v70 = v53 & v57;
    v71 = 32LL;
    while ( 1 )
    {
      if ( v69 >= max_length )
        goto LABEL_93;
      v72 = *(MapButtonEntity_o **)((char *)&OpenedButtons->obj.klass + v71);
      v73 = OpenedButtons;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v74 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          original,
                                          (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      klass = p_buttons->klass;
      v76 = v74;
      Master_WarQuestSelectionMaster = (__int64)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                  v74,
                                                  (const MethodInfo_1B7BF3C *)Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
      if ( !klass )
        break;
      v83 = (System_Int32_array **)Master_WarQuestSelectionMaster;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = sub_B52A44(Master_WarQuestSelectionMaster, *((_QWORD *)klass->_1.image + 8));
        if ( !Master_WarQuestSelectionMaster )
        {
          v98 = sub_B52A7C();
          sub_B52A28(v98, 0LL);
        }
      }
      if ( v69 >= LODWORD(klass->_1.namespaze) )
        goto LABEL_93;
      *(void **)((char *)&klass->_1.image + v71) = v83;
      sub_B52920((BattleServantConfConponent_o *)((char *)klass + v71), v83, v77, v78, v79, v80, v81, v82);
      if ( v70 )
      {
        if ( !v72 )
          break;
        Master_WarQuestSelectionMaster = (__int64)v100;
        if ( !v100 )
          break;
        Master_WarQuestSelectionMaster = System_Collections_Generic_List_int___Contains(
                                           v100,
                                           v72->fields.id,
                                           (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
        v85 = Master_WarQuestSelectionMaster & 1;
      }
      else
      {
        v85 = 0;
      }
      v86 = p_buttons->klass;
      if ( !p_buttons->klass )
        break;
      if ( v69 >= LODWORD(v86->_1.namespaze) )
      {
LABEL_93:
        v97 = sub_B52A88(Master_WarQuestSelectionMaster);
        sub_B52A28(v97, 0LL);
      }
      Master_WarQuestSelectionMaster = *(__int64 *)((char *)&v86->_1.image + v71);
      if ( !Master_WarQuestSelectionMaster )
        break;
      MapButtonPrefab__SetupButton(
        (MapButtonPrefab_o *)Master_WarQuestSelectionMaster,
        mapAtlases,
        this->fields.commonUI,
        v104,
        v72,
        isMapButtonTop,
        v85,
        v84);
      buttons = this->fields.buttons;
      if ( !buttons )
        break;
      if ( v69 >= buttons->max_length )
        goto LABEL_93;
      Master_WarQuestSelectionMaster = *(__int64 *)((char *)&buttons->obj.klass + v71);
      if ( !v70 )
        goto LABEL_72;
      if ( !v100 )
        break;
      v89 = v99;
      if ( v100->fields._size <= 0 )
LABEL_72:
        v89 = 0;
      if ( !Master_WarQuestSelectionMaster )
        break;
      MapButtonPrefab__SetButtonSprite(
        (MapButtonPrefab_o *)Master_WarQuestSelectionMaster,
        v107 & 1,
        mapId,
        currentMapLayerId,
        v89,
        v87);
      v90 = p_buttons->klass;
      if ( !p_buttons->klass )
        break;
      if ( v69 >= LODWORD(v90->_1.namespaze) )
        goto LABEL_93;
      v91 = *(MapButtonPrefab_o **)((char *)&v90->_1.image + v71);
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      Master_WarQuestSelectionMaster = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v72 )
        break;
      if ( !Master_WarQuestSelectionMaster )
        break;
      Master_WarQuestSelectionMaster = QuestTree__GetQuestCountForMap(
                                         (QuestTree_o *)Master_WarQuestSelectionMaster,
                                         v72->fields.targetMapId,
                                         v72->fields.layer,
                                         0LL);
      if ( !v91 )
        break;
      MapButtonPrefab__SetBadge(v91, Master_WarQuestSelectionMaster, v92);
      v93 = p_buttons->klass;
      if ( !p_buttons->klass )
        break;
      if ( v69 >= LODWORD(v93->_1.namespaze) )
        goto LABEL_93;
      v94 = *(MapButtonPrefab_o **)((char *)&v93->_1.image + v71);
      Master_WarQuestSelectionMaster = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Master_WarQuestSelectionMaster )
        break;
      Master_WarQuestSelectionMaster = QuestTree__IsNextSpotForMap(
                                         (QuestTree_o *)Master_WarQuestSelectionMaster,
                                         v72->fields.targetMapId,
                                         v72->fields.layer,
                                         0LL);
      if ( !v94 )
        break;
      MapButtonPrefab__SetNext(v94, Master_WarQuestSelectionMaster & 1, v95);
      if ( !v76 )
        break;
      v96 = *p_gridComponent;
      Master_WarQuestSelectionMaster = (__int64)UnityEngine_GameObject__get_transform(v76, 0LL);
      if ( !v96 )
        break;
      UIGrid__AddChild(v96, (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster, 0LL);
      GameObjectExtensions__ResetLocalScale(v76, 0LL);
      UnityEngine_GameObject__SetActive(v76, 0, 0LL);
      max_length = v73->max_length;
      ++v69;
      OpenedButtons = v73;
      v71 += 8LL;
      if ( (int)v69 >= max_length )
        goto LABEL_89;
    }
LABEL_92:
    sub_B52A5C(Master_WarQuestSelectionMaster, v34);
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
  __int64 v4; // x1
  UnityEngine_Component_o *transform; // x0
  int32_t v6; // w21
  UnityEngine_Object_o *Child; // x22
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *GridComponentTop; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  int32_t v16; // w21
  UnityEngine_Object_o *v17; // x22
  UnityEngine_Object_o *v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42AE6AF & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE6AF = 1;
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
        v6 = 0;
        do
        {
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          if ( v6 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) )
            goto LABEL_25;
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          if ( !transform )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v6, 0LL);
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
            UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          ++v6;
        }
        while ( transform );
      }
LABEL_45:
      sub_B52A5C(transform, v4);
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
        v16 = 0;
        do
        {
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          if ( v16 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) )
            goto LABEL_46;
          transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          if ( !transform )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          v17 = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v16, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(v17, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            if ( !v17 )
              goto LABEL_45;
            v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v17, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_35616956(v18, 0LL);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          ++v16;
        }
        while ( transform );
      }
      goto LABEL_45;
    }
LABEL_46:
    this->fields.buttons = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.buttons, 0LL, v10, v11, v12, v13, v14, v15);
    this->fields.currentMapButtonPrefab = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.currentMapButtonPrefab, 0LL, v19, v20, v21, v22, v23, v24);
  }
}


void __fastcall MapButtonControl__FrameIn(MapButtonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x21
  struct MapButtonPrefab_array *buttons; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x23
  System_String_o *string; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_o **v15; // x22
  struct MapButtonPrefab_array *v16; // x24
  int max_length; // w8
  unsigned int v18; // w25
  MapButtonPrefab_o *v19; // x23
  System_Action_o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  __int64 v29; // x0
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42AE6B0 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___);
    sub_B52984(&Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_MapButtonPrefab__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    sub_B52984(&System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    sub_B52984(&Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__);
    sub_B52984(&MapButtonControl___c__DisplayClass16_0_TypeInfo);
    byte_42AE6B0 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v3 = sub_B52A54(MapButtonControl___c__DisplayClass16_0_TypeInfo);
  MapButtonControl___c__DisplayClass16_0___ctor((MapButtonControl___c__DisplayClass16_0_o *)v3, 0LL);
  buttons = this->fields.buttons;
  if ( buttons && *(_QWORD *)&buttons->max_length )
  {
    v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v5,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v6,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    if ( !v3 )
      goto LABEL_25;
    *(_QWORD *)(v3 + 16) = v6;
    v15 = (System_String_o **)(v3 + 16);
    sub_B52920((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)v6, v9, v10, v11, v12, v13, v14);
    v16 = this->fields.buttons;
    if ( !v16 )
      goto LABEL_25;
    max_length = v16->max_length;
    if ( max_length >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= max_length )
        {
          v29 = sub_B52A88(string);
          sub_B52A28(v29, 0LL);
        }
        v19 = v16->m_Items[v18];
        if ( !v19 )
          break;
        if ( v19->fields.isNew )
        {
          string = *v15;
          if ( !*v15 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)string,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MapButtonPrefab__Add__);
          v19->fields.isNew = 0;
        }
        else
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MapButtonPrefab__Add__);
        }
        max_length = v16->max_length;
        if ( (int)++v18 >= max_length )
          goto LABEL_17;
      }
LABEL_25:
      sub_B52A5C(string, v8);
    }
LABEL_17:
    v20 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)v3, Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, 0LL);
    this->fields.newButtonEntryAnimAction = v20;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.newButtonEntryAnimAction,
      (System_Int32_array **)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
    {
      string = System_Linq_Enumerable__Last_string_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                 (const MethodInfo_1B64544 *)Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
      if ( !v5 )
        goto LABEL_25;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v30,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v5,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v30,
                (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
      {
        if ( !v30.fields.current )
          sub_B52A5C(0LL, v27);
        MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v30.fields.current, 0LL, v28);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v30,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
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
          v6 = sub_B52A88(this);
          sub_B52A28(v6, 0LL);
        }
        v5 = buttons->m_Items[v4];
        if ( !v5 )
          sub_B52A5C(0LL, method);
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
  MapButtonControl_c *v5; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20

  if ( (byte_42AE6AC & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&MapButtonControl_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE6AC = 1;
  }
  if ( !mapAssetData )
    return this->fields.buttonPrefab;
  v5 = MapButtonControl_TypeInfo;
  if ( (BYTE3(MapButtonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapButtonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonControl_TypeInfo);
    v5 = MapButtonControl_TypeInfo;
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             mapAssetData,
                                                             v5->static_fields->MAP_BUTTON_PREFAB_NAME,
                                                             (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
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
  sub_B52920(p_newButtonEntryAnimAction, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall MapButtonControl__SetNext(
        MapButtonControl_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        MapControl_SpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  MapButtonMaster_o *Master_WarQuestSelectionMaster; // x0
  MapControl_WarInfo_o *v9; // x1
  const MethodInfo *v10; // x3
  int MasterName_k__BackingField; // w8
  MapButtonPrefab_o *v12; // x21
  il2cpp_array_size_t v13; // w22
  struct MapButtonPrefab_array *buttons; // x9
  MapButtonPrefab_c **v15; // x24
  MapButtonPrefab_c *v16; // x8
  char *v17; // x24
  MapButtonPrefab_c *v18; // t1
  int namespaze; // w25
  int v20; // w24
  const MethodInfo *v21; // x2
  struct MapButtonPrefab_array *v22; // x8
  __int64 v23; // x0

  if ( (byte_42AE6AD & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_MapButtonMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42AE6AD = 1;
  }
  if ( this->fields.buttons )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (MapButtonMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_26;
    Master_WarQuestSelectionMaster = (MapButtonMaster_o *)MapButtonMaster__GetOpenedButtons(
                                                            Master_WarQuestSelectionMaster,
                                                            v9,
                                                            mapInf,
                                                            v10);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_26;
    MasterName_k__BackingField = (int)Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
    v12 = (MapButtonPrefab_o *)Master_WarQuestSelectionMaster;
    if ( MasterName_k__BackingField >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        buttons = this->fields.buttons;
        if ( !buttons )
          break;
        if ( (signed int)v13 >= (signed int)buttons->max_length )
          return;
        if ( v13 >= MasterName_k__BackingField )
          goto LABEL_27;
        v15 = &v12->klass + (int)v13;
        v18 = v15[4];
        v17 = (char *)(v15 + 4);
        v16 = v18;
        if ( !v18 || !spotInfo )
          break;
        namespaze = (int)v16->_1.namespaze;
        Master_WarQuestSelectionMaster = (MapButtonMaster_o *)MapControl_SpotInfo__GetMapID(spotInfo, 0LL);
        if ( namespaze == (_DWORD)Master_WarQuestSelectionMaster )
        {
          if ( v13 >= LODWORD(v12->fields.mNoticeNumberObj) )
            goto LABEL_27;
          if ( !*(_QWORD *)v17 )
            break;
          v20 = *(_DWORD *)(*(_QWORD *)v17 + 28LL);
          Master_WarQuestSelectionMaster = (MapButtonMaster_o *)MapControl_SpotInfo__GetLayer(spotInfo, 0LL);
          if ( v20 == (_DWORD)Master_WarQuestSelectionMaster )
          {
            v22 = this->fields.buttons;
            if ( !v22 )
              break;
            if ( v13 >= v22->max_length )
            {
LABEL_27:
              v23 = sub_B52A88(Master_WarQuestSelectionMaster);
              sub_B52A28(v23, 0LL);
            }
            Master_WarQuestSelectionMaster = (MapButtonMaster_o *)v22->m_Items[v13];
            if ( !Master_WarQuestSelectionMaster )
              break;
            MapButtonPrefab__SetNext((MapButtonPrefab_o *)Master_WarQuestSelectionMaster, 1, v21);
          }
        }
        MasterName_k__BackingField = (int)v12->fields.mNoticeNumberObj;
        if ( (int)++v13 >= MasterName_k__BackingField )
          return;
      }
LABEL_26:
      sub_B52A5C(Master_WarQuestSelectionMaster, v9);
    }
  }
}


void __fastcall MapButtonControl__UpdateBadge(
        MapButtonControl_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  MapControl_WarInfo_o *v7; // x1
  const MethodInfo *v8; // x3
  DataManager_o *v9; // x20
  il2cpp_array_size_t v10; // w21
  struct MapButtonPrefab_array *buttons; // x8
  __int64 v12; // x8
  const MethodInfo *v13; // x2
  struct MapButtonPrefab_array *v14; // x8
  __int64 v15; // x0

  if ( (byte_42AE6AE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_MapButtonMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B52984(&SingletonTemplate_QuestTree__TypeInfo);
    byte_42AE6AE = 1;
  }
  if ( this->fields.buttons )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_MapButtonMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Instance, v7, mapInf, v8);
    if ( !Instance )
      goto LABEL_22;
    v9 = Instance;
    if ( SLODWORD(Instance->fields.datalist) >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        buttons = this->fields.buttons;
        if ( !buttons )
          break;
        if ( (signed int)v10 >= (signed int)buttons->max_length )
          return;
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( v10 >= LODWORD(v9->fields.datalist) )
        {
LABEL_23:
          v15 = sub_B52A88(Instance);
          sub_B52A28(v15, 0LL);
        }
        v12 = *((_QWORD *)&v9->fields.lookup + (int)v10);
        if ( !v12 )
          break;
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestTree__GetQuestCountForMap(
                                      (QuestTree_o *)Instance,
                                      *(_DWORD *)(v12 + 24),
                                      *(_DWORD *)(v12 + 28),
                                      0LL);
        v14 = this->fields.buttons;
        if ( !v14 )
          break;
        if ( v10 >= v14->max_length )
          goto LABEL_23;
        v7 = (MapControl_WarInfo_o *)(unsigned int)Instance;
        Instance = (DataManager_o *)v14->m_Items[v10];
        if ( !Instance )
          break;
        MapButtonPrefab__SetBadge((MapButtonPrefab_o *)Instance, (int32_t)v7, v13);
        if ( (signed int)++v10 >= SLODWORD(v9->fields.datalist) )
          return;
      }
LABEL_22:
      sub_B52A5C(Instance, v7);
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
          v13 = sub_B52A88(terminalMap);
          sub_B52A28(v13, 0LL);
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
      sub_B52A5C(terminalMap, method);
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
  struct System_Collections_Generic_List_MapButtonPrefab__o *newButtonList; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42ADC61 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    byte_42ADC61 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.newButtonList,
         (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
  {
    newButtonList = this->fields.newButtonList;
    if ( !newButtonList )
      sub_B52A5C(0LL, v3);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v6,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)newButtonList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v6,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
    {
      if ( !v6.fields.current )
        sub_B52A5C(0LL, v5);
      MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v6.fields.current, 0LL, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v6,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
  }
}