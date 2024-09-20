void __fastcall MapButtonControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A57F6B & 1) == 0 )
  {
    sub_1B885B0(&MapButtonControl_TypeInfo);
    sub_1B885B0(&StringLiteral_8851/*"MapBtnPrefab"*/);
    byte_4A57F6B = 1;
  }
  MapButtonControl_TypeInfo->static_fields->MAP_BUTTON_PREFAB_NAME = (struct System_String_o *)StringLiteral_8851/*"MapBtnPrefab"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)MapButtonControl_TypeInfo->static_fields, StringLiteral_8851/*"MapBtnPrefab"*/, v1, v2);
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
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 Master_object; // x0
  const MethodInfo *v22; // x1
  MapButtonEntity_array *OpenedButtons; // x0
  struct UIGrid_o *GridComponentBottom; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x20
  MapButtonEntity_array *v28; // x23
  int32_t v29; // w2
  int32_t v30; // w3
  struct UIGrid_o *GridComponentTop; // x1
  struct MapControl_MapInfo_o *mMapInfo; // x8
  unsigned __int8 v33; // w25
  Il2CppObject *v34; // x19
  int32_t v35; // w29
  bool v36; // w8
  struct UIGrid_o *v37; // x19
  float GridCellHeight; // s0
  __int64 v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  int max_length; // w8
  __int64 *v43; // x22
  unsigned int v44; // w25
  int32_t v45; // w21
  unsigned int v46; // w26
  char v47; // w28
  __int64 v48; // x24
  MapButtonEntity_o *v49; // x19
  const MethodInfo_3739B38 **v50; // x29
  ScrTerminalMap_o *v51; // x22
  Il2CppObject *v52; // x20
  ServantStatusBattleListViewItem_c *klass; // x27
  int32_t v54; // w2
  int32_t v55; // w3
  __int64 v56; // x23
  const MethodInfo *v57; // x7
  bool v58; // w6
  ServantStatusBattleListViewItem_c *v59; // x8
  const MethodInfo *v60; // x5
  struct MapButtonPrefab_array *buttons; // x8
  int32_t v62; // w2
  __int64 v63; // x9
  int32_t v64; // w3
  char v65; // w8
  bool v66; // w4
  ServantStatusBattleListViewItem_c *v67; // x8
  MapButtonPrefab_o *v68; // x23
  const MethodInfo *v69; // x2
  ServantStatusBattleListViewItem_c *v70; // x8
  MapButtonPrefab_o *v71; // x23
  const MethodInfo *v72; // x2
  UIGrid_o *v73; // x19
  const MethodInfo *v74; // x1
  __int64 v75; // x0
  bool v76; // [xsp+8h] [xbp-C8h]
  char v77; // [xsp+Ch] [xbp-C4h]
  System_Collections_Generic_List_int__o *v78; // [xsp+10h] [xbp-C0h]
  int32_t currentMapLayerId; // [xsp+1Ch] [xbp-B4h]
  MapButtonControl_o *v80; // [xsp+20h] [xbp-B0h]
  char isMapButtonTop; // [xsp+2Ch] [xbp-A4h]
  Il2CppObject *original; // [xsp+30h] [xbp-A0h]
  unsigned int mapId; // [xsp+40h] [xbp-90h]
  unsigned __int8 v85; // [xsp+44h] [xbp-8Ch]
  MapButtonEntity_array *v86; // [xsp+48h] [xbp-88h]
  struct UIGrid_o **p_gridComponent; // [xsp+50h] [xbp-80h]
  __int64 v88; // [xsp+58h] [xbp-78h]
  ServantStatusBattleListViewItem_o *p_buttons; // [xsp+60h] [xbp-70h]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4A57F65 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_MapButtonMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_MapCondMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&MapButtonPrefab___TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57F65 = 1;
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
    MapButtonControl__DestroyButtons(this, v12);
    this->fields.newButtonEntryAnimAction = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.newButtonEntryAnimAction, 0, v15, v16);
    this->fields.terminalMap = terminalMap;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.terminalMap, (int32_t)terminalMap, v17, v18);
    this->fields.currentMapButtonPrefab = MapButtonPrefab;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.currentMapButtonPrefab,
      (int32_t)MapButtonPrefab,
      v19,
      v20);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_object )
      goto LABEL_92;
    OpenedButtons = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Master_object, warInf, mapInf, 0LL);
    GridComponentBottom = this->fields.GridComponentBottom;
    v86 = OpenedButtons;
    this->fields.gridComponent = GridComponentBottom;
    p_gridComponent = &this->fields.gridComponent;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.gridComponent,
      (int32_t)GridComponentBottom,
      v25,
      v26);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( !warInf )
      goto LABEL_92;
    v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    Master_object = (__int64)MapControl_WarInfo__GetMine(warInf, v22);
    if ( !Master_object )
      goto LABEL_92;
    v28 = v86;
    if ( !v27 )
      goto LABEL_92;
    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                      v27,
                      &entity,
                      *(_DWORD *)(Master_object + 96),
                      (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
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
      sub_1B88554((ServantStatusBattleListViewItem_o *)p_gridComponent, (int32_t)GridComponentTop, v29, v30);
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
      sub_1B8880C(Master_object, v22);
    }
    v33 = Master_object;
    mapId = mMapInfo->fields.mapId;
    currentMapLayerId = terminalMap->fields.currentMapLayerId;
    if ( (Master_object & 1) != 0 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v34 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_MapCondMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A57FF1 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57FF1 = 1;
      }
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      v35 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 140LL);
      if ( !byte_4A57FF2 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
        byte_4A57FF2 = 1;
      }
      if ( !*(_DWORD *)(Master_object + 224) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      v22 = (const MethodInfo *)mapId;
      if ( !v34 )
        goto LABEL_92;
      Master_object = (__int64)MapCondMaster__GetReleasedMapButtonIdList(
                                 (MapCondMaster_o *)v34,
                                 mapId,
                                 v35,
                                 *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 144LL),
                                 0LL);
      if ( Master_object )
      {
        if ( !v86 )
          goto LABEL_92;
        v77 = 0;
        v36 = *(_DWORD *)(Master_object + 24) < (signed int)v86->max_length;
        goto LABEL_39;
      }
    }
    else
    {
      Master_object = 0LL;
    }
    v77 = 1;
    v36 = 1;
