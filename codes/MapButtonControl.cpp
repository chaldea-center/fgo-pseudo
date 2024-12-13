void __fastcall MapButtonControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4B33EA7 & 1) == 0 )
  {
    sub_1BD3458(&MapButtonControl_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_8994/*"MapBtnPrefab"*/, v8);
    byte_4B33EA7 = 1;
  }
  MapButtonControl_TypeInfo->static_fields->MAP_BUTTON_PREFAB_NAME = (struct System_String_o *)StringLiteral_8994/*"MapBtnPrefab"*/;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)MapButtonControl_TypeInfo->static_fields,
    StringLiteral_8994/*"MapBtnPrefab"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 Master_object; // x0
  const MethodInfo *v47; // x1
  MapButtonEntity_array *OpenedButtons; // x0
  struct UIGrid_o *GridComponentBottom; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // x20
  MapButtonEntity_array *v57; // x23
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct UIGrid_o *GridComponentTop; // x1
  struct MapControl_MapInfo_o *mMapInfo; // x8
  unsigned __int8 v66; // w25
  __int64 v67; // x1
  Il2CppObject *v68; // x19
  int32_t v69; // w29
  bool v70; // w8
  struct UIGrid_o *v71; // x19
  float GridCellHeight; // s0
  int64_t v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int max_length; // w8
  __int64 *v81; // x22
  unsigned int v82; // w25
  int32_t v83; // w21
  unsigned int v84; // w26
  char v85; // w28
  __int64 v86; // x24
  MapButtonEntity_o *v87; // x19
  const MethodInfo_37FE068 **v88; // x29
  ScrTerminalMap_o *v89; // x22
  Il2CppObject *v90; // x20
  PartyOrganizationUtility_c *klass; // x27
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x23
  const MethodInfo *v99; // x7
  bool v100; // w6
  PartyOrganizationUtility_c *v101; // x8
  const MethodInfo *v102; // x5
  struct MapButtonPrefab_array *buttons; // x8
  int32_t v104; // w2
  __int64 v105; // x9
  int32_t v106; // w3
  char v107; // w8
  bool v108; // w4
  PartyOrganizationUtility_c *v109; // x8
  MapButtonPrefab_o *v110; // x23
  const MethodInfo *v111; // x2
  PartyOrganizationUtility_c *v112; // x8
  MapButtonPrefab_o *v113; // x23
  const MethodInfo *v114; // x2
  UIGrid_o *v115; // x19
  const MethodInfo *v116; // x1
  __int64 v117; // x0
  bool v118; // [xsp+8h] [xbp-C8h]
  char v119; // [xsp+Ch] [xbp-C4h]
  System_Collections_Generic_List_int__o *v120; // [xsp+10h] [xbp-C0h]
  int32_t currentMapLayerId; // [xsp+1Ch] [xbp-B4h]
  MapButtonControl_o *v122; // [xsp+20h] [xbp-B0h]
  char isMapButtonTop; // [xsp+2Ch] [xbp-A4h]
  Il2CppObject *original; // [xsp+30h] [xbp-A0h]
  unsigned int mapId; // [xsp+40h] [xbp-90h]
  unsigned __int8 v127; // [xsp+44h] [xbp-8Ch]
  MapButtonEntity_array *v128; // [xsp+48h] [xbp-88h]
  struct UIGrid_o **p_gridComponent; // [xsp+50h] [xbp-80h]
  __int64 v130; // [xsp+58h] [xbp-78h]
  PartyOrganizationUtility_o *p_buttons; // [xsp+60h] [xbp-70h]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4B33EA1 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_EventDetailMaster___, warInf);
    sub_1BD3458(&Method_DataManager_GetMaster_MapButtonMaster___, v12);
    sub_1BD3458(&Method_DataManager_GetMaster_MapCondMaster___, v13);
    sub_1BD3458(&DataManager_TypeInfo, v14);
    sub_1BD3458(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v15);
    sub_1BD3458(&Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___, v16);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___, v17);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Contains__, v18);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1BD3458(&MapButtonPrefab___TypeInfo, v20);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, v21);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v22);
    sub_1BD3458(&Method_SingletonTemplate_QuestTree__get_Instance__, v23);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v24);
    byte_4B33EA1 = 1;
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
    MapButtonControl__DestroyButtons(this, v25);
    this->fields.newButtonEntryAnimAction = 0LL;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.newButtonEntryAnimAction, 0LL, v28, v29, v30, v31, v32, v33);
    this->fields.terminalMap = terminalMap;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&this->fields.terminalMap,
      (int64_t)terminalMap,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    this->fields.currentMapButtonPrefab = MapButtonPrefab;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&this->fields.currentMapButtonPrefab,
      (int64_t)MapButtonPrefab,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_object )
      goto LABEL_92;
    OpenedButtons = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Master_object, warInf, mapInf, 0LL);
    GridComponentBottom = this->fields.GridComponentBottom;
    v128 = OpenedButtons;
    this->fields.gridComponent = GridComponentBottom;
    p_gridComponent = &this->fields.gridComponent;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&this->fields.gridComponent,
      (int64_t)GridComponentBottom,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( !warInf )
      goto LABEL_92;
    v56 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    Master_object = (__int64)MapControl_WarInfo__GetMine(warInf, v47);
    if ( !Master_object )
      goto LABEL_92;
    v57 = v128;
    if ( !v56 )
      goto LABEL_92;
    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                      v56,
                      &entity,
                      *(_DWORD *)(Master_object + 96),
                      (const MethodInfo_31D1F44 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
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
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)p_gridComponent,
        (int64_t)GridComponentTop,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
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
      sub_1BD36B4(Master_object, v47);
    }
    v66 = Master_object;
    mapId = mMapInfo->fields.mapId;
    currentMapLayerId = terminalMap->fields.currentMapLayerId;
    if ( (Master_object & 1) != 0 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v68 = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_MapCondMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B33F2E )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v67);
        byte_4B33F2E = 1;
      }
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      v69 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 140LL);
      if ( !byte_4B33F2F )
      {
        sub_1BD3458(&TerminalPramsManager_TypeInfo, v67);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
        byte_4B33F2F = 1;
      }
      if ( !*(_DWORD *)(Master_object + 224) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      v47 = (const MethodInfo *)mapId;
      if ( !v68 )
        goto LABEL_92;
      Master_object = (__int64)MapCondMaster__GetReleasedMapButtonIdList(
                                 (MapCondMaster_o *)v68,
                                 mapId,
                                 v69,
                                 *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 144LL),
                                 0LL);
      if ( Master_object )
      {
        if ( !v128 )
          goto LABEL_92;
        v119 = 0;
        v70 = *(_DWORD *)(Master_object + 24) < (signed int)v128->max_length;
        goto LABEL_39;
      }
    }
    else
    {
      Master_object = 0LL;
    }
    v119 = 1;
    v70 = 1;
LABEL_39:
    v118 = v70;
    v120 = (System_Collections_Generic_List_int__o *)Master_object;
    if ( MapButtonPrefab )
    {
      v71 = *p_gridComponent;
      Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 MapButtonPrefab,
                                 (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
      if ( Master_object )
      {
        GridCellHeight = MapButtonPrefab__GetGridCellHeight((MapButtonPrefab_o *)Master_object, v47);
        if ( v71 )
        {
          v127 = v66;
          original = (Il2CppObject *)MapButtonPrefab;
          v122 = this;
          v71->fields.cellHeight = GridCellHeight;
          if ( v128 )
          {
            v73 = sub_1BD3500(MapButtonPrefab___TypeInfo, v128->max_length);
            p_buttons->klass = (PartyOrganizationUtility_c *)v73;
            sub_1BD33FC(p_buttons, v73, v74, v75, v76, v77, v78, v79);
            max_length = v128->max_length;
            if ( max_length >= 1 )
            {
              v130 = 0LL;
              v81 = &Method_SingletonTemplate_QuestTree__get_Instance__;
              v82 = 0;
              v83 = 0;
              v84 = 0;
              v85 = 0;
              v86 = 32LL;
              do
              {
                if ( v82 >= max_length )
                  goto LABEL_93;
                v87 = *(MapButtonEntity_o **)((char *)&v57->obj.klass + v86);
                v88 = (const MethodInfo_37FE068 **)v81;
                v89 = terminalMap;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v90 = UnityEngine_Object__Instantiate_object_(
                        original,
                        (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                klass = p_buttons->klass;
                Master_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                           (UnityEngine_GameObject_o *)v90,
                                           (const MethodInfo_2F83564 *)Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
                if ( !klass )
                  goto LABEL_92;
                v98 = Master_object;
                if ( Master_object )
                {
                  Master_object = sub_1BD3594(Master_object, *((_QWORD *)klass->_1.image + 8));
                  if ( !Master_object )
                  {
                    v117 = sub_1BD36D8();
                    sub_1BD3580(v117, 0LL);
                  }
                }
                if ( v82 >= LODWORD(klass->_1.namespaze) )
                  goto LABEL_93;
                *(void **)((char *)&klass->_1.image + v86) = (void *)v98;
                sub_1BD33FC((PartyOrganizationUtility_o *)((char *)klass + v86), v98, v92, v93, v94, v95, v96, v97);
                if ( (((unsigned __int8)v119 | v127 ^ 1) & 1) != 0 )
                {
                  v100 = 0;
                  terminalMap = v89;
                }
                else
                {
                  if ( !v87 )
                    goto LABEL_92;
                  Master_object = (__int64)v120;
                  if ( !v120 )
                    goto LABEL_92;
                  terminalMap = v89;
                  Master_object = System_Collections_Generic_List_int___Contains(
                                    v120,
                                    v87->fields.id,
                                    (const MethodInfo_35A40E4 *)Method_System_Collections_Generic_List_int__Contains__);
                  v100 = Master_object & 1;
                }
                v101 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_92;
                if ( v82 >= LODWORD(v101->_1.namespaze) )
LABEL_93:
                  sub_1BD36BC(Master_object, v47);
                Master_object = *(__int64 *)((char *)&v101->_1.image + v86);
                if ( !Master_object )
                  goto LABEL_92;
                MapButtonPrefab__SetupButton(
                  (MapButtonPrefab_o *)Master_object,
                  mapAtlases,
                  v122->fields.commonUI,
                  terminalMap,
                  v87,
                  isMapButtonTop,
                  v100,
                  v99);
                buttons = v122->fields.buttons;
                if ( !buttons )
                  goto LABEL_92;
                if ( v82 >= buttons->max_length )
                  goto LABEL_93;
                Master_object = *(__int64 *)((char *)&buttons->obj.klass + v86);
                v104 = mapId;
                v105 = v130;
                v106 = currentMapLayerId;
                v81 = (__int64 *)v88;
                v85 |= v127;
                if ( (v127 & 1) != 0 )
                  v84 = mapId;
                if ( (v127 & 1) != 0 )
                  v105 = *(__int64 *)((char *)&buttons->obj.klass + v86);
                if ( (v127 & 1) != 0 )
                  v83 = currentMapLayerId;
                if ( (v127 & 1) != 0 )
                {
                  if ( (v119 & 1) != 0 )
                  {
                    v107 = 1;
                  }
                  else
                  {
                    v108 = v118;
                    Master_object = v105;
                    v104 = v84;
                    v106 = v83;
                    v107 = v85;
                    if ( v120->fields._size > 0 )
                      goto LABEL_73;
                  }
                }
                else
                {
                  v107 = 0;
                }
                v108 = 0;
LABEL_73:
                v130 = v105;
                if ( !Master_object )
                  goto LABEL_92;
                MapButtonPrefab__SetButtonSprite((MapButtonPrefab_o *)Master_object, v107 & 1, v104, v106, v108, v102);
                v109 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_92;
                if ( v82 >= LODWORD(v109->_1.namespaze) )
                  goto LABEL_93;
                v110 = *(MapButtonPrefab_o **)((char *)&v109->_1.image + v86);
                Master_object = (__int64)SingletonTemplate_object___get_Instance(*v88);
                if ( !v87 )
                  goto LABEL_92;
                if ( !Master_object )
                  goto LABEL_92;
                Master_object = QuestTree__GetQuestCountForMap(
                                  (QuestTree_o *)Master_object,
                                  v87->fields.targetMapId,
                                  v87->fields.layer,
                                  0LL);
                if ( !v110 )
                  goto LABEL_92;
                MapButtonPrefab__SetBadge(v110, Master_object, v111);
                v112 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_92;
                if ( v82 >= LODWORD(v112->_1.namespaze) )
                  goto LABEL_93;
                v113 = *(MapButtonPrefab_o **)((char *)&v112->_1.image + v86);
                Master_object = (__int64)SingletonTemplate_object___get_Instance(*v88);
                if ( !Master_object )
                  goto LABEL_92;
                Master_object = QuestTree__IsNextSpotForMap(
                                  (QuestTree_o *)Master_object,
                                  v87->fields.targetMapId,
                                  v87->fields.layer,
                                  0LL);
                if ( !v113 )
                  goto LABEL_92;
                MapButtonPrefab__SetNext(v113, Master_object & 1, v114);
                if ( !v90 )
                  goto LABEL_92;
                v115 = *p_gridComponent;
                Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v90, 0LL);
                v57 = v128;
                if ( !v115 )
                  goto LABEL_92;
                UIGrid__AddChild(v115, (UnityEngine_Transform_o *)Master_object, 0LL);
                GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v90, v116);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v90, 0, 0LL);
                max_length = v128->max_length;
                ++v82;
                v86 += 8LL;
              }
              while ( (int)v82 < max_length );
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

  if ( (byte_4B33EA5 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B33EA5 = 1;
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
            UnityEngine_Object__Destroy_70278272(gameObject, 0LL);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          ++v6;
        }
        while ( transform );
      }
LABEL_39:
      sub_1BD36B4(transform, v4);
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
            UnityEngine_Object__Destroy_70278272(v18, 0LL);
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
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.buttons, 0LL, v10, v11, v12, v13, v14, v15);
    this->fields.currentMapButtonPrefab = 0LL;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.currentMapButtonPrefab, 0LL, v19, v20, v21, v22, v23, v24);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_List_object__o **v26; // x22
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct MapButtonPrefab_array *v33; // x24
  int max_length; // w8
  unsigned int v35; // w25
  int64_t v36; // x23
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x8
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x0
  System_Action_o *v45; // x22
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x1
  const MethodInfo *v53; // x2
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B33EA6 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___, v3);
    sub_1BD3458(&Method_System_Linq_Enumerable_Last_MapButtonPrefab___, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapButtonPrefab__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapButtonPrefab___ctor__, v10);
    sub_1BD3458(&System_Collections_Generic_List_MapButtonPrefab__TypeInfo, v11);
    sub_1BD3458(&Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, v12);
    sub_1BD3458(&MapButtonControl___c__DisplayClass16_0_TypeInfo, v13);
    byte_4B33EA6 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  v14 = sub_1BD36A4(MapButtonControl___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  buttons = this->fields.buttons;
  if ( buttons && *(_QWORD *)&buttons->max_length )
  {
    v16 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    v17 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_MapButtonPrefab__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v17,
      (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    if ( !v14 )
      goto LABEL_32;
    *(_QWORD *)(v14 + 16) = v17;
    v26 = (System_Collections_Generic_List_object__o **)(v14 + 16);
    sub_1BD33FC((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)v17, v20, v21, v22, v23, v24, v25);
    v33 = this->fields.buttons;
    if ( !v33 )
      goto LABEL_32;
    max_length = v33->max_length;
    if ( max_length >= 1 )
    {
      v35 = 0;
      while ( 1 )
      {
        if ( v35 >= max_length )
          sub_1BD36BC(object, v19);
        v36 = (int64_t)v33->m_Items[v35];
        if ( !v36 )
          break;
        if ( *(_BYTE *)(v36 + 128) )
        {
          object = *v26;
          if ( !*v26 )
            break;
          items = object->fields._items;
          v38 = Method_System_Collections_Generic_List_MapButtonPrefab__Add__;
          ++object->fields._version;
          if ( !items )
            break;
          size = object->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              object,
              (Il2CppObject *)v36,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &items->obj.klass + size;
            object->fields._size = size + 1;
            v40[4] = (Il2CppClass *)v36;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v40 + 4), v36, v27, v28, v29, v30, v31, v32);
          }
          *(_BYTE *)(v36 + 128) = 0;
        }
        else
        {
          if ( !v16 )
            break;
          v41 = v16->fields._items;
          v42 = Method_System_Collections_Generic_List_MapButtonPrefab__Add__;
          ++v16->fields._version;
          if ( !v41 )
            break;
          v43 = v16->fields._size;
          if ( (unsigned int)v43 >= v41->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)v36,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v44 = &v41->obj.klass + v43;
            v16->fields._size = v43 + 1;
            v44[4] = (Il2CppClass *)v36;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v44 + 4), v36, v27, v28, v29, v30, v31, v32);
          }
        }
        max_length = v33->max_length;
        if ( (int)++v35 >= max_length )
          goto LABEL_24;
      }
LABEL_32:
      sub_1BD36B4(object, v19);
    }
LABEL_24:
    v45 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)v14, Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, 0LL);
    this->fields.newButtonEntryAnimAction = v45;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&this->fields.newButtonEntryAnimAction,
      (int64_t)v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v16,
           (const MethodInfo_2F3D238 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
    {
      object = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Last_object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v16,
                                                              (const MethodInfo_2F56300 *)Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
      if ( !v16 )
        goto LABEL_32;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v54,
        v16,
        (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v54,
                (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
      {
        if ( !v54.fields._current )
          sub_1BD36B4(0LL, v52);
        MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v54.fields._current, 0LL, v53);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v54,
        (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
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
          sub_1BD36BC(this, method);
        v5 = buttons->m_Items[v4];
        if ( !v5 )
          sub_1BD36B4(0LL, method);
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
  Il2CppObject *Object_object__49362760; // x20

  if ( (byte_4B33EA2 & 1) == 0 )
  {
    sub_1BD3458(&Method_AssetData_GetObject_GameObject____76969040, mapAssetData);
    sub_1BD3458(&MapButtonControl_TypeInfo, v5);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v6);
    byte_4B33EA2 = 1;
  }
  if ( !mapAssetData )
    return this->fields.buttonPrefab;
  v7 = MapButtonControl_TypeInfo;
  if ( !MapButtonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonControl_TypeInfo);
    v7 = MapButtonControl_TypeInfo;
  }
  Object_object__49362760 = AssetData__GetObject_object__49362760(
                              mapAssetData,
                              v7->static_fields->MAP_BUTTON_PREFAB_NAME,
                              (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49362760, 0LL, 0LL) )
    return this->fields.buttonPrefab;
  return (UnityEngine_GameObject_o *)Object_object__49362760;
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
  sub_1BD33FC(p_newButtonEntryAnimAction, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4B33EA3 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_MapButtonMaster___, warInf);
    sub_1BD3458(&DataManager_TypeInfo, v9);
    byte_4B33EA3 = 1;
  }
  if ( this->fields.buttons )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (MapButtonMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_MapButtonMaster___);
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
              sub_1BD36BC(Master_object, v11);
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
      sub_1BD36B4(Master_object, v11);
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

  if ( (byte_4B33EA4 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_MapButtonMaster___, warInf);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BD3458(&Method_SingletonTemplate_QuestTree__get_Instance__, v8);
    byte_4B33EA4 = 1;
  }
  if ( this->fields.buttons )
  {
    Instance = (MapButtonEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (MapButtonEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_MapButtonMaster___);
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
        Instance = (MapButtonEntity_array *)SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( v12 >= v11->max_length )
LABEL_20:
          sub_1BD36BC(Instance, v10);
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
      sub_1BD36B4(Instance, v10);
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
          sub_1BD36BC(terminalMap, method);
        terminalMap = (ScrTerminalMap_o *)buttons->m_Items[v11];
        if ( !terminalMap )
          break;
        MapButtonPrefab__SetButtonSprite((MapButtonPrefab_o *)terminalMap, v12, mapId, currentMapLayerId, 0, v4);
        max_length = buttons->max_length;
        if ( (int)++v11 >= max_length )
          return;
      }
LABEL_12:
      sub_1BD36B4(terminalMap, method);
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

  if ( (byte_4B33EA8 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__, v6);
    byte_4B33EA8 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.newButtonList,
         (const MethodInfo_2F3D238 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
  {
    newButtonList = (System_Collections_Generic_List_object__o *)this->fields.newButtonList;
    if ( !newButtonList )
      sub_1BD36B4(0LL, v7);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      newButtonList,
      (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
    {
      if ( !v11.fields._current )
        sub_1BD36B4(0LL, v9);
      MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v11.fields._current, 0LL, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
  }
}