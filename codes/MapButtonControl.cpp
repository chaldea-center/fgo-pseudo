void __fastcall MapButtonControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_4A1C8F7 & 1) == 0 )
  {
    sub_1B715CC(&MapButtonControl_TypeInfo, v1);
    sub_1B715CC(&StringLiteral_8819/*"MapBtnPrefab"*/, v4);
    byte_4A1C8F7 = 1;
  }
  MapButtonControl_TypeInfo->static_fields->MAP_BUTTON_PREFAB_NAME = (struct System_String_o *)StringLiteral_8819/*"MapBtnPrefab"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)MapButtonControl_TypeInfo->static_fields, StringLiteral_8819/*"MapBtnPrefab"*/, v2, v3);
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
  struct UnityEngine_GameObject_o *MapButtonPrefab; // x22
  UnityEngine_Object_o *currentMapButtonPrefab; // x23
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 Master_object; // x0
  const MethodInfo *v35; // x1
  MapButtonEntity_array *OpenedButtons; // x0
  struct UIGrid_o *GridComponentBottom; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x20
  MapButtonEntity_array *v41; // x23
  int32_t v42; // w2
  int32_t v43; // w3
  struct UIGrid_o *GridComponentTop; // x1
  struct MapControl_MapInfo_o *mMapInfo; // x8
  unsigned __int8 v46; // w25
  __int64 v47; // x1
  Il2CppObject *v48; // x19
  int32_t v49; // w29
  bool v50; // w8
  struct UIGrid_o *v51; // x19
  float GridCellHeight; // s0
  __int64 v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  int max_length; // w8
  __int64 *v57; // x22
  unsigned int v58; // w25
  int32_t v59; // w21
  unsigned int v60; // w26
  char v61; // w28
  __int64 v62; // x24
  MapButtonEntity_o *v63; // x19
  const MethodInfo_370B628 **v64; // x29
  ScrTerminalMap_o *v65; // x22
  Il2CppObject *v66; // x20
  ServantStatusBattleListViewItem_c *klass; // x27
  int32_t v68; // w2
  int32_t v69; // w3
  __int64 v70; // x23
  const MethodInfo *v71; // x7
  bool v72; // w6
  ServantStatusBattleListViewItem_c *v73; // x8
  const MethodInfo *v74; // x5
  struct MapButtonPrefab_array *buttons; // x8
  int32_t v76; // w2
  __int64 v77; // x9
  int32_t v78; // w3
  char v79; // w8
  bool v80; // w4
  ServantStatusBattleListViewItem_c *v81; // x8
  MapButtonPrefab_o *v82; // x23
  const MethodInfo *v83; // x2
  ServantStatusBattleListViewItem_c *v84; // x8
  MapButtonPrefab_o *v85; // x23
  const MethodInfo *v86; // x2
  UIGrid_o *v87; // x19
  const MethodInfo *v88; // x1
  __int64 v89; // x0
  bool v90; // [xsp+8h] [xbp-C8h]
  char v91; // [xsp+Ch] [xbp-C4h]
  System_Collections_Generic_List_int__o *v92; // [xsp+10h] [xbp-C0h]
  int32_t currentMapLayerId; // [xsp+1Ch] [xbp-B4h]
  MapButtonControl_o *v94; // [xsp+20h] [xbp-B0h]
  char isMapButtonTop; // [xsp+2Ch] [xbp-A4h]
  Il2CppObject *original; // [xsp+30h] [xbp-A0h]
  unsigned int mapId; // [xsp+40h] [xbp-90h]
  unsigned __int8 v99; // [xsp+44h] [xbp-8Ch]
  MapButtonEntity_array *v100; // [xsp+48h] [xbp-88h]
  struct UIGrid_o **p_gridComponent; // [xsp+50h] [xbp-80h]
  __int64 v102; // [xsp+58h] [xbp-78h]
  ServantStatusBattleListViewItem_o *p_buttons; // [xsp+60h] [xbp-70h]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4A1C8F1 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_EventDetailMaster___, warInf);
    sub_1B715CC(&Method_DataManager_GetMaster_MapButtonMaster___, v12);
    sub_1B715CC(&Method_DataManager_GetMaster_MapCondMaster___, v13);
    sub_1B715CC(&DataManager_TypeInfo, v14);
    sub_1B715CC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v15);
    sub_1B715CC(&Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___, v16);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___, v17);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Contains__, v18);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1B715CC(&MapButtonPrefab___TypeInfo, v20);
    sub_1B715CC(&Method_UnityEngine_Object_Instantiate_GameObject___, v21);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v22);
    sub_1B715CC(&Method_SingletonTemplate_QuestTree__get_Instance__, v23);
    sub_1B715CC(&TerminalPramsManager_TypeInfo, v24);
    byte_4A1C8F1 = 1;
  }
  entity = 0LL;
  MapButtonPrefab = MapButtonControl__GetMapButtonPrefab(this, mapAssetData, (const MethodInfo *)mapInf);
  p_buttons = (ServantStatusBattleListViewItem_o *)&this->fields.buttons;
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
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.newButtonEntryAnimAction, 0, v28, v29);
    this->fields.terminalMap = terminalMap;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.terminalMap, (int32_t)terminalMap, v30, v31);
    this->fields.currentMapButtonPrefab = MapButtonPrefab;
    sub_1B71570(
      (ServantStatusBattleListViewItem_o *)&this->fields.currentMapButtonPrefab,
      (int32_t)MapButtonPrefab,
      v32,
      v33);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_object )
      goto LABEL_92;
    OpenedButtons = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Master_object, warInf, mapInf, 0LL);
    GridComponentBottom = this->fields.GridComponentBottom;
    v100 = OpenedButtons;
    this->fields.gridComponent = GridComponentBottom;
    p_gridComponent = &this->fields.gridComponent;
    sub_1B71570(
      (ServantStatusBattleListViewItem_o *)&this->fields.gridComponent,
      (int32_t)GridComponentBottom,
      v38,
      v39);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( !warInf )
      goto LABEL_92;
    v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    Master_object = (__int64)MapControl_WarInfo__GetMine(warInf, v35);
    if ( !Master_object )
      goto LABEL_92;
    v41 = v100;
    if ( !v40 )
      goto LABEL_92;
    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                      v40,
                      &entity,
                      *(_DWORD *)(Master_object + 96),
                      (const MethodInfo_30F87B4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
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
      sub_1B71570((ServantStatusBattleListViewItem_o *)p_gridComponent, (int32_t)GridComponentTop, v42, v43);
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
      sub_1B71828(Master_object, v35);
    }
    v46 = Master_object;
    mapId = mMapInfo->fields.mapId;
    currentMapLayerId = terminalMap->fields.currentMapLayerId;
    if ( (Master_object & 1) != 0 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v48 = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_MapCondMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A1C97D )
      {
        sub_1B715CC(&TerminalPramsManager_TypeInfo, v47);
        byte_4A1C97D = 1;
      }
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      v49 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 140LL);
      if ( !byte_4A1C97E )
      {
        sub_1B715CC(&TerminalPramsManager_TypeInfo, v47);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
        byte_4A1C97E = 1;
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
        if ( !v100 )
          goto LABEL_92;
        v91 = 0;
        v50 = *(_DWORD *)(Master_object + 24) < (signed int)v100->max_length;
        goto LABEL_39;
      }
    }
    else
    {
      Master_object = 0LL;
    }
    v91 = 1;
    v50 = 1;
