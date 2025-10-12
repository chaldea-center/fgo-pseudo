void MapButtonControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C3448A & 1) == 0 )
  {
    sub_1C32C20(&MapButtonControl_TypeInfo);
    sub_1C32C20(&StringLiteral_8893/*"MapBtnPrefab"*/);
    byte_4C3448A = 1;
  }
  MapButtonControl_TypeInfo->static_fields->MAP_BUTTON_PREFAB_NAME = (struct System_String_o *)StringLiteral_8893/*"MapBtnPrefab"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)MapButtonControl_TypeInfo->static_fields, StringLiteral_8893/*"MapBtnPrefab"*/, v1, v2);
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
  MapButtonEntity_array *OpenedButtons; // x0
  struct UIGrid_o *GridComponentBottom; // x1
  MapButtonEntity_array *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct UIGrid_o *GridComponentTop; // x1
  struct MapControl_MapInfo_o *mMapInfo; // x8
  int v32; // w22
  Il2CppObject *v33; // x19
  int32_t v34; // w29
  bool v35; // w8
  struct UIGrid_o *v36; // x19
  const MethodInfo *v37; // x1
  float GridCellHeight; // s0
  __int64 v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int max_length; // w8
  unsigned int v43; // w25
  int32_t v44; // w23
  int32_t v45; // w21
  __int64 v46; // x24
  MapButtonEntity_o *v47; // x19
  int32_t v48; // w28
  int v49; // w23
  ScrTerminalMap_o *v50; // x22
  Il2CppObject *v51; // x20
  CGThumbnailListItem_c *klass; // x27
  int32_t v53; // w2
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
  int32_t mapId; // [xsp+44h] [xbp-8Ch]
  struct UIGrid_o **p_gridComponent; // [xsp+48h] [xbp-88h]
  int v88; // [xsp+54h] [xbp-7Ch]
  __int64 v89; // [xsp+58h] [xbp-78h]
  CGThumbnailListItem_o *p_buttons; // [xsp+60h] [xbp-70h]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4C34484 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_MapButtonMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_MapCondMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&MapButtonPrefab___TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C34484 = 1;
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
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.newButtonEntryAnimAction, 0, v15, v16);
    this->fields.terminalMap = terminalMap;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.terminalMap, (int32_t)terminalMap, v17, v18);
    this->fields.currentMapButtonPrefab = MapButtonPrefab;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.currentMapButtonPrefab, (int32_t)MapButtonPrefab, v19, v20);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_object )
      goto LABEL_88;
    OpenedButtons = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Master_object, warInf, mapInf, 0);
    GridComponentBottom = this->fields.GridComponentBottom;
    v24 = OpenedButtons;
    this->fields.gridComponent = GridComponentBottom;
    p_gridComponent = &this->fields.gridComponent;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.gridComponent, (int32_t)GridComponentBottom, v25, v26);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( !warInf )
      goto LABEL_88;
    v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    Master_object = MapControl_WarInfo__GetEventId(warInf, 0);
    if ( !v27 )
      goto LABEL_88;
    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                      v27,
                      &entity,
                      Master_object,
                      (const MethodInfo_3396884 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
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
      sub_1C32BC4((CGThumbnailListItem_o *)p_gridComponent, (int32_t)GridComponentTop, v28, v29);
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
      sub_1C32E7C(Master_object);
    }
    v32 = Master_object;
    mapId = mMapInfo->fields.mapId;
    currentMapLayerId = terminalMap->fields.currentMapLayerId;
    if ( (Master_object & 1) != 0 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v33 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_MapCondMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C344B1 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C344B1 = 1;
      }
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      v34 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 140LL);
      if ( !byte_4C344B2 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
        byte_4C344B2 = 1;
      }
      if ( !*(_DWORD *)(Master_object + 224) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      if ( !v33 )
        goto LABEL_88;
      Master_object = (__int64)MapCondMaster__GetReleasedMapButtonIdList(
                                 (MapCondMaster_o *)v33,
                                 mapId,
                                 v34,
                                 *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 144LL),
                                 0);
      if ( Master_object )
      {
        if ( !v24 )
          goto LABEL_88;
        v77 = 0;
        v35 = *(_DWORD *)(Master_object + 24) < SLODWORD(v24->max_length);
        goto LABEL_38;
      }
    }
    else
    {
      Master_object = 0;
    }
    v77 = 1;
    v35 = 1;
