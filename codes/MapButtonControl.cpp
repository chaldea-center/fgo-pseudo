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

  if ( (byte_4186324 & 1) == 0 )
  {
    sub_B2C35C(&MapButtonControl_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_8919/*"MapBtnPrefab"*/, v8);
    byte_4186324 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MapButtonControl_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_8919/*"MapBtnPrefab"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_8919/*"MapBtnPrefab"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  const MethodInfo *v68; // x4
  MapCondMaster_o *v69; // x19
  int32_t v70; // w26
  int v71; // w21
  bool v72; // w8
  struct UIGrid_o *v73; // x20
  float GridCellHeight; // s0
  System_Int32_array **v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  int max_length; // w8
  unsigned int v83; // w20
  int v84; // w28
  __int64 v85; // x27
  MapButtonEntity_o *v86; // x26
  MapButtonEntity_array *v87; // x19
  UnityEngine_GameObject_o *v88; // x0
  BattleServantConfConponent_c *klass; // x21
  UnityEngine_GameObject_o *v90; // x22
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x25
  const MethodInfo *v98; // x7
  bool v99; // w6
  BattleServantConfConponent_c *v100; // x8
  const MethodInfo *v101; // x5
  struct MapButtonPrefab_array *buttons; // x8
  bool v103; // w4
  BattleServantConfConponent_c *v104; // x8
  MapButtonPrefab_o *v105; // x25
  const MethodInfo *v106; // x2
  BattleServantConfConponent_c *v107; // x8
  MapButtonPrefab_o *v108; // x25
  const MethodInfo *v109; // x2
  UIGrid_o *v110; // x25
  __int64 v111; // x0
  __int64 v112; // x0
  bool v113; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_int__o *v114; // [xsp+8h] [xbp-98h]
  int32_t currentMapLayerId; // [xsp+10h] [xbp-90h]
  char isMapButtonTop; // [xsp+14h] [xbp-8Ch]
  UnityEngine_UI_Dropdown_DropdownItem_o *original; // [xsp+18h] [xbp-88h]
  ScrTerminalMap_o *v118; // [xsp+20h] [xbp-80h]
  int32_t mapId; // [xsp+30h] [xbp-70h]
  char v121; // [xsp+34h] [xbp-6Ch]
  struct UIGrid_o **p_gridComponent; // [xsp+38h] [xbp-68h]
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_418631E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventDetailMaster___, warInf);
    sub_B2C35C(&Method_DataManager_GetMaster_MapButtonMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_MapCondMaster___, v12);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v14);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___, v15);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_B2C35C(&MapButtonPrefab___TypeInfo, v19);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v20);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v22);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v23);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v24);
    byte_418631E = 1;
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.newButtonEntryAnimAction, 0LL, v29, v30, v31, v32, v33, v34);
  this->fields.terminalMap = terminalMap;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.terminalMap,
    (System_Int32_array **)terminalMap,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.currentMapButtonPrefab = (struct UnityEngine_GameObject_o *)MapButtonPrefab;
  sub_B2C2F8(
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
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_MapButtonMaster___);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.gridComponent,
    (System_Int32_array **)GridComponentBottom,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventDetailMaster___);
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
                                     (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
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
    sub_B2C2F8(
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
    v69 = (MapCondMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_MapCondMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C90 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v48);
      byte_4183C90 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    v70 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 124LL);
    if ( !byte_4183C91 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v48);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      byte_4183C91 = 1;
    }
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v69 )
      goto LABEL_92;
    Master_WarQuestSelectionMaster = (__int64)MapCondMaster__GetReleasedMapButtonIdList(
                                                v69,
                                                mapId,
                                                v70,
                                                *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 128LL),
                                                v68);
    if ( Master_WarQuestSelectionMaster )
    {
      if ( !OpenedButtons )
        goto LABEL_92;
      v71 = 1;
      v72 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24) < (signed int)OpenedButtons->max_length;
      goto LABEL_45;
    }
    v71 = 0;
  }
  else
  {
    v71 = 0;
    Master_WarQuestSelectionMaster = 0LL;
  }
  v72 = 1;
LABEL_45:
  v113 = v72;
  v114 = (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster;
  if ( !MapButtonPrefab )
    goto LABEL_92;
  v73 = *p_gridComponent;
  Master_WarQuestSelectionMaster = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)MapButtonPrefab,
                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_92;
  GridCellHeight = MapButtonPrefab__GetGridCellHeight(
                     (MapButtonPrefab_o *)Master_WarQuestSelectionMaster,
                     (const MethodInfo *)v48);
  if ( !v73 )
    goto LABEL_92;
  v121 = v67;
  original = (UnityEngine_UI_Dropdown_DropdownItem_o *)MapButtonPrefab;
  v118 = terminalMap;
  *(float *)&v73->fields.animateSmoothly = GridCellHeight;
  if ( !OpenedButtons )
    goto LABEL_92;
  v75 = (System_Int32_array **)sub_B2C374(MapButtonPrefab___TypeInfo, OpenedButtons->max_length);
  p_buttons->klass = (BattleServantConfConponent_c *)v75;
  sub_B2C2F8(p_buttons, v75, v76, v77, v78, v79, v80, v81);
  max_length = OpenedButtons->max_length;
  if ( max_length >= 1 )
  {
    v83 = 0;
    v84 = v67 & v71;
    v85 = 32LL;
    while ( 1 )
    {
      if ( v83 >= max_length )
        goto LABEL_93;
      v86 = *(MapButtonEntity_o **)((char *)&OpenedButtons->obj.klass + v85);
      v87 = OpenedButtons;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v88 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          original,
                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      klass = p_buttons->klass;
      v90 = v88;
      Master_WarQuestSelectionMaster = (__int64)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                  v88,
                                                  (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
      if ( !klass )
        break;
      v97 = (System_Int32_array **)Master_WarQuestSelectionMaster;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = sub_B2C41C(Master_WarQuestSelectionMaster, *((_QWORD *)klass->_1.image + 8));
        if ( !Master_WarQuestSelectionMaster )
        {
          v112 = sub_B2C454();
          sub_B2C400(v112, 0LL);
        }
      }
      if ( v83 >= LODWORD(klass->_1.namespaze) )
        goto LABEL_93;
      *(void **)((char *)&klass->_1.image + v85) = v97;
      sub_B2C2F8((BattleServantConfConponent_o *)((char *)klass + v85), v97, v91, v92, v93, v94, v95, v96);
      if ( v84 )
      {
        if ( !v86 )
          break;
        Master_WarQuestSelectionMaster = (__int64)v114;
        if ( !v114 )
          break;
        Master_WarQuestSelectionMaster = System_Collections_Generic_List_int___Contains(
                                           v114,
                                           v86->fields.id,
                                           (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
        v99 = Master_WarQuestSelectionMaster & 1;
      }
      else
      {
        v99 = 0;
      }
      v100 = p_buttons->klass;
      if ( !p_buttons->klass )
        break;
      if ( v83 >= LODWORD(v100->_1.namespaze) )
      {
LABEL_93:
        v111 = sub_B2C460(Master_WarQuestSelectionMaster);
        sub_B2C400(v111, 0LL);
      }
      Master_WarQuestSelectionMaster = *(__int64 *)((char *)&v100->_1.image + v85);
      if ( !Master_WarQuestSelectionMaster )
        break;
      MapButtonPrefab__SetupButton(
        (MapButtonPrefab_o *)Master_WarQuestSelectionMaster,
        mapAtlases,
        this->fields.commonUI,
        v118,
        v86,
        isMapButtonTop,
        v99,
        v98);
      buttons = this->fields.buttons;
      if ( !buttons )
        break;
      if ( v83 >= buttons->max_length )
        goto LABEL_93;
      Master_WarQuestSelectionMaster = *(__int64 *)((char *)&buttons->obj.klass + v85);
      if ( !v84 )
        goto LABEL_72;
      if ( !v114 )
        break;
      v103 = v113;
      if ( v114->fields._size <= 0 )
LABEL_72:
        v103 = 0;
      if ( !Master_WarQuestSelectionMaster )
        break;
      MapButtonPrefab__SetButtonSprite(
        (MapButtonPrefab_o *)Master_WarQuestSelectionMaster,
        v121 & 1,
        mapId,
        currentMapLayerId,
        v103,
        v101);
      v104 = p_buttons->klass;
      if ( !p_buttons->klass )
        break;
      if ( v83 >= LODWORD(v104->_1.namespaze) )
        goto LABEL_93;
      v105 = *(MapButtonPrefab_o **)((char *)&v104->_1.image + v85);
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      Master_WarQuestSelectionMaster = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v86 )
        break;
      if ( !Master_WarQuestSelectionMaster )
        break;
      Master_WarQuestSelectionMaster = QuestTree__GetQuestCountForMap(
                                         (QuestTree_o *)Master_WarQuestSelectionMaster,
                                         v86->fields.targetMapId,
                                         v86->fields.layer,
                                         0LL);
      if ( !v105 )
        break;
      MapButtonPrefab__SetBadge(v105, Master_WarQuestSelectionMaster, v106);
      v107 = p_buttons->klass;
      if ( !p_buttons->klass )
        break;
      if ( v83 >= LODWORD(v107->_1.namespaze) )
        goto LABEL_93;
      v108 = *(MapButtonPrefab_o **)((char *)&v107->_1.image + v85);
      Master_WarQuestSelectionMaster = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Master_WarQuestSelectionMaster )
        break;
      Master_WarQuestSelectionMaster = QuestTree__IsNextSpotForMap(
                                         (QuestTree_o *)Master_WarQuestSelectionMaster,
                                         v86->fields.targetMapId,
                                         v86->fields.layer,
                                         0LL);
      if ( !v108 )
        break;
      MapButtonPrefab__SetNext(v108, Master_WarQuestSelectionMaster & 1, v109);
      if ( !v90 )
        break;
      v110 = *p_gridComponent;
      Master_WarQuestSelectionMaster = (__int64)UnityEngine_GameObject__get_transform(v90, 0LL);
      if ( !v110 )
        break;
      UIGrid__AddChild(v110, (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster, 0LL);
      GameObjectExtensions__ResetLocalScale(v90, 0LL);
      UnityEngine_GameObject__SetActive(v90, 0, 0LL);
      max_length = v87->max_length;
      ++v83;
      OpenedButtons = v87;
      v85 += 8LL;
      if ( (int)v83 >= max_length )
        goto LABEL_89;
    }
LABEL_92:
    sub_B2C434(Master_WarQuestSelectionMaster, v48);
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

  if ( (byte_4186322 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4186322 = 1;
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
            UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          ++v6;
        }
        while ( transform );
      }
LABEL_45:
      sub_B2C434(transform, v4);
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
            UnityEngine_Object__Destroy_35314896(v18, 0LL);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.buttons, 0LL, v10, v11, v12, v13, v14, v15);
    this->fields.currentMapButtonPrefab = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.currentMapButtonPrefab, 0LL, v19, v20, v21, v22, v23, v24);
  }
}


void __fastcall MapButtonControl__FrameIn(MapButtonControl_o *this, const MethodInfo *method)
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
  __int64 v14; // x21
  struct MapButtonPrefab_array *buttons; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x23
  System_String_o *string; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_o **v26; // x22
  struct MapButtonPrefab_array *v27; // x24
  int max_length; // w8
  unsigned int v29; // w25
  MapButtonPrefab_o *v30; // x23
  System_Action_o *v31; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x1
  const MethodInfo *v39; // x2
  __int64 v40; // x0
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4186323 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_Last_MapButtonPrefab___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapButtonPrefab__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapButtonPrefab___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_MapButtonPrefab__TypeInfo, v11);
    sub_B2C35C(&Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, v12);
    sub_B2C35C(&MapButtonControl___c__DisplayClass16_0_TypeInfo, v13);
    byte_4186323 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v14 = sub_B2C42C(MapButtonControl___c__DisplayClass16_0_TypeInfo);
  MapButtonControl___c__DisplayClass16_0___ctor((MapButtonControl___c__DisplayClass16_0_o *)v14, 0LL);
  buttons = this->fields.buttons;
  if ( buttons && *(_QWORD *)&buttons->max_length )
  {
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v16,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v17,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    if ( !v14 )
      goto LABEL_25;
    *(_QWORD *)(v14 + 16) = v17;
    v26 = (System_String_o **)(v14 + 16);
    sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)v17, v20, v21, v22, v23, v24, v25);
    v27 = this->fields.buttons;
    if ( !v27 )
      goto LABEL_25;
    max_length = v27->max_length;
    if ( max_length >= 1 )
    {
      v29 = 0;
      while ( 1 )
      {
        if ( v29 >= max_length )
        {
          v40 = sub_B2C460(string);
          sub_B2C400(v40, 0LL);
        }
        v30 = v27->m_Items[v29];
        if ( !v30 )
          break;
        if ( v30->fields.isNew )
        {
          string = *v26;
          if ( !*v26 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)string,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapButtonPrefab__Add__);
          v30->fields.isNew = 0;
        }
        else
        {
          if ( !v16 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v16,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapButtonPrefab__Add__);
        }
        max_length = v27->max_length;
        if ( (int)++v29 >= max_length )
          goto LABEL_17;
      }
LABEL_25:
      sub_B2C434(string, v19);
    }
LABEL_17:
    v31 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v31, (Il2CppObject *)v14, Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, 0LL);
    this->fields.newButtonEntryAnimAction = v31;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.newButtonEntryAnimAction,
      (System_Int32_array **)v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v16,
           (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
    {
      string = System_Linq_Enumerable__Last_string_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v16,
                 (const MethodInfo_1A91D08 *)Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
      if ( !v16 )
        goto LABEL_25;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v41,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v16,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v41,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
      {
        if ( !v41.fields.current )
          sub_B2C434(0LL, v38);
        MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v41.fields.current, 0LL, v39);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v41,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
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
          v6 = sub_B2C460(this);
          sub_B2C400(v6, 0LL);
        }
        v5 = buttons->m_Items[v4];
        if ( !v5 )
          sub_B2C434(0LL, method);
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

  if ( (byte_418631F & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, mapAssetData);
    sub_B2C35C(&MapButtonControl_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_418631F = 1;
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
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
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
  sub_B2C2F8(p_newButtonEntryAnimAction, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4186320 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_MapButtonMaster___, warInf);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    byte_4186320 = 1;
  }
  if ( this->fields.buttons )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (MapButtonMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_MapButtonMaster___);
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
              v24 = sub_B2C460(Master_WarQuestSelectionMaster);
              sub_B2C400(v24, 0LL);
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
      sub_B2C434(Master_WarQuestSelectionMaster, v10);
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
  __int64 v18; // x0

  if ( (byte_4186321 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_MapButtonMaster___, warInf);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v7);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v8);
    byte_4186321 = 1;
  }
  if ( this->fields.buttons )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MapButtonMaster___);
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
        Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( v13 >= LODWORD(v12->fields.datalist) )
        {
LABEL_23:
          v18 = sub_B2C460(Instance);
          sub_B2C400(v18, 0LL);
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
        v10 = (MapControl_WarInfo_o *)(unsigned int)Instance;
        Instance = (DataManager_o *)v17->m_Items[v13];
        if ( !Instance )
          break;
        MapButtonPrefab__SetBadge((MapButtonPrefab_o *)Instance, (int32_t)v10, v16);
        if ( (signed int)++v13 >= SLODWORD(v12->fields.datalist) )
          return;
      }
LABEL_22:
      sub_B2C434(Instance, v10);
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
          v13 = sub_B2C460(terminalMap);
          sub_B2C400(v13, 0LL);
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
      sub_B2C434(terminalMap, method);
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
  __int64 v7; // x1
  struct System_Collections_Generic_List_MapButtonPrefab__o *newButtonList; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418422B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__, v6);
    byte_418422B = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.newButtonList,
         (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
  {
    newButtonList = this->fields.newButtonList;
    if ( !newButtonList )
      sub_B2C434(0LL, v7);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v10,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)newButtonList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v10,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
    {
      if ( !v10.fields.current )
        sub_B2C434(0LL, v9);
      MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v10.fields.current, 0LL, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v10,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
  }
}