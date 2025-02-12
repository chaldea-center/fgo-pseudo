void __fastcall EventFactoryMaster___ctor(EventFactoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7A33 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_EventFactoryMaster__EventFactoryEntity__int___ctor__, method);
    byte_4BC7A33 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    242,
    (const MethodInfo_3246354 *)Method_DataMasterBase_EventFactoryMaster__EventFactoryEntity__int___ctor__);
}


int32_t __fastcall EventFactoryMaster__GetCalcValuesTotal(
        EventFactoryMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventFactoryEntity_array *Datas; // x0
  __int64 v4; // x1

  Datas = EventFactoryMaster__GetDatas(this, eventId, method);
  if ( !Datas )
    sub_1C1AE30(0LL, v4);
  if ( (int)Datas->max_length >= 1 )
    return 0;
  else
    return -1;
}


// local variable allocation has failed, the output may be wrong!
EventFactoryEntity_array *__fastcall EventFactoryMaster__GetDatas(
        EventFactoryMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
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

  if ( (byte_4BC7A34 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_EventFactoryEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_EventFactoryEntity__get_Item__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFactoryEntity__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFactoryEntity__ToArray__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFactoryEntity___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_EventFactoryEntity__TypeInfo, v9);
    byte_4BC7A34 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_EventFactoryEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_EventFactoryEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_EventFactoryEntity__get_Count__);
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
                        (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_EventFactoryEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( *(_DWORD *)(list + 20) == eventId )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v22 = Method_System_Collections_Generic_List_EventFactoryEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)list,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v11;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v24 + 4), v11, v15, v16, v17, v18, v19, v20);
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C1AE30(list, v11);
  }
LABEL_15:
  if ( !v10 )
    goto LABEL_17;
  return (EventFactoryEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v10,
                                       (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_EventFactoryEntity__ToArray__);
}