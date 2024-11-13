void __fastcall MapButtonMaster___ctor(MapButtonMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16530 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__, method, v2);
    byte_4B16530 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    199,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapButtonEntity_o *__fastcall MapButtonMaster__GetEntity(
        MapButtonMaster_o *this,
        int32_t id,
        int32_t priority,
        int32_t targetMapId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16531 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&priority);
    byte_4B16531 = 1;
  }
  PK = (Il2CppObject *)MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&targetMapId);
  return (MapButtonEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_31B3198 *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__);
}


MapButtonEntity_array *__fastcall MapButtonMaster__GetOpenedButtons(
        MapButtonMaster_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        const MethodInfo *method)
{
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
  void *Instance; // x0
  MapButtonEntity_c *v33; // x1
  const MethodInfo *v34; // x2
  System_Collections_Generic_List_int__o *AvailableButtons; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_List_object__o *v39; // x20
  int32_t Count; // w0
  int64_t v41; // x2
  __int64 v42; // x3
  int32_t v43; // w22
  int32_t v44; // w23
  Il2CppObject *v45; // x24
  __int64 methodPtr_low; // x9
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  System_Comparison_T__o *v55; // x19
  Il2CppObject *v56; // x21
  struct MapButtonMaster___c_StaticFields *static_fields; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  MapCondMaster_o *v65; // x0
  int32_t v66; // w1
  const MethodInfo *v67; // x2

  if ( (byte_4B1652F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, warInf, mapInf);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_MapButtonEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MapCondMaster___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapButtonEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapButtonEntity__Sort__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapButtonEntity__ToArray__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapButtonEntity___ctor__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_MapButtonEntity__TypeInfo, v22, v23);
    sub_1BCA7E0(&MapButtonEntity_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27);
    sub_1BCA7E0(&Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__, v28, v29);
    sub_1BCA7E0(&MapButtonMaster___c_TypeInfo, v30, v31);
    byte_4B1652F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MapCondMaster___);
  if ( !mapInf )
    goto LABEL_29;
  if ( !Instance )
    goto LABEL_29;
  AvailableButtons = MapCondMaster__GetAvailableButtons((MapCondMaster_o *)Instance, mapInf->fields.mapId, v34);
  v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MapButtonEntity__TypeInfo,
                                                       v36,
                                                       v37,
                                                       v38);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MapButtonEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
LABEL_21:
    Instance = MapButtonMaster___c_TypeInfo;
    if ( !MapButtonMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapButtonMaster___c_TypeInfo, v33);
      Instance = MapButtonMaster___c_TypeInfo;
    }
    v55 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v55 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v33);
        Instance = MapButtonMaster___c_TypeInfo;
      }
      v56 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v55 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_MapButtonEntity__TypeInfo, v33, v41, v42);
      System_Comparison_object____ctor(v55, v56, Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__, 0LL);
      static_fields = MapButtonMaster___c_TypeInfo->static_fields;
      static_fields->__9__0_0 = (struct System_Comparison_MapButtonEntity__o *)v55;
      sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)v55, v58, v59, v60, v61, v62, v63);
    }
    if ( v39 )
    {
      System_Collections_Generic_List_object___Sort_56244000(
        v39,
        v55,
        (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_MapButtonEntity__Sort__);
      return (MapButtonEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v39,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_MapButtonEntity__ToArray__);
    }
LABEL_29:
    sub_1BCAA3C(Instance, v33);
  }
  v43 = Count;
  v44 = 0;
  while ( 1 )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_29;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v44,
                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_29;
    v33 = MapButtonEntity_TypeInfo;
    v45 = (Il2CppObject *)Instance;
    methodPtr_low = LOBYTE(MapButtonEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
      || *(MapButtonEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != MapButtonEntity_TypeInfo )
    {
      break;
    }
    if ( !AvailableButtons )
      goto LABEL_29;
    Instance = (void *)System_Collections_Generic_List_int___Remove(
                         AvailableButtons,
                         *((_DWORD *)Instance + 4),
                         (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v39 )
        goto LABEL_29;
      items = v39->fields._items;
      v52 = Method_System_Collections_Generic_List_MapButtonEntity__Add__;
      ++v39->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v39->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v39,
          v45,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &items->obj.klass + size;
        v39->fields._size = size + 1;
        v54[4] = (Il2CppClass *)v45;
        sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 4), (int64_t)v45, v41, v42, v47, v48, v49, v50);
      }
    }
    if ( v43 == ++v44 )
      goto LABEL_21;
  }
  sub_1BCACFC(Instance);
  return (MapButtonEntity_array *)MapCondMaster__GetAvailableButtons(v65, v66, v67);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapButtonMaster__TryGetEntity(
        MapButtonMaster_o *this,
        MapButtonEntity_o **entity,
        int32_t id,
        int32_t priority,
        int32_t targetMapId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16532 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__, entity, *(_QWORD *)&id);
    byte_4B16532 = 1;
  }
  PK = (Il2CppObject *)MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__);
}


void __fastcall MapButtonMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16533 & 1) == 0 )
  {
    sub_1BCA7E0(&MapButtonMaster___c_TypeInfo, v1, v2);
    byte_4B16533 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MapButtonMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MapButtonMaster___c_TypeInfo->static_fields->__9 = (struct MapButtonMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MapButtonMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall MapButtonMaster___c___ctor(MapButtonMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall MapButtonMaster___c___GetOpenedButtons_b__0_0(
        MapButtonMaster___c_o *this,
        MapButtonEntity_o *a,
        MapButtonEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.priority - b->fields.priority;
}