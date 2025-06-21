void __fastcall MapButtonControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4B19050 & 1) == 0 )
  {
    sub_1BCAFF8(&MapButtonControl_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_8823/*"MapBtnPrefab"*/, v4);
    byte_4B19050 = 1;
  }
  MapButtonControl_TypeInfo->static_fields->MAP_BUTTON_PREFAB_NAME = (struct System_String_o *)StringLiteral_8823/*"MapBtnPrefab"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)MapButtonControl_TypeInfo->static_fields, StringLiteral_8823/*"MapBtnPrefab"*/, v2, v3);
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
  const MethodInfo *v25; // x1
  struct UnityEngine_GameObject_o *MapButtonPrefab; // x26
  UnityEngine_Object_o *currentMapButtonPrefab; // x24
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 Master_object; // x0
  const MethodInfo *v35; // x1
  MapButtonEntity_array *OpenedButtons; // x0
  struct UIGrid_o *GridComponentBottom; // x1
  MapButtonEntity_array *v38; // x20
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v41; // x22
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct UIGrid_o *GridComponentTop; // x1
  struct MapControl_MapInfo_o *mMapInfo; // x8
  int v46; // w22
  __int64 v47; // x1
  Il2CppObject *v48; // x19
  int32_t v49; // w29
  bool v50; // w8
  struct UIGrid_o *v51; // x19
  float GridCellHeight; // s0
  __int64 v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  __int64 v56; // x2
  int max_length; // w8
  unsigned int v58; // w25
  int32_t v59; // w23
  unsigned int v60; // w21
  __int64 v61; // x24
  MapButtonEntity_o *v62; // x19
  int32_t v63; // w28
  int v64; // w23
  ScrTerminalMap_o *v65; // x22
  Il2CppObject *v66; // x20
  CGThumbnailListItem_c *klass; // x27
  const MethodInfo *v68; // x3
  __int64 v69; // x26
  const MethodInfo *v70; // x7
  bool v71; // w6
  CGThumbnailListItem_c *v72; // x8
  const MethodInfo *v73; // x5
  struct MapButtonPrefab_array *buttons; // x8
  __int64 v75; // x10
  int32_t v76; // w2
  int32_t v77; // w3
  int v78; // w9
  char v79; // w8
  bool v80; // w4
  CGThumbnailListItem_c *v81; // x8
  MapButtonPrefab_o *v82; // x26
  const MethodInfo *v83; // x2
  CGThumbnailListItem_c *v84; // x8
  MapButtonPrefab_o *v85; // x26
  const MethodInfo *v86; // x2
  UIGrid_o *v87; // x19
  const MethodInfo *v88; // x1
  __int64 v89; // x0
  bool v90; // [xsp+0h] [xbp-D0h]
  char v91; // [xsp+4h] [xbp-CCh]
  System_Collections_Generic_List_int__o *v92; // [xsp+8h] [xbp-C8h]
  MapButtonEntity_array *v93; // [xsp+10h] [xbp-C0h]
  struct UnityEngine_GameObject_o *v94; // [xsp+18h] [xbp-B8h]
  char v95; // [xsp+20h] [xbp-B0h]
  int32_t currentMapLayerId; // [xsp+24h] [xbp-ACh]
  MapButtonControl_o *v97; // [xsp+28h] [xbp-A8h]
  char isMapButtonTop; // [xsp+34h] [xbp-9Ch]
  unsigned int mapId; // [xsp+44h] [xbp-8Ch]
  struct UIGrid_o **p_gridComponent; // [xsp+48h] [xbp-88h]
  int v102; // [xsp+54h] [xbp-7Ch]
  __int64 v103; // [xsp+58h] [xbp-78h]
  CGThumbnailListItem_o *p_buttons; // [xsp+60h] [xbp-70h]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4B1904A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventDetailMaster___, warInf);
    sub_1BCAFF8(&Method_DataManager_GetMaster_MapButtonMaster___, v12);
    sub_1BCAFF8(&Method_DataManager_GetMaster_MapCondMaster___, v13);
    sub_1BCAFF8(&DataManager_TypeInfo, v14);
    sub_1BCAFF8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v15);
    sub_1BCAFF8(&Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___, v16);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1BCAFF8(&MapButtonPrefab___TypeInfo, v20);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v21);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v22);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, v23);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v24);
    byte_4B1904A = 1;
  }
  entity = 0LL;
  MapButtonPrefab = MapButtonControl__GetMapButtonPrefab(this, mapAssetData, (const MethodInfo *)mapInf);
  p_buttons = (CGThumbnailListItem_o *)&this->fields.buttons;
  if ( !this->fields.buttons )
    goto LABEL_7;
  currentMapButtonPrefab = (UnityEngine_Object_o *)this->fields.currentMapButtonPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(currentMapButtonPrefab, (UnityEngine_Object_o *)MapButtonPrefab, 0LL) )
  {
LABEL_7:
    MapButtonControl__DestroyButtons(this, v25);
    this->fields.newButtonEntryAnimAction = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.newButtonEntryAnimAction, 0, v28, v29);
    this->fields.terminalMap = terminalMap;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.terminalMap, (int32_t)terminalMap, v30, v31);
    this->fields.currentMapButtonPrefab = MapButtonPrefab;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.currentMapButtonPrefab, (int32_t)MapButtonPrefab, v32, v33);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_object )
      goto LABEL_92;
    OpenedButtons = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Master_object, warInf, mapInf, 0LL);
    GridComponentBottom = this->fields.GridComponentBottom;
    v38 = OpenedButtons;
    this->fields.gridComponent = GridComponentBottom;
    p_gridComponent = &this->fields.gridComponent;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.gridComponent, (int32_t)GridComponentBottom, v39, v40);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( !warInf )
      goto LABEL_92;
    v41 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    Master_object = MapControl_WarInfo__GetEventId(warInf, 0LL);
    if ( !v41 )
      goto LABEL_92;
    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                      v41,
                      &entity,
                      Master_object,
                      (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    if ( (Master_object & 1) == 0 )
      goto LABEL_16;
    Master_object = (__int64)entity;
    if ( !entity )
      goto LABEL_92;
    Master_object = EventDetailEntity__IsMapSwitchButtonTop((EventDetailEntity_o *)entity, 0LL);
    if ( (Master_object & 1) != 0 )
    {
      GridComponentTop = this->fields.GridComponentTop;
      this->fields.gridComponent = GridComponentTop;
      sub_1BCAF9C((CGThumbnailListItem_o *)p_gridComponent, (int32_t)GridComponentTop, v42, v43);
      isMapButtonTop = 1;
    }
    else
    {
LABEL_16:
      isMapButtonTop = 0;
    }
    if ( !terminalMap
      || (Master_object = ScrTerminalMap__IsMapModel(terminalMap, 0LL), (mMapInfo = terminalMap->fields.mMapInfo) == 0LL) )
    {
LABEL_92:
      sub_1BCB254(Master_object, v35);
    }
    v46 = Master_object;
    mapId = mMapInfo->fields.mapId;
    currentMapLayerId = terminalMap->fields.currentMapLayerId;
    if ( (Master_object & 1) != 0 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v48 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_MapCondMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B19077 )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v47);
        byte_4B19077 = 1;
      }
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      v49 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 140LL);
      if ( !byte_4B19078 )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v47);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
        byte_4B19078 = 1;
      }
      if ( !*(_DWORD *)(Master_object + 224) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      v35 = (const MethodInfo *)mapId;
      if ( !v48 )
        goto LABEL_92;
      Master_object = (__int64)MapCondMaster__GetReleasedMapButtonIdList(
                                 (MapCondMaster_o *)v48,
                                 mapId,
                                 v49,
                                 *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 144LL),
                                 0LL);
      if ( Master_object )
      {
        if ( !v38 )
          goto LABEL_92;
        v91 = 0;
        v50 = *(_DWORD *)(Master_object + 24) < (signed int)v38->max_length;
        goto LABEL_38;
      }
    }
    else
    {
      Master_object = 0LL;
    }
    v91 = 1;
    v50 = 1;
