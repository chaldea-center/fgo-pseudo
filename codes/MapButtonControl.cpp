void MapButtonControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C23DB6 & 1) == 0 )
  {
    sub_1C2D490(&MapButtonControl_TypeInfo);
    sub_1C2D490(&StringLiteral_8887/*"MapBtnPrefab"*/);
    byte_4C23DB6 = 1;
  }
  MapButtonControl_TypeInfo->static_fields->MAP_BUTTON_PREFAB_NAME = (struct System_String_o *)StringLiteral_8887/*"MapBtnPrefab"*/;
  sub_1C2D434((CGThumbnailListItem_o *)MapButtonControl_TypeInfo->static_fields, StringLiteral_8887/*"MapBtnPrefab"*/, v1, v2);
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
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 Master_object; // x0
  const MethodInfo *v22; // x1
  MapButtonEntity_array *OpenedButtons; // x0
  struct UIGrid_o *GridComponentBottom; // x1
  MapButtonEntity_array *v25; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x22
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct UIGrid_o *GridComponentTop; // x1
  struct MapControl_MapInfo_o *mMapInfo; // x8
  int v33; // w22
  Il2CppObject *v34; // x19
  int32_t v35; // w29
  bool v36; // w8
  struct UIGrid_o *v37; // x19
  float GridCellHeight; // s0
  __int64 v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  __int64 v42; // x2
  int max_length; // w8
  unsigned int v44; // w25
  int32_t v45; // w23
  int32_t v46; // w21
  __int64 v47; // x24
  MapButtonEntity_o *v48; // x19
  int32_t v49; // w28
  int v50; // w23
  ScrTerminalMap_o *v51; // x22
  Il2CppObject *v52; // x20
  CGThumbnailListItem_c *klass; // x27
  const MethodInfo *v54; // x3
  __int64 v55; // x26
  const MethodInfo *v56; // x7
  bool v57; // w6
  CGThumbnailListItem_c *v58; // x8
  const MethodInfo *v59; // x5
  struct MapButtonPrefab_array *buttons; // x8
  __int64 v61; // x10
  int32_t v62; // w2
  int32_t v63; // w3
  int v64; // w9
  char v65; // w8
  bool v66; // w4
  CGThumbnailListItem_c *v67; // x8
  MapButtonPrefab_o *v68; // x26
  const MethodInfo *v69; // x2
  CGThumbnailListItem_c *v70; // x8
  MapButtonPrefab_o *v71; // x26
  const MethodInfo *v72; // x2
  UIGrid_o *v73; // x19
  const MethodInfo *v74; // x1
  __int64 v75; // x0
  bool v76; // [xsp+0h] [xbp-D0h]
  char v77; // [xsp+4h] [xbp-CCh]
  System_Collections_Generic_List_int__o *v78; // [xsp+8h] [xbp-C8h]
  MapButtonEntity_array *v79; // [xsp+10h] [xbp-C0h]
  struct UnityEngine_GameObject_o *v80; // [xsp+18h] [xbp-B8h]
  char v81; // [xsp+20h] [xbp-B0h]
  int32_t currentMapLayerId; // [xsp+24h] [xbp-ACh]
  MapButtonControl_o *v83; // [xsp+28h] [xbp-A8h]
  bool isMapButtonTop; // [xsp+34h] [xbp-9Ch]
  unsigned int mapId; // [xsp+44h] [xbp-8Ch]
  struct UIGrid_o **p_gridComponent; // [xsp+48h] [xbp-88h]
  int v88; // [xsp+54h] [xbp-7Ch]
  __int64 v89; // [xsp+58h] [xbp-78h]
  CGThumbnailListItem_o *p_buttons; // [xsp+60h] [xbp-70h]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4C23DB0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_MapButtonMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_MapCondMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&MapButtonPrefab___TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23DB0 = 1;
  }
  entity = 0;
  MapButtonPrefab = MapButtonControl__GetMapButtonPrefab(this, mapAssetData, (const MethodInfo *)mapInf);
  p_buttons = (CGThumbnailListItem_o *)&this->fields.buttons;
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
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.newButtonEntryAnimAction, 0, v15, v16);
    this->fields.terminalMap = terminalMap;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.terminalMap, (int32_t)terminalMap, v17, v18);
    this->fields.currentMapButtonPrefab = MapButtonPrefab;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.currentMapButtonPrefab, (int32_t)MapButtonPrefab, v19, v20);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_object )
      goto LABEL_88;
    OpenedButtons = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Master_object, warInf, mapInf, 0);
    GridComponentBottom = this->fields.GridComponentBottom;
    v25 = OpenedButtons;
    this->fields.gridComponent = GridComponentBottom;
    p_gridComponent = &this->fields.gridComponent;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.gridComponent, (int32_t)GridComponentBottom, v26, v27);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( !warInf )
      goto LABEL_88;
    v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    Master_object = MapControl_WarInfo__GetEventId(warInf, 0);
    if ( !v28 )
      goto LABEL_88;
    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                      v28,
                      &entity,
                      Master_object,
                      (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
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
      sub_1C2D434((CGThumbnailListItem_o *)p_gridComponent, (int32_t)GridComponentTop, v29, v30);
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
      sub_1C2D6EC(Master_object, v22);
    }
    v33 = Master_object;
    mapId = mMapInfo->fields.mapId;
    currentMapLayerId = terminalMap->fields.currentMapLayerId;
    if ( (Master_object & 1) != 0 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v34 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_MapCondMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C23DDD )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23DDD = 1;
      }
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      v35 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 140LL);
      if ( !byte_4C23DDE )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
        byte_4C23DDE = 1;
      }
      if ( !*(_DWORD *)(Master_object + 224) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      v22 = (const MethodInfo *)mapId;
      if ( !v34 )
        goto LABEL_88;
      Master_object = (__int64)MapCondMaster__GetReleasedMapButtonIdList(
                                 (MapCondMaster_o *)v34,
                                 mapId,
                                 v35,
                                 *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 144LL),
                                 0);
      if ( Master_object )
      {
        if ( !v25 )
          goto LABEL_88;
        v77 = 0;
        v36 = *(_DWORD *)(Master_object + 24) < SLODWORD(v25->max_length);
        goto LABEL_38;
      }
    }
    else
    {
      Master_object = 0;
    }
    v77 = 1;
    v36 = 1;
