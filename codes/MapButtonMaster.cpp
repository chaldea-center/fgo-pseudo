void __fastcall MapButtonMaster___ctor(MapButtonMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC737 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__, method);
    byte_49FC737 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    199,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__);
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

  if ( (byte_49FC738 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_49FC738 = 1;
  }
  PK = (Il2CppObject *)MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&targetMapId);
  return (MapButtonEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_30D41FC *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__);
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
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_int__o *AvailableButtons; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t Count; // w0
  __int64 v26; // x1
  __int64 v27; // x2
  int32_t v28; // w22
  int32_t v29; // w23
  Il2CppObject *v30; // x24
  __int64 methodPtr_low; // x9
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Comparison_T__o *v37; // x19
  Il2CppObject *v38; // x21
  struct MapButtonMaster___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  MapCondMaster_o *v43; // x0
  int32_t v44; // w1
  const MethodInfo *v45; // x2

  if ( (byte_49FC736 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, warInf);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B640C8(&System_Comparison_MapButtonEntity__TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_MapCondMaster___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapButtonEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Remove__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapButtonEntity__Sort__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapButtonEntity__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapButtonEntity___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_MapButtonEntity__TypeInfo, v14);
    sub_1B640C8(&MapButtonEntity_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__, v17);
    sub_1B640C8(&MapButtonMaster___c_TypeInfo, v18);
    byte_49FC736 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_MapCondMaster___);
  if ( !mapInf )
    goto LABEL_29;
  if ( !Instance )
    goto LABEL_29;
  AvailableButtons = MapCondMaster__GetAvailableButtons((MapCondMaster_o *)Instance, mapInf->fields.mapId, v20);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_MapButtonEntity__TypeInfo,
                                                       v22,
                                                       v23);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MapButtonEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
LABEL_21:
    Instance = MapButtonMaster___c_TypeInfo;
    if ( !MapButtonMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapButtonMaster___c_TypeInfo);
      Instance = MapButtonMaster___c_TypeInfo;
    }
    v37 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v37 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = MapButtonMaster___c_TypeInfo;
      }
      v38 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v37 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_MapButtonEntity__TypeInfo, v26, v27);
      System_Comparison_object____ctor(v37, v38, Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__, 0LL);
      static_fields = MapButtonMaster___c_TypeInfo->static_fields;
      static_fields->__9__0_0 = (struct System_Comparison_MapButtonEntity__o *)v37;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)v37, v40, v41);
    }
    if ( v24 )
    {
      System_Collections_Generic_List_object___Sort_55243320(
        v24,
        v37,
        (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_MapButtonEntity__Sort__);
      return (MapButtonEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v24,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_MapButtonEntity__ToArray__);
    }
LABEL_29:
    sub_1B64324(Instance);
  }
  v28 = Count;
  v29 = 0;
  while ( 1 )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_29;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v29,
                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_29;
    v30 = (Il2CppObject *)Instance;
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
                         (const MethodInfo_3491478 *)Method_System_Collections_Generic_List_int__Remove__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v24 )
        goto LABEL_29;
      items = v24->fields._items;
      v34 = Method_System_Collections_Generic_List_MapButtonEntity__Add__;
      ++v24->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v24->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          v30,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v24->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v30;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v30, v27, v32);
      }
    }
    if ( v28 == ++v29 )
      goto LABEL_21;
  }
  sub_1B645E4(Instance);
  return (MapButtonEntity_array *)MapCondMaster__GetAvailableButtons(v43, v44, v45);
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

  if ( (byte_49FC739 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__, entity);
    byte_49FC739 = 1;
  }
  PK = (Il2CppObject *)MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__);
}


void __fastcall MapButtonMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC73A & 1) == 0 )
  {
    sub_1B640C8(&MapButtonMaster___c_TypeInfo, v1);
    byte_49FC73A = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(MapButtonMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  MapButtonMaster___c_TypeInfo->static_fields->__9 = (struct MapButtonMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)MapButtonMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return a->fields.priority - b->fields.priority;
}