LABEL_38:
    v90 = v50;
    v92 = (System_Collections_Generic_List_int__o *)Master_object;
    if ( MapButtonPrefab )
    {
      v51 = *p_gridComponent;
      Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 MapButtonPrefab,
                                 (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
      if ( Master_object )
      {
        GridCellHeight = MapButtonPrefab__GetGridCellHeight((MapButtonPrefab_o *)Master_object, v35);
        if ( v51 )
        {
          v97 = this;
          v51->fields.cellHeight = GridCellHeight;
          if ( v38 )
          {
            v53 = sub_1BCB0A0(MapButtonPrefab___TypeInfo, v38->max_length);
            p_buttons->klass = (CGThumbnailListItem_c *)v53;
            sub_1BCAF9C(p_buttons, v53, v54, v55);
            max_length = v38->max_length;
            if ( max_length >= 1 )
            {
              v102 = 0;
              v103 = 0LL;
              v58 = 0;
              v59 = 0;
              v60 = 0;
              v61 = 32LL;
              v95 = v91 | v46 ^ 1;
              v93 = v38;
              v94 = MapButtonPrefab;
              do
              {
                if ( v58 >= max_length )
                  goto LABEL_93;
                v62 = *(MapButtonEntity_o **)((char *)&v38->obj.klass + v61);
                v63 = v59;
                v64 = v46;
                v65 = terminalMap;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v66 = UnityEngine_Object__Instantiate_object_(
                        (Il2CppObject *)MapButtonPrefab,
                        (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                klass = p_buttons->klass;
                Master_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                           (UnityEngine_GameObject_o *)v66,
                                           (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
                if ( !klass )
                  goto LABEL_92;
                v69 = Master_object;
                if ( Master_object )
                {
                  Master_object = sub_1BCB134(Master_object, *((_QWORD *)klass->_1.image + 8));
                  if ( !Master_object )
                  {
                    v89 = sub_1BCB278();
                    sub_1BCB120(v89, 0LL);
                  }
                }
                if ( v58 >= LODWORD(klass->_1.namespaze) )
                  goto LABEL_93;
                *(void **)((char *)&klass->_1.image + v61) = (void *)v69;
                sub_1BCAF9C((CGThumbnailListItem_o *)((char *)klass + v61), v69, v56, v68);
                if ( (v95 & 1) != 0 )
                {
                  v71 = 0;
                  terminalMap = v65;
                }
                else
                {
                  if ( !v62 )
                    goto LABEL_92;
                  Master_object = (__int64)v92;
                  if ( !v92 )
                    goto LABEL_92;
                  terminalMap = v65;
                  Master_object = System_Collections_Generic_List_int___Contains(
                                    v92,
                                    v62->fields.id,
                                    (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__);
                  v71 = Master_object & 1;
                }
                v72 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_92;
                if ( v58 >= LODWORD(v72->_1.namespaze) )
LABEL_93:
                  sub_1BCB25C(Master_object, v35, v56);
                Master_object = *(__int64 *)((char *)&v72->_1.image + v61);
                if ( !Master_object )
                  goto LABEL_92;
                MapButtonPrefab__SetupButton(
                  (MapButtonPrefab_o *)Master_object,
                  mapAtlases,
                  v97->fields.commonUI,
                  terminalMap,
                  v62,
                  isMapButtonTop,
                  v71,
                  v70);
                buttons = v97->fields.buttons;
                if ( !buttons )
                  goto LABEL_92;
                v75 = v103;
                if ( v58 >= buttons->max_length )
                  goto LABEL_93;
                Master_object = *(__int64 *)((char *)&buttons->obj.klass + v61);
                v76 = mapId;
                v77 = currentMapLayerId;
                v46 = v64;
                v78 = v64 | v102;
                if ( (v64 & 1) != 0 )
                  v60 = mapId;
                if ( (v64 & 1) != 0 )
                  v75 = *(__int64 *)((char *)&buttons->obj.klass + v61);
                if ( (v64 & 1) != 0 )
                  v59 = currentMapLayerId;
                else
                  v59 = v63;
                v103 = v75;
                if ( (v46 & 1) != 0 )
                {
                  if ( (v91 & 1) != 0 )
                  {
                    v79 = 1;
                  }
                  else
                  {
                    v80 = v90;
                    Master_object = v75;
                    v76 = v60;
                    v77 = v59;
                    v79 = v78;
                    if ( v92->fields._size > 0 )
                      goto LABEL_73;
                  }
                }
                else
                {
                  v79 = 0;
                }
                v80 = 0;
LABEL_73:
                v102 = v78;
                if ( !Master_object )
                  goto LABEL_92;
                MapButtonPrefab__SetButtonSprite((MapButtonPrefab_o *)Master_object, v79 & 1, v76, v77, v80, v73);
                v81 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_92;
                if ( v58 >= LODWORD(v81->_1.namespaze) )
                  goto LABEL_93;
                v82 = *(MapButtonPrefab_o **)((char *)&v81->_1.image + v61);
                Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                if ( !v62 )
                  goto LABEL_92;
                if ( !Master_object )
                  goto LABEL_92;
                Master_object = QuestTree__GetQuestCountForMap(
                                  (QuestTree_o *)Master_object,
                                  v62->fields.targetMapId,
                                  v62->fields.layer,
                                  0LL);
                if ( !v82 )
                  goto LABEL_92;
                MapButtonPrefab__SetBadge(v82, Master_object, v83);
                v84 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_92;
                if ( v58 >= LODWORD(v84->_1.namespaze) )
                  goto LABEL_93;
                v85 = *(MapButtonPrefab_o **)((char *)&v84->_1.image + v61);
                Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                if ( !Master_object )
                  goto LABEL_92;
                Master_object = QuestTree__IsNextSpotForMap(
                                  (QuestTree_o *)Master_object,
                                  v62->fields.targetMapId,
                                  v62->fields.layer,
                                  0LL);
                if ( !v85 )
                  goto LABEL_92;
                MapButtonPrefab__SetNext(v85, Master_object & 1, v86);
                if ( !v66 )
                  goto LABEL_92;
                v87 = *p_gridComponent;
                Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v66, 0LL);
                MapButtonPrefab = v94;
                if ( !v87 )
                  goto LABEL_92;
                UIGrid__AddChild(v87, (UnityEngine_Transform_o *)Master_object, 0LL);
                GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v66, v88);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v66, 0, 0LL);
                v38 = v93;
                ++v58;
                v61 += 8LL;
                max_length = v93->max_length;
              }
              while ( (int)v58 < max_length );
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w21
  UnityEngine_Object_o *v13; // x22
  UnityEngine_Object_o *v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4B1904E & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1904E = 1;
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
            UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          ++v6;
        }
        while ( transform );
      }
LABEL_39:
      sub_1BCB254(transform, v4);
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
        v12 = 0;
        do
        {
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          if ( v12 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) )
            goto LABEL_40;
          transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          if ( !transform )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          v13 = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v12, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            if ( !v13 )
              goto LABEL_39;
            v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_70136076(v14, 0LL);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          ++v12;
        }
        while ( transform );
      }
      goto LABEL_39;
    }
LABEL_40:
    this->fields.buttons = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.buttons, 0, v10, v11);
    this->fields.currentMapButtonPrefab = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.currentMapButtonPrefab, 0, v15, v16);
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
  System_Collections_Generic_List_object__o *v16; // x20
  System_Collections_Generic_List_object__o *v17; // x23
  System_Collections_Generic_List_object__o *object; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_object__o **v22; // x22
  __int64 v23; // x2
  const MethodInfo *v24; // x3
  struct MapButtonPrefab_array *v25; // x24
  int max_length; // w8
  unsigned int v27; // w25
  MapButtonPrefab_o *v28; // x23
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x8
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0
  System_Action_o *v37; // x22
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  __int64 v40; // x1
  const MethodInfo *v41; // x2
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1904F & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___, v3);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Last_MapButtonPrefab___, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapButtonPrefab__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapButtonPrefab___ctor__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_MapButtonPrefab__TypeInfo, v11);
    sub_1BCAFF8(&Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, v12);
    sub_1BCAFF8(&MapButtonControl___c__DisplayClass16_0_TypeInfo, v13);
    byte_4B1904F = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v14 = sub_1BCB244(MapButtonControl___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  buttons = this->fields.buttons;
  if ( buttons && *(_QWORD *)&buttons->max_length )
  {
    v16 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    v17 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v17,
      (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    if ( !v14 )
      goto LABEL_32;
    *(_QWORD *)(v14 + 16) = v17;
    v22 = (System_Collections_Generic_List_object__o **)(v14 + 16);
    sub_1BCAF9C((CGThumbnailListItem_o *)(v14 + 16), (int32_t)v17, v20, v21);
    v25 = this->fields.buttons;
    if ( !v25 )
      goto LABEL_32;
    max_length = v25->max_length;
    if ( max_length >= 1 )
    {
      v27 = 0;
      while ( 1 )
      {
        if ( v27 >= max_length )
          sub_1BCB25C(object, v19, v23);
        v28 = v25->m_Items[v27];
        if ( !v28 )
          break;
        if ( v28->fields.isNew )
        {
          object = *v22;
          if ( !*v22 )
            break;
          items = object->fields._items;
          v30 = Method_System_Collections_Generic_List_MapButtonPrefab__Add__;
          ++object->fields._version;
          if ( !items )
            break;
          size = object->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              object,
              (Il2CppObject *)v28,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            object->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v28;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v28, v23, v24);
          }
          v28->fields.isNew = 0;
        }
        else
        {
          if ( !v16 )
            break;
          v33 = v16->fields._items;
          v34 = Method_System_Collections_Generic_List_MapButtonPrefab__Add__;
          ++v16->fields._version;
          if ( !v33 )
            break;
          v35 = v16->fields._size;
          if ( (unsigned int)v35 >= v33->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)v28,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &v33->obj.klass + v35;
            v16->fields._size = v35 + 1;
            v36[4] = (Il2CppClass *)v28;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v28, v23, v24);
          }
        }
        max_length = v25->max_length;
        if ( (int)++v27 >= max_length )
          goto LABEL_24;
      }