LABEL_38:
    v76 = v35;
    v78 = (System_Collections_Generic_List_int__o *)Master_object;
    if ( MapButtonPrefab )
    {
      v36 = *p_gridComponent;
      Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 MapButtonPrefab,
                                 (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
      if ( Master_object )
      {
        GridCellHeight = MapButtonPrefab__GetGridCellHeight((MapButtonPrefab_o *)Master_object, v37);
        if ( v36 )
        {
          v83 = this;
          v36->fields.cellHeight = GridCellHeight;
          if ( v24 )
          {
            v39 = sub_1C32CC8(MapButtonPrefab___TypeInfo, LODWORD(v24->max_length));
            p_buttons->klass = (CGThumbnailListItem_c *)v39;
            sub_1C32BC4(p_buttons, v39, v40, v41);
            max_length = v24->max_length;
            if ( max_length >= 1 )
            {
              v88 = 0;
              v89 = 0;
              v43 = 0;
              v44 = 0;
              v45 = 0;
              v46 = 32;
              v81 = v77 | v32 ^ 1;
              v79 = v24;
              v80 = MapButtonPrefab;
              do
              {
                if ( v43 >= max_length )
                  goto LABEL_89;
                v47 = *(MapButtonEntity_o **)((char *)&v24->obj.klass + v46);
                v48 = v44;
                v49 = v32;
                v50 = terminalMap;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v51 = UnityEngine_Object__Instantiate_object_(
                        (Il2CppObject *)MapButtonPrefab,
                        (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                klass = p_buttons->klass;
                Master_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                           (UnityEngine_GameObject_o *)v51,
                                           (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
                if ( !klass )
                  goto LABEL_88;
                v55 = Master_object;
                if ( Master_object )
                {
                  Master_object = sub_1C32D5C(Master_object, *((_QWORD *)klass->_1.image + 8));
                  if ( !Master_object )
                  {
                    v75 = sub_1C32EA0();
                    sub_1C32D48(v75, 0);
                  }
                }
                if ( v43 >= LODWORD(klass->_1.namespaze) )
                  goto LABEL_89;
                *(void **)((char *)&klass->_1.image + v46) = (void *)v55;
                sub_1C32BC4((CGThumbnailListItem_o *)((char *)klass + v46), v55, v53, v54);
                if ( (v81 & 1) != 0 )
                {
                  v57 = 0;
                  terminalMap = v50;
                }
                else
                {
                  if ( !v47 )
                    goto LABEL_88;
                  Master_object = (__int64)v78;
                  if ( !v78 )
                    goto LABEL_88;
                  terminalMap = v50;
                  Master_object = System_Collections_Generic_List_int___Contains(
                                    v78,
                                    v47->fields.id,
                                    (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
                  v57 = Master_object & 1;
                }
                v58 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_88;
                if ( v43 >= LODWORD(v58->_1.namespaze) )
LABEL_89:
                  sub_1C32E84(Master_object);
                Master_object = *(__int64 *)((char *)&v58->_1.image + v46);
                if ( !Master_object )
                  goto LABEL_88;
                MapButtonPrefab__SetupButton(
                  (MapButtonPrefab_o *)Master_object,
                  mapAtlases,
                  v83->fields.commonUI,
                  terminalMap,
                  v47,
                  isMapButtonTop,
                  v57,
                  v56);
                buttons = v83->fields.buttons;
                if ( !buttons )
                  goto LABEL_88;
                v61 = v89;
                if ( v43 >= LODWORD(buttons->max_length) )
                  goto LABEL_89;
                Master_object = *(__int64 *)((char *)&buttons->obj.klass + v46);
                v62 = mapId;
                v63 = currentMapLayerId;
                v32 = v49;
                v64 = v49 | v88;
                if ( (v49 & 1) != 0 )
                {
                  v45 = mapId;
                  v61 = *(__int64 *)((char *)&buttons->obj.klass + v46);
                  v44 = currentMapLayerId;
                }
                else
                {
                  v44 = v48;
                }
                v89 = v61;
                if ( (v32 & 1) != 0 )
                {
                  if ( (v77 & 1) != 0 )
                  {
                    v65 = 1;
                  }
                  else
                  {
                    v66 = v76;
                    Master_object = v61;
                    v62 = v45;
                    v63 = v44;
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
                if ( v43 >= LODWORD(v67->_1.namespaze) )
                  goto LABEL_89;
                v68 = *(MapButtonPrefab_o **)((char *)&v67->_1.image + v46);
                Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                if ( !v47 )
                  goto LABEL_88;
                if ( !Master_object )
                  goto LABEL_88;
                Master_object = QuestTree__GetQuestCountForMap(
                                  (QuestTree_o *)Master_object,
                                  v47->fields.targetMapId,
                                  v47->fields.layer,
                                  0);
                if ( !v68 )
                  goto LABEL_88;
                MapButtonPrefab__SetBadge(v68, Master_object, v69);
                v70 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_88;
                if ( v43 >= LODWORD(v70->_1.namespaze) )
                  goto LABEL_89;
                v71 = *(MapButtonPrefab_o **)((char *)&v70->_1.image + v46);
                Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
                if ( !Master_object )
                  goto LABEL_88;
                Master_object = QuestTree__IsNextSpotForMap(
                                  (QuestTree_o *)Master_object,
                                  v47->fields.targetMapId,
                                  v47->fields.layer,
                                  0);
                if ( !v71 )
                  goto LABEL_88;
                MapButtonPrefab__SetNext(v71, Master_object & 1, v72);
                if ( !v51 )
                  goto LABEL_88;
                v73 = *p_gridComponent;
                Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v51, 0);
                MapButtonPrefab = v80;
                if ( !v73 )
                  goto LABEL_88;
                UIGrid__AddChild(v73, (UnityEngine_Transform_o *)Master_object, 0);
                GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v51, v74);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v51, 0, 0);
                v24 = v79;
                ++v43;
                v46 += 8;
                max_length = v79->max_length;
              }
              while ( (int)v43 < max_length );
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
  UnityEngine_Component_o *transform; // x0
  int32_t v5; // w21
  UnityEngine_Object_o *Child; // x22
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *GridComponentTop; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w21
  UnityEngine_Object_o *v12; // x22
  UnityEngine_Object_o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C34488 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34488 = 1;
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
        v5 = 0;
        do
        {
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
          if ( !transform )
            break;
          if ( v5 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0) )
            goto LABEL_22;
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          if ( !transform )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
          if ( !transform )
            break;
          Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v5, 0);
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
            UnityEngine_Object__Destroy_71223640(gameObject, 0);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          ++v5;
        }
        while ( transform );
      }
LABEL_39:
      sub_1C32E7C(transform);
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
        v11 = 0;
        do
        {
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
          if ( !transform )
            break;
          if ( v11 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0) )
            goto LABEL_40;
          transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          if ( !transform )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
          if ( !transform )
            break;
          v12 = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v11, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(v12, 0, 0);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            if ( !v12 )
              goto LABEL_39;
            v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_71223640(v13, 0);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          ++v11;
        }
        while ( transform );
      }
      goto LABEL_39;
    }
LABEL_40:
    this->fields.buttons = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.buttons, 0, v9, v10);
    this->fields.currentMapButtonPrefab = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.currentMapButtonPrefab, 0, v14, v15);
  }
}