LABEL_38:
    v76 = v36;
    v78 = (System_Collections_Generic_List_int__o *)Master_object;
    if ( MapButtonPrefab )
    {
      v37 = *p_gridComponent;
      Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 MapButtonPrefab,
                                 (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
      if ( Master_object )
      {
        GridCellHeight = MapButtonPrefab__GetGridCellHeight((MapButtonPrefab_o *)Master_object, v22);
        if ( v37 )
        {
          v83 = this;
          v37->fields.cellHeight = GridCellHeight;
          if ( v25 )
          {
            v39 = sub_1C2D538(MapButtonPrefab___TypeInfo, LODWORD(v25->max_length));
            p_buttons->klass = (CGThumbnailListItem_c *)v39;
            sub_1C2D434(p_buttons, v39, v40, v41);
            max_length = v25->max_length;
            if ( max_length >= 1 )
            {
              v88 = 0;
              v89 = 0;
              v44 = 0;
              v45 = 0;
              v46 = 0;
              v47 = 32;
              v81 = v77 | v33 ^ 1;
              v79 = v25;
              v80 = MapButtonPrefab;
              do
              {
                if ( v44 >= max_length )
                  goto LABEL_89;
                v48 = *(MapButtonEntity_o **)((char *)&v25->obj.klass + v47);
                v49 = v45;
                v50 = v33;
                v51 = terminalMap;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v52 = UnityEngine_Object__Instantiate_object_(
                        (Il2CppObject *)MapButtonPrefab,
                        (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                klass = p_buttons->klass;
                Master_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                           (UnityEngine_GameObject_o *)v52,
                                           (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
                if ( !klass )
                  goto LABEL_88;
                v55 = Master_object;
                if ( Master_object )
                {
                  Master_object = sub_1C2D5CC(Master_object, *((_QWORD *)klass->_1.image + 8));
                  if ( !Master_object )
                  {
                    v75 = sub_1C2D710();
                    sub_1C2D5B8(v75, 0);
                  }
                }
                if ( v44 >= LODWORD(klass->_1.namespaze) )
                  goto LABEL_89;
                *(void **)((char *)&klass->_1.image + v47) = (void *)v55;
                sub_1C2D434((CGThumbnailListItem_o *)((char *)klass + v47), v55, v42, v54);
                if ( (v81 & 1) != 0 )
                {
                  v57 = 0;
                  terminalMap = v51;
                }
                else
                {
                  if ( !v48 )
                    goto LABEL_88;
                  Master_object = (__int64)v78;
                  if ( !v78 )
                    goto LABEL_88;
                  terminalMap = v51;
                  Master_object = System_Collections_Generic_List_int___Contains(
                                    v78,
                                    v48->fields.id,
                                    (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
                  v57 = Master_object & 1;
                }
                v58 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_88;
                if ( v44 >= LODWORD(v58->_1.namespaze) )
LABEL_89:
                  sub_1C2D6F4(Master_object, v22, v42);
                Master_object = *(__int64 *)((char *)&v58->_1.image + v47);
                if ( !Master_object )
                  goto LABEL_88;
                MapButtonPrefab__SetupButton(
                  (MapButtonPrefab_o *)Master_object,
                  mapAtlases,
                  v83->fields.commonUI,
                  terminalMap,
                  v48,
                  isMapButtonTop,
                  v57,
                  v56);
                buttons = v83->fields.buttons;
                if ( !buttons )
                  goto LABEL_88;
                v61 = v89;
                if ( v44 >= LODWORD(buttons->max_length) )
                  goto LABEL_89;
                Master_object = *(__int64 *)((char *)&buttons->obj.klass + v47);
                v62 = mapId;
                v63 = currentMapLayerId;
                v33 = v50;
                v64 = v50 | v88;
                if ( (v50 & 1) != 0 )
                {
                  v46 = mapId;
                  v61 = *(__int64 *)((char *)&buttons->obj.klass + v47);
                  v45 = currentMapLayerId;
                }
                else
                {
                  v45 = v49;
                }
                v89 = v61;
                if ( (v33 & 1) != 0 )
                {
                  if ( (v77 & 1) != 0 )
                  {
                    v65 = 1;
                  }
                  else
                  {
                    v66 = v76;
                    Master_object = v61;
                    v62 = v46;
                    v63 = v45;
                    v65 = v64;
                    if ( v78->fields._size > 0 )
                      goto LABEL_69;
                  }
                }
                else
                {
                  v65 = 0;
                }
                v66 = 0;
LABEL_69:
                v88 = v64;
                if ( !Master_object )
                  goto LABEL_88;
                MapButtonPrefab__SetButtonSprite((MapButtonPrefab_o *)Master_object, v65 & 1, v62, v63, v66, v59);
                v67 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_88;
                if ( v44 >= LODWORD(v67->_1.namespaze) )
                  goto LABEL_89;
                v68 = *(MapButtonPrefab_o **)((char *)&v67->_1.image + v47);
                Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
                if ( !v48 )
                  goto LABEL_88;
                if ( !Master_object )
                  goto LABEL_88;
                Master_object = QuestTree__GetQuestCountForMap(
                                  (QuestTree_o *)Master_object,
                                  v48->fields.targetMapId,
                                  v48->fields.layer,
                                  0);
                if ( !v68 )
                  goto LABEL_88;
                MapButtonPrefab__SetBadge(v68, Master_object, v69);
                v70 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_88;
                if ( v44 >= LODWORD(v70->_1.namespaze) )
                  goto LABEL_89;
                v71 = *(MapButtonPrefab_o **)((char *)&v70->_1.image + v47);
                Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
                if ( !Master_object )
                  goto LABEL_88;
                Master_object = QuestTree__IsNextSpotForMap(
                                  (QuestTree_o *)Master_object,
                                  v48->fields.targetMapId,
                                  v48->fields.layer,
                                  0);
                if ( !v71 )
                  goto LABEL_88;
                MapButtonPrefab__SetNext(v71, Master_object & 1, v72);
                if ( !v52 )
                  goto LABEL_88;
                v73 = *p_gridComponent;
                Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v52, 0);
                MapButtonPrefab = v80;
                if ( !v73 )
                  goto LABEL_88;
                UIGrid__AddChild(v73, (UnityEngine_Transform_o *)Master_object, 0);
                GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v52, v74);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v52, 0, 0);
                v25 = v79;
                ++v44;
                v47 += 8;
                max_length = v79->max_length;
              }
              while ( (int)v44 < max_length );
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
  const MethodInfo *v11; // x3
  int32_t v12; // w21
  UnityEngine_Object_o *v13; // x22
  UnityEngine_Object_o *v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C23DB4 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23DB4 = 1;
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
            UnityEngine_Object__Destroy_71163704(gameObject, 0);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          ++v6;
        }
        while ( transform );
      }
LABEL_39:
      sub_1C2D6EC(transform, v4);
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
        v12 = 0;
        do
        {
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
          if ( !transform )
            break;
          if ( v12 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0) )
            goto LABEL_40;
          transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          if ( !transform )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
          if ( !transform )
            break;
          v13 = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v12, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(v13, 0, 0);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            if ( !v13 )
              goto LABEL_39;
            v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_71163704(v14, 0);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          ++v12;
        }
        while ( transform );
      }
      goto LABEL_39;
    }
LABEL_40:
    this->fields.buttons = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.buttons, 0, v10, v11);
    this->fields.currentMapButtonPrefab = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.currentMapButtonPrefab, 0, v15, v16);
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
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o **v11; // x22
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  struct MapButtonPrefab_array *v14; // x24
  int max_length; // w8
  unsigned int v16; // w25
  MapButtonPrefab_o *v17; // x23
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0
  System_Action_o *v26; // x22
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C23DB5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapButtonPrefab__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    sub_1C2D490(&Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__);
    sub_1C2D490(&MapButtonControl___c__DisplayClass16_0_TypeInfo);
    byte_4C23DB5 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v3 = sub_1C2D6DC(MapButtonControl___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  buttons = this->fields.buttons;
  if ( buttons && buttons->max_length )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    if ( !v3 )
      goto LABEL_32;
    *(_QWORD *)(v3 + 16) = v6;
    v11 = (System_Collections_Generic_List_object__o **)(v3 + 16);
    sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)v6, v9, v10);
    v14 = this->fields.buttons;
    if ( !v14 )
      goto LABEL_32;
    max_length = v14->max_length;
    if ( max_length >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= max_length )
          sub_1C2D6F4(object, v8, v12);
        v17 = v14->m_Items[v16];
        if ( !v17 )
          break;
        if ( v17->fields.isNew )
        {
          object = *v11;
          if ( !*v11 )
            break;
          items = object->fields._items;
          v19 = Method_System_Collections_Generic_List_MapButtonPrefab__Add__;
          ++object->fields._version;
          if ( !items )
            break;
          size = object->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              object,
              (Il2CppObject *)v17,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            object->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v17;
            sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v17, v12, v13);
          }
          v17->fields.isNew = 0;
        }
        else
        {
          if ( !v5 )
            break;
          v22 = v5->fields._items;
          v23 = Method_System_Collections_Generic_List_MapButtonPrefab__Add__;
          ++v5->fields._version;
          if ( !v22 )
            break;
          v24 = v5->fields._size;
          if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v17,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &v22->obj.klass + v24;
            v5->fields._size = v24 + 1;
            v25[4] = (Il2CppClass *)v17;
            sub_1C2D434((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v17, v12, v13);
          }
        }
        max_length = v14->max_length;
        if ( (int)++v16 >= max_length )
          goto LABEL_24;
      }