LABEL_39:
    v76 = v36;
    v78 = (System_Collections_Generic_List_int__o *)Master_object;
    if ( MapButtonPrefab )
    {
      v37 = *p_gridComponent;
      Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 MapButtonPrefab,
                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
      if ( Master_object )
      {
        GridCellHeight = MapButtonPrefab__GetGridCellHeight((MapButtonPrefab_o *)Master_object, v22);
        if ( v37 )
        {
          v85 = v33;
          original = (Il2CppObject *)MapButtonPrefab;
          v80 = this;
          v37->fields.cellHeight = GridCellHeight;
          if ( v86 )
          {
            v39 = sub_1B88658(MapButtonPrefab___TypeInfo, v86->max_length);
            p_buttons->klass = (ServantStatusBattleListViewItem_c *)v39;
            sub_1B88554(p_buttons, v39, v40, v41);
            max_length = v86->max_length;
            if ( max_length >= 1 )
            {
              v88 = 0LL;
              v43 = &Method_SingletonTemplate_QuestTree__get_Instance__;
              v44 = 0;
              v45 = 0;
              v46 = 0;
              v47 = 0;
              v48 = 32LL;
              do
              {
                if ( v44 >= max_length )
                  goto LABEL_93;
                v49 = *(MapButtonEntity_o **)((char *)&v28->obj.klass + v48);
                v50 = (const MethodInfo_3739B38 **)v43;
                v51 = terminalMap;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v52 = UnityEngine_Object__Instantiate_object_(
                        original,
                        (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
                klass = p_buttons->klass;
                Master_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                           (UnityEngine_GameObject_o *)v52,
                                           (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
                if ( !klass )
                  goto LABEL_92;
                v56 = Master_object;
                if ( Master_object )
                {
                  Master_object = sub_1B886EC(Master_object, *((_QWORD *)klass->_1.image + 8));
                  if ( !Master_object )
                  {
                    v75 = sub_1B88830();
                    sub_1B886D8(v75, 0LL);
                  }
                }
                if ( v44 >= LODWORD(klass->_1.namespaze) )
                  goto LABEL_93;
                *(void **)((char *)&klass->_1.image + v48) = (void *)v56;
                sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)klass + v48), v56, v54, v55);
                if ( (((unsigned __int8)v77 | v85 ^ 1) & 1) != 0 )
                {
                  v58 = 0;
                  terminalMap = v51;
                }
                else
                {
                  if ( !v49 )
                    goto LABEL_92;
                  Master_object = (__int64)v78;
                  if ( !v78 )
                    goto LABEL_92;
                  terminalMap = v51;
                  Master_object = System_Collections_Generic_List_int___Contains(
                                    v78,
                                    v49->fields.id,
                                    (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
                  v58 = Master_object & 1;
                }
                v59 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_92;
                if ( v44 >= LODWORD(v59->_1.namespaze) )
LABEL_93:
                  sub_1B88814(Master_object, v22);
                Master_object = *(__int64 *)((char *)&v59->_1.image + v48);
                if ( !Master_object )
                  goto LABEL_92;
                MapButtonPrefab__SetupButton(
                  (MapButtonPrefab_o *)Master_object,
                  mapAtlases,
                  v80->fields.commonUI,
                  terminalMap,
                  v49,
                  isMapButtonTop,
                  v58,
                  v57);
                buttons = v80->fields.buttons;
                if ( !buttons )
                  goto LABEL_92;
                if ( v44 >= buttons->max_length )
                  goto LABEL_93;
                Master_object = *(__int64 *)((char *)&buttons->obj.klass + v48);
                v62 = mapId;
                v63 = v88;
                v64 = currentMapLayerId;
                v43 = (__int64 *)v50;
                v47 |= v85;
                if ( (v85 & 1) != 0 )
                  v46 = mapId;
                if ( (v85 & 1) != 0 )
                  v63 = *(__int64 *)((char *)&buttons->obj.klass + v48);
                if ( (v85 & 1) != 0 )
                  v45 = currentMapLayerId;
                if ( (v85 & 1) != 0 )
                {
                  if ( (v77 & 1) != 0 )
                  {
                    v65 = 1;
                  }
                  else
                  {
                    v66 = v76;
                    Master_object = v63;
                    v62 = v46;
                    v64 = v45;
                    v65 = v47;
                    if ( v78->fields._size > 0 )
                      goto LABEL_73;
                  }
                }
                else
                {
                  v65 = 0;
                }
                v66 = 0;
LABEL_73:
                v88 = v63;
                if ( !Master_object )
                  goto LABEL_92;
                MapButtonPrefab__SetButtonSprite((MapButtonPrefab_o *)Master_object, v65 & 1, v62, v64, v66, v60);
                v67 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_92;
                if ( v44 >= LODWORD(v67->_1.namespaze) )
                  goto LABEL_93;
                v68 = *(MapButtonPrefab_o **)((char *)&v67->_1.image + v48);
                Master_object = (__int64)SingletonTemplate_object___get_Instance(*v50);
                if ( !v49 )
                  goto LABEL_92;
                if ( !Master_object )
                  goto LABEL_92;
                Master_object = QuestTree__GetQuestCountForMap(
                                  (QuestTree_o *)Master_object,
                                  v49->fields.targetMapId,
                                  v49->fields.layer,
                                  0LL);
                if ( !v68 )
                  goto LABEL_92;
                MapButtonPrefab__SetBadge(v68, Master_object, v69);
                v70 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_92;
                if ( v44 >= LODWORD(v70->_1.namespaze) )
                  goto LABEL_93;
                v71 = *(MapButtonPrefab_o **)((char *)&v70->_1.image + v48);
                Master_object = (__int64)SingletonTemplate_object___get_Instance(*v50);
                if ( !Master_object )
                  goto LABEL_92;
                Master_object = QuestTree__IsNextSpotForMap(
                                  (QuestTree_o *)Master_object,
                                  v49->fields.targetMapId,
                                  v49->fields.layer,
                                  0LL);
                if ( !v71 )
                  goto LABEL_92;
                MapButtonPrefab__SetNext(v71, Master_object & 1, v72);
                if ( !v52 )
                  goto LABEL_92;
                v73 = *p_gridComponent;
                Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v52, 0LL);
                v28 = v86;
                if ( !v73 )
                  goto LABEL_92;
                UIGrid__AddChild(v73, (UnityEngine_Transform_o *)Master_object, 0LL);
                GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v52, v74);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v52, 0, 0LL);
                max_length = v86->max_length;
                ++v44;
                v48 += 8LL;
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

  if ( (byte_4A57F69 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57F69 = 1;
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
            UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          ++v6;
        }
        while ( transform );
      }
LABEL_39:
      sub_1B8880C(transform, v4);
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
            UnityEngine_Object__Destroy_69459380(v14, 0LL);
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.buttons, 0, v10, v11);
    this->fields.currentMapButtonPrefab = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.currentMapButtonPrefab, 0, v15, v16);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_List_object__o **v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
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
  int32_t v28; // w3
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A57F6A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapButtonPrefab__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    sub_1B885B0(&Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__);
    sub_1B885B0(&MapButtonControl___c__DisplayClass16_0_TypeInfo);
    byte_4A57F6A = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v3 = sub_1B887FC(MapButtonControl___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  buttons = this->fields.buttons;
  if ( buttons && *(_QWORD *)&buttons->max_length )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    if ( !v3 )
      goto LABEL_32;
    *(_QWORD *)(v3 + 16) = v6;
    v11 = (System_Collections_Generic_List_object__o **)(v3 + 16);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)v6, v9, v10);
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
          sub_1B88814(object, v8);
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
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              object,
              (Il2CppObject *)v17,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            object->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v17;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v17, v12, v13);
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
          if ( (unsigned int)v24 >= v22->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v17,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &v22->obj.klass + v24;
            v5->fields._size = v24 + 1;
            v25[4] = (Il2CppClass *)v17;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v17, v12, v13);
          }
        }
        max_length = v14->max_length;
        if ( (int)++v16 >= max_length )
          goto LABEL_24;
      }
