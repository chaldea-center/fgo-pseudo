void __fastcall MapButtonControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49F922C & 1) == 0 )
  {
    sub_1B640C8(&MapButtonControl_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_8809/*"MapBtnPrefab"*/, v4);
    byte_49F922C = 1;
  }
  MapButtonControl_TypeInfo->static_fields->MAP_BUTTON_PREFAB_NAME = (struct System_String_o *)StringLiteral_8809/*"MapBtnPrefab"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)MapButtonControl_TypeInfo->static_fields, StringLiteral_8809/*"MapBtnPrefab"*/, v2, v3);
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
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 Master_object; // x0
  MapButtonEntity_array *OpenedButtons; // x0
  struct UIGrid_o *GridComponentBottom; // x1
  MapButtonEntity_array *v37; // x20
  int32_t v38; // w2
  int32_t v39; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  struct UIGrid_o *GridComponentTop; // x1
  struct MapControl_MapInfo_o *mMapInfo; // x8
  int v45; // w22
  __int64 v46; // x1
  Il2CppObject *v47; // x19
  int32_t v48; // w29
  bool v49; // w8
  struct UIGrid_o *v50; // x19
  const MethodInfo *v51; // x1
  float GridCellHeight; // s0
  __int64 v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  __int64 v56; // x1
  int max_length; // w8
  unsigned int v58; // w25
  int32_t v59; // w23
  int32_t v60; // w21
  __int64 v61; // x24
  MapButtonEntity_o *v62; // x19
  int32_t v63; // w28
  int v64; // w23
  ScrTerminalMap_o *v65; // x22
  Il2CppObject *v66; // x20
  ServantStatusBattleListViewItem_c *klass; // x27
  int32_t v68; // w2
  int32_t v69; // w3
  __int64 v70; // x26
  const MethodInfo *v71; // x7
  bool v72; // w6
  ServantStatusBattleListViewItem_c *v73; // x8
  const MethodInfo *v74; // x5
  struct MapButtonPrefab_array *buttons; // x8
  __int64 v76; // x10
  int32_t v77; // w2
  int32_t v78; // w3
  int v79; // w9
  char v80; // w8
  bool v81; // w4
  ServantStatusBattleListViewItem_c *v82; // x8
  MapButtonPrefab_o *v83; // x26
  const MethodInfo *v84; // x2
  ServantStatusBattleListViewItem_c *v85; // x8
  MapButtonPrefab_o *v86; // x26
  const MethodInfo *v87; // x2
  UIGrid_o *v88; // x19
  const MethodInfo *v89; // x1
  __int64 v90; // x0
  bool v91; // [xsp+0h] [xbp-D0h]
  char v92; // [xsp+4h] [xbp-CCh]
  System_Collections_Generic_List_int__o *v93; // [xsp+8h] [xbp-C8h]
  MapButtonEntity_array *v94; // [xsp+10h] [xbp-C0h]
  struct UnityEngine_GameObject_o *v95; // [xsp+18h] [xbp-B8h]
  char v96; // [xsp+20h] [xbp-B0h]
  int32_t currentMapLayerId; // [xsp+24h] [xbp-ACh]
  MapButtonControl_o *v98; // [xsp+28h] [xbp-A8h]
  char isMapButtonTop; // [xsp+34h] [xbp-9Ch]
  int32_t mapId; // [xsp+44h] [xbp-8Ch]
  struct UIGrid_o **p_gridComponent; // [xsp+48h] [xbp-88h]
  int v103; // [xsp+54h] [xbp-7Ch]
  __int64 v104; // [xsp+58h] [xbp-78h]
  ServantStatusBattleListViewItem_o *p_buttons; // [xsp+60h] [xbp-70h]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_49F9226 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventDetailMaster___, warInf);
    sub_1B640C8(&Method_DataManager_GetMaster_MapButtonMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMaster_MapCondMaster___, v13);
    sub_1B640C8(&DataManager_TypeInfo, v14);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v15);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___, v16);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1B640C8(&MapButtonPrefab___TypeInfo, v20);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v21);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v22);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v23);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v24);
    byte_49F9226 = 1;
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.newButtonEntryAnimAction, 0, v28, v29);
    this->fields.terminalMap = terminalMap;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.terminalMap, (int32_t)terminalMap, v30, v31);
    this->fields.currentMapButtonPrefab = MapButtonPrefab;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.currentMapButtonPrefab,
      (int32_t)MapButtonPrefab,
      v32,
      v33);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_object )
      goto LABEL_92;
    OpenedButtons = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Master_object, warInf, mapInf, 0LL);
    GridComponentBottom = this->fields.GridComponentBottom;
    v37 = OpenedButtons;
    this->fields.gridComponent = GridComponentBottom;
    p_gridComponent = &this->fields.gridComponent;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.gridComponent,
      (int32_t)GridComponentBottom,
      v38,
      v39);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( !warInf )
      goto LABEL_92;
    v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    Master_object = MapControl_WarInfo__GetEventId(warInf, 0LL);
    if ( !v40 )
      goto LABEL_92;
    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                      v40,
                      &entity,
                      Master_object,
                      (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)p_gridComponent, (int32_t)GridComponentTop, v41, v42);
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
      sub_1B64324(Master_object);
    }
    v45 = Master_object;
    mapId = mMapInfo->fields.mapId;
    currentMapLayerId = terminalMap->fields.currentMapLayerId;
    if ( (Master_object & 1) != 0 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v47 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_MapCondMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9258 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v46);
        byte_49F9258 = 1;
      }
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      v48 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 140LL);
      if ( !byte_49F9259 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v46);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
        byte_49F9259 = 1;
      }
      if ( !*(_DWORD *)(Master_object + 224) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      if ( !v47 )
        goto LABEL_92;
      Master_object = (__int64)MapCondMaster__GetReleasedMapButtonIdList(
                                 (MapCondMaster_o *)v47,
                                 mapId,
                                 v48,
                                 *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 144LL),
                                 0LL);
      if ( Master_object )
      {
        if ( !v37 )
          goto LABEL_92;
        v92 = 0;
        v49 = *(_DWORD *)(Master_object + 24) < (signed int)v37->max_length;
        goto LABEL_38;
      }
    }
    else
    {
      Master_object = 0LL;
    }
    v92 = 1;
    v49 = 1;