LABEL_32:
      sub_1C2D6EC(object, v8);
    }
LABEL_24:
    v26 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)v3, Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, 0);
    this->fields.newButtonEntryAnimAction = v26;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.newButtonEntryAnimAction, (int32_t)v26, v27, v28);
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
    {
      object = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Last_object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                              (const MethodInfo_30F9824 *)Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
      if ( !v5 )
        goto LABEL_32;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v31,
        v5,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v31,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
      {
        if ( !v31.fields._current )
          sub_1C2D6EC(0, v29);
        MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v31.fields._current, 0, v30);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v31,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
    }
  }
}


void MapButtonControl__FrameOut(MapButtonControl_o *this, const MethodInfo *method)
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
      v5 = 0;
      do
      {
        if ( (unsigned int)v5 >= max_length )
          sub_1C2D6F4(this, method, v2);
        v6 = buttons->m_Items[v5];
        if ( !v6 )
          sub_1C2D6EC(0, method);
        MapButtonPrefab__FrameOut(v6, method);
        max_length = buttons->max_length;
        ++v5;
      }
      while ( (int)v5 < max_length );
    }
  }
}


UnityEngine_GameObject_o *MapButtonControl__GetMapButtonPrefab(
        MapButtonControl_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  MapButtonControl_c *v5; // x0
  Il2CppObject *Object_object__51051712; // x20

  if ( (byte_4C23DB1 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&MapButtonControl_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23DB1 = 1;
  }
  if ( !mapAssetData )
    return this->fields.buttonPrefab;
  v5 = MapButtonControl_TypeInfo;
  if ( !MapButtonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonControl_TypeInfo);
    v5 = MapButtonControl_TypeInfo;
  }
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              mapAssetData,
                              v5->static_fields->MAP_BUTTON_PREFAB_NAME,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51051712, 0, 0) )
    return this->fields.buttonPrefab;
  return (UnityEngine_GameObject_o *)Object_object__51051712;
}