LABEL_32:
      sub_1BCB254(object, v19);
    }
LABEL_24:
    v37 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v37, (Il2CppObject *)v14, Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, 0LL);
    this->fields.newButtonEntryAnimAction = v37;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.newButtonEntryAnimAction, (int32_t)v37, v38, v39);
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v16,
           (const MethodInfo_302661C *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
    {
      object = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Last_object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v16,
                                                              (const MethodInfo_30419A0 *)Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
      if ( !v16 )
        goto LABEL_32;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v42,
        v16,
        (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v42,
                (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
      {
        if ( !v42.fields._current )
          sub_1BCB254(0LL, v40);
        MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v42.fields._current, 0LL, v41);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v42,
        (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
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
          sub_1BCB25C(this, method, v2);
        v6 = buttons->m_Items[v5];
        if ( !v6 )
          sub_1BCB254(0LL, method);
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
  Il2CppObject *Object_object__50315216; // x20

  if ( (byte_4B1904B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, mapAssetData);
    sub_1BCAFF8(&MapButtonControl_TypeInfo, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    byte_4B1904B = 1;
  }
  if ( !mapAssetData )
    return this->fields.buttonPrefab;
  v7 = MapButtonControl_TypeInfo;
  if ( !MapButtonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonControl_TypeInfo);
    v7 = MapButtonControl_TypeInfo;
  }
  Object_object__50315216 = AssetData__GetObject_object__50315216(
                              mapAssetData,
                              v7->static_fields->MAP_BUTTON_PREFAB_NAME,
                              (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__50315216, 0LL, 0LL) )
    return this->fields.buttonPrefab;
  return (UnityEngine_GameObject_o *)Object_object__50315216;
}


void __fastcall MapButtonControl__PlayNewButtonEntryAnim(MapButtonControl_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_newButtonEntryAnimAction; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  p_newButtonEntryAnimAction = (CGThumbnailListItem_o *)&this->fields.newButtonEntryAnimAction;
  ActionExtensions__Call(this->fields.newButtonEntryAnimAction, 0LL);
  p_newButtonEntryAnimAction->klass = 0LL;
  sub_1BCAF9C(p_newButtonEntryAnimAction, 0, v3, v4);
}


void __fastcall MapButtonControl__SetNext(
        MapButtonControl_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        MapControl_SpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  __int64 v9; // x1
  MapButtonEntity_array *Master_object; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  int max_length; // w8
  MapButtonEntity_array *v14; // x21
  il2cpp_array_size_t v15; // w22
  struct MapButtonPrefab_array *buttons; // x9
  Il2CppClass **v17; // x24
  Il2CppClass *v18; // x8
  char *v19; // x24
  Il2CppClass *v20; // t1
  int namespaze; // w25
  int v22; // w24
  struct MapButtonPrefab_array *v23; // x8

  if ( (byte_4B1904C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_MapButtonMaster___, warInf);
    sub_1BCAFF8(&DataManager_TypeInfo, v9);
    byte_4B1904C = 1;
  }
  if ( this->fields.buttons )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (MapButtonEntity_array *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_object )
      goto LABEL_25;
    Master_object = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Master_object, warInf, mapInf, 0LL);
    if ( !Master_object )
      goto LABEL_25;
    max_length = Master_object->max_length;
    v14 = Master_object;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        buttons = this->fields.buttons;
        if ( !buttons )
          break;
        if ( (signed int)v15 >= (signed int)buttons->max_length )
          return;
        if ( v15 >= max_length )
          goto LABEL_26;
        v17 = &v14->obj.klass + (int)v15;
        v20 = v17[4];
        v19 = (char *)(v17 + 4);
        v18 = v20;
        if ( !v20 || !spotInfo )
          break;
        namespaze = (int)v18->_1.namespaze;
        Master_object = (MapButtonEntity_array *)MapControl_SpotInfo__GetMapID(spotInfo, 0LL);
        if ( namespaze == (_DWORD)Master_object )
        {
          if ( v15 >= v14->max_length )
            goto LABEL_26;
          if ( !*(_QWORD *)v19 )
            break;
          v22 = *(_DWORD *)(*(_QWORD *)v19 + 28LL);
          Master_object = (MapButtonEntity_array *)MapControl_SpotInfo__GetLayer(spotInfo, 0LL);
          if ( v22 == (_DWORD)Master_object )
          {
            v23 = this->fields.buttons;
            if ( !v23 )
              break;
            if ( v15 >= v23->max_length )
LABEL_26:
              sub_1BCB25C(Master_object, v11, v12);
            Master_object = (MapButtonEntity_array *)v23->m_Items[v15];
            if ( !Master_object )
              break;
            MapButtonPrefab__SetNext((MapButtonPrefab_o *)Master_object, 1, v12);
          }
        }
        max_length = v14->max_length;
        if ( (int)++v15 >= max_length )
          return;
      }
LABEL_25:
      sub_1BCB254(Master_object, v11);
    }
  }
}


