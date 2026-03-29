void BoostMaster___ctor(BoostMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D306BA & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__);
    byte_4D306BA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    324,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__);
}


BoostEntity_array *BoostMaster__GetAvailableEntities(BoostMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v6; // w21
  int32_t v7; // w22
  Il2CppObject *v8; // x23
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4D306B9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    byte_4D306B9 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__);
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
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__);
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
              *(const MethodInfo_387999C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v8;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( v6 == ++v7 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C93D2C(list, v4);
  }
LABEL_15:
  if ( !v3 )
    goto LABEL_17;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v3,
                                (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}