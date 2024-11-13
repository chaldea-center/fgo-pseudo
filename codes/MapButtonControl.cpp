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
  __int64 v9; // x2

  if ( (byte_4B12F1D & 1) == 0 )
  {
    sub_1BCA7E0(&MapButtonControl_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_8980/*"MapBtnPrefab"*/, v8, v9);
    byte_4B12F1D = 1;
  }
  MapButtonControl_TypeInfo->static_fields->MAP_BUTTON_PREFAB_NAME = (struct System_String_o *)StringLiteral_8980/*"MapBtnPrefab"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MapButtonControl_TypeInfo->static_fields,
    StringLiteral_8980/*"MapBtnPrefab"*/,
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  const MethodInfo *v38; // x1
  struct UnityEngine_GameObject_o *MapButtonPrefab; // x22
  UnityEngine_Object_o *currentMapButtonPrefab; // x23
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x1
  __int64 Master_object; // x0
  const MethodInfo *v61; // x1
  MapButtonEntity_array *OpenedButtons; // x0
  struct UIGrid_o *GridComponentBottom; // x1
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v70; // x20
  MapButtonEntity_array *v71; // x23
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  struct UIGrid_o *GridComponentTop; // x1
  struct MapControl_MapInfo_o *mMapInfo; // x8
  unsigned __int8 v80; // w25
  __int64 v81; // x1
  __int64 v82; // x2
  Il2CppObject *v83; // x19
  int32_t v84; // w29
  bool v85; // w8
  struct UIGrid_o *v86; // x19
  float GridCellHeight; // s0
  int64_t v88; // x0
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int max_length; // w8
  __int64 *v96; // x22
  unsigned int v97; // w25
  int32_t v98; // w21
  unsigned int v99; // w26
  char v100; // w28
  __int64 v101; // x24
  MapButtonEntity_o *v102; // x19
  const MethodInfo_37DEF34 **v103; // x29
  ScrTerminalMap_o *v104; // x22
  Il2CppObject *v105; // x20
  PartyOrganizationUtility_c *klass; // x27
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  int64_t v113; // x23
  const MethodInfo *v114; // x7
  bool v115; // w6
  PartyOrganizationUtility_c *v116; // x8
  const MethodInfo *v117; // x5
  struct MapButtonPrefab_array *buttons; // x8
  int32_t v119; // w2
  __int64 v120; // x9
  int32_t v121; // w3
  char v122; // w8
  bool v123; // w4
  PartyOrganizationUtility_c *v124; // x8
  MapButtonPrefab_o *v125; // x23
  const MethodInfo *v126; // x2
  PartyOrganizationUtility_c *v127; // x8
  MapButtonPrefab_o *v128; // x23
  const MethodInfo *v129; // x2
  UIGrid_o *v130; // x19
  const MethodInfo *v131; // x1
  __int64 v132; // x0
  bool v133; // [xsp+8h] [xbp-C8h]
  char v134; // [xsp+Ch] [xbp-C4h]
  System_Collections_Generic_List_int__o *v135; // [xsp+10h] [xbp-C0h]
  int32_t currentMapLayerId; // [xsp+1Ch] [xbp-B4h]
  MapButtonControl_o *v137; // [xsp+20h] [xbp-B0h]
  char isMapButtonTop; // [xsp+2Ch] [xbp-A4h]
  Il2CppObject *original; // [xsp+30h] [xbp-A0h]
  unsigned int mapId; // [xsp+40h] [xbp-90h]
  unsigned __int8 v142; // [xsp+44h] [xbp-8Ch]
  MapButtonEntity_array *v143; // [xsp+48h] [xbp-88h]
  struct UIGrid_o **p_gridComponent; // [xsp+50h] [xbp-80h]
  __int64 v145; // [xsp+58h] [xbp-78h]
  PartyOrganizationUtility_o *p_buttons; // [xsp+60h] [xbp-70h]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4B12F17 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDetailMaster___, warInf, mapInf);
    sub_1BCA7E0(&Method_DataManager_GetMaster_MapButtonMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMaster_MapCondMaster___, v14, v15);
    sub_1BCA7E0(&DataManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v18, v19);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___, v20, v21);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v26, v27);
    sub_1BCA7E0(&MapButtonPrefab___TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v30, v31);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v34, v35);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v36, v37);
    byte_4B12F17 = 1;
  }
  entity = 0LL;
  MapButtonPrefab = MapButtonControl__GetMapButtonPrefab(this, mapAssetData, (const MethodInfo *)mapInf);
  p_buttons = (PartyOrganizationUtility_o *)&this->fields.buttons;
  if ( !this->fields.buttons )
    goto LABEL_7;
  currentMapButtonPrefab = (UnityEngine_Object_o *)this->fields.currentMapButtonPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
  if ( !UnityEngine_Object__op_Equality(currentMapButtonPrefab, (UnityEngine_Object_o *)MapButtonPrefab, 0LL) )
  {
LABEL_7:
    MapButtonControl__DestroyButtons(this, v38);
    this->fields.newButtonEntryAnimAction = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.newButtonEntryAnimAction, 0LL, v41, v42, v43, v44, v45, v46);
    this->fields.terminalMap = terminalMap;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.terminalMap,
      (int64_t)terminalMap,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    this->fields.currentMapButtonPrefab = MapButtonPrefab;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.currentMapButtonPrefab,
      (int64_t)MapButtonPrefab,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v59);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_object )
      goto LABEL_92;
    OpenedButtons = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Master_object, warInf, mapInf, 0LL);
    GridComponentBottom = this->fields.GridComponentBottom;
    v143 = OpenedButtons;
    this->fields.gridComponent = GridComponentBottom;
    p_gridComponent = &this->fields.gridComponent;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.gridComponent,
      (int64_t)GridComponentBottom,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( !warInf )
      goto LABEL_92;
    v70 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    Master_object = (__int64)MapControl_WarInfo__GetMine(warInf, v61);
    if ( !Master_object )
      goto LABEL_92;
    v71 = v143;
    if ( !v70 )
      goto LABEL_92;
    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                      v70,
                      &entity,
                      *(_DWORD *)(Master_object + 96),
                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
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
      sub_1BCA784(
        (PartyOrganizationUtility_o *)p_gridComponent,
        (int64_t)GridComponentTop,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77);
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
      sub_1BCAA3C(Master_object, v61);
    }
    v80 = Master_object;
    mapId = mMapInfo->fields.mapId;
    currentMapLayerId = terminalMap->fields.currentMapLayerId;
    if ( (Master_object & 1) != 0 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v61);
      v83 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_MapCondMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v81);
      if ( !byte_4B12FA4 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v81, v82);
        byte_4B12FA4 = 1;
      }
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v81);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      v84 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 140LL);
      if ( !byte_4B12FA5 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v81, v82);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
        byte_4B12FA5 = 1;
      }
      if ( !*(_DWORD *)(Master_object + 224) )
      {
        j_il2cpp_runtime_class_init_0(Master_object, v81);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      v61 = (const MethodInfo *)mapId;
      if ( !v83 )
        goto LABEL_92;
      Master_object = (__int64)MapCondMaster__GetReleasedMapButtonIdList(
                                 (MapCondMaster_o *)v83,
                                 mapId,
                                 v84,
                                 *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 144LL),
                                 0LL);
      if ( Master_object )
      {
        if ( !v143 )
          goto LABEL_92;
        v134 = 0;
        v85 = *(_DWORD *)(Master_object + 24) < (signed int)v143->max_length;
        goto LABEL_39;
      }
    }
    else
    {
      Master_object = 0LL;
    }
    v134 = 1;
    v85 = 1;
LABEL_39:
    v133 = v85;
    v135 = (System_Collections_Generic_List_int__o *)Master_object;
    if ( MapButtonPrefab )
    {
      v86 = *p_gridComponent;
      Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 MapButtonPrefab,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MapButtonPrefab___);
      if ( Master_object )
      {
        GridCellHeight = MapButtonPrefab__GetGridCellHeight((MapButtonPrefab_o *)Master_object, v61);
        if ( v86 )
        {
          v142 = v80;
          original = (Il2CppObject *)MapButtonPrefab;
          v137 = this;
          v86->fields.cellHeight = GridCellHeight;
          if ( v143 )
          {
            v88 = sub_1BCA888(MapButtonPrefab___TypeInfo, v143->max_length);
            p_buttons->klass = (PartyOrganizationUtility_c *)v88;
            sub_1BCA784(p_buttons, v88, v89, v90, v91, v92, v93, v94);
            max_length = v143->max_length;
            if ( max_length >= 1 )
            {
              v145 = 0LL;
              v96 = &Method_SingletonTemplate_QuestTree__get_Instance__;
              v97 = 0;
              v98 = 0;
              v99 = 0;
              v100 = 0;
              v101 = 32LL;
              do
              {
                if ( v97 >= max_length )
                  goto LABEL_93;
                v102 = *(MapButtonEntity_o **)((char *)&v71->obj.klass + v101);
                v103 = (const MethodInfo_37DEF34 **)v96;
                v104 = terminalMap;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v61);
                v105 = UnityEngine_Object__Instantiate_object_(
                         original,
                         (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
                klass = p_buttons->klass;
                Master_object = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                                           (UnityEngine_GameObject_o *)v105,
                                           (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_MapButtonPrefab___);
                if ( !klass )
                  goto LABEL_92;
                v113 = Master_object;
                if ( Master_object )
                {
                  Master_object = sub_1BCA91C(Master_object, *((_QWORD *)klass->_1.image + 8));
                  if ( !Master_object )
                  {
                    v132 = sub_1BCAA60();
                    sub_1BCA908(v132, 0LL);
                  }
                }
                if ( v97 >= LODWORD(klass->_1.namespaze) )
                  goto LABEL_93;
                *(void **)((char *)&klass->_1.image + v101) = (void *)v113;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)((char *)klass + v101),
                  v113,
                  v107,
                  v108,
                  v109,
                  v110,
                  v111,
                  v112);
                if ( (((unsigned __int8)v134 | v142 ^ 1) & 1) != 0 )
                {
                  v115 = 0;
                  terminalMap = v104;
                }
                else
                {
                  if ( !v102 )
                    goto LABEL_92;
                  Master_object = (__int64)v135;
                  if ( !v135 )
                    goto LABEL_92;
                  terminalMap = v104;
                  Master_object = System_Collections_Generic_List_int___Contains(
                                    v135,
                                    v102->fields.id,
                                    (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
                  v115 = Master_object & 1;
                }
                v116 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_92;
                if ( v97 >= LODWORD(v116->_1.namespaze) )
LABEL_93:
                  sub_1BCAA44(Master_object, v61);
                Master_object = *(__int64 *)((char *)&v116->_1.image + v101);
                if ( !Master_object )
                  goto LABEL_92;
                MapButtonPrefab__SetupButton(
                  (MapButtonPrefab_o *)Master_object,
                  mapAtlases,
                  v137->fields.commonUI,
                  terminalMap,
                  v102,
                  isMapButtonTop,
                  v115,
                  v114);
                buttons = v137->fields.buttons;
                if ( !buttons )
                  goto LABEL_92;
                if ( v97 >= buttons->max_length )
                  goto LABEL_93;
                Master_object = *(__int64 *)((char *)&buttons->obj.klass + v101);
                v119 = mapId;
                v120 = v145;
                v121 = currentMapLayerId;
                v96 = (__int64 *)v103;
                v100 |= v142;
                if ( (v142 & 1) != 0 )
                  v99 = mapId;
                if ( (v142 & 1) != 0 )
                  v120 = *(__int64 *)((char *)&buttons->obj.klass + v101);
                if ( (v142 & 1) != 0 )
                  v98 = currentMapLayerId;
                if ( (v142 & 1) != 0 )
                {
                  if ( (v134 & 1) != 0 )
                  {
                    v122 = 1;
                  }
                  else
                  {
                    v123 = v133;
                    Master_object = v120;
                    v119 = v99;
                    v121 = v98;
                    v122 = v100;
                    if ( v135->fields._size > 0 )
                      goto LABEL_73;
                  }
                }
                else
                {
                  v122 = 0;
                }
                v123 = 0;
LABEL_73:
                v145 = v120;
                if ( !Master_object )
                  goto LABEL_92;
                MapButtonPrefab__SetButtonSprite((MapButtonPrefab_o *)Master_object, v122 & 1, v119, v121, v123, v117);
                v124 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_92;
                if ( v97 >= LODWORD(v124->_1.namespaze) )
                  goto LABEL_93;
                v125 = *(MapButtonPrefab_o **)((char *)&v124->_1.image + v101);
                Master_object = (__int64)SingletonTemplate_object___get_Instance(*v103);
                if ( !v102 )
                  goto LABEL_92;
                if ( !Master_object )
                  goto LABEL_92;
                Master_object = QuestTree__GetQuestCountForMap(
                                  (QuestTree_o *)Master_object,
                                  v102->fields.targetMapId,
                                  v102->fields.layer,
                                  0LL);
                if ( !v125 )
                  goto LABEL_92;
                MapButtonPrefab__SetBadge(v125, Master_object, v126);
                v127 = p_buttons->klass;
                if ( !p_buttons->klass )
                  goto LABEL_92;
                if ( v97 >= LODWORD(v127->_1.namespaze) )
                  goto LABEL_93;
                v128 = *(MapButtonPrefab_o **)((char *)&v127->_1.image + v101);
                Master_object = (__int64)SingletonTemplate_object___get_Instance(*v103);
                if ( !Master_object )
                  goto LABEL_92;
                Master_object = QuestTree__IsNextSpotForMap(
                                  (QuestTree_o *)Master_object,
                                  v102->fields.targetMapId,
                                  v102->fields.layer,
                                  0LL);
                if ( !v128 )
                  goto LABEL_92;
                MapButtonPrefab__SetNext(v128, Master_object & 1, v129);
                if ( !v105 )
                  goto LABEL_92;
                v130 = *p_gridComponent;
                Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v105, 0LL);
                v71 = v143;
                if ( !v130 )
                  goto LABEL_92;
                UIGrid__AddChild(v130, (UnityEngine_Transform_o *)Master_object, 0LL);
                GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v105, v131);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v105, 0, 0LL);
                max_length = v143->max_length;
                ++v97;
                v101 += 8LL;
              }
              while ( (int)v97 < max_length );
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
  __int64 v2; // x2
  UnityEngine_Object_o *GridComponentBottom; // x21
  __int64 v5; // x1
  UnityEngine_Component_o *transform; // x0
  int32_t v7; // w21
  __int64 v8; // x1
  UnityEngine_Object_o *Child; // x22
  __int64 v10; // x1
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *GridComponentTop; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int32_t v19; // w21
  __int64 v20; // x1
  UnityEngine_Object_o *v21; // x22
  __int64 v22; // x1
  UnityEngine_Object_o *v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B12F1B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12F1B = 1;
  }
  if ( this->fields.buttons )
  {
    GridComponentBottom = (UnityEngine_Object_o *)this->fields.GridComponentBottom;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(GridComponentBottom, 0LL, 0LL) )
    {
      transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
      if ( transform )
      {
        v7 = 0;
        do
        {
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          if ( v7 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) )
            goto LABEL_22;
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          if ( !transform )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v7, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(Child, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            if ( !Child )
              break;
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)Child,
                                                   0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
            UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentBottom;
          ++v7;
        }
        while ( transform );
      }
LABEL_39:
      sub_1BCAA3C(transform, v5);
    }
LABEL_22:
    GridComponentTop = (UnityEngine_Object_o *)this->fields.GridComponentTop;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(GridComponentTop, 0LL, 0LL) )
    {
      transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
      if ( transform )
      {
        v19 = 0;
        do
        {
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          if ( v19 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) )
            goto LABEL_40;
          transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          if ( !transform )
            break;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
          if ( !transform )
            break;
          v21 = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v19, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(v21, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            if ( !v21 )
              goto LABEL_39;
            v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
            UnityEngine_Object__Destroy_70154244(v23, 0LL);
          }
          transform = (UnityEngine_Component_o *)this->fields.GridComponentTop;
          ++v19;
        }
        while ( transform );
      }
      goto LABEL_39;
    }
LABEL_40:
    this->fields.buttons = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.buttons, 0LL, v13, v14, v15, v16, v17, v18);
    this->fields.currentMapButtonPrefab = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.currentMapButtonPrefab, 0LL, v24, v25, v26, v27, v28, v29);
  }
}


void __fastcall MapButtonControl__FrameIn(MapButtonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  struct MapButtonPrefab_array *buttons; // x8
  System_Collections_Generic_List_object__o *v32; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_List_object__o *v36; // x23
  System_Collections_Generic_List_object__o *object; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_Generic_List_object__o **v45; // x22
  int64_t v46; // x2
  __int64 v47; // x3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct MapButtonPrefab_array *v52; // x24
  int max_length; // w8
  unsigned int v54; // w25
  int64_t v55; // x23
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x8
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  System_Action_o *v64; // x22
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x1
  const MethodInfo *v72; // x2
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B12F1C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Last_MapButtonPrefab___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapButtonPrefab__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapButtonPrefab___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_MapButtonPrefab__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, v23, v24);
    sub_1BCA7E0(&MapButtonControl___c__DisplayClass16_0_TypeInfo, v25, v26);
    byte_4B12F1C = 1;
  }
  memset(&v73, 0, sizeof(v73));
  v27 = sub_1BCAA2C(MapButtonControl___c__DisplayClass16_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  buttons = this->fields.buttons;
  if ( buttons && *(_QWORD *)&buttons->max_length )
  {
    v32 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_MapButtonPrefab__TypeInfo,
                                                         v28,
                                                         v29,
                                                         v30);
    System_Collections_Generic_List_object____ctor(
      v32,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    v36 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_MapButtonPrefab__TypeInfo,
                                                         v33,
                                                         v34,
                                                         v35);
    System_Collections_Generic_List_object____ctor(
      v36,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MapButtonPrefab___ctor__);
    if ( !v27 )
      goto LABEL_32;
    *(_QWORD *)(v27 + 16) = v36;
    v45 = (System_Collections_Generic_List_object__o **)(v27 + 16);
    sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 16), (int64_t)v36, v39, v40, v41, v42, v43, v44);
    v52 = this->fields.buttons;
    if ( !v52 )
      goto LABEL_32;
    max_length = v52->max_length;
    if ( max_length >= 1 )
    {
      v54 = 0;
      while ( 1 )
      {
        if ( v54 >= max_length )
          sub_1BCAA44(object, v38);
        v55 = (int64_t)v52->m_Items[v54];
        if ( !v55 )
          break;
        if ( *(_BYTE *)(v55 + 128) )
        {
          object = *v45;
          if ( !*v45 )
            break;
          items = object->fields._items;
          v57 = Method_System_Collections_Generic_List_MapButtonPrefab__Add__;
          ++object->fields._version;
          if ( !items )
            break;
          size = object->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              object,
              (Il2CppObject *)v55,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
          }
          else
          {
            v59 = &items->obj.klass + size;
            object->fields._size = size + 1;
            v59[4] = (Il2CppClass *)v55;
            sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 4), v55, v46, v47, v48, v49, v50, v51);
          }
          *(_BYTE *)(v55 + 128) = 0;
        }
        else
        {
          if ( !v32 )
            break;
          v60 = v32->fields._items;
          v61 = Method_System_Collections_Generic_List_MapButtonPrefab__Add__;
          ++v32->fields._version;
          if ( !v60 )
            break;
          v62 = v32->fields._size;
          if ( (unsigned int)v62 >= v60->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v32,
              (Il2CppObject *)v55,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
          }
          else
          {
            v63 = &v60->obj.klass + v62;
            v32->fields._size = v62 + 1;
            v63[4] = (Il2CppClass *)v55;
            sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 4), v55, v46, v47, v48, v49, v50, v51);
          }
        }
        max_length = v52->max_length;
        if ( (int)++v54 >= max_length )
          goto LABEL_24;
      }
LABEL_32:
      sub_1BCAA3C(object, v38);
    }
LABEL_24:
    v64 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v38, v46, v47);
    System_Action___ctor(v64, (Il2CppObject *)v27, Method_MapButtonControl___c__DisplayClass16_0__FrameIn_b__0__, 0LL);
    this->fields.newButtonEntryAnimAction = v64;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.newButtonEntryAnimAction,
      (int64_t)v64,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v32,
           (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
    {
      object = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Last_object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v32,
                                                              (const MethodInfo_2F36F54 *)Method_System_Linq_Enumerable_Last_MapButtonPrefab___);
      if ( !v32 )
        goto LABEL_32;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v73,
        v32,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v73,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
      {
        if ( !v73.fields._current )
          sub_1BCAA3C(0LL, v71);
        MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v73.fields._current, 0LL, v72);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v73,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
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
          sub_1BCAA44(this, method);
        v5 = buttons->m_Items[v4];
        if ( !v5 )
          sub_1BCAA3C(0LL, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  MapButtonControl_c *v9; // x0
  __int64 v10; // x1
  Il2CppObject *Object_object__49237568; // x20

  if ( (byte_4B12F18 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, mapAssetData, method);
    sub_1BCA7E0(&MapButtonControl_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B12F18 = 1;
  }
  if ( !mapAssetData )
    return this->fields.buttonPrefab;
  v9 = MapButtonControl_TypeInfo;
  if ( !MapButtonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonControl_TypeInfo, mapAssetData);
    v9 = MapButtonControl_TypeInfo;
  }
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              mapAssetData,
                              v9->static_fields->MAP_BUTTON_PREFAB_NAME,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
    return this->fields.buttonPrefab;
  return (UnityEngine_GameObject_o *)Object_object__49237568;
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
  sub_1BCA784(p_newButtonEntryAnimAction, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall MapButtonControl__SetNext(
        MapButtonControl_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        MapControl_SpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  MapButtonMaster_o *Master_object; // x0
  const MethodInfo *v12; // x1
  int MasterName_k__BackingField; // w8
  MapButtonPrefab_o *v14; // x21
  il2cpp_array_size_t v15; // w22
  struct MapButtonPrefab_array *buttons; // x9
  MapButtonPrefab_c **v17; // x24
  MapButtonPrefab_c *v18; // x8
  char *v19; // x24
  MapButtonPrefab_c *v20; // t1
  int namespaze; // w25
  int v22; // w24
  const MethodInfo *v23; // x2
  struct MapButtonPrefab_array *v24; // x8

  if ( (byte_4B12F19 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_MapButtonMaster___, warInf, mapInf);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    byte_4B12F19 = 1;
  }
  if ( this->fields.buttons )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, warInf);
    Master_object = (MapButtonMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_MapButtonMaster___);
    if ( !Master_object )
      goto LABEL_26;
    Master_object = (MapButtonMaster_o *)MapButtonMaster__GetOpenedButtons(Master_object, warInf, mapInf, 0LL);
    if ( !Master_object )
      goto LABEL_26;
    MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
    v14 = (MapButtonPrefab_o *)Master_object;
    if ( MasterName_k__BackingField >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        buttons = this->fields.buttons;
        if ( !buttons )
          break;
        if ( (signed int)v15 >= (signed int)buttons->max_length )
          return;
        if ( v15 >= MasterName_k__BackingField )
          goto LABEL_27;
        v17 = &v14->klass + (int)v15;
        v20 = v17[4];
        v19 = (char *)(v17 + 4);
        v18 = v20;
        if ( !v20 )
          break;
        if ( !spotInfo )
          break;
        namespaze = (int)v18->_1.namespaze;
        Master_object = (MapButtonMaster_o *)MapControl_SpotInfo__GetMine(spotInfo, v12);
        if ( !Master_object )
          break;
        if ( namespaze == LODWORD(Master_object->fields._MasterName_k__BackingField) )
        {
          if ( v15 >= LODWORD(v14->fields.m_CancellationTokenSource) )
            goto LABEL_27;
          if ( !*(_QWORD *)v19 )
            break;
          v22 = *(_DWORD *)(*(_QWORD *)v19 + 28LL);
          Master_object = (MapButtonMaster_o *)MapControl_SpotInfo__GetLayer(spotInfo, v12);
          if ( v22 == (_DWORD)Master_object )
          {
            v24 = this->fields.buttons;
            if ( !v24 )
              break;
            if ( v15 >= v24->max_length )
LABEL_27:
              sub_1BCAA44(Master_object, v12);
            Master_object = (MapButtonMaster_o *)v24->m_Items[v15];
            if ( !Master_object )
              break;
            MapButtonPrefab__SetNext((MapButtonPrefab_o *)Master_object, 1, v23);
          }
        }
        MasterName_k__BackingField = (int)v14->fields.m_CancellationTokenSource;
        if ( (int)++v15 >= MasterName_k__BackingField )
          return;
      }
LABEL_26:
      sub_1BCAA3C(Master_object, v12);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  MapButtonEntity_array *Instance; // x0
  __int64 v12; // x1
  MapButtonEntity_array *v13; // x20
  il2cpp_array_size_t v14; // w21
  struct MapButtonPrefab_array *buttons; // x8
  MapButtonEntity_o *v16; // x8
  const MethodInfo *v17; // x2
  struct MapButtonPrefab_array *v18; // x8

  if ( (byte_4B12F1A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MapButtonMaster___, warInf, mapInf);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v9, v10);
    byte_4B12F1A = 1;
  }
  if ( this->fields.buttons )
  {
    Instance = (MapButtonEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (MapButtonEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MapButtonMaster___);
    if ( !Instance )
      goto LABEL_19;
    Instance = MapButtonMaster__GetOpenedButtons((MapButtonMaster_o *)Instance, warInf, mapInf, 0LL);
    if ( !Instance )
      goto LABEL_19;
    v13 = Instance;
    if ( (int)Instance->max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        buttons = this->fields.buttons;
        if ( !buttons )
          break;
        if ( (signed int)v14 >= (signed int)buttons->max_length )
          return;
        Instance = (MapButtonEntity_array *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( v14 >= v13->max_length )
LABEL_20:
          sub_1BCAA44(Instance, v12);
        v16 = v13->m_Items[v14];
        if ( !v16 )
          break;
        if ( !Instance )
          break;
        Instance = (MapButtonEntity_array *)QuestTree__GetQuestCountForMap(
                                              (QuestTree_o *)Instance,
                                              v16->fields.targetMapId,
                                              v16->fields.layer,
                                              0LL);
        v18 = this->fields.buttons;
        if ( !v18 )
          break;
        if ( v14 >= v18->max_length )
          goto LABEL_20;
        v12 = (unsigned int)Instance;
        Instance = (MapButtonEntity_array *)v18->m_Items[v14];
        if ( !Instance )
          break;
        MapButtonPrefab__SetBadge((MapButtonPrefab_o *)Instance, v12, v17);
        if ( (signed int)++v14 >= (signed int)v13->max_length )
          return;
      }
LABEL_19:
      sub_1BCAA3C(Instance, v12);
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
          sub_1BCAA44(terminalMap, method);
        terminalMap = (ScrTerminalMap_o *)buttons->m_Items[v11];
        if ( !terminalMap )
          break;
        MapButtonPrefab__SetButtonSprite((MapButtonPrefab_o *)terminalMap, v12, mapId, currentMapLayerId, 0, v4);
        max_length = buttons->max_length;
        if ( (int)++v11 >= max_length )
          return;
      }
LABEL_12:
      sub_1BCAA3C(terminalMap, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *newButtonList; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12F1E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_MapButtonPrefab___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__, v10, v11);
    byte_4B12F1E = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.newButtonList,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_MapButtonPrefab___) )
  {
    newButtonList = (System_Collections_Generic_List_object__o *)this->fields.newButtonList;
    if ( !newButtonList )
      sub_1BCAA3C(0LL, v12);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      newButtonList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapButtonPrefab__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__MoveNext__) )
    {
      if ( !v16.fields._current )
        sub_1BCAA3C(0LL, v14);
      MapButtonPrefab__SetEntryAnim((MapButtonPrefab_o *)v16.fields._current, 0LL, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapButtonPrefab__Dispose__);
  }
}