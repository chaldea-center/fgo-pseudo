void __fastcall MapButtonMaster___ctor(MapButtonMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C222BF & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__, method);
    byte_4C222BF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    203,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__);
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

  if ( (byte_4C222C0 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4C222C0 = 1;
  }
  PK = (Il2CppObject *)MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&targetMapId);
  return (MapButtonEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_329F900 *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__);
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
  void *Instance; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_int__o *AvailableButtons; // x21
  System_Collections_Generic_List_object__o *v22; // x20
  int32_t Count; // w0
  int32_t v24; // w22
  int32_t v25; // w23
  Il2CppObject *v26; // x24
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Comparison_T__o *v37; // x19
  Il2CppObject *v38; // x21
  struct MapButtonMaster___c_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  if ( (byte_4C222BE & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_MapButtonEntity__get_Count__, warInf);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_MapButtonEntity__get_Item__, v6);
    sub_1C3B764(&System_Comparison_MapButtonEntity__TypeInfo, v7);
    sub_1C3B764(&Method_DataManager_GetMasterData_MapCondMaster___, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_MapButtonEntity__Add__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Remove__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_MapButtonEntity__Sort__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_MapButtonEntity__ToArray__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_MapButtonEntity___ctor__, v13);
    sub_1C3B764(&System_Collections_Generic_List_MapButtonEntity__TypeInfo, v14);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1C3B764(&Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__, v16);
    sub_1C3B764(&MapButtonMaster___c_TypeInfo, v17);
    byte_4C222BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_MapCondMaster___);
  if ( !mapInf )
    goto LABEL_27;
  if ( !Instance )
    goto LABEL_27;
  AvailableButtons = MapCondMaster__GetAvailableButtons((MapCondMaster_o *)Instance, mapInf->fields.mapId, v20);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_MapButtonEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_MapButtonEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_MapButtonEntity__get_Count__);
  if ( Count >= 1 )
  {
    v24 = Count;
    v25 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v25,
                   (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_MapButtonEntity__get_Item__);
      if ( !Instance || !AvailableButtons )
        break;
      v26 = (Il2CppObject *)Instance;
      Instance = (void *)System_Collections_Generic_List_int___Remove(
                           AvailableButtons,
                           *((_DWORD *)Instance + 4),
                           (const MethodInfo_3670144 *)Method_System_Collections_Generic_List_int__Remove__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v22 )
          break;
        items = v22->fields._items;
        v34 = Method_System_Collections_Generic_List_MapButtonEntity__Add__;
        ++v22->fields._version;
        if ( !items )
          break;
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            v26,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v26;
          sub_1C3B708((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v26, v27, v28, v29, v30, v31, v32);
        }
      }
      if ( v24 == ++v25 )
        goto LABEL_19;
    }
LABEL_27:
    sub_1C3B9C0(Instance, v19);
  }
LABEL_19:
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
    v37 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_MapButtonEntity__TypeInfo);
    System_Comparison_object____ctor(v37, v38, Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__, 0LL);
    static_fields = MapButtonMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Comparison_MapButtonEntity__o *)v37;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)v37, v40, v41, v42, v43, v44, v45);
  }
  if ( !v22 )
    goto LABEL_27;
  System_Collections_Generic_List_object___Sort_57202480(
    v22,
    v37,
    (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_MapButtonEntity__Sort__);
  return (MapButtonEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v22,
                                    (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_MapButtonEntity__ToArray__);
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

  if ( (byte_4C222C1 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__, entity);
    byte_4C222C1 = 1;
  }
  PK = (Il2CppObject *)MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__);
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

  if ( (byte_4C222C2 & 1) == 0 )
  {
    sub_1C3B764(&MapButtonMaster___c_TypeInfo, v1);
    byte_4C222C2 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(MapButtonMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MapButtonMaster___c_TypeInfo->static_fields->__9 = (struct MapButtonMaster___c_o *)v2;
  sub_1C3B708(
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
    sub_1C3B9C0(this, a);
  return a->fields.priority - b->fields.priority;
}