LABEL_39:
    v90 = v50;
    v92 = (System_Collections_Generic_List_int__o *)Master_object;
    if ( MapButtonPrefab )
    {
      v51 = *p_gridComponent;
      Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 MapButtonPrefab,
                                 (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
      if ( Master_object )
      {
        GridCellHeight = MapButtonPrefab__GetGridCellHeight((MapButtonPrefab_o *)Master_object, v35);
        if ( v51 )
        {
          v99 = v46;
          original = (Il2CppObject *)MapButtonPrefab;
          v94 = this;
          v51->fields.cellHeight = GridCellHeight;
          if ( v100 )
          {
            v53 = sub_1B71674(MapButtonPrefab___TypeInfo, v100->max_length);
            p_buttons->klass = (ServantStatusBattleListViewItem_c *)v53;
            sub_1B71570(p_buttons, v53, v54, v55);
            max_length = v100->max_length;
            if ( max_length >= 1 )
            {
              v102 = 0LL;
              v57 = &Method_SingletonTemplate_QuestTree__get_Instance__;
              v58 = 0;
              v59 = 0;
              v60 = 0;
              v61 = 0;
              v62 = 32LL;
              do
              {
                if ( v58 >= max_length )
                  goto LABEL_93;
                v63 = *(MapButtonEntity_o **)((char *)&v41->obj.klass + v62);
                v64 = (const MethodInfo_370B628 **)v57;
                v65 = terminalMap;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v66 = UnityEngine_Object__Instantiate_object_(
                        original,
                        (const MethodInfo_2EDE770 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                klass = p_buttons->klass;
                Master_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                           (UnityEngine_GameObject_o *)v66,
                                           (const MethodInfo_2EAC480 *)Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
                if ( !klass )
                  goto LABEL_92;
                v70 = Master_object;
                if ( Master_object )
                {
                  Master_object = sub_1B71708(Master_object, *((_QWORD *)klass->_1.image + 8));
                  if ( !Master_object )
                  {
                    v89 = sub_1B7184C();
                    sub_1B716F4(v89, 0LL);
                  }
                }
                if ( v58 >= LODWORD(klass->_1.namespaze) )
                  goto LABEL_93;
                *(void **)((char *)&klass->_1.image + v62) = (void *)v70;
                sub_1B71570((ServantStatusBattleListViewItem_o *)((char *)klass + v62), v70, v68, v69);
                if ( (((unsigned __int8)v91 | v99 ^ 1) & 1) != 0 )
                {
                  v72 = 0;
                  terminalMap = v65;
                }
                else
                {
                  if ( !v63 )
                    goto LABEL_92;
                  Master_object = (__int64)v92;
                  if ( !v92 )
                    goto LABEL_92;
                  terminalMap = v65;
                  Master_object = System_Collections_Generic_List_int___Contains(
                                    v92,
                                    v63->fields.id,
                                    (const MethodInfo_34B35B4 *)Method_System_Collections_Generic_List_int__Contains__);
                  v72 = Master_object & 1;
                }
                v73 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_92;
                if ( v58 >= LODWORD(v73->_1.namespaze) )
LABEL_93:
                  sub_1B71830(Master_object, v35);
                Master_object = *(__int64 *)((char *)&v73->_1.image + v62);
                if ( !Master_object )
                  goto LABEL_92;
                MapButtonPrefab__SetupButton(
                  (MapButtonPrefab_o *)Master_object,
                  mapAtlases,
                  v94->fields.commonUI,
                  terminalMap,
                  v63,
                  isMapButtonTop,
                  v72,
                  v71);
                buttons = v94->fields.buttons;
                if ( !buttons )
                  goto LABEL_92;
                if ( v58 >= buttons->max_length )
                  goto LABEL_93;
                Master_object = *(__int64 *)((char *)&buttons->obj.klass + v62);
                v76 = mapId;
                v77 = v102;
                v78 = currentMapLayerId;
                v57 = (__int64 *)v64;
                v61 |= v99;
                if ( (v99 & 1) != 0 )
                  v60 = mapId;
                if ( (v99 & 1) != 0 )
                  v77 = *(__int64 *)((char *)&buttons->obj.klass + v62);
                if ( (v99 & 1) != 0 )
                  v59 = currentMapLayerId;
                if ( (v99 & 1) != 0 )
                {
                  if ( (v91 & 1) != 0 )
                  {
                    v79 = 1;
                  }
                  else
                  {
                    v80 = v90;
                    Master_object = v77;
                    v76 = v60;
                    v78 = v59;
                    v79 = v61;
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
                v102 = v77;
                if ( !Master_object )
                  goto LABEL_92;
                MapButtonPrefab__SetButtonSprite((MapButtonPrefab_o *)Master_object, v79 & 1, v76, v78, v80, v74);
                v81 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_92;
                if ( v58 >= LODWORD(v81->_1.namespaze) )
                  goto LABEL_93;
                v82 = *(MapButtonPrefab_o **)((char *)&v81->_1.image + v62);
                Master_object = (__int64)SingletonTemplate_object___get_Instance(*v64);
                if ( !v63 )
                  goto LABEL_92;
                if ( !Master_object )
                  goto LABEL_92;
                Master_object = QuestTree__GetQuestCountForMap(
                                  (QuestTree_o *)Master_object,
                                  v63->fields.targetMapId,
                                  v63->fields.layer,
                                  0LL);
                if ( !v82 )
                  goto LABEL_92;
                MapButtonPrefab__SetBadge(v82, Master_object, v83);
                v84 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_92;
                if ( v58 >= LODWORD(v84->_1.namespaze) )
                  goto LABEL_93;
                v85 = *(MapButtonPrefab_o **)((char *)&v84->_1.image + v62);
                Master_object = (__int64)SingletonTemplate_object___get_Instance(*v64);
                if ( !Master_object )
                  goto LABEL_92;
                Master_object = QuestTree__IsNextSpotForMap(
                                  (QuestTree_o *)Master_object,
                                  v63->fields.targetMapId,
                                  v63->fields.layer,
                                  0LL);
                if ( !v85 )
                  goto LABEL_92;
                MapButtonPrefab__SetNext(v85, Master_object & 1, v86);
                if ( !v66 )
                  goto LABEL_92;
                v87 = *p_gridComponent;
                Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v66, 0LL);
                v41 = v100;
                if ( !v87 )
                  goto LABEL_92;
                UIGrid__AddChild(v87, (UnityEngine_Transform_o *)Master_object, 0LL);
                GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v66, v88);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v66, 0, 0LL);
                max_length = v100->max_length;
                ++v58;
                v62 += 8LL;
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
  int32_t v11; // w3
  int32_t v12; // w21
  UnityEngine_Object_o *v13; // x22
  UnityEngine_Object_o *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A1C8F5 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A1C8F5 = 1;
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
            UnityEngine_Object__Destroy_69257852(gameObject, 0LL);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          ++v6;
        }
        while ( transform );
      }
LABEL_39:
      sub_1B71828(transform, v4);
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
            UnityEngine_Object__Destroy_69257852(v14, 0LL);
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
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.buttons, 0, v10, v11);
    this->fields.currentMapButtonPrefab = 0LL;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.currentMapButtonPrefab, 0, v15, v16);
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
  int32_t v21; // w3
  System_Collections_Generic_List_object__o **v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
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
  int32_t v39; // w3
  __int64 v40; // x1
  const MethodInfo *v41; // x2
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A1C8F6 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___, v3);
    sub_1B715CC(&Method_System_Linq_Enumerable_Last_MapButtonPrefab___, v4);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_MapButtonPrefab__Add__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_MapButtonPrefab___ctor__, v10);
    sub_1B715CC(&System_Collections_Generic_List_MapButtonPrefab__TypeInfo, v11);
    sub_1B715CC(&Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, v12);
    sub_1B715CC(&MapButtonControl___c__DisplayClass16_0_TypeInfo, v13);
    byte_4A1C8F6 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v14 = sub_1B71818(MapButtonControl___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  buttons = this->fields.buttons;
  if ( buttons && *(_QWORD *)&buttons->max_length )
  {
    v16 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    v17 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v17,
      (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    if ( !v14 )
      goto LABEL_32;
    *(_QWORD *)(v14 + 16) = v17;
    v22 = (System_Collections_Generic_List_object__o **)(v14 + 16);
    sub_1B71570((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)v17, v20, v21);
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
          sub_1B71830(object, v19);
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
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            object->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v28;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)v28, v23, v24);
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
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &v33->obj.klass + v35;
            v16->fields._size = v35 + 1;
            v36[4] = (Il2CppClass *)v28;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v28, v23, v24);
          }
        }
        max_length = v25->max_length;
        if ( (int)++v27 >= max_length )
          goto LABEL_24;
      }