void __fastcall MapButtonControl__UpdateBadge(
        MapButtonControl_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  MapButtonEntity_array *Instance; // x0
  __int64 v10; // x1
  MapButtonEntity_array *v11; // x20
  il2cpp_array_size_t v12; // w21
  struct MapButtonPrefab_array *buttons; // x8
  const MethodInfo *v14; // x2
  MapButtonEntity_o *v15; // x8
  struct MapButtonPrefab_array *v16; // x8

  if ( (byte_4B1904D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_MapButtonMaster___, warInf);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, v8);
    byte_4B1904D = 1;
  }
  if ( this->fields.buttons )
  {
    Instance = (MapButtonEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (MapButtonEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_MapButtonMaster___);
    if ( !Instance )
      goto LABEL_19;
    Instance = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Instance, warInf, mapInf, 0LL);
    if ( !Instance )
      goto LABEL_19;
    v11 = Instance;
    if ( (int)Instance->max_length >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        buttons = this->fields.buttons;
        if ( !buttons )
          break;
        if ( (signed int)v12 >= (signed int)buttons->max_length )
          return;
        Instance = (MapButtonEntity_array *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( v12 >= v11->max_length )
LABEL_20:
          sub_1BCB25C(Instance, v10, v14);
        v15 = v11->m_Items[v12];
        if ( !v15 )
          break;
        if ( !Instance )
          break;
        Instance = (MapButtonEntity_array *)QuestTree__GetQuestCountForMap(
                                              (QuestTree_o *)Instance,
                                              v15->fields.targetMapId,
                                              v15->fields.layer,
                                              0LL);
        v16 = this->fields.buttons;
        if ( !v16 )
          break;
        if ( v12 >= v16->max_length )
          goto LABEL_20;
        v10 = (unsigned int)Instance;
        Instance = (MapButtonEntity_array *)v16->m_Items[v12];
        if ( !Instance )
          break;
        MapButtonPrefab__SetBadge((MapButtonPrefab_o *)Instance, v10, v14);
        if ( (signed int)++v12 >= (signed int)v11->max_length )
          return;
      }
LABEL_19:
      sub_1BCB254(Instance, v10);
    }
  }
}