LABEL_38:
    v91 = v49;
    v93 = (System_Collections_Generic_List_int__o *)Master_object;
    if ( MapButtonPrefab )
    {
      v50 = *p_gridComponent;
      Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 MapButtonPrefab,
                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
      if ( Master_object )
      {
        GridCellHeight = MapButtonPrefab__GetGridCellHeight((MapButtonPrefab_o *)Master_object, v51);
        if ( v50 )
        {
          v98 = this;
          v50->fields.cellHeight = GridCellHeight;
          if ( v37 )
          {
            v53 = sub_1B64170(MapButtonPrefab___TypeInfo, v37->max_length);
            p_buttons->klass = (ServantStatusBattleListViewItem_c *)v53;
            sub_1B6406C(p_buttons, v53, v54, v55);
            max_length = v37->max_length;
            if ( max_length >= 1 )
            {
              v103 = 0;
              v104 = 0LL;
              v58 = 0;
              v59 = 0;
              v60 = 0;
              v61 = 32LL;
              v96 = v92 | v45 ^ 1;
              v94 = v37;
              v95 = MapButtonPrefab;
              do
              {
                if ( v58 >= max_length )
                  goto LABEL_93;
                v62 = *(MapButtonEntity_o **)((char *)&v37->obj.klass + v61);
                v63 = v59;
                v64 = v45;
                v65 = terminalMap;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v66 = UnityEngine_Object__Instantiate_object_(
                        (Il2CppObject *)MapButtonPrefab,
                        (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                klass = p_buttons->klass;
                Master_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                           (UnityEngine_GameObject_o *)v66,
                                           (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
                if ( !klass )
                  goto LABEL_92;
                v70 = Master_object;
                if ( Master_object )
                {
                  Master_object = sub_1B64204(Master_object, *((_QWORD *)klass->_1.image + 8));
                  if ( !Master_object )
                  {
                    v90 = sub_1B64348();
                    sub_1B641F0(v90, 0LL);
                  }
                }
                if ( v58 >= LODWORD(klass->_1.namespaze) )
                  goto LABEL_93;
                *(void **)((char *)&klass->_1.image + v61) = (void *)v70;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)klass + v61), v70, v68, v69);
                if ( (v96 & 1) != 0 )
                {
                  v72 = 0;
                  terminalMap = v65;
                }
                else
                {
                  if ( !v62 )
                    goto LABEL_92;
                  Master_object = (__int64)v93;
                  if ( !v93 )
                    goto LABEL_92;
                  terminalMap = v65;
                  Master_object = System_Collections_Generic_List_int___Contains(
                                    v93,
                                    v62->fields.id,
                                    (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
                  v72 = Master_object & 1;
                }
                v73 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_92;
                if ( v58 >= LODWORD(v73->_1.namespaze) )
LABEL_93:
                  sub_1B6432C(Master_object, v56);
                Master_object = *(__int64 *)((char *)&v73->_1.image + v61);
                if ( !Master_object )
                  goto LABEL_92;
                MapButtonPrefab__SetupButton(
                  (MapButtonPrefab_o *)Master_object,
                  mapAtlases,
                  v98->fields.commonUI,
                  terminalMap,
                  v62,
                  isMapButtonTop,
                  v72,
                  v71);
                buttons = v98->fields.buttons;
                if ( !buttons )
                  goto LABEL_92;
                v76 = v104;
                if ( v58 >= buttons->max_length )
                  goto LABEL_93;
                Master_object = *(__int64 *)((char *)&buttons->obj.klass + v61);
                v77 = mapId;
                v78 = currentMapLayerId;
                v45 = v64;
                v79 = v64 | v103;
                if ( (v64 & 1) != 0 )
                  v60 = mapId;
                if ( (v64 & 1) != 0 )
                  v76 = *(__int64 *)((char *)&buttons->obj.klass + v61);
                if ( (v64 & 1) != 0 )
                  v59 = currentMapLayerId;
                else
                  v59 = v63;
                v104 = v76;
                if ( (v45 & 1) != 0 )
                {
                  if ( (v92 & 1) != 0 )
                  {
                    v80 = 1;
                  }
                  else
                  {
                    v81 = v91;
                    Master_object = v76;
                    v77 = v60;
                    v78 = v59;
                    v80 = v79;
                    if ( v93->fields._size > 0 )
                      goto LABEL_73;
                  }
                }
                else
                {
                  v80 = 0;
                }
                v81 = 0;
LABEL_73:
                v103 = v79;
                if ( !Master_object )
                  goto LABEL_92;
                MapButtonPrefab__SetButtonSprite((MapButtonPrefab_o *)Master_object, v80 & 1, v77, v78, v81, v74);
                v82 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_92;
                if ( v58 >= LODWORD(v82->_1.namespaze) )
                  goto LABEL_93;
                v83 = *(MapButtonPrefab_o **)((char *)&v82->_1.image + v61);
                Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
                if ( !v62 )
                  goto LABEL_92;
                if ( !Master_object )
                  goto LABEL_92;
                Master_object = QuestTree__GetQuestCountForMap(
                                  (QuestTree_o *)Master_object,
                                  v62->fields.targetMapId,
                                  v62->fields.layer,
                                  0LL);
                if ( !v83 )
                  goto LABEL_92;
                MapButtonPrefab__SetBadge(v83, Master_object, v84);
                v85 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_92;
                if ( v58 >= LODWORD(v85->_1.namespaze) )
                  goto LABEL_93;
                v86 = *(MapButtonPrefab_o **)((char *)&v85->_1.image + v61);
                Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
                if ( !Master_object )
                  goto LABEL_92;
                Master_object = QuestTree__IsNextSpotForMap(
                                  (QuestTree_o *)Master_object,
                                  v62->fields.targetMapId,
                                  v62->fields.layer,
                                  0LL);
                if ( !v86 )
                  goto LABEL_92;
                MapButtonPrefab__SetNext(v86, Master_object & 1, v87);
                if ( !v66 )
                  goto LABEL_92;
                v88 = *p_gridComponent;
                Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v66, 0LL);
                MapButtonPrefab = v95;
                if ( !v88 )
                  goto LABEL_92;
                UIGrid__AddChild(v88, (UnityEngine_Transform_o *)Master_object, 0LL);
                GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v66, v89);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v66, 0, 0LL);
                v37 = v94;
                ++v58;
                v61 += 8LL;
                max_length = v94->max_length;
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
  UnityEngine_Component_o *transform; // x0
  int32_t v5; // w21
  UnityEngine_Object_o *Child; // x22
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *GridComponentTop; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w21
  UnityEngine_Object_o *v12; // x22
  UnityEngine_Object_o *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49F922A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F922A = 1;
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
        v5 = 0;
        do
        {
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          if ( v5 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) )
            goto LABEL_22;
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          if ( !transform )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v5, 0LL);
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
            UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          ++v5;
        }
        while ( transform );
      }
LABEL_39:
      sub_1B64324(transform);
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
        v11 = 0;
        do
        {
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          if ( v11 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) )
            goto LABEL_40;
          transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          if ( !transform )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          v12 = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v11, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(v12, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            if ( !v12 )
              goto LABEL_39;
            v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_69127736(v13, 0LL);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          ++v11;
        }
        while ( transform );
      }
      goto LABEL_39;
    }
