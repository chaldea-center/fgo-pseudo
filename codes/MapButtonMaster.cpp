void MapButtonMaster___ctor(MapButtonMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC789D & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__);
    byte_4CC789D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    203,
    (const MethodInfo_340B614 *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapButtonEntity_o *MapButtonMaster__GetEntity(
        MapButtonMaster_o *this,
        int32_t id,
        int32_t priority,
        int32_t targetMapId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC789E & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__);
    byte_4CC789E = 1;
  }
  PK = (Il2CppObject *)MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&targetMapId);
  return (MapButtonEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_340D938 *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__);
}


MapButtonEntity_array *MapButtonMaster__GetOpenedButtons(
        MapButtonMaster_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_int__o *AvailableButtons; // x21
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t Count; // w0
  int32_t v12; // w22
  int32_t v13; // w23
  Il2CppObject *v14; // x24
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Comparison_T__o *v25; // x19
  Il2CppObject *v26; // x21
  struct MapButtonMaster___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  if ( (byte_4CC789C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_MapButtonEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_MapButtonEntity__get_Item__);
    sub_1C713B0(&System_Comparison_MapButtonEntity__TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_MapCondMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_MapButtonEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MapButtonEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MapButtonEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MapButtonEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_MapButtonEntity__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__);
    sub_1C713B0(&MapButtonMaster___c_TypeInfo);
    byte_4CC789C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_MapCondMaster___);
  if ( !mapInf )
    goto LABEL_27;
  if ( !Instance )
    goto LABEL_27;
  AvailableButtons = MapCondMaster__GetAvailableButtons((MapCondMaster_o *)Instance, mapInf->fields.mapId, v8);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_MapButtonEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_MapButtonEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_MapButtonEntity__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v13,
                   (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_MapButtonEntity__get_Item__);
      if ( !Instance || !AvailableButtons )
        break;
      v14 = (Il2CppObject *)Instance;
      Instance = (void *)System_Collections_Generic_List_int___Remove(
                           AvailableButtons,
                           *((_DWORD *)Instance + 4),
                           (const MethodInfo_37F4BF0 *)Method_System_Collections_Generic_List_int__Remove__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v10 )
          break;
        items = v10->fields._items;
        v22 = Method_System_Collections_Generic_List_MapButtonEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v14,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v14;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
        }
      }
      if ( v12 == ++v13 )
        goto LABEL_19;
    }
LABEL_27:
    sub_1C71608(Instance, v7);
  }
LABEL_19:
  Instance = MapButtonMaster___c_TypeInfo;
  if ( !MapButtonMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapButtonMaster___c_TypeInfo);
    Instance = MapButtonMaster___c_TypeInfo;
  }
  v25 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v25 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = MapButtonMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v25 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_MapButtonEntity__TypeInfo);
    System_Comparison_object____ctor(v25, v26, Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__, 0);
    static_fields = MapButtonMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Comparison_MapButtonEntity__o *)v25;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__0_0, (int32_t)v25, v28, v29, v30, v31, v32, v33);
  }
  if ( !v10 )
    goto LABEL_27;
  System_Collections_Generic_List_object___Sort_58794460(
    v10,
    v25,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_MapButtonEntity__Sort__);
  return (MapButtonEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_MapButtonEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool MapButtonMaster__TryGetEntity(
        MapButtonMaster_o *this,
        MapButtonEntity_o **entity,
        int32_t id,
        int32_t priority,
        int32_t targetMapId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC789F & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__);
    byte_4CC789F = 1;
  }
  PK = (Il2CppObject *)MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__);
}


void MapButtonMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC78A0 & 1) == 0 )
  {
    sub_1C713B0(&MapButtonMaster___c_TypeInfo);
    byte_4CC78A0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(MapButtonMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MapButtonMaster___c_TypeInfo->static_fields->__9 = (struct MapButtonMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)MapButtonMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MapButtonMaster___c___ctor(MapButtonMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t MapButtonMaster___c___GetOpenedButtons_b__0_0(
        MapButtonMaster___c_o *this,
        MapButtonEntity_o *a,
        MapButtonEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C71608(this, a);
  return a->fields.priority - b->fields.priority;
}