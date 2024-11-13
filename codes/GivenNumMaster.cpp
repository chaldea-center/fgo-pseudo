void __fastcall GivenNumMaster___ctor(GivenNumMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B164E0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_GivenNumMaster__GivenNumEntity__string___ctor__, method, v2);
    byte_4B164E0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    524,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_GivenNumMaster__GivenNumEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GivenNumEntity_o *__fastcall GivenNumMaster__GetEntity(
        GivenNumMaster_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B164DE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_GivenNumMaster__GivenNumEntity__string__GetEntity__, *(_QWORD *)&itemId, method);
    byte_4B164DE = 1;
  }
  PK = (Il2CppObject *)GivenNumEntity__CreatePK(itemId, *(const MethodInfo **)&itemId);
  return (GivenNumEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_31B3198 *)Method_DataMasterBase_GivenNumMaster__GivenNumEntity__string__GetEntity__);
}


System_Collections_Generic_List_GivenNumEntity__o *__fastcall GivenNumMaster__GetList(
        GivenNumMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4B164E1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&GivenNumEntity_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GivenNumEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GivenNumEntity___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_GivenNumEntity__TypeInfo, v12, v13);
    byte_4B164E1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GivenNumEntity__TypeInfo,
                                                       v16,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GivenNumEntity___ctor__);
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v20,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        method = (const MethodInfo *)list;
        methodPtr_low = LOBYTE(GivenNumEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (GivenNumEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == GivenNumEntity_TypeInfo )
        {
          if ( !v19 )
            break;
          items = v19->fields._items;
          v29 = Method_System_Collections_Generic_List_GivenNumEntity__Add__;
          ++v19->fields._version;
          if ( !items )
            break;
          size = v19->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v19,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &items->obj.klass + size;
            v19->fields._size = size + 1;
            v31[4] = (Il2CppClass *)method;
            sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)method, v21, v22, v23, v24, v25, v26);
          }
        }
      }
      if ( Count == ++v20 )
        return (System_Collections_Generic_List_GivenNumEntity__o *)v19;
    }
LABEL_17:
    sub_1BCAA3C(list, method);
  }
  return (System_Collections_Generic_List_GivenNumEntity__o *)v19;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GivenNumMaster__TryGetEntity(
        GivenNumMaster_o *this,
        GivenNumEntity_o **entity,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B164DF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_GivenNumMaster__GivenNumEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&itemId);
    byte_4B164DF = 1;
  }
  PK = (Il2CppObject *)GivenNumEntity__CreatePK(itemId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_GivenNumMaster__GivenNumEntity__string__TryGetEntity__);
}