LABEL_40:
    this->fields.buttons = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.buttons, 0, v9, v10);
    this->fields.currentMapButtonPrefab = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.currentMapButtonPrefab, 0, v14, v15);
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
  System_Collections_Generic_List_object__o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x23
  System_Collections_Generic_List_object__o *object; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_List_object__o **v26; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  int32_t v29; // w3
  struct MapButtonPrefab_array *v30; // x24
  int max_length; // w8
  unsigned int v32; // w25
  MapButtonPrefab_o *v33; // x23
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x8
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  System_Action_o *v42; // x22
  int32_t v43; // w2
  int32_t v44; // w3
  const MethodInfo *v45; // x2
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F922B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Last_MapButtonPrefab___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapButtonPrefab__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapButtonPrefab___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_MapButtonPrefab__TypeInfo, v12);
    sub_1B640C8(&Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, v13);
    sub_1B640C8(&MapButtonControl___c__DisplayClass16_0_TypeInfo, v14);
    byte_49F922B = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v15 = sub_1B64314(MapButtonControl___c__DisplayClass16_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  buttons = this->fields.buttons;
  if ( buttons && *(_QWORD *)&buttons->max_length )
  {
    v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_MapButtonPrefab__TypeInfo,
                                                         v16,
                                                         v17);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    v22 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_MapButtonPrefab__TypeInfo,
                                                         v20,
                                                         v21);
    System_Collections_Generic_List_object____ctor(
      v22,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    if ( !v15 )
      goto LABEL_32;
    *(_QWORD *)(v15 + 16) = v22;
    v26 = (System_Collections_Generic_List_object__o **)(v15 + 16);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)v22, v24, v25);
    v30 = this->fields.buttons;
    if ( !v30 )
      goto LABEL_32;
    max_length = v30->max_length;
    if ( max_length >= 1 )
    {
      v32 = 0;
      while ( 1 )
      {
        if ( v32 >= max_length )
          sub_1B6432C(object, v27);
        v33 = v30->m_Items[v32];
        if ( !v33 )
          break;
        if ( v33->fields.isNew )
        {
          object = *v26;
          if ( !*v26 )
            break;
          items = object->fields._items;
          v35 = Method_System_Collections_Generic_List_MapButtonPrefab__Add__;
          ++object->fields._version;
          if ( !items )
            break;
          size = object->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              object,
              (Il2CppObject *)v33,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            object->fields._size = size + 1;
            v37[4] = (Il2CppClass *)v33;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v33, v28, v29);
          }
          v33->fields.isNew = 0;
        }
        else
        {
          if ( !v19 )
            break;
          v38 = v19->fields._items;
          v39 = Method_System_Collections_Generic_List_MapButtonPrefab__Add__;
          ++v19->fields._version;
          if ( !v38 )
            break;
          v40 = v19->fields._size;
          if ( (unsigned int)v40 >= v38->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v19,
              (Il2CppObject *)v33,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &v38->obj.klass + v40;
            v19->fields._size = v40 + 1;
            v41[4] = (Il2CppClass *)v33;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v33, v28, v29);
          }
        }
        max_length = v30->max_length;
        if ( (int)++v32 >= max_length )
          goto LABEL_24;
      }
