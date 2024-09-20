void __fastcall EventCombineMaster___ctor(EventCombineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B080 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string___ctor__);
    byte_4A5B080 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    86,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventCombineEntity_o *__fastcall EventCombineMaster__GetEntity(
        EventCombineMaster_o *this,
        int32_t id,
        int32_t target,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B07E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__GetEntity__);
    byte_4A5B07E = 1;
  }
  PK = (Il2CppObject *)EventCombineEntity__CreatePK(id, target, *(const MethodInfo **)&target);
  return (EventCombineEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_311DC8C *)Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventCombineEntity_o *__fastcall EventCombineMaster__GetTargetEntitiyList(
        EventCombineMaster_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  EventCombineEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B081 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventCombineEntity_TypeInfo);
    byte_4A5B081 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventCombineEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         list,
                                         v8,
                                         (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(EventCombineEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventCombineEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == EventCombineEntity_TypeInfo
          && (targetType < 1 || result->fields.target == targetType) )
        {
          return result;
        }
      }
      if ( v7 == ++v8 )
        return 0LL;
    }
LABEL_15:
    sub_1B8880C(list, *(_QWORD *)&targetType);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCombineMaster__TryGetEntity(
        EventCombineMaster_o *this,
        EventCombineEntity_o **entity,
        int32_t id,
        int32_t target,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B07F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__TryGetEntity__);
    byte_4A5B07F = 1;
  }
  PK = (Il2CppObject *)EventCombineEntity__CreatePK(id, target, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__TryGetEntity__);
}