LABEL_32:
      sub_1B71828(object, v19);
    }
LABEL_24:
    v37 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(v37, (Il2CppObject *)v14, Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, 0LL);
    this->fields.newButtonEntryAnimAction = v37;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.newButtonEntryAnimAction, (int32_t)v37, v38, v39);
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v16,
           (const MethodInfo_2E68DBC *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
    {
      object = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Last_object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v16,
                                                              (const MethodInfo_2E814CC *)Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
      if ( !v16 )
        goto LABEL_32;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v42,
        v16,
        (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v42,
                (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
      {
        if ( !v42.fields._current )
          sub_1B71828(0LL, v40);
        MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v42.fields._current, 0LL, v41);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v42,
        (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
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
          sub_1B71830(this, method);
        v5 = buttons->m_Items[v4];
        if ( !v5 )
          sub_1B71828(0LL, method);
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
  Il2CppObject *Object_object__48486748; // x20

  if ( (byte_4A1C8F2 & 1) == 0 )
  {
    sub_1B715CC(&Method_AssetData_GetObject_GameObject____75846976, mapAssetData);
    sub_1B715CC(&MapButtonControl_TypeInfo, v5);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v6);
    byte_4A1C8F2 = 1;
  }
  if ( !mapAssetData )
    return this->fields.buttonPrefab;
  v7 = MapButtonControl_TypeInfo;
  if ( !MapButtonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonControl_TypeInfo);
    v7 = MapButtonControl_TypeInfo;
  }
  Object_object__48486748 = AssetData__GetObject_object__48486748(
                              mapAssetData,
                              v7->static_fields->MAP_BUTTON_PREFAB_NAME,
                              (const MethodInfo_2E3D95C *)Method_AssetData_GetObject_GameObject____75846976);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48486748, 0LL, 0LL) )
    return this->fields.buttonPrefab;
  return (UnityEngine_GameObject_o *)Object_object__48486748;
}


