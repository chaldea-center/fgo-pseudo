void __fastcall MapButtonMaster___ctor(MapButtonMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66F07 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__, method);
    byte_4B66F07 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    203,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__);
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

  if ( (byte_4B66F08 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B66F08 = 1;
  }
  PK = (Il2CppObject *)MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&targetMapId);
  return (MapButtonEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_31FDB1C *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__);
}


MapButtonEntity_array *__fastcall MapButtonMaster__GetOpenedButtons(
        MapButtonMaster_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
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
  void *Instance; // x0
  MapButtonEntity_c *v20; // x1
  const MethodInfo *v21; // x2
  System_Collections_Generic_List_int__o *AvailableButtons; // x21
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t Count; // w0
  int32_t v25; // w22
  int32_t v26; // w23
  Il2CppObject *v27; // x24
  __int64 methodPtr_low; // x9
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Comparison_T__o *v39; // x19
  Il2CppObject *v40; // x21
  struct MapButtonMaster___c_StaticFields *static_fields; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  MapCondMaster_o *v49; // x0
  int32_t v50; // w1
  const MethodInfo *v51; // x2

  if ( (byte_4B66F06 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, warInf);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1BE4ACC(&System_Comparison_MapButtonEntity__TypeInfo, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_MapCondMaster___, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_MapButtonEntity__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Remove__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_MapButtonEntity__Sort__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_MapButtonEntity__ToArray__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_MapButtonEntity___ctor__, v13);
    sub_1BE4ACC(&System_Collections_Generic_List_MapButtonEntity__TypeInfo, v14);
    sub_1BE4ACC(&MapButtonEntity_TypeInfo, v15);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BE4ACC(&Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__, v17);
    sub_1BE4ACC(&MapButtonMaster___c_TypeInfo, v18);
    byte_4B66F06 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_MapCondMaster___);
  if ( !mapInf )
    goto LABEL_29;
  if ( !Instance )
    goto LABEL_29;
  AvailableButtons = MapCondMaster__GetAvailableButtons((MapCondMaster_o *)Instance, mapInf->fields.mapId, v21);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_MapButtonEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_MapButtonEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
LABEL_21:
    Instance = MapButtonMaster___c_TypeInfo;
    if ( !MapButtonMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapButtonMaster___c_TypeInfo);
      Instance = MapButtonMaster___c_TypeInfo;
    }
    v39 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v39 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = MapButtonMaster___c_TypeInfo;
      }
      v40 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v39 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_MapButtonEntity__TypeInfo);
      System_Comparison_object____ctor(v39, v40, Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__, 0LL);
      static_fields = MapButtonMaster___c_TypeInfo->static_fields;
      static_fields->__9__0_0 = (struct System_Comparison_MapButtonEntity__o *)v39;
      sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)v39, v42, v43, v44, v45, v46, v47);
    }
    if ( v23 )
    {
      System_Collections_Generic_List_object___Sort_56548584(
        v23,
        v39,
        (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_MapButtonEntity__Sort__);
      return (MapButtonEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v23,
                                        (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_MapButtonEntity__ToArray__);
    }
LABEL_29:
    sub_1BE4D28(Instance, v20);
  }
  v25 = Count;
  v26 = 0;
  while ( 1 )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_29;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v26,
                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_29;
    v20 = MapButtonEntity_TypeInfo;
    v27 = (Il2CppObject *)Instance;
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
                         (const MethodInfo_35D06FC *)Method_System_Collections_Generic_List_int__Remove__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v23 )
        goto LABEL_29;
      items = v23->fields._items;
      v36 = Method_System_Collections_Generic_List_MapButtonEntity__Add__;
      ++v23->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v23->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          v27,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v27;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)v27, v29, v30, v31, v32, v33, v34);
      }
    }
    if ( v25 == ++v26 )
      goto LABEL_21;
  }
  sub_1BE4FE8(Instance);
  return (MapButtonEntity_array *)MapCondMaster__GetAvailableButtons(v49, v50, v51);
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

  if ( (byte_4B66F09 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__, entity);
    byte_4B66F09 = 1;
  }
  PK = (Il2CppObject *)MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__);
}


void __fastcall MapButtonMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B66F0A & 1) == 0 )
  {
    sub_1BE4ACC(&MapButtonMaster___c_TypeInfo, v1);
    byte_4B66F0A = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(MapButtonMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MapButtonMaster___c_TypeInfo->static_fields->__9 = (struct MapButtonMaster___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)MapButtonMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, a);
  return a->fields.priority - b->fields.priority;
}