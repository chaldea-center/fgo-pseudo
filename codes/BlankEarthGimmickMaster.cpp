void __fastcall BlankEarthGimmickMaster___ctor(BlankEarthGimmickMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66878 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int___ctor__, method);
    byte_4B66878 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    466,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int___ctor__);
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
  int64_t v10; // x1
  int64_t list; // x0
  int32_t v12; // w21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4B66877 & 1) == 0 )
  {
    sub_1BE4ACC(&BlankEarthGimmickEntity_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v3);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity__Add__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity__ToArray__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BlankEarthGimmickEntity___ctor__, v7);
    sub_1BE4ACC(&System_Collections_Generic_List_BlankEarthGimmickEntity__TypeInfo, v8);
    byte_4B66877 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BlankEarthGimmickEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BlankEarthGimmickEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_19;
  v12 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v12 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v12,
                      (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v10 = list;
      methodPtr_low = LOBYTE(BlankEarthGimmickEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(BlankEarthGimmickEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == BlankEarthGimmickEntity_TypeInfo )
      {
        if ( !v9 )
          goto LABEL_19;
        items = v9->fields._items;
        v21 = Method_System_Collections_Generic_List_BlankEarthGimmickEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_19;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)list,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v10;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v23 + 4), v10, v13, v14, v15, v16, v17, v18);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v12;
    if ( !list )
      goto LABEL_19;
  }
  if ( !v9 )
LABEL_19:
    sub_1BE4D28(list, v10);
  return (BlankEarthGimmickEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v9,
                                            (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BlankEarthGimmickEntity__ToArray__);
}