void __fastcall MapButtonControl__PlayNewButtonEntryAnim(MapButtonControl_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_newButtonEntryAnimAction; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  p_newButtonEntryAnimAction = (ServantStatusBattleListViewItem_o *)&this->fields.newButtonEntryAnimAction;
  ActionExtensions__Call(this->fields.newButtonEntryAnimAction, 0LL);
  p_newButtonEntryAnimAction->klass = 0LL;
  sub_1B71570(p_newButtonEntryAnimAction, 0, v3, v4);
}


void __fastcall MapButtonControl__SetNext(
        MapButtonControl_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        MapControl_SpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  __int64 v9; // x1
  MapButtonMaster_o *Master_object; // x0
  const MethodInfo *v11; // x1
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

  if ( (byte_4A1C8F3 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_MapButtonMaster___, warInf);
    sub_1B715CC(&DataManager_TypeInfo, v9);
    byte_4A1C8F3 = 1;
  }
  if ( this->fields.buttons )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (MapButtonMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_object )
      goto LABEL_26;
    Master_object = (MapButtonMaster_o *)MapButtonMaster__GetOpenedButtons(Master_object, warInf, mapInf, 0LL);
    if ( !Master_object )
      goto LABEL_26;
    MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
    v13 = (MapButtonPrefab_o *)Master_object;
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
        if ( !v19 )
          break;
        if ( !spotInfo )
          break;
        namespaze = (int)v17->_1.namespaze;
        Master_object = (MapButtonMaster_o *)MapControl_SpotInfo__GetMine(spotInfo, v11);
        if ( !Master_object )
          break;
        if ( namespaze == LODWORD(Master_object->fields._MasterName_k__BackingField) )
        {
          if ( v14 >= LODWORD(v13->fields.m_CancellationTokenSource) )
            goto LABEL_27;
          if ( !*(_QWORD *)v18 )
            break;
          v21 = *(_DWORD *)(*(_QWORD *)v18 + 28LL);
          Master_object = (MapButtonMaster_o *)MapControl_SpotInfo__GetLayer(spotInfo, v11);
          if ( v21 == (_DWORD)Master_object )
          {
            v23 = this->fields.buttons;
            if ( !v23 )
              break;
            if ( v14 >= v23->max_length )
LABEL_27:
              sub_1B71830(Master_object, v11);
            Master_object = (MapButtonMaster_o *)v23->m_Items[v14];
            if ( !Master_object )
              break;
            MapButtonPrefab__SetNext((MapButtonPrefab_o *)Master_object, 1, v22);
          }
        }
        MasterName_k__BackingField = (int)v13->fields.m_CancellationTokenSource;
        if ( (int)++v14 >= MasterName_k__BackingField )
          return;
      }
