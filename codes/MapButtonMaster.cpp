void __fastcall MapButtonMaster___ctor(MapButtonMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B48F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__);
    byte_4A5B48F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    199,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__);
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

  if ( (byte_4A5B490 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__);
    byte_4A5B490 = 1;
  }
  PK = (Il2CppObject *)MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&targetMapId);
  return (MapButtonEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_311DC8C *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__);
}


MapButtonEntity_array *__fastcall MapButtonMaster__GetOpenedButtons(
        MapButtonMaster_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        const MethodInfo *method)
{
  void *Instance; // x0
  MapButtonEntity_c *v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_int__o *AvailableButtons; // x21
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t Count; // w0
  int32_t v12; // w22
  int32_t v13; // w23
  Il2CppObject *v14; // x24
  __int64 methodPtr_low; // x9
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Comparison_T__o *v22; // x19
  Il2CppObject *v23; // x21
  struct MapButtonMaster___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  MapCondMaster_o *v28; // x0
  int32_t v29; // w1
  const MethodInfo *v30; // x2

  if ( (byte_4A5B48E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_MapButtonEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_MapCondMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapButtonEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapButtonEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapButtonEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapButtonEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MapButtonEntity__TypeInfo);
    sub_1B885B0(&MapButtonEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__);
    sub_1B885B0(&MapButtonMaster___c_TypeInfo);
    byte_4A5B48E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_MapCondMaster___);
  if ( !mapInf )
    goto LABEL_29;
  if ( !Instance )
    goto LABEL_29;
  AvailableButtons = MapCondMaster__GetAvailableButtons((MapCondMaster_o *)Instance, mapInf->fields.mapId, v8);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MapButtonEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MapButtonEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
LABEL_21:
    Instance = MapButtonMaster___c_TypeInfo;
    if ( !MapButtonMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapButtonMaster___c_TypeInfo);
      Instance = MapButtonMaster___c_TypeInfo;
    }
    v22 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v22 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = MapButtonMaster___c_TypeInfo;
      }
      v23 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v22 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_MapButtonEntity__TypeInfo);
      System_Comparison_object____ctor(v22, v23, Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__, 0LL);
      static_fields = MapButtonMaster___c_TypeInfo->static_fields;
      static_fields->__9__0_0 = (struct System_Comparison_MapButtonEntity__o *)v22;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)v22, v25, v26);
    }
    if ( v10 )
    {
      System_Collections_Generic_List_object___Sort_55571192(
        v10,
        v22,
        (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_MapButtonEntity__Sort__);
      return (MapButtonEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v10,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_MapButtonEntity__ToArray__);
    }
LABEL_29:
    sub_1B8880C(Instance, v7);
  }
  v12 = Count;
  v13 = 0;
  while ( 1 )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_29;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v13,
                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_29;
    v7 = MapButtonEntity_TypeInfo;
    v14 = (Il2CppObject *)Instance;
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
                         (const MethodInfo_34E1D0C *)Method_System_Collections_Generic_List_int__Remove__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v10 )
        goto LABEL_29;
      items = v10->fields._items;
      v19 = Method_System_Collections_Generic_List_MapButtonEntity__Add__;
      ++v10->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          v14,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v14;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v14, v16, v17);
      }
    }
    if ( v12 == ++v13 )
      goto LABEL_21;
  }
  sub_1B88ACC(Instance);
  return (MapButtonEntity_array *)MapCondMaster__GetAvailableButtons(v28, v29, v30);
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

  if ( (byte_4A5B491 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__);
    byte_4A5B491 = 1;
  }
  PK = (Il2CppObject *)MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__);
}


void __fastcall MapButtonMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B492 & 1) == 0 )
  {
    sub_1B885B0(&MapButtonMaster___c_TypeInfo);
    byte_4A5B492 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(MapButtonMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  MapButtonMaster___c_TypeInfo->static_fields->__9 = (struct MapButtonMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)MapButtonMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, a);
  return a->fields.priority - b->fields.priority;
}