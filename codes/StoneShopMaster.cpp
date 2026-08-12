void StoneShopMaster___ctor(StoneShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_597154E & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int___ctor__);
    byte_597154E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    48,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
StoneShopEntity_array *StoneShopMaster__GetEnableEntitiyList(
        StoneShopMaster_o *this,
        int32_t effect,
        const MethodInfo *method)
{
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v6; // x22
  System_Collections_ObjectModel_Collection_T__o *v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v9; // w23
  int32_t v10; // w24
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_597154F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_StoneShopEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_StoneShopEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_597154F = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&effect);
  Time = NetworkManager__getTime(0);
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_StoneShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v9 = (int)list;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Item__);
      if ( list )
      {
        v7 = list;
        if ( LODWORD(list[1].fields.items) == effect
          && Time >= SLODWORD(list[2].klass)
          && Time <= SHIDWORD(list[2].klass) )
        {
          if ( !v6 )
            break;
          items = v6->fields._items;
          v18 = Method_System_Collections_Generic_List_StoneShopEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            break;
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)list,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v7;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v7, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_19;
    }
LABEL_21:
    sub_2213CDC(list, v7);
  }
LABEL_19:
  if ( !v6 )
    goto LABEL_21;
  return (StoneShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
}


int32_t StoneShopMaster__GetPayMultiTimePrice(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Master_object; // x0
  __int64 v3; // x1
  const MethodInfo *v4; // x2

  if ( (byte_5971551 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_StoneShopMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5971551 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_StoneShopMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v3);
  return StoneShopMaster__GetPrice((StoneShopMaster_o *)Master_object, 5, v4);
}


int32_t StoneShopMaster__GetPrice(StoneShopMaster_o *this, int32_t id, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971550 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__TryGetEntity__);
    byte_5971550 = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__TryGetEntity__);
  if ( !v5 )
    return 0;
  if ( !entity )
    sub_2213CDC(v5, v6);
  return *(_DWORD *)((char *)&qword_28 + (_QWORD)entity + 4);
}