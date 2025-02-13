void __fastcall MapButtonControl___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7

  if ( (byte_4BD91EF & 1) == 0 )
  {
    sub_1C21E38(&MapButtonControl_TypeInfo);
    sub_1C21E38(&StringLiteral_9041/*"MapBtnPrefab"*/);
    byte_4BD91EF = 1;
  }
  MapButtonControl_TypeInfo->static_fields->MAP_BUTTON_PREFAB_NAME = (struct System_String_o *)StringLiteral_9041/*"MapBtnPrefab"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)MapButtonControl_TypeInfo->static_fields,
    StringLiteral_9041/*"MapBtnPrefab"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
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
  const MethodInfo *v12; // x1
  struct UnityEngine_GameObject_o *MapButtonPrefab; // x22
  UnityEngine_Object_o *currentMapButtonPrefab; // x23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 Master_object; // x0
  const MethodInfo *v34; // x1
  MapButtonEntity_array *OpenedButtons; // x0
  struct UIGrid_o *GridComponentBottom; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x20
  MapButtonEntity_array *v44; // x23
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct UIGrid_o *GridComponentTop; // x1
  struct MapControl_MapInfo_o *mMapInfo; // x8
  unsigned __int8 v53; // w25
  Il2CppObject *v54; // x19
  int32_t v55; // w29
  bool v56; // w8
  struct UIGrid_o *v57; // x19
  float GridCellHeight; // s0
  int64_t v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int max_length; // w8
  __int64 *v67; // x22
  unsigned int v68; // w25
  int32_t v69; // w21
  unsigned int v70; // w26
  char v71; // w28
  __int64 v72; // x24
  MapButtonEntity_o *v73; // x19
  const MethodInfo_388D478 **v74; // x29
  ScrTerminalMap_o *v75; // x22
  Il2CppObject *v76; // x20
  PartyOrganizationUtility_c *klass; // x27
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x23
  const MethodInfo *v85; // x7
  bool v86; // w6
  PartyOrganizationUtility_c *v87; // x8
  const MethodInfo *v88; // x5
  struct MapButtonPrefab_array *buttons; // x8
  int32_t v90; // w2
  __int64 v91; // x9
  int32_t v92; // w3
  char v93; // w8
  bool v94; // w4
  PartyOrganizationUtility_c *v95; // x8
  MapButtonPrefab_o *v96; // x23
  const MethodInfo *v97; // x2
  PartyOrganizationUtility_c *v98; // x8
  MapButtonPrefab_o *v99; // x23
  const MethodInfo *v100; // x2
  UIGrid_o *v101; // x19
  const MethodInfo *v102; // x1
  __int64 v103; // x0
  bool v104; // [xsp+8h] [xbp-C8h]
  char v105; // [xsp+Ch] [xbp-C4h]
  System_Collections_Generic_List_int__o *v106; // [xsp+10h] [xbp-C0h]
  int32_t currentMapLayerId; // [xsp+1Ch] [xbp-B4h]
  MapButtonControl_o *v108; // [xsp+20h] [xbp-B0h]
  char isMapButtonTop; // [xsp+2Ch] [xbp-A4h]
  Il2CppObject *original; // [xsp+30h] [xbp-A0h]
  unsigned int mapId; // [xsp+40h] [xbp-90h]
  unsigned __int8 v113; // [xsp+44h] [xbp-8Ch]
  MapButtonEntity_array *v114; // [xsp+48h] [xbp-88h]
  struct UIGrid_o **p_gridComponent; // [xsp+50h] [xbp-80h]
  __int64 v116; // [xsp+58h] [xbp-78h]
  PartyOrganizationUtility_o *p_buttons; // [xsp+60h] [xbp-70h]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4BD91E9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_MapButtonMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_MapCondMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&MapButtonPrefab___TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD91E9 = 1;
  }
  entity = 0LL;
  MapButtonPrefab = MapButtonControl__GetMapButtonPrefab(this, mapAssetData, (const MethodInfo *)mapInf);
  p_buttons = (PartyOrganizationUtility_o *)&this->fields.buttons;
  if ( !this->fields.buttons )
    goto LABEL_7;
  currentMapButtonPrefab = (UnityEngine_Object_o *)this->fields.currentMapButtonPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(currentMapButtonPrefab, (UnityEngine_Object_o *)MapButtonPrefab, 0LL) )
  {
LABEL_7:
    MapButtonControl__DestroyButtons(this, v12);
    this->fields.newButtonEntryAnimAction = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.newButtonEntryAnimAction, 0LL, v15, v16, v17, v18, v19, v20);
    this->fields.terminalMap = terminalMap;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.terminalMap,
      (int64_t)terminalMap,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    this->fields.currentMapButtonPrefab = MapButtonPrefab;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.currentMapButtonPrefab,
      (int64_t)MapButtonPrefab,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_object )
      goto LABEL_92;
    OpenedButtons = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Master_object, warInf, mapInf, 0LL);
    GridComponentBottom = this->fields.GridComponentBottom;
    v114 = OpenedButtons;
    this->fields.gridComponent = GridComponentBottom;
    p_gridComponent = &this->fields.gridComponent;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.gridComponent,
      (int64_t)GridComponentBottom,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( !warInf )
      goto LABEL_92;
    v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    Master_object = (__int64)MapControl_WarInfo__GetMine(warInf, v34);
    if ( !Master_object )
      goto LABEL_92;
    v44 = v114;
    if ( !v43 )
      goto LABEL_92;
    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                      v43,
                      &entity,
                      *(_DWORD *)(Master_object + 96),
                      (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    if ( (Master_object & 1) == 0 )
      goto LABEL_17;
    Master_object = (__int64)entity;
    if ( !entity )
      goto LABEL_92;
    Master_object = EventDetailEntity__IsMapSwitchButtonTop((EventDetailEntity_o *)entity, 0LL);
    if ( (Master_object & 1) != 0 )
    {
      GridComponentTop = this->fields.GridComponentTop;
      this->fields.gridComponent = GridComponentTop;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)p_gridComponent,
        (int64_t)GridComponentTop,
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
LABEL_17:
      isMapButtonTop = 0;
    }
    if ( !terminalMap
      || (Master_object = ScrTerminalMap__IsMapModel(terminalMap, 0LL), (mMapInfo = terminalMap->fields.mMapInfo) == 0LL) )
    {
LABEL_92:
      sub_1C22094(Master_object, v34);
    }
    v53 = Master_object;
    mapId = mMapInfo->fields.mapId;
    currentMapLayerId = terminalMap->fields.currentMapLayerId;
    if ( (Master_object & 1) != 0 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v54 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_MapCondMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD9276 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9276 = 1;
      }
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      v55 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 140LL);
      if ( !byte_4BD9277 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
        byte_4BD9277 = 1;
      }
      if ( !*(_DWORD *)(Master_object + 224) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      v34 = (const MethodInfo *)mapId;
      if ( !v54 )
        goto LABEL_92;
      Master_object = (__int64)MapCondMaster__GetReleasedMapButtonIdList(
                                 (MapCondMaster_o *)v54,
                                 mapId,
                                 v55,
                                 *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 144LL),
                                 0LL);
      if ( Master_object )
      {
        if ( !v114 )
          goto LABEL_92;
        v105 = 0;
        v56 = *(_DWORD *)(Master_object + 24) < (signed int)v114->max_length;
        goto LABEL_39;
      }
    }
    else
    {
      Master_object = 0LL;
    }
    v105 = 1;
    v56 = 1;
LABEL_39:
    v104 = v56;
    v106 = (System_Collections_Generic_List_int__o *)Master_object;
    if ( MapButtonPrefab )
    {
      v57 = *p_gridComponent;
      Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 MapButtonPrefab,
                                 (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
      if ( Master_object )
      {
        GridCellHeight = MapButtonPrefab__GetGridCellHeight((MapButtonPrefab_o *)Master_object, v34);
        if ( v57 )
        {
          v113 = v53;
          original = (Il2CppObject *)MapButtonPrefab;
          v108 = this;
          v57->fields.cellHeight = GridCellHeight;
          if ( v114 )
          {
            v59 = sub_1C21EE0(MapButtonPrefab___TypeInfo, v114->max_length);
            p_buttons->klass = (PartyOrganizationUtility_c *)v59;
            sub_1C21DDC(p_buttons, v59, v60, v61, v62, v63, v64, v65);
            max_length = v114->max_length;
            if ( max_length >= 1 )
            {
              v116 = 0LL;
              v67 = &Method_SingletonTemplate_QuestTree__get_Instance__;
              v68 = 0;
              v69 = 0;
              v70 = 0;
              v71 = 0;
              v72 = 32LL;
              do
              {
                if ( v68 >= max_length )
                  goto LABEL_93;
                v73 = *(MapButtonEntity_o **)((char *)&v44->obj.klass + v72);
                v74 = (const MethodInfo_388D478 **)v67;
                v75 = terminalMap;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v76 = UnityEngine_Object__Instantiate_object_(
                        original,
                        (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
                klass = p_buttons->klass;
                Master_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                           (UnityEngine_GameObject_o *)v76,
                                           (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
                if ( !klass )
                  goto LABEL_92;
                v84 = Master_object;
                if ( Master_object )
                {
                  Master_object = sub_1C21F74(Master_object, *((_QWORD *)klass->_1.image + 8));
                  if ( !Master_object )
                  {
                    v103 = sub_1C220B8();
                    sub_1C21F60(v103, 0LL);
                  }
                }
                if ( v68 >= LODWORD(klass->_1.namespaze) )
                  goto LABEL_93;
                *(void **)((char *)&klass->_1.image + v72) = (void *)v84;
                sub_1C21DDC((PartyOrganizationUtility_o *)((char *)klass + v72), v84, v78, v79, v80, v81, v82, v83);
                if ( (((unsigned __int8)v105 | v113 ^ 1) & 1) != 0 )
                {
                  v86 = 0;
                  terminalMap = v75;
                }
                else
                {
                  if ( !v73 )
                    goto LABEL_92;
                  Master_object = (__int64)v106;
                  if ( !v106 )
                    goto LABEL_92;
                  terminalMap = v75;
                  Master_object = System_Collections_Generic_List_int___Contains(
                                    v106,
                                    v73->fields.id,
                                    (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
                  v86 = Master_object & 1;
                }
                v87 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_92;
                if ( v68 >= LODWORD(v87->_1.namespaze) )
LABEL_93:
                  sub_1C2209C(Master_object, v34);
                Master_object = *(__int64 *)((char *)&v87->_1.image + v72);
                if ( !Master_object )
                  goto LABEL_92;
                MapButtonPrefab__SetupButton(
                  (MapButtonPrefab_o *)Master_object,
                  mapAtlases,
                  v108->fields.commonUI,
                  terminalMap,
                  v73,
                  isMapButtonTop,
                  v86,
                  v85);
                buttons = v108->fields.buttons;
                if ( !buttons )
                  goto LABEL_92;
                if ( v68 >= buttons->max_length )
                  goto LABEL_93;
                Master_object = *(__int64 *)((char *)&buttons->obj.klass + v72);
                v90 = mapId;
                v91 = v116;
                v92 = currentMapLayerId;
                v67 = (__int64 *)v74;
                v71 |= v113;
                if ( (v113 & 1) != 0 )
                  v70 = mapId;
                if ( (v113 & 1) != 0 )
                  v91 = *(__int64 *)((char *)&buttons->obj.klass + v72);
                if ( (v113 & 1) != 0 )
                  v69 = currentMapLayerId;
                if ( (v113 & 1) != 0 )
                {
                  if ( (v105 & 1) != 0 )
                  {
                    v93 = 1;
                  }
                  else
                  {
                    v94 = v104;
                    Master_object = v91;
                    v90 = v70;
                    v92 = v69;
                    v93 = v71;
                    if ( v106->fields._size > 0 )
                      goto LABEL_73;
                  }
                }
                else
                {
                  v93 = 0;
                }
                v94 = 0;
LABEL_73:
                v116 = v91;
                if ( !Master_object )
                  goto LABEL_92;
                MapButtonPrefab__SetButtonSprite((MapButtonPrefab_o *)Master_object, v93 & 1, v90, v92, v94, v88);
                v95 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_92;
                if ( v68 >= LODWORD(v95->_1.namespaze) )
                  goto LABEL_93;
                v96 = *(MapButtonPrefab_o **)((char *)&v95->_1.image + v72);
                Master_object = (__int64)SingletonTemplate_object___get_Instance(*v74);
                if ( !v73 )
                  goto LABEL_92;
                if ( !Master_object )
                  goto LABEL_92;
                Master_object = QuestTree__GetQuestCountForMap(
                                  (QuestTree_o *)Master_object,
                                  v73->fields.targetMapId,
                                  v73->fields.layer,
                                  0LL);
                if ( !v96 )
                  goto LABEL_92;
                MapButtonPrefab__SetBadge(v96, Master_object, v97);
                v98 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_92;
                if ( v68 >= LODWORD(v98->_1.namespaze) )
                  goto LABEL_93;
                v99 = *(MapButtonPrefab_o **)((char *)&v98->_1.image + v72);
                Master_object = (__int64)SingletonTemplate_object___get_Instance(*v74);
                if ( !Master_object )
                  goto LABEL_92;
                Master_object = QuestTree__IsNextSpotForMap(
                                  (QuestTree_o *)Master_object,
                                  v73->fields.targetMapId,
                                  v73->fields.layer,
                                  0LL);
                if ( !v99 )
                  goto LABEL_92;
                MapButtonPrefab__SetNext(v99, Master_object & 1, v100);
                if ( !v76 )
                  goto LABEL_92;
                v101 = *p_gridComponent;
                Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v76, 0LL);
                v44 = v114;
                if ( !v101 )
                  goto LABEL_92;
                UIGrid__AddChild(v101, (UnityEngine_Transform_o *)Master_object, 0LL);
                GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v76, v102);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v76, 0, 0LL);
                max_length = v114->max_length;
                ++v68;
                v72 += 8LL;
              }
              while ( (int)v68 < max_length );
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
    goto LABEL_92;
  }
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int32_t v16; // w21
  UnityEngine_Object_o *v17; // x22
  UnityEngine_Object_o *v18; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4BD91ED & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD91ED = 1;
  }
  if ( this->fields.buttons )
  {
    GridComponentBottom = (UnityEngine_Object_o *)this->fields.GridComponentBottom;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            goto LABEL_22;
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          if ( !transform )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v6, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(Child, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            if ( !Child )
              break;
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)Child,
                                                   0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          ++v6;
        }
        while ( transform );
      }
LABEL_39:
      sub_1C22094(transform, v4);
    }
LABEL_22:
    GridComponentTop = (UnityEngine_Object_o *)this->fields.GridComponentTop;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            goto LABEL_40;
          transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          if ( !transform )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          v17 = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v16, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(v17, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            if ( !v17 )
              goto LABEL_39;
            v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v17, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_70869612(v18, 0LL);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          ++v16;
        }
        while ( transform );
      }
      goto LABEL_39;
    }
LABEL_40:
    this->fields.buttons = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.buttons, 0LL, v10, v11, v12, v13, v14, v15);
    this->fields.currentMapButtonPrefab = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.currentMapButtonPrefab, 0LL, v19, v20, v21, v22, v23, v24);
  }
}


void __fastcall MapButtonControl__FrameIn(MapButtonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x21
  struct MapButtonPrefab_array *buttons; // x8
  System_Collections_Generic_List_object__o *v5; // x20
  System_Collections_Generic_List_object__o *v6; // x23
  System_Collections_Generic_List_object__o *object; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_List_object__o **v15; // x22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct MapButtonPrefab_array *v22; // x24
  int max_length; // w8
  unsigned int v24; // w25
  int64_t v25; // x23
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x0
  System_Action_o *v34; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BD91EE & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapButtonPrefab__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    sub_1C21E38(&Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__);
    sub_1C21E38(&MapButtonControl___c__DisplayClass16_0_TypeInfo);
    byte_4BD91EE = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v3 = sub_1C22084(MapButtonControl___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  buttons = this->fields.buttons;
  if ( buttons && *(_QWORD *)&buttons->max_length )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    if ( !v3 )
      goto LABEL_32;
    *(_QWORD *)(v3 + 16) = v6;
    v15 = (System_Collections_Generic_List_object__o **)(v3 + 16);
    sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)v6, v9, v10, v11, v12, v13, v14);
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
          sub_1C2209C(object, v8);
        v25 = (int64_t)v22->m_Items[v24];
        if ( !v25 )
          break;
        if ( *(_BYTE *)(v25 + 128) )
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
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              object,
              (Il2CppObject *)v25,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            object->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v25;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v29 + 4), v25, v16, v17, v18, v19, v20, v21);
          }
          *(_BYTE *)(v25 + 128) = 0;
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
          if ( (unsigned int)v32 >= v30->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v25,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &v30->obj.klass + v32;
            v5->fields._size = v32 + 1;
            v33[4] = (Il2CppClass *)v25;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v33 + 4), v25, v16, v17, v18, v19, v20, v21);
          }
        }
        max_length = v22->max_length;
        if ( (int)++v24 >= max_length )
          goto LABEL_24;
      }
LABEL_32:
      sub_1C22094(object, v8);
    }
LABEL_24:
    v34 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v34, (Il2CppObject *)v3, Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, 0LL);
    this->fields.newButtonEntryAnimAction = v34;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.newButtonEntryAnimAction,
      (int64_t)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
    {
      object = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Last_object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                              (const MethodInfo_2FD4A9C *)Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
      if ( !v5 )
        goto LABEL_32;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v43,
        v5,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v43,
                (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
      {
        if ( !v43.fields._current )
          sub_1C22094(0LL, v41);
        MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v43.fields._current, 0LL, v42);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v43,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
    }
  }
}


void __fastcall MapButtonControl__FrameOut(MapButtonControl_o *this, const MethodInfo *method)
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
      v4 = 0LL;
      do
      {
        if ( (unsigned int)v4 >= max_length )
          sub_1C2209C(this, method);
        v5 = buttons->m_Items[v4];
        if ( !v5 )
          sub_1C22094(0LL, method);
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
  Il2CppObject *Object_object__49880776; // x20

  if ( (byte_4BD91EA & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&MapButtonControl_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD91EA = 1;
  }
  if ( !mapAssetData )
    return this->fields.buttonPrefab;
  v5 = MapButtonControl_TypeInfo;
  if ( !MapButtonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonControl_TypeInfo);
    v5 = MapButtonControl_TypeInfo;
  }
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              mapAssetData,
                              v5->static_fields->MAP_BUTTON_PREFAB_NAME,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49880776, 0LL, 0LL) )
    return this->fields.buttonPrefab;
  return (UnityEngine_GameObject_o *)Object_object__49880776;
}


void __fastcall MapButtonControl__PlayNewButtonEntryAnim(MapButtonControl_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_newButtonEntryAnimAction; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  p_newButtonEntryAnimAction = (PartyOrganizationUtility_o *)&this->fields.newButtonEntryAnimAction;
  ActionExtensions__Call(this->fields.newButtonEntryAnimAction, 0LL);
  p_newButtonEntryAnimAction->klass = 0LL;
  sub_1C21DDC(p_newButtonEntryAnimAction, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall MapButtonControl__SetNext(
        MapButtonControl_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        MapControl_SpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  MapButtonMaster_o *Master_object; // x0
  const MethodInfo *v10; // x1
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

  if ( (byte_4BD91EB & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_MapButtonMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BD91EB = 1;
  }
  if ( this->fields.buttons )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (MapButtonMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_object )
      goto LABEL_26;
    Master_object = (MapButtonMaster_o *)MapButtonMaster__GetOpenedButtons(Master_object, warInf, mapInf, 0LL);
    if ( !Master_object )
      goto LABEL_26;
    MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
    v12 = (MapButtonPrefab_o *)Master_object;
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
        if ( !v18 )
          break;
        if ( !spotInfo )
          break;
        namespaze = (int)v16->_1.namespaze;
        Master_object = (MapButtonMaster_o *)MapControl_SpotInfo__GetMine(spotInfo, v10);
        if ( !Master_object )
          break;
        if ( namespaze == LODWORD(Master_object->fields._MasterName_k__BackingField) )
        {
          if ( v13 >= LODWORD(v12->fields.m_CancellationTokenSource) )
            goto LABEL_27;
          if ( !*(_QWORD *)v17 )
            break;
          v20 = *(_DWORD *)(*(_QWORD *)v17 + 28LL);
          Master_object = (MapButtonMaster_o *)MapControl_SpotInfo__GetLayer(spotInfo, v10);
          if ( v20 == (_DWORD)Master_object )
          {
            v22 = this->fields.buttons;
            if ( !v22 )
              break;
            if ( v13 >= v22->max_length )
LABEL_27:
              sub_1C2209C(Master_object, v10);
            Master_object = (MapButtonMaster_o *)v22->m_Items[v13];
            if ( !Master_object )
              break;
            MapButtonPrefab__SetNext((MapButtonPrefab_o *)Master_object, 1, v21);
          }
        }
        MasterName_k__BackingField = (int)v12->fields.m_CancellationTokenSource;
        if ( (int)++v13 >= MasterName_k__BackingField )
          return;
      }
LABEL_26:
      sub_1C22094(Master_object, v10);
    }
  }
}


void __fastcall MapButtonControl__UpdateBadge(
        MapButtonControl_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        const MethodInfo *method)
{
  MapButtonEntity_array *Instance; // x0
  __int64 v8; // x1
  MapButtonEntity_array *v9; // x20
  il2cpp_array_size_t v10; // w21
  struct MapButtonPrefab_array *buttons; // x8
  MapButtonEntity_o *v12; // x8
  const MethodInfo *v13; // x2
  struct MapButtonPrefab_array *v14; // x8

  if ( (byte_4BD91EC & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_MapButtonMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4BD91EC = 1;
  }
  if ( this->fields.buttons )
  {
    Instance = (MapButtonEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (MapButtonEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_MapButtonMaster___);
    if ( !Instance )
      goto LABEL_19;
    Instance = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Instance, warInf, mapInf, 0LL);
    if ( !Instance )
      goto LABEL_19;
    v9 = Instance;
    if ( (int)Instance->max_length >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        buttons = this->fields.buttons;
        if ( !buttons )
          break;
        if ( (signed int)v10 >= (signed int)buttons->max_length )
          return;
        Instance = (MapButtonEntity_array *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( v10 >= v9->max_length )
LABEL_20:
          sub_1C2209C(Instance, v8);
        v12 = v9->m_Items[v10];
        if ( !v12 )
          break;
        if ( !Instance )
          break;
        Instance = (MapButtonEntity_array *)QuestTree__GetQuestCountForMap(
                                              (QuestTree_o *)Instance,
                                              v12->fields.targetMapId,
                                              v12->fields.layer,
                                              0LL);
        v14 = this->fields.buttons;
        if ( !v14 )
          break;
        if ( v10 >= v14->max_length )
          goto LABEL_20;
        v8 = (unsigned int)Instance;
        Instance = (MapButtonEntity_array *)v14->m_Items[v10];
        if ( !Instance )
          break;
        MapButtonPrefab__SetBadge((MapButtonPrefab_o *)Instance, v8, v13);
        if ( (signed int)++v10 >= (signed int)v9->max_length )
          return;
      }
LABEL_19:
      sub_1C22094(Instance, v8);
    }
  }
}


void __fastcall MapButtonControl__UpdateButtonSprite(MapButtonControl_o *this, const MethodInfo *method)
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
    terminalMap = (ScrTerminalMap_o *)ScrTerminalMap__IsMapModel(terminalMap, 0LL);
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
          sub_1C2209C(terminalMap, method);
        terminalMap = (ScrTerminalMap_o *)buttons->m_Items[v11];
        if ( !terminalMap )
          break;
        MapButtonPrefab__SetButtonSprite((MapButtonPrefab_o *)terminalMap, v12, mapId, currentMapLayerId, 0, v4);
        max_length = buttons->max_length;
        if ( (int)++v11 >= max_length )
          return;
      }
LABEL_12:
      sub_1C22094(terminalMap, method);
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
  System_Collections_Generic_List_object__o *newButtonList; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BD91F0 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    byte_4BD91F0 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.newButtonList,
         (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
  {
    newButtonList = (System_Collections_Generic_List_object__o *)this->fields.newButtonList;
    if ( !newButtonList )
      sub_1C22094(0LL, v3);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      newButtonList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
    {
      if ( !v7.fields._current )
        sub_1C22094(0LL, v5);
      MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v7.fields._current, 0LL, v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
  }
}