void __fastcall QuestSpotReleaseMaster___ctor(QuestSpotReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB4C7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_QuestSpotReleaseMaster__QuestSpotReleaseEntity__string___ctor__, method);
    byte_49BB4C7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    296,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_QuestSpotReleaseMaster__QuestSpotReleaseEntity__string___ctor__);
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

  if ( (byte_49BB4C5 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_QuestSpotReleaseMaster__QuestSpotReleaseEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_49BB4C5 = 1;
  }
  PK = (Il2CppObject *)QuestSpotReleaseEntity__CreatePK(questId, spotId, priority, *(const MethodInfo **)&priority);
  return (QuestSpotReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31A2454 *)Method_DataMasterBase_QuestSpotReleaseMaster__QuestSpotReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestSpotReleaseMaster__GetSpotId(
        QuestSpotReleaseMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t items_high; // w21
  int klass; // w29
  int32_t v12; // w23
  System_Collections_ObjectModel_Collection_T__o *v13; // x24
  int32_t monitor; // w25
  int32_t klass_high; // w27
  int64_t monitor_high; // x26

  if ( (byte_49BB4C8 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_QuestSpotReleaseEntity__get_Count__,
      *(_QWORD *)&questId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_QuestSpotReleaseEntity__get_Item__, v5);
    sub_1B4CF90(&CondType_TypeInfo, v6);
    byte_49BB4C8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_QuestSpotReleaseEntity__get_Count__) >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_QuestSpotReleaseEntity__get_Count__);
    if ( Count >= 1 )
    {
      v9 = Count;
      items_high = 0;
      klass = 0;
      v12 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          break;
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v12,
                                                                   (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_QuestSpotReleaseEntity__get_Item__);
        if ( !list )
          break;
        v13 = list;
        if ( LODWORD(list->fields.items) == questId )
        {
          klass_high = HIDWORD(list[1].klass);
          monitor = (int32_t)list[1].monitor;
          monitor_high = SHIDWORD(list[1].monitor);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          if ( CondType__IsOpen(klass_high, monitor, monitor_high, 0, 0LL, 0LL) && klass < SLODWORD(v13[1].klass) )
          {
            items_high = HIDWORD(v13->fields.items);
            klass = (int)v13[1].klass;
          }
        }
        if ( v9 == ++v12 )
          return items_high;
      }
LABEL_20:
      sub_1B4D1EC(list, *(_QWORD *)&questId);
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

  if ( (byte_49BB4C6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_QuestSpotReleaseMaster__QuestSpotReleaseEntity__string__TryGetEntity__, entity);
    byte_49BB4C6 = 1;
  }
  PK = (Il2CppObject *)QuestSpotReleaseEntity__CreatePK(questId, spotId, priority, *(const MethodInfo **)&spotId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_QuestSpotReleaseMaster__QuestSpotReleaseEntity__string__TryGetEntity__);
}