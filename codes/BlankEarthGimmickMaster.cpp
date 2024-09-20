void __fastcall BlankEarthGimmickMaster___ctor(BlankEarthGimmickMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AE2D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int___ctor__);
    byte_4A5AE2D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    462,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int___ctor__);
}


BlankEarthGimmickEntity_array *__fastcall BlankEarthGimmickMaster__GetAllGimmick(
        BlankEarthGimmickMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_ObjectModel_Collection_T__o *v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v6; // w21
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0

  if ( (byte_4A5AE2C & 1) == 0 )
  {
    sub_1B885B0(&BlankEarthGimmickEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BlankEarthGimmickEntity__TypeInfo);
    byte_4A5AE2C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BlankEarthGimmickEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BlankEarthGimmickEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  v6 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v6 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v6,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v4 = list;
      methodPtr_low = LOBYTE(BlankEarthGimmickEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (BlankEarthGimmickEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == BlankEarthGimmickEntity_TypeInfo )
      {
        if ( !v3 )
          goto LABEL_19;
        items = v3->fields._items;
        v11 = Method_System_Collections_Generic_List_BlankEarthGimmickEntity__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_19;
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v13 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v13[4] = (Il2CppClass *)v4;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 4), (int32_t)v4, v7, v8);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v6;
    if ( !list )
      goto LABEL_19;
  }
  if ( !v3 )
LABEL_19:
    sub_1B8880C(list, v4);
  return (BlankEarthGimmickEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v3,
                                            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BlankEarthGimmickEntity__ToArray__);
}