LABEL_32:
      sub_1B64324(object);
    }
LABEL_24:
    v42 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v27, v28);
    System_Action___ctor(v42, (Il2CppObject *)v15, Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, 0LL);
    this->fields.newButtonEntryAnimAction = v42;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.newButtonEntryAnimAction, (int32_t)v42, v43, v44);
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v19,
           (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
    {
      object = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Last_object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                                                              (const MethodInfo_2E5EC80 *)Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
      if ( !v19 )
        goto LABEL_32;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v46,
        v19,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v46,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
      {
        if ( !v46.fields._current )
          sub_1B64324(0LL);
        MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v46.fields._current, 0LL, v45);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v46,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
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
          sub_1B6432C(this, method);
        v5 = buttons->m_Items[v4];
        if ( !v5 )
          sub_1B64324(0LL);
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
  Il2CppObject *Object_object__48347676; // x20

  if ( (byte_49F9227 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, mapAssetData);
    sub_1B640C8(&MapButtonControl_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49F9227 = 1;
  }
  if ( !mapAssetData )
    return this->fields.buttonPrefab;
  v7 = MapButtonControl_TypeInfo;
  if ( !MapButtonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonControl_TypeInfo);
    v7 = MapButtonControl_TypeInfo;
  }
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              mapAssetData,
                              v7->static_fields->MAP_BUTTON_PREFAB_NAME,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL) )
    return this->fields.buttonPrefab;
  return (UnityEngine_GameObject_o *)Object_object__48347676;
}


