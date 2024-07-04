void __fastcall MapButtonMaster___ctor(MapButtonMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E2B22 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__, method);
    byte_48E2B22 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    198,
    (const MethodInfo_2FE6D64 *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__);
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

  if ( (byte_48E2B23 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_48E2B23 = 1;
  }
  PK = (Il2CppObject *)MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&targetMapId);
  return (MapButtonEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_2FE6DA4 *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__);
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
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Comparison_T__o *v35; // x19
  Il2CppObject *v36; // x21
  struct MapButtonMaster___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  MapCondMaster_o *v41; // x0
  int32_t v42; // w1
  const MethodInfo *v43; // x2

  if ( (byte_48E2B21 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, warInf);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B00CCC(&System_Comparison_MapButtonEntity__TypeInfo, v7);
    sub_1B00CCC(&Method_DataManager_GetMasterData_MapCondMaster___, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_MapButtonEntity__Add__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Remove__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_MapButtonEntity__Sort__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_MapButtonEntity__ToArray__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_MapButtonEntity___ctor__, v13);
    sub_1B00CCC(&System_Collections_Generic_List_MapButtonEntity__TypeInfo, v14);
    sub_1B00CCC(&MapButtonEntity_TypeInfo, v15);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B00CCC(&Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__, v17);
    sub_1B00CCC(&MapButtonMaster___c_TypeInfo, v18);
    byte_48E2B21 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_MapCondMaster___);
  if ( !mapInf )
    goto LABEL_29;
  if ( !Instance )
    goto LABEL_29;
  AvailableButtons = MapCondMaster__GetAvailableButtons((MapCondMaster_o *)Instance, mapInf->fields.mapId, v21);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_MapButtonEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_MapButtonEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
LABEL_21:
    Instance = MapButtonMaster___c_TypeInfo;
    if ( !MapButtonMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapButtonMaster___c_TypeInfo);
      Instance = MapButtonMaster___c_TypeInfo;
    }
    v35 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v35 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = MapButtonMaster___c_TypeInfo;
      }
      v36 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v35 = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_MapButtonEntity__TypeInfo);
      System_Comparison_object____ctor(v35, v36, Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__, 0LL);
      static_fields = MapButtonMaster___c_TypeInfo->static_fields;
      static_fields->__9__0_0 = (struct System_Comparison_MapButtonEntity__o *)v35;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)v35, v38, v39);
    }
    if ( v23 )
    {
      System_Collections_Generic_List_object___Sort_54277268(
        v23,
        v35,
        (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_MapButtonEntity__Sort__);
      return (MapButtonEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v23,
                                        (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_MapButtonEntity__ToArray__);
    }
LABEL_29:
    sub_1B00F28(Instance, v20);
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
                 (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
                         (const MethodInfo_33A5EA8 *)Method_System_Collections_Generic_List_int__Remove__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v23 )
        goto LABEL_29;
      items = v23->fields._items;
      v32 = Method_System_Collections_Generic_List_MapButtonEntity__Add__;
      ++v23->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v23->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          v27,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v27;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v27, v29, v30);
      }
    }
    if ( v25 == ++v26 )
      goto LABEL_21;
  }
  sub_1B011E8(Instance);
  return (MapButtonEntity_array *)MapCondMaster__GetAvailableButtons(v41, v42, v43);
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

  if ( (byte_48E2B24 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__, entity);
    byte_48E2B24 = 1;
  }
  PK = (Il2CppObject *)MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_2FE6DF4 *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__);
}


void __fastcall MapButtonMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E2B25 & 1) == 0 )
  {
    sub_1B00CCC(&MapButtonMaster___c_TypeInfo, v1);
    byte_48E2B25 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(MapButtonMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MapButtonMaster___c_TypeInfo->static_fields->__9 = (struct MapButtonMaster___c_o *)v2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)MapButtonMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B00F28(this, a);
  return a->fields.priority - b->fields.priority;
}