void MapButtonControl__PlayNewButtonEntryAnim(MapButtonControl_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_newButtonEntryAnimAction; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  p_newButtonEntryAnimAction = (CGThumbnailListItem_o *)&this->fields.newButtonEntryAnimAction;
  ActionExtensions__Call(this->fields.newButtonEntryAnimAction, 0);
  p_newButtonEntryAnimAction->klass = 0;
  sub_1C2D434(p_newButtonEntryAnimAction, 0, v3, v4);
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
  const MethodInfo *v11; // x2
  int max_length; // w8
  MapButtonEntity_array *v13; // x21
  unsigned int v14; // w22
  struct MapButtonPrefab_array *buttons; // x9
  Il2CppClass **v16; // x24
  Il2CppClass *v17; // x8
  char *v18; // x24
  Il2CppClass *v19; // t1
  int namespaze; // w25
  int v21; // w24
  struct MapButtonPrefab_array *v22; // x8

  if ( (byte_4C23DB2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_MapButtonMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C23DB2 = 1;
  }
  if ( this->fields.buttons )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (MapButtonEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_object )
      goto LABEL_25;
    Master_object = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Master_object, warInf, mapInf, 0);
    if ( !Master_object )
      goto LABEL_25;
    max_length = Master_object->max_length;
    v13 = Master_object;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        buttons = this->fields.buttons;
        if ( !buttons )
          break;
        if ( (signed int)v14 >= SLODWORD(buttons->max_length) )
          return;
        if ( v14 >= max_length )
          goto LABEL_26;
        v16 = &v13->obj.klass + (int)v14;
        v19 = v16[4];
        v18 = (char *)(v16 + 4);
        v17 = v19;
        if ( !v19 || !spotInfo )
          break;
        namespaze = (int)v17->_1.namespaze;
        Master_object = (MapButtonEntity_array *)MapControl_SpotInfo__GetMapID(spotInfo, 0);
        if ( namespaze == (_DWORD)Master_object )
        {
          if ( v14 >= LODWORD(v13->max_length) )
            goto LABEL_26;
          if ( !*(_QWORD *)v18 )
            break;
          v21 = *(_DWORD *)(*(_QWORD *)v18 + 28LL);
          Master_object = (MapButtonEntity_array *)MapControl_SpotInfo__GetLayer(spotInfo, 0);
          if ( v21 == (_DWORD)Master_object )
          {
            v22 = this->fields.buttons;
            if ( !v22 )
              break;
            if ( v14 >= LODWORD(v22->max_length) )
LABEL_26:
              sub_1C2D6F4(Master_object, v10, v11);
            Master_object = (MapButtonEntity_array *)v22->m_Items[v14];
            if ( !Master_object )
              break;
            MapButtonPrefab__SetNext((MapButtonPrefab_o *)Master_object, 1, v11);
          }
        }
        max_length = v13->max_length;
        if ( (int)++v14 >= max_length )
          return;
      }