LABEL_32:
      sub_1B8880C(object, v8);
    }
LABEL_24:
    v26 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)v3, Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, 0LL);
    this->fields.newButtonEntryAnimAction = v26;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.newButtonEntryAnimAction, (int32_t)v26, v27, v28);
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
    {
      object = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Last_object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                              (const MethodInfo_2EA59EC *)Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
      if ( !v5 )
        goto LABEL_32;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v31,
        v5,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v31,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
      {
        if ( !v31.fields._current )
          sub_1B8880C(0LL, v29);
        MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v31.fields._current, 0LL, v30);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v31,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
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
          sub_1B88814(this, method);
        v5 = buttons->m_Items[v4];
        if ( !v5 )
          sub_1B8880C(0LL, method);
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
  Il2CppObject *Object_object__48635516; // x20

  if ( (byte_4A57F66 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&MapButtonControl_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57F66 = 1;
  }
  if ( !mapAssetData )
    return this->fields.buttonPrefab;
  v5 = MapButtonControl_TypeInfo;
  if ( !MapButtonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonControl_TypeInfo);
    v5 = MapButtonControl_TypeInfo;
  }
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              mapAssetData,
                              v5->static_fields->MAP_BUTTON_PREFAB_NAME,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48635516, 0LL, 0LL) )
    return this->fields.buttonPrefab;
  return (UnityEngine_GameObject_o *)Object_object__48635516;
}


