void ExchangeSvtCoinGivenNumMaster___ctor(ExchangeSvtCoinGivenNumMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970BAE & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string___ctor__);
    byte_5970BAE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    533,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ExchangeSvtCoinGivenNumEntity_o *ExchangeSvtCoinGivenNumMaster__GetEntity(
        ExchangeSvtCoinGivenNumMaster_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970BAC & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string__GetEntity__);
    byte_5970BAC = 1;
  }
  PK = (Il2CppObject *)ExchangeSvtCoinGivenNumEntity__CreatePK(itemId, *(const MethodInfo **)&itemId);
  return (ExchangeSvtCoinGivenNumEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_3F157EC *)Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string__GetEntity__);
}


System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__o *ExchangeSvtCoinGivenNumMaster__GetList(
        ExchangeSvtCoinGivenNumMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *v16; // x1
  Il2CppClass **v17; // x0

  if ( (byte_5970BAF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ExchangeSvtCoinGivenNumEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ExchangeSvtCoinGivenNumEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__TypeInfo);
    byte_5970BAF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ExchangeSvtCoinGivenNumEntity__get_Count__);
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity___ctor__);
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
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ExchangeSvtCoinGivenNumEntity__get_Item__);
      if ( list )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v14 = Method_System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        v16 = list;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v16;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 4), (int32_t)v16, v7, v8, v9, v10, v11, v12);
        }
      }
      if ( Count == ++v6 )
        return (System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__o *)v5;
    }
LABEL_15:
    sub_2213CDC(list, method);
  }
  return (System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__o *)v5;
}


bool ExchangeSvtCoinGivenNumMaster__TryGetEntity(
        ExchangeSvtCoinGivenNumMaster_o *this,
        ExchangeSvtCoinGivenNumEntity_o **entity,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5970BAD & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string__TryGetEntity__);
    byte_5970BAD = 1;
  }
  PK = (Il2CppObject *)ExchangeSvtCoinGivenNumEntity__CreatePK(itemId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string__TryGetEntity__);
}