void MapButtonControl__FrameIn(MapButtonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x21
  struct MapButtonPrefab_array *buttons; // x8
  System_Collections_Generic_List_object__o *v5; // x20
  System_Collections_Generic_List_object__o *v6; // x23
  System_Collections_Generic_List_object__o *object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o **v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct MapButtonPrefab_array *v13; // x24
  int max_length; // w8
  unsigned int v15; // w25
  MapButtonPrefab_o *v16; // x23
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x8
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0
  System_Action_o *v25; // x22
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C34489 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapButtonPrefab__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    sub_1C32C20(&Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__);
    sub_1C32C20(&MapButtonControl___c__DisplayClass16_0_TypeInfo);
    byte_4C34489 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = sub_1C32E6C(MapButtonControl___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  buttons = this->fields.buttons;
  if ( buttons && buttons->max_length )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    if ( !v3 )
      goto LABEL_32;
    *(_QWORD *)(v3 + 16) = v6;
    v10 = (System_Collections_Generic_List_object__o **)(v3 + 16);
    sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)v6, v8, v9);
    v13 = this->fields.buttons;
    if ( !v13 )
      goto LABEL_32;
    max_length = v13->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= max_length )
          sub_1C32E84(object);
        v16 = v13->m_Items[v15];
        if ( !v16 )
          break;
        if ( v16->fields.isNew )
        {
          object = *v10;
          if ( !*v10 )
            break;
          items = object->fields._items;
          v18 = Method_System_Collections_Generic_List_MapButtonPrefab__Add__;
          ++object->fields._version;
          if ( !items )
            break;
          size = object->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              object,
              (Il2CppObject *)v16,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            object->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v16;
            sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v16, v11, v12);
          }
          v16->fields.isNew = 0;
        }
        else
        {
          if ( !v5 )
            break;
          v21 = v5->fields._items;
          v22 = Method_System_Collections_Generic_List_MapButtonPrefab__Add__;
          ++v5->fields._version;
          if ( !v21 )
            break;
          v23 = v5->fields._size;
          if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v16,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &v21->obj.klass + v23;
            v5->fields._size = v23 + 1;
            v24[4] = (Il2CppClass *)v16;
            sub_1C32BC4((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v16, v11, v12);
          }
        }
        max_length = v13->max_length;
        if ( (int)++v15 >= max_length )
          goto LABEL_24;
      }