void __fastcall MapButtonControl__PlayNewButtonEntryAnim(MapButtonControl_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_newButtonEntryAnimAction; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  p_newButtonEntryAnimAction = (ServantStatusBattleListViewItem_o *)&this->fields.newButtonEntryAnimAction;
  ActionExtensions__Call(this->fields.newButtonEntryAnimAction, 0LL);
  p_newButtonEntryAnimAction->klass = 0LL;
  sub_1B6406C(p_newButtonEntryAnimAction, 0, v3, v4);
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

  if ( (byte_49F9228 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_MapButtonMaster___, warInf);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    byte_49F9228 = 1;
  }
  if ( this->fields.buttons )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (MapButtonMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_MapButtonMaster___);
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
              sub_1B6432C(Master_object, v11);
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
      sub_1B64324(Master_object);
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
  MapButtonEntity_array *v10; // x20
  il2cpp_array_size_t v11; // w21
  struct MapButtonPrefab_array *buttons; // x8
  __int64 v13; // x1
  MapButtonEntity_o *v14; // x8
  const MethodInfo *v15; // x2
  struct MapButtonPrefab_array *v16; // x8
  int32_t v17; // w1

  if ( (byte_49F9229 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_MapButtonMaster___, warInf);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v8);
    byte_49F9229 = 1;
  }
  if ( this->fields.buttons )
  {
    Instance = (MapButtonEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (MapButtonEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_MapButtonMaster___);
    if ( !Instance )
      goto LABEL_19;
    Instance = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Instance, warInf, mapInf, 0LL);
    if ( !Instance )
      goto LABEL_19;
    v10 = Instance;
    if ( (int)Instance->max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        buttons = this->fields.buttons;
        if ( !buttons )
          break;
        if ( (signed int)v11 >= (signed int)buttons->max_length )
          return;
        Instance = (MapButtonEntity_array *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( v11 >= v10->max_length )
LABEL_20:
          sub_1B6432C(Instance, v13);
        v14 = v10->m_Items[v11];
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
        if ( v11 >= v16->max_length )
          goto LABEL_20;
        v17 = (int)Instance;
        Instance = (MapButtonEntity_array *)v16->m_Items[v11];
        if ( !Instance )
          break;
        MapButtonPrefab__SetBadge((MapButtonPrefab_o *)Instance, v17, v15);
        if ( (signed int)++v11 >= (signed int)v10->max_length )
          return;
      }
LABEL_19:
      sub_1B64324(Instance);
    }
  }
}


void __fastcall MapButtonControl__UpdateButtonSprite(MapButtonControl_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *terminalMap; // x0
  __int64 v4; // x1
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
          sub_1B6432C(terminalMap, v4);
        terminalMap = (ScrTerminalMap_o *)buttons->m_Items[v12];
        if ( !terminalMap )
          break;
        MapButtonPrefab__SetButtonSprite((MapButtonPrefab_o *)terminalMap, v13, mapId, currentMapLayerId, 0, v5);
        max_length = buttons->max_length;
        if ( (int)++v12 >= max_length )
          return;
      }
LABEL_12:
      sub_1B64324(terminalMap);
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
  System_Collections_Generic_List_object__o *newButtonList; // x0
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F922D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__, v6);
    byte_49F922D = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.newButtonList,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
  {
    newButtonList = (System_Collections_Generic_List_object__o *)this->fields.newButtonList;
    if ( !newButtonList )
      sub_1B64324(0LL);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      newButtonList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
    {
      if ( !v9.fields._current )
        sub_1B64324(0LL);
      MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v9.fields._current, 0LL, v8);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
  }
}