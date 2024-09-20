void __fastcall QuestSpotReleaseMaster___ctor(QuestSpotReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B736 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestSpotReleaseMaster__QuestSpotReleaseEntity__string___ctor__);
    byte_4A5B736 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    290,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_QuestSpotReleaseMaster__QuestSpotReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestSpotReleaseEntity_o *__fastcall QuestSpotReleaseMaster__GetEntity(
        QuestSpotReleaseMaster_o *this,
        int32_t questId,
        int32_t spotId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B734 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestSpotReleaseMaster__QuestSpotReleaseEntity__string__GetEntity__);
    byte_4A5B734 = 1;
  }
  PK = (Il2CppObject *)QuestSpotReleaseEntity__CreatePK(questId, spotId, priority, *(const MethodInfo **)&priority);
  return (QuestSpotReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_311DC8C *)Method_DataMasterBase_QuestSpotReleaseMaster__QuestSpotReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestSpotReleaseMaster__GetSpotId(
        QuestSpotReleaseMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w22
  int klass; // w21
  int32_t v9; // w23
  System_Collections_ObjectModel_Collection_T__o *v10; // x24
  __int64 methodPtr_low; // x10
  int32_t monitor; // w25
  int32_t klass_high; // w27
  int64_t monitor_high; // x26
  int32_t items_high; // [xsp+Ch] [xbp-64h]

  if ( (byte_4A5B737 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&QuestSpotReleaseEntity_TypeInfo);
    byte_4A5B737 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_22;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      items_high = 0;
      v7 = Count;
      klass = 0;
      v9 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          break;
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v9,
                                                                   (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !list )
          break;
        v10 = list;
        methodPtr_low = LOBYTE(QuestSpotReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (QuestSpotReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestSpotReleaseEntity_TypeInfo )
        {
          break;
        }
        if ( LODWORD(list->fields.items) == questId )
        {
          klass_high = HIDWORD(list[1].klass);
          monitor = (int32_t)list[1].monitor;
          monitor_high = SHIDWORD(list[1].monitor);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          if ( CondType__IsOpen(klass_high, monitor, monitor_high, 0, 0LL, 0LL) && klass < SLODWORD(v10[1].klass) )
          {
            klass = (int)v10[1].klass;
            items_high = HIDWORD(v10->fields.items);
          }
        }
        if ( v7 == ++v9 )
          return items_high;
      }
LABEL_22:
      sub_1B8880C(list, *(_QWORD *)&questId);
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestSpotReleaseMaster__TryGetEntity(
        QuestSpotReleaseMaster_o *this,
        QuestSpotReleaseEntity_o **entity,
        int32_t questId,
        int32_t spotId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B735 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestSpotReleaseMaster__QuestSpotReleaseEntity__string__TryGetEntity__);
    byte_4A5B735 = 1;
  }
  PK = (Il2CppObject *)QuestSpotReleaseEntity__CreatePK(questId, spotId, priority, *(const MethodInfo **)&spotId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_QuestSpotReleaseMaster__QuestSpotReleaseEntity__string__TryGetEntity__);
}