LABEL_32:
      sub_1C32E7C(object);
    }
LABEL_24:
    v25 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v25, (Il2CppObject *)v3, Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, 0);
    this->fields.newButtonEntryAnimAction = v25;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.newButtonEntryAnimAction, (int32_t)v25, v26, v27);
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
    {
      object = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Last_object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                              (const MethodInfo_31082C4 *)Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
      if ( !v5 )
        goto LABEL_32;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v29,
        v5,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v29,
                (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
      {
        if ( !v29.fields._current )
          sub_1C32E7C(0);
        MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v29.fields._current, 0, v28);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v29,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
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
          sub_1C32E84(this);
        v5 = buttons->m_Items[v4];
        if ( !v5 )
          sub_1C32E7C(0);
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
  Il2CppObject *Object_object__51111776; // x20

  if ( (byte_4C34485 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&MapButtonControl_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34485 = 1;
  }
  if ( !mapAssetData )
    return this->fields.buttonPrefab;
  v5 = MapButtonControl_TypeInfo;
  if ( !MapButtonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonControl_TypeInfo);
    v5 = MapButtonControl_TypeInfo;
  }
  Object_object__51111776 = AssetData__GetObject_object__51111776(
                              mapAssetData,
                              v5->static_fields->MAP_BUTTON_PREFAB_NAME,
                              (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51111776, 0, 0) )
    return this->fields.buttonPrefab;
  return (UnityEngine_GameObject_o *)Object_object__51111776;
}


void MapButtonControl__PlayNewButtonEntryAnim(MapButtonControl_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_newButtonEntryAnimAction; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  p_newButtonEntryAnimAction = (CGThumbnailListItem_o *)&this->fields.newButtonEntryAnimAction;
  ActionExtensions__Call(this->fields.newButtonEntryAnimAction, 0);
  p_newButtonEntryAnimAction->klass = 0;
  sub_1C32BC4(p_newButtonEntryAnimAction, 0, v3, v4);
}


void MapButtonControl__SetNext(
        MapButtonControl_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        MapControl_SpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  MapButtonEntity_array *Master_object; // x0
  int max_length; // w8
  MapButtonEntity_array *v11; // x21
  unsigned int v12; // w22
  struct MapButtonPrefab_array *buttons; // x9
  Il2CppClass **v14; // x24
  Il2CppClass *v15; // x8
  char *v16; // x24
  Il2CppClass *v17; // t1
  int namespaze; // w25
  int v19; // w24
  const MethodInfo *v20; // x2
  struct MapButtonPrefab_array *v21; // x8

  if ( (byte_4C34486 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_MapButtonMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C34486 = 1;
  }
  if ( this->fields.buttons )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (MapButtonEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_object )
      goto LABEL_25;
    Master_object = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Master_object, warInf, mapInf, 0);
    if ( !Master_object )
      goto LABEL_25;
    max_length = Master_object->max_length;
    v11 = Master_object;
    if ( max_length >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        buttons = this->fields.buttons;
        if ( !buttons )
          break;
        if ( (signed int)v12 >= SLODWORD(buttons->max_length) )
          return;
        if ( v12 >= max_length )
          goto LABEL_26;
        v14 = &v11->obj.klass + (int)v12;
        v17 = v14[4];
        v16 = (char *)(v14 + 4);
        v15 = v17;
        if ( !v17 || !spotInfo )
          break;
        namespaze = (int)v15->_1.namespaze;
        Master_object = (MapButtonEntity_array *)MapControl_SpotInfo__GetMapID(spotInfo, 0);
        if ( namespaze == (_DWORD)Master_object )
        {
          if ( v12 >= LODWORD(v11->max_length) )
            goto LABEL_26;
          if ( !*(_QWORD *)v16 )
            break;
          v19 = *(_DWORD *)(*(_QWORD *)v16 + 28LL);
          Master_object = (MapButtonEntity_array *)MapControl_SpotInfo__GetLayer(spotInfo, 0);
          if ( v19 == (_DWORD)Master_object )
          {
            v21 = this->fields.buttons;
            if ( !v21 )
              break;
            if ( v12 >= LODWORD(v21->max_length) )
LABEL_26:
              sub_1C32E84(Master_object);
            Master_object = (MapButtonEntity_array *)v21->m_Items[v12];
            if ( !Master_object )
              break;
            MapButtonPrefab__SetNext((MapButtonPrefab_o *)Master_object, 1, v20);
          }
        }
        max_length = v11->max_length;
        if ( (int)++v12 >= max_length )
          return;
      }
LABEL_25:
      sub_1C32E7C(Master_object);
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
  MapButtonEntity_array *v8; // x20
  unsigned int v9; // w21
  struct MapButtonPrefab_array *buttons; // x8
  MapButtonEntity_o *v11; // x8
  const MethodInfo *v12; // x2
  struct MapButtonPrefab_array *v13; // x8
  int32_t v14; // w1

  if ( (byte_4C34487 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_MapButtonMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C34487 = 1;
  }
  if ( this->fields.buttons )
  {
    Instance = (MapButtonEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (MapButtonEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_MapButtonMaster___);
    if ( !Instance )
      goto LABEL_19;
    Instance = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Instance, warInf, mapInf, 0);
    if ( !Instance )
      goto LABEL_19;
    v8 = Instance;
    if ( SLODWORD(Instance->max_length) >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        buttons = this->fields.buttons;
        if ( !buttons )
          break;
        if ( (signed int)v9 >= SLODWORD(buttons->max_length) )
          return;
        Instance = (MapButtonEntity_array *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( v9 >= LODWORD(v8->max_length) )
LABEL_20:
          sub_1C32E84(Instance);
        v11 = v8->m_Items[v9];
        if ( !v11 )
          break;
        if ( !Instance )
          break;
        Instance = (MapButtonEntity_array *)QuestTree__GetQuestCountForMap(
                                              (QuestTree_o *)Instance,
                                              v11->fields.targetMapId,
                                              v11->fields.layer,
                                              0);
        v13 = this->fields.buttons;
        if ( !v13 )
          break;
        if ( v9 >= LODWORD(v13->max_length) )
          goto LABEL_20;
        v14 = (int)Instance;
        Instance = (MapButtonEntity_array *)v13->m_Items[v9];
        if ( !Instance )
          break;
        MapButtonPrefab__SetBadge((MapButtonPrefab_o *)Instance, v14, v12);
        if ( (signed int)++v9 >= SLODWORD(v8->max_length) )
          return;
      }
LABEL_19:
      sub_1C32E7C(Instance);
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
          sub_1C32E84(terminalMap);
        terminalMap = (ScrTerminalMap_o *)buttons->m_Items[v11];
        if ( !terminalMap )
          break;
        MapButtonPrefab__SetButtonSprite((MapButtonPrefab_o *)terminalMap, v12, mapId, currentMapLayerId, 0, v4);
        max_length = buttons->max_length;
        if ( (int)++v11 >= max_length )
          return;
      }
LABEL_12:
      sub_1C32E7C(terminalMap);
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
  System_Collections_Generic_List_object__o *newButtonList; // x0
  const MethodInfo *v4; // x2
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3448B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    byte_4C3448B = 1;
  }
  memset(&v5, 0, sizeof(v5));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.newButtonList,
         (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
  {
    newButtonList = (System_Collections_Generic_List_object__o *)this->fields.newButtonList;
    if ( !newButtonList )
      sub_1C32E7C(0);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      newButtonList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_1C32E7C(0);
      MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v5.fields._current, 0, v4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
  }
}