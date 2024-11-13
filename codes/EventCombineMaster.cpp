void __fastcall EventCombineMaster___ctor(EventCombineMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1610D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string___ctor__, method, v2);
    byte_4B1610D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    86,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventCombineEntity_o *__fastcall EventCombineMaster__GetEntity(
        EventCombineMaster_o *this,
        int32_t id,
        int32_t target,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1610B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&target);
    byte_4B1610B = 1;
  }
  PK = (Il2CppObject *)EventCombineEntity__CreatePK(id, target, *(const MethodInfo **)&target);
  return (EventCombineEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_31B3198 *)Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventCombineEntity_o *__fastcall EventCombineMaster__GetTargetEntitiyList(
        EventCombineMaster_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w21
  int32_t v12; // w22
  EventCombineEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B1610E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&targetType,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&EventCombineEntity_TypeInfo, v7, v8);
    byte_4B1610E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventCombineEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         list,
                                         v12,
                                         (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      if ( v11 == ++v12 )
        return 0LL;
    }
LABEL_15:
    sub_1BCAA3C(list, *(_QWORD *)&targetType);
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

  if ( (byte_4B1610C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    byte_4B1610C = 1;
  }
  PK = (Il2CppObject *)EventCombineEntity__CreatePK(id, target, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__TryGetEntity__);
}