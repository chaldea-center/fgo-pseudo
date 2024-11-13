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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
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
  int64_t v32; // x1
  struct MapMaster_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  struct MapMaster_StaticFields *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  struct MapMaster_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  struct MapMaster_StaticFields *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x1
  struct MapMaster_StaticFields *v65; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x1
  struct MapMaster_StaticFields *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x1
  struct MapMaster_StaticFields *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int64_t v88; // x1
  struct MapMaster_StaticFields *v89; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  struct MapMaster_StaticFields *v96; // x0
  int64_t v97; // x1
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  struct MapMaster_StaticFields *v104; // x0
  int64_t v105; // x1
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  struct MapMaster_StaticFields *v112; // x0
  int64_t v113; // x1
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7

  if ( (byte_4B16579 & 1) == 0 )
  {
    sub_1BCA7E0(&MapMaster_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_19642/*"firstEffectTime"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_23074/*"referrerMapId"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17887/*"camera2DResetDuration"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_21498/*"mapCameraMoveEasingType"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_21501/*"mapCameraMoveTimeLogarithmBase"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_23678/*"spotScale"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_22636/*"overwriteMapAssetId"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_24618/*"useVoiceSvtIdList"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_1486/*"3dModelFlag"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_21499/*"mapCameraMoveTimeCoefficient"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_19643/*"firstEffectType"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_21500/*"mapCameraMoveTimeConstant"*/, v30, v31);
    byte_4B16579 = 1;
  }
  MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TYPE = (struct System_String_o *)StringLiteral_19643/*"firstEffectType"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MapMaster_TypeInfo->static_fields,
    StringLiteral_19643/*"firstEffectType"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v32 = StringLiteral_19642/*"firstEffectTime"*/;
  static_fields = MapMaster_TypeInfo->static_fields;
  static_fields->SCRIPT_KEY_FADE_TIME = (struct System_String_o *)StringLiteral_19642/*"firstEffectTime"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->SCRIPT_KEY_FADE_TIME, v32, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_23074/*"referrerMapId"*/;
  v41 = MapMaster_TypeInfo->static_fields;
  v41->SCRIPT_KEY_REFERRER_MAP_ID = (struct System_String_o *)StringLiteral_23074/*"referrerMapId"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v41->SCRIPT_KEY_REFERRER_MAP_ID, v40, v42, v43, v44, v45, v46, v47);
  v48 = StringLiteral_22636/*"overwriteMapAssetId"*/;
  v49 = MapMaster_TypeInfo->static_fields;
  v49->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID = (struct System_String_o *)StringLiteral_22636/*"overwriteMapAssetId"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v49->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID, v48, v50, v51, v52, v53, v54, v55);
  v56 = StringLiteral_1486/*"3dModelFlag"*/;
  v57 = MapMaster_TypeInfo->static_fields;
  v57->SCRIPT_KEY_ON_MAP_MODEL = (struct System_String_o *)StringLiteral_1486/*"3dModelFlag"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v57->SCRIPT_KEY_ON_MAP_MODEL, v56, v58, v59, v60, v61, v62, v63);
  v64 = StringLiteral_24618/*"useVoiceSvtIdList"*/;
  v65 = MapMaster_TypeInfo->static_fields;
  v65->SCRIPT_KEY_USE_VOICE_SVT_ID_LIST = (struct System_String_o *)StringLiteral_24618/*"useVoiceSvtIdList"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v65->SCRIPT_KEY_USE_VOICE_SVT_ID_LIST, v64, v66, v67, v68, v69, v70, v71);
  v72 = StringLiteral_23678/*"spotScale"*/;
  v73 = MapMaster_TypeInfo->static_fields;
  v73->SPOT_SCALE = (struct System_String_o *)StringLiteral_23678/*"spotScale"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v73->SPOT_SCALE, v72, v74, v75, v76, v77, v78, v79);
  v80 = StringLiteral_21500/*"mapCameraMoveTimeConstant"*/;
  v81 = MapMaster_TypeInfo->static_fields;
  v81->MAP_CAMERA_MOVE_TIME_CONSTANT = (struct System_String_o *)StringLiteral_21500/*"mapCameraMoveTimeConstant"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v81->MAP_CAMERA_MOVE_TIME_CONSTANT, v80, v82, v83, v84, v85, v86, v87);
  v88 = StringLiteral_21499/*"mapCameraMoveTimeCoefficient"*/;
  v89 = MapMaster_TypeInfo->static_fields;
  v89->MAP_CAMERA_MOVE_TIME_COEFFICIENT = (struct System_String_o *)StringLiteral_21499/*"mapCameraMoveTimeCoefficient"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v89->MAP_CAMERA_MOVE_TIME_COEFFICIENT, v88, v90, v91, v92, v93, v94, v95);
  v96 = MapMaster_TypeInfo->static_fields;
  v97 = StringLiteral_21501/*"mapCameraMoveTimeLogarithmBase"*/;
  v96->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE = (struct System_String_o *)StringLiteral_21501/*"mapCameraMoveTimeLogarithmBase"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v96->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102,
    v103);
  v104 = MapMaster_TypeInfo->static_fields;
  v105 = StringLiteral_21498/*"mapCameraMoveEasingType"*/;
  v104->MAP_CAMERA_MOVE_TIME_EASING_TYPE = (struct System_String_o *)StringLiteral_21498/*"mapCameraMoveEasingType"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v104->MAP_CAMERA_MOVE_TIME_EASING_TYPE,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  v112 = MapMaster_TypeInfo->static_fields;
  v113 = StringLiteral_17887/*"camera2DResetDuration"*/;
  v112->CAMERA2D_RESET_DURATION = (struct System_String_o *)StringLiteral_17887/*"camera2DResetDuration"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v112->CAMERA2D_RESET_DURATION, v113, v114, v115, v116, v117, v118, v119);
}


void __fastcall MapMaster___ctor(MapMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16576 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_MapMaster__MapEntity__string___ctor__, method, v2);
    byte_4B16576 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    197,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_MapMaster__MapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapEntity_o *__fastcall MapMaster__GetEntity(MapMaster_o *this, int32_t id, int32_t warId, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16574 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__, *(_QWORD *)&id, *(_QWORD *)&warId);
    byte_4B16574 = 1;
  }
  PK = (Il2CppObject *)MapEntity__CreatePK(id, warId, *(const MethodInfo **)&warId);
  return (MapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          PK,
                          (const MethodInfo_31B3198 *)Method_DataMasterBase_MapMaster__MapEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
MapEntity_array *__fastcall MapMaster__GetEntityListByMapId(MapMaster_o *this, int32_t mapId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t v19; // x1
  int64_t list; // x0
  int v21; // w22
  int32_t v22; // w23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B16578 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&mapId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapEntity__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapEntity___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_MapEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&MapEntity_TypeInfo, v16, v17);
    byte_4B16578 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MapEntity__TypeInfo,
                                                       *(_QWORD *)&mapId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v21 = list;
    v22 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v22,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v19 = list;
        methodPtr_low = LOBYTE(MapEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(MapEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == MapEntity_TypeInfo
          && *(_DWORD *)(list + 16) == mapId )
        {
          if ( !v18 )
            break;
          items = v18->fields._items;
          v31 = Method_System_Collections_Generic_List_MapEntity__Add__;
          ++v18->fields._version;
          if ( !items )
            break;
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v19;
            sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), v19, v23, v24, v25, v26, v27, v28);
          }
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(list, v19);
  }
LABEL_17:
  if ( !v18 )
    goto LABEL_19;
  return (MapEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v18,
                              (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
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

  if ( (byte_4B16575 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__, entity, *(_QWORD *)&id);
    byte_4B16575 = 1;
  }
  PK = (Il2CppObject *)MapEntity__CreatePK(id, warId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_MapMaster__MapEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
MapEntity_array *__fastcall MapMaster__getList(MapMaster_o *this, int32_t war_id, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t v19; // x1
  int64_t list; // x0
  int32_t v21; // w22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B16577 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&war_id,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapEntity__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapEntity___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_MapEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&MapEntity_TypeInfo, v16, v17);
    byte_4B16577 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MapEntity__TypeInfo,
                                                       *(_QWORD *)&war_id,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MapEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v21 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v21 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v21,
                      (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v19 = list;
      methodPtr_low = LOBYTE(MapEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(MapEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == MapEntity_TypeInfo
        && *(_DWORD *)(list + 20) == war_id )
      {
        if ( !v18 )
          goto LABEL_20;
        items = v18->fields._items;
        v30 = Method_System_Collections_Generic_List_MapEntity__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v19;
          sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), v19, v22, v23, v24, v25, v26, v27);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v21;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v18 )
LABEL_20:
    sub_1BCAA3C(list, v19);
  return (MapEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v18,
                              (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_MapEntity__ToArray__);
}