void __fastcall BlankEarthGimmickMaster___ctor(BlankEarthGimmickMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A6FB38 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int___ctor__, method);
    byte_4A6FB38 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    462,
    (const MethodInfo_312C568 *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int___ctor__);
}


BlankEarthGimmickEntity_array *__fastcall BlankEarthGimmickMaster__GetAllGimmick(
        BlankEarthGimmickMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  System_Collections_ObjectModel_Collection_T__o *v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v12; // w21
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4A6FB37 & 1) == 0 )
  {
    sub_1B90010(&BlankEarthGimmickEntity_TypeInfo, method);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v3);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity__Add__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity__ToArray__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity___ctor__, v7);
    sub_1B90010(&System_Collections_Generic_List_BlankEarthGimmickEntity__TypeInfo, v8);
    byte_4A6FB37 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_BlankEarthGimmickEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_BlankEarthGimmickEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  v12 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v12 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v12,
                                                               (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v10 = list;
      methodPtr_low = LOBYTE(BlankEarthGimmickEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (BlankEarthGimmickEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == BlankEarthGimmickEntity_TypeInfo )
      {
        if ( !v9 )
          goto LABEL_19;
        items = v9->fields._items;
        v17 = Method_System_Collections_Generic_List_BlankEarthGimmickEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_19;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)list,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v10;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v10, v13, v14);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v12;
    if ( !list )
      goto LABEL_19;
  }
  if ( !v9 )
LABEL_19:
    sub_1B9026C(list, v10);
  return (BlankEarthGimmickEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v9,
                                            (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_BlankEarthGimmickEntity__ToArray__);
}