LABEL_26:
      sub_1B71828(Master_object, v11);
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
  MapButtonEntity_o *v14; // x8
  const MethodInfo *v15; // x2
  struct MapButtonPrefab_array *v16; // x8

  if ( (byte_4A1C8F4 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_MapButtonMaster___, warInf);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B715CC(&Method_SingletonTemplate_QuestTree__get_Instance__, v8);
    byte_4A1C8F4 = 1;
  }
  if ( this->fields.buttons )
  {
    Instance = (MapButtonEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (MapButtonEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_MapButtonMaster___);
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
        Instance = (MapButtonEntity_array *)SingletonTemplate_object___get_Instance((const MethodInfo_370B628 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( v12 >= v11->max_length )
LABEL_20:
          sub_1B71830(Instance, v10);
        v14 = v11->m_Items[v12];
        if ( !v14 )
          break;
        if ( !Instance )
          break;
        Instance = (MapButtonEntity_array *)QuestTree__GetQuestCountForMap(
                                              (QuestTree_o *)Instance,
                                              v14->fields.targetMapId,
                                              v14->fields.layer,
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
        MapButtonPrefab__SetBadge((MapButtonPrefab_o *)Instance, v10, v15);
        if ( (signed int)++v12 >= (signed int)v11->max_length )
          return;
      }
LABEL_19:
      sub_1B71828(Instance, v10);
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
          sub_1B71830(terminalMap, method);
        terminalMap = (ScrTerminalMap_o *)buttons->m_Items[v11];
        if ( !terminalMap )
          break;
        MapButtonPrefab__SetButtonSprite((MapButtonPrefab_o *)terminalMap, v12, mapId, currentMapLayerId, 0, v4);
        max_length = buttons->max_length;
        if ( (int)++v11 >= max_length )
          return;
      }
LABEL_12:
      sub_1B71828(terminalMap, method);
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

  if ( (byte_4A1C8F8 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__, v3);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__, v4);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__, v6);
    byte_4A1C8F8 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.newButtonList,
         (const MethodInfo_2E68DBC *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
  {
    newButtonList = (System_Collections_Generic_List_object__o *)this->fields.newButtonList;
    if ( !newButtonList )
      sub_1B71828(0LL, v7);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      newButtonList,
      (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
    {
      if ( !v11.fields._current )
        sub_1B71828(0LL, v9);
      MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v11.fields._current, 0LL, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
  }
}