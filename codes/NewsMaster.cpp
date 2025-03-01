void __fastcall NewsMaster___ctor(NewsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFDB3B & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_NewsMaster__NewsEntity__int___ctor__, method);
    byte_4BFDB3B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    66,
    (const MethodInfo_3278E5C *)Method_DataMasterBase_NewsMaster__NewsEntity__int___ctor__);
}


NewsEntity_array *__fastcall NewsMaster__GetEnableEntitiyList(NewsMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v10; // x20
  int64_t v11; // x1
  int64_t list; // x0
  int v13; // w22
  int32_t v14; // w23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4BFDB3C & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_NewsEntity__get_Count__, method);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_NewsEntity__get_Item__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_NewsEntity__Add__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_NewsEntity__ToArray__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_NewsEntity___ctor__, v6);
    sub_1C2E12C(&System_Collections_Generic_List_NewsEntity__TypeInfo, v7);
    sub_1C2E12C(&NetworkManager_TypeInfo, v8);
    byte_4BFDB3C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_NewsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_NewsEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_NewsEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = list;
    v14 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v14,
                        (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_NewsEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( Time >= *(_QWORD *)(list + 56) && Time <= *(_QWORD *)(list + 64) )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v22 = Method_System_Collections_Generic_List_NewsEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)list,
              *(const MethodInfo_366B8AC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v11;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v24 + 4), v11, v15, v16, v17, v18, v19, v20);
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1C2E388(list, v11);
  }
LABEL_18:
  if ( !v10 )
    goto LABEL_20;
  return (NewsEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v10,
                               (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_NewsEntity__ToArray__);
}