void __fastcall EventPanelSpotMaster___ctor(EventPanelSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B1BD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int___ctor__);
    byte_4A5B1BD = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    343,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int___ctor__);
}


EventPanelSpotEntity_array *__fastcall EventPanelSpotMaster__GetEntityList(
        EventPanelSpotMaster_o *this,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_Collections_ObjectModel_Collection_T__o *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v10; // w23
  int32_t v11; // w24
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4A5B1BE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventPanelSpotEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
    byte_4A5B1BE = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v10 = (int)list;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v8 = list;
        methodPtr_low = LOBYTE(EventPanelSpotEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventPanelSpotEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventPanelSpotEntity_TypeInfo
          && HIDWORD(list->fields.items) == eventId
          && LODWORD(list[1].klass) == mapId )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v16 = Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v8;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v8, v12, v13);
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1B8880C(list, v8);
  }
LABEL_18:
  if ( !v7 )
    goto LABEL_20;
  return (EventPanelSpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v7,
                                         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
}


EventPanelSpotEntity_array *__fastcall EventPanelSpotMaster__GetEntityListFromEventId(
        EventPanelSpotMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4A5B1BF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventPanelSpotEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
    byte_4A5B1BF = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        methodPtr_low = LOBYTE(EventPanelSpotEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventPanelSpotEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventPanelSpotEntity_TypeInfo
          && HIDWORD(list->fields.items) == eventId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v14 = Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v16[4] = (Il2CppClass *)v6;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v6, v10, v11);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(list, v6);
  }
LABEL_17:
  if ( !v5 )
    goto LABEL_19;
  return (EventPanelSpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v5,
                                         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
}