void __fastcall MapButtonControl__UpdateButtonSprite(MapButtonControl_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *terminalMap; // x0
  __int64 v4; // x2
  const MethodInfo *v5; // x5
  struct ScrTerminalMap_o *v6; // x9
  struct MapControl_MapInfo_o *mMapInfo; // x10
  struct MapButtonPrefab_array *buttons; // x22
  int max_length; // w8
  int32_t mapId; // w19
  int32_t currentMapLayerId; // w20
  unsigned int v12; // w23
  bool v13; // w21

  if ( this->fields.buttons )
  {
    terminalMap = this->fields.terminalMap;
    if ( !terminalMap )
      goto LABEL_12;
    terminalMap = (ScrTerminalMap_o *)ScrTerminalMap__IsMapModel(terminalMap, 0LL);
    v6 = this->fields.terminalMap;
    if ( !v6 )
      goto LABEL_12;
    mMapInfo = v6->fields.mMapInfo;
    if ( !mMapInfo )
      goto LABEL_12;
    buttons = this->fields.buttons;
    if ( !buttons )
      goto LABEL_12;
    max_length = buttons->max_length;
    if ( max_length >= 1 )
    {
      mapId = mMapInfo->fields.mapId;
      currentMapLayerId = v6->fields.currentMapLayerId;
      v12 = 0;
      v13 = (unsigned __int8)terminalMap & 1;
      while ( 1 )
      {
        if ( v12 >= max_length )
          sub_1BCB25C(terminalMap, method, v4);
        terminalMap = (ScrTerminalMap_o *)buttons->m_Items[v12];
        if ( !terminalMap )
          break;
        MapButtonPrefab__SetButtonSprite((MapButtonPrefab_o *)terminalMap, v13, mapId, currentMapLayerId, 0, v5);
        max_length = buttons->max_length;
        if ( (int)++v12 >= max_length )
          return;
      }
LABEL_12:
      sub_1BCB254(terminalMap, method);
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
  System_Collections_Generic_List_object__o *newButtonList; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19051 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__, v6);
    byte_4B19051 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.newButtonList,
         (const MethodInfo_302661C *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
  {
    newButtonList = (System_Collections_Generic_List_object__o *)this->fields.newButtonList;
    if ( !newButtonList )
      sub_1BCB254(0LL, v7);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      newButtonList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
    {
      if ( !v11.fields._current )
        sub_1BCB254(0LL, v9);
      MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v11.fields._current, 0LL, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
  }
}