LABEL_25:
      sub_1C2D6EC(Master_object, v10);
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
  const MethodInfo *v12; // x2
  MapButtonEntity_o *v13; // x8
  struct MapButtonPrefab_array *v14; // x8

  if ( (byte_4C23DB3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_MapButtonMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C23DB3 = 1;
  }
  if ( this->fields.buttons )
  {
    Instance = (MapButtonEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (MapButtonEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_MapButtonMaster___);
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
        Instance = (MapButtonEntity_array *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( v10 >= LODWORD(v9->max_length) )
LABEL_20:
          sub_1C2D6F4(Instance, v8, v12);
        v13 = v9->m_Items[v10];
        if ( !v13 )
          break;
        if ( !Instance )
          break;
        Instance = (MapButtonEntity_array *)QuestTree__GetQuestCountForMap(
                                              (QuestTree_o *)Instance,
                                              v13->fields.targetMapId,
                                              v13->fields.layer,
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
        MapButtonPrefab__SetBadge((MapButtonPrefab_o *)Instance, v8, v12);
        if ( (signed int)++v10 >= SLODWORD(v9->max_length) )
          return;
      }
LABEL_19:
      sub_1C2D6EC(Instance, v8);
    }
  }
}


void MapButtonControl__UpdateButtonSprite(MapButtonControl_o *this, const MethodInfo *method)
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
    terminalMap = (ScrTerminalMap_o *)ScrTerminalMap__IsMapModel(terminalMap, 0);
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
          sub_1C2D6F4(terminalMap, method, v4);
        terminalMap = (ScrTerminalMap_o *)buttons->m_Items[v12];
        if ( !terminalMap )
          break;
        MapButtonPrefab__SetButtonSprite((MapButtonPrefab_o *)terminalMap, v13, mapId, currentMapLayerId, 0, v5);
        max_length = buttons->max_length;
        if ( (int)++v12 >= max_length )
          return;
      }
LABEL_12:
      sub_1C2D6EC(terminalMap, method);
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

  if ( (byte_4C23DB7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    byte_4C23DB7 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.newButtonList,
         (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
  {
    newButtonList = (System_Collections_Generic_List_object__o *)this->fields.newButtonList;
    if ( !newButtonList )
      sub_1C2D6EC(0, v3);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      newButtonList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
    {
      if ( !v7.fields._current )
        sub_1C2D6EC(0, v5);
      MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v7.fields._current, 0, v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
  }
}