void __fastcall ShopD17GivenNumMaster___ctor(ShopD17GivenNumMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B2C6F8 & 1) == 0 )
  {
    sub_1BCE82C(&Method_DataMasterBase_ShopD17GivenNumMaster__ShopD17GivenNumEntity__string___ctor__);
    byte_4B2C6F8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    524,
    (const MethodInfo_31C72E0 *)Method_DataMasterBase_ShopD17GivenNumMaster__ShopD17GivenNumEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ShopD17GivenNumEntity_o *__fastcall ShopD17GivenNumMaster__GetEntity(
        ShopD17GivenNumMaster_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B2C6F6 & 1) == 0 )
  {
    sub_1BCE82C(&Method_DataMasterBase_ShopD17GivenNumMaster__ShopD17GivenNumEntity__string__GetEntity__);
    byte_4B2C6F6 = 1;
  }
  PK = (Il2CppObject *)ShopD17GivenNumEntity__CreatePK(itemId, *(const MethodInfo **)&itemId);
  return (ShopD17GivenNumEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_31C7320 *)Method_DataMasterBase_ShopD17GivenNumMaster__ShopD17GivenNumEntity__string__GetEntity__);
}


System_Collections_Generic_List_ShopD17GivenNumEntity__o *__fastcall ShopD17GivenNumMaster__GetList(
        ShopD17GivenNumMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w22
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4B2C6F9 & 1) == 0 )
  {
    sub_1BCE82C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1BCE82C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1BCE82C(&Method_System_Collections_Generic_List_ShopD17GivenNumEntity__Add__);
    sub_1BCE82C(&Method_System_Collections_Generic_List_ShopD17GivenNumEntity___ctor__);
    sub_1BCE82C(&System_Collections_Generic_List_ShopD17GivenNumEntity__TypeInfo);
    sub_1BCE82C(&ShopD17GivenNumEntity_TypeInfo);
    byte_4B2C6F9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3163598 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v5 = (System_Collections_Generic_List_object__o *)sub_1BCEA78(System_Collections_Generic_List_ShopD17GivenNumEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_35B5634 *)Method_System_Collections_Generic_List_ShopD17GivenNumEntity___ctor__);
  if ( Count >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_3163628 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        method = (const MethodInfo *)list;
        methodPtr_low = LOBYTE(ShopD17GivenNumEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ShopD17GivenNumEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopD17GivenNumEntity_TypeInfo )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v15 = Method_System_Collections_Generic_List_ShopD17GivenNumEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_35B5E68 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v17[4] = (Il2CppClass *)method;
            sub_1BCE7D0((PartyOrganizationUtility_o *)(v17 + 4), (int64_t)method, v7, v8, v9, v10, v11, v12);
          }
        }
      }
      if ( Count == ++v6 )
        return (System_Collections_Generic_List_ShopD17GivenNumEntity__o *)v5;
    }
LABEL_17:
    sub_1BCEA88(list, method);
  }
  return (System_Collections_Generic_List_ShopD17GivenNumEntity__o *)v5;
}


bool __fastcall ShopD17GivenNumMaster__TryGetEntity(
        ShopD17GivenNumMaster_o *this,
        ShopD17GivenNumEntity_o **entity,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B2C6F7 & 1) == 0 )
  {
    sub_1BCE82C(&Method_DataMasterBase_ShopD17GivenNumMaster__ShopD17GivenNumEntity__string__TryGetEntity__);
    byte_4B2C6F7 = 1;
  }
  PK = (Il2CppObject *)ShopD17GivenNumEntity__CreatePK(itemId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31C7370 *)Method_DataMasterBase_ShopD17GivenNumMaster__ShopD17GivenNumEntity__string__TryGetEntity__);
}