void __fastcall MapButtonControl__PlayNewButtonEntryAnim(MapButtonControl_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_newButtonEntryAnimAction; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  p_newButtonEntryAnimAction = (ServantStatusBattleListViewItem_o *)&this->fields.newButtonEntryAnimAction;
  ActionExtensions__Call(this->fields.newButtonEntryAnimAction, 0LL);
  p_newButtonEntryAnimAction->klass = 0LL;
  sub_1B88554(p_newButtonEntryAnimAction, 0, v3, v4);
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

  if ( (byte_4A57F67 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_MapButtonMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A57F67 = 1;
  }
  if ( this->fields.buttons )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (MapButtonMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_MapButtonMaster___);
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
              sub_1B88814(Master_object, v10);
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
      sub_1B8880C(Master_object, v10);
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

  if ( (byte_4A57F68 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_MapButtonMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4A57F68 = 1;
  }
  if ( this->fields.buttons )
  {
    Instance = (MapButtonEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (MapButtonEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_MapButtonMaster___);
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
        Instance = (MapButtonEntity_array *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( v10 >= v9->max_length )
LABEL_20:
          sub_1B88814(Instance, v8);
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
      sub_1B8880C(Instance, v8);
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
          sub_1B88814(terminalMap, method);
        terminalMap = (ScrTerminalMap_o *)buttons->m_Items[v11];
        if ( !terminalMap )
          break;
        MapButtonPrefab__SetButtonSprite((MapButtonPrefab_o *)terminalMap, v12, mapId, currentMapLayerId, 0, v4);
        max_length = buttons->max_length;
        if ( (int)++v11 >= max_length )
          return;
      }
LABEL_12:
      sub_1B8880C(terminalMap, method);
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

  if ( (byte_4A57F6C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    byte_4A57F6C = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.newButtonList,
         (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
  {
    newButtonList = (System_Collections_Generic_List_object__o *)this->fields.newButtonList;
    if ( !newButtonList )
      sub_1B8880C(0LL, v3);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      newButtonList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
    {
      if ( !v7.fields._current )
        sub_1B8880C(0LL, v5);
      MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v7.fields._current, 0LL, v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
  }
}