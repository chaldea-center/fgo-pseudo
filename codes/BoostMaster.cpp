void BoostMaster___ctor(BoostMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593833D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__);
    byte_593833D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    326,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__);
}


BoostEntity_array *BoostMaster__GetAvailableEntities(BoostMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v6; // w21
  int32_t v7; // w22
  Il2CppObject *v8; // x23
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_593833C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    byte_593833C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v6 = (int)list;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v7,
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__);
      if ( list )
      {
        v8 = (Il2CppObject *)list;
        list = (System_Collections_ObjectModel_Collection_T__o *)BoostEntity__IsValidPeriod((BoostEntity_o *)list, v4);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v16 = Method_System_Collections_Generic_List_BoostEntity__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v8,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v8;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( v6 == ++v7 )
        goto LABEL_15;
    }
LABEL_17:
    sub_21FFECC(list, v4);
  }
LABEL_15:
  if ( !v3 )
    goto LABEL_17;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v3,
                                (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}