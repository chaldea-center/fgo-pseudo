void __fastcall QuestSpotReleaseMaster___ctor(QuestSpotReleaseMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6F42 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestSpotReleaseMaster__QuestSpotReleaseEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E6F42 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    289,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_QuestSpotReleaseMaster__QuestSpotReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestSpotReleaseEntity_o *__fastcall QuestSpotReleaseMaster__GetEntity(
        QuestSpotReleaseMaster_o *this,
        int32_t questId,
        int32_t spotId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E6F40 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestSpotReleaseMaster__QuestSpotReleaseEntity__string__GetEntity__,
      questId,
      spotId,
      *(_QWORD *)&priority);
    byte_42E6F40 = 1;
  }
  PK = QuestSpotReleaseEntity__CreatePK(questId, spotId, priority, *(const MethodInfo **)&priority);
  return (QuestSpotReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23FB260 *)Method_DataMasterBase_QuestSpotReleaseMaster__QuestSpotReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestSpotReleaseMaster__GetSpotId(
        QuestSpotReleaseMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w22
  int32_t v18; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v19; // x24
  __int64 v20; // x10
  int32_t klass; // w25
  int32_t syncRoot_high; // w27
  int64_t klass_high; // x26
  __int64 v25; // [xsp+8h] [xbp-58h]

  if ( (byte_42E6F43 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      questId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&CondType_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&QuestSpotReleaseEntity_TypeInfo, v12, v13, v14);
    byte_42E6F43 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_23;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              list,
              (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v25 = 0LL;
      v17 = Count;
      v18 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !list )
          break;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                             list,
                                                                                             v18,
                                                                                             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !list )
          break;
        v19 = list;
        v20 = *(&QuestSpotReleaseEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v20
          || (QuestSpotReleaseEntity_c *)list->klass->_2.typeHierarchy[v20 - 1] != QuestSpotReleaseEntity_TypeInfo )
        {
          break;
        }
        if ( LODWORD(list->fields.items) == questId )
        {
          syncRoot_high = HIDWORD(list->fields._syncRoot);
          klass = (int32_t)list[1].klass;
          klass_high = SHIDWORD(list[1].klass);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          if ( CondType__IsOpen(syncRoot_high, klass, klass_high, 0, 0LL)
            && SHIDWORD(v25) < SLODWORD(v19->fields._syncRoot) )
          {
            v25 = *(__int64 *)((char *)&v19->fields.items + 4);
          }
        }
        if ( ++v18 >= v17 )
          return v25;
      }
LABEL_23:
      sub_B5D69C(list, *(_QWORD *)&questId);
    }
  }
  LODWORD(v25) = 0;
  return v25;
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
  System_String_o *PK; // x2

  if ( (byte_42E6F41 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestSpotReleaseMaster__QuestSpotReleaseEntity__string__TryGetEntity__,
      (_DWORD)entity,
      questId,
      *(_QWORD *)&spotId);
    byte_42E6F41 = 1;
  }
  PK = QuestSpotReleaseEntity__CreatePK(questId, spotId, priority, *(const MethodInfo **)&spotId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_QuestSpotReleaseMaster__QuestSpotReleaseEntity__string__TryGetEntity__);
}