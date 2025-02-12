void __fastcall MapMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  int64_t v20; // x1
  struct MapMaster_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  struct MapMaster_StaticFields *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x1
  struct MapMaster_StaticFields *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  struct MapMaster_StaticFields *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x1
  struct MapMaster_StaticFields *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x1
  struct MapMaster_StaticFields *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x1
  struct MapMaster_StaticFields *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x1
  struct MapMaster_StaticFields *v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  struct MapMaster_StaticFields *v84; // x0
  int64_t v85; // x1
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  struct MapMaster_StaticFields *v92; // x0
  int64_t v93; // x1
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  struct MapMaster_StaticFields *v100; // x0
  int64_t v101; // x1
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7

  if ( (byte_4BB4A7F & 1) == 0 )
  {
    sub_1C13D24(&MapMaster_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_19745/*"filepath"*/, v8);
    sub_1C13D24(&StringLiteral_23206/*"recordType"*/, v9);
    sub_1C13D24(&StringLiteral_17979/*"ca"*/, v10);
    sub_1C13D24(&StringLiteral_21619/*"mainMsgSpacingY"*/, v11);
    sub_1C13D24(&StringLiteral_21622/*"mainThread"*/, v12);
    sub_1C13D24(&StringLiteral_23818/*"sources"*/, v13);
    sub_1C13D24(&StringLiteral_22766/*"overwriteClassIconChangeEffectIdAtBuffRemove"*/, v14);
    sub_1C13D24(&StringLiteral_24761/*"urn:schemas-microsoft-com:xml-updategram"*/, v15);
    sub_1C13D24(&StringLiteral_1489/*"3dMapEntryAnimName"*/, v16);
    sub_1C13D24(&StringLiteral_21620/*"mainScenario"*/, v17);
    sub_1C13D24(&StringLiteral_19746/*"files)"*/, v18);
    sub_1C13D24(&StringLiteral_21621/*"mainText "*/, v19);
    byte_4BB4A7F = 1;
  }
  MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TYPE = (struct System_String_o *)StringLiteral_19746/*"files)"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)MapMaster_TypeInfo->static_fields,
    StringLiteral_19746/*"files)"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v20 = StringLiteral_19745/*"filepath"*/;
  static_fields = MapMaster_TypeInfo->static_fields;
  static_fields->SCRIPT_KEY_FADE_TIME = (struct System_String_o *)StringLiteral_19745/*"filepath"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->SCRIPT_KEY_FADE_TIME, v20, v22, v23, v24, v25, v26, v27);
  v28 = StringLiteral_23206/*"recordType"*/;
  v29 = MapMaster_TypeInfo->static_fields;
  v29->SCRIPT_KEY_REFERRER_MAP_ID = (struct System_String_o *)StringLiteral_23206/*"recordType"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v29->SCRIPT_KEY_REFERRER_MAP_ID, v28, v30, v31, v32, v33, v34, v35);
  v36 = StringLiteral_22766/*"overwriteClassIconChangeEffectIdAtBuffRemove"*/;
  v37 = MapMaster_TypeInfo->static_fields;
  v37->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID = (struct System_String_o *)StringLiteral_22766/*"overwriteClassIconChangeEffectIdAtBuffRemove"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v37->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID, v36, v38, v39, v40, v41, v42, v43);
  v44 = StringLiteral_1489/*"3dMapEntryAnimName"*/;
  v45 = MapMaster_TypeInfo->static_fields;
  v45->SCRIPT_KEY_ON_MAP_MODEL = (struct System_String_o *)StringLiteral_1489/*"3dMapEntryAnimName"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v45->SCRIPT_KEY_ON_MAP_MODEL, v44, v46, v47, v48, v49, v50, v51);
  v52 = StringLiteral_24761/*"urn:schemas-microsoft-com:xml-updategram"*/;
  v53 = MapMaster_TypeInfo->static_fields;
  v53->SCRIPT_KEY_USE_VOICE_SVT_ID_LIST = (struct System_String_o *)StringLiteral_24761/*"urn:schemas-microsoft-com:xml-updategram"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v53->SCRIPT_KEY_USE_VOICE_SVT_ID_LIST, v52, v54, v55, v56, v57, v58, v59);
  v60 = StringLiteral_23818/*"sources"*/;
  v61 = MapMaster_TypeInfo->static_fields;
  v61->SPOT_SCALE = (struct System_String_o *)StringLiteral_23818/*"sources"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v61->SPOT_SCALE, v60, v62, v63, v64, v65, v66, v67);
  v68 = StringLiteral_21621/*"mainText "*/;
  v69 = MapMaster_TypeInfo->static_fields;
  v69->MAP_CAMERA_MOVE_TIME_CONSTANT = (struct System_String_o *)StringLiteral_21621/*"mainText "*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v69->MAP_CAMERA_MOVE_TIME_CONSTANT, v68, v70, v71, v72, v73, v74, v75);
  v76 = StringLiteral_21620/*"mainScenario"*/;
  v77 = MapMaster_TypeInfo->static_fields;
  v77->MAP_CAMERA_MOVE_TIME_COEFFICIENT = (struct System_String_o *)StringLiteral_21620/*"mainScenario"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v77->MAP_CAMERA_MOVE_TIME_COEFFICIENT, v76, v78, v79, v80, v81, v82, v83);
  v84 = MapMaster_TypeInfo->static_fields;
  v85 = StringLiteral_21622/*"mainThread"*/;
  v84->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE = (struct System_String_o *)StringLiteral_21622/*"mainThread"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v84->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  v92 = MapMaster_TypeInfo->static_fields;
  v93 = StringLiteral_21619/*"mainMsgSpacingY"*/;
  v92->MAP_CAMERA_MOVE_TIME_EASING_TYPE = (struct System_String_o *)StringLiteral_21619/*"mainMsgSpacingY"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v92->MAP_CAMERA_MOVE_TIME_EASING_TYPE, v93, v94, v95, v96, v97, v98, v99);
  v100 = MapMaster_TypeInfo->static_fields;
  v101 = StringLiteral_17979/*"ca"*/;
  v100->CAMERA2D_RESET_DURATION = (struct System_String_o *)StringLiteral_17979/*"ca"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v100->CAMERA2D_RESET_DURATION, v101, v102, v103, v104, v105, v106, v107);
}


void __fastcall MapMaster___ctor(MapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4A7C & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_MapMaster__MapEntity__string___ctor__, method);
    byte_4BB4A7C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    201,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_MapMaster__MapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapEntity_o *__fastcall MapMaster__GetEntity(MapMaster_o *this, int32_t id, int32_t warId, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BB4A7A & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4BB4A7A = 1;
  }
  PK = (Il2CppObject *)MapEntity__CreatePK(id, warId, *(const MethodInfo **)&warId);
  return (MapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          PK,
                          (const MethodInfo_323D0DC *)Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
MapEntity_array *__fastcall MapMaster__GetEntityListByMapId(MapMaster_o *this, int32_t mapId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  int64_t v11; // x1
  int64_t list; // x0
  int v13; // w22
  int32_t v14; // w23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4BB4A7E & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_MapEntity__get_Count__, *(_QWORD *)&mapId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_MapEntity__get_Item__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_MapEntity__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_MapEntity__ToArray__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_MapEntity___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_MapEntity__TypeInfo, v9);
    byte_4BB4A7E = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_MapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_MapEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = list;
    v14 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v14,
                        (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_MapEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( *(_DWORD *)(list + 16) == mapId )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v22 = Method_System_Collections_Generic_List_MapEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)list,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v11;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v24 + 4), v11, v15, v16, v17, v18, v19, v20);
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C13F80(list, v11);
  }
LABEL_15:
  if ( !v10 )
    goto LABEL_17;
  return (MapEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v10,
                              (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapMaster__TryGetEntity(
        MapMaster_o *this,
        MapEntity_o **entity,
        int32_t id,
        int32_t warId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BB4A7B & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__, entity);
    byte_4BB4A7B = 1;
  }
  PK = (Il2CppObject *)MapEntity__CreatePK(id, warId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
MapEntity_array *__fastcall MapMaster__getList(MapMaster_o *this, int32_t war_id, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  int64_t v11; // x1
  int64_t list; // x0
  int32_t v13; // w22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4BB4A7D & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_MapEntity__get_Count__, *(_QWORD *)&war_id);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_MapEntity__get_Item__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_MapEntity__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_MapEntity__ToArray__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_MapEntity___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_MapEntity__TypeInfo, v9);
    byte_4BB4A7D = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_MapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v13 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_MapEntity__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v13,
                      (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_MapEntity__get_Item__);
    if ( list )
    {
      v11 = list;
      if ( *(_DWORD *)(list + 20) == war_id )
      {
        if ( !v10 )
          goto LABEL_18;
        items = v10->fields._items;
        v21 = Method_System_Collections_Generic_List_MapEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v11;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 4), v11, v14, v15, v16, v17, v18, v19);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v10 )
LABEL_18:
    sub_1C13F80(list, v11);
  return (MapEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v10,
                              (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
}