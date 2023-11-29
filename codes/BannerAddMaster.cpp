void __fastcall BannerAddMaster___ctor(BannerAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F6EDD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string___ctor__, method);
    byte_40F6EDD = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    198,
    (const MethodInfo_266F73C *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BannerAddEntity_o *__fastcall BannerAddMaster__GetEntity(
        BannerAddMaster_o *this,
        int32_t bannerId,
        int32_t dispType,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F6EDB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__GetEntity__, *(_QWORD *)&bannerId);
    byte_40F6EDB = 1;
  }
  PK = BannerAddEntity__CreatePK(bannerId, dispType, priority, *(const MethodInfo **)&priority);
  return (BannerAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_266F7D8 *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BannerAddMaster__TryGetEntity(
        BannerAddMaster_o *this,
        BannerAddEntity_o **entity,
        int32_t bannerId,
        int32_t dispType,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40F6EDC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__TryGetEntity__, entity);
    byte_40F6EDC = 1;
  }
  PK = BannerAddEntity__CreatePK(bannerId, dispType, priority, *(const MethodInfo **)&dispType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BannerAddMaster__getOverwriteBannerId(
        BannerAddMaster_o *this,
        int32_t bannerId,
        int32_t dispType,
        const MethodInfo *method)
{
  __int64 v4; // x4
  int32_t v5; // w26
  int32_t v6; // w21
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  const MethodInfo_290DF28 **v27; // x19
  BannerAddEntity_c **v28; // x20
  int32_t v29; // w23
  int32_t v30; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v31; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x25
  __int64 v34; // x10
  BannerAddMaster_o *v35; // x23
  int32_t v36; // w22
  BannerAddEntity_c **v37; // x21
  const MethodInfo_290DF28 **v38; // x20
  int32_t v39; // w19
  int32_t klass; // w26
  int32_t monitor_high; // w28
  int64_t klass_high; // x27
  bool IsOpen; // w0
  BannerAddMaster___c_c *v44; // x0
  struct BannerAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v47; // x21
  struct BannerAddMaster___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  EventMissionProgressRequest_Argument_ProgressData_o *v55; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v57; // [xsp+0h] [xbp-60h]
  int32_t v58; // [xsp+Ch] [xbp-54h]

  v5 = dispType;
  v6 = bannerId;
  if ( (byte_40F6EDE & 1) == 0 )
  {
    sub_B16FFC(&BannerAddEntity_TypeInfo, *(_QWORD *)&bannerId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&Method_System_Comparison_BannerAddEntity___ctor__, v10);
    sub_B16FFC(&System_Comparison_BannerAddEntity__TypeInfo, v11);
    sub_B16FFC(&CondType_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BannerAddEntity__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BannerAddEntity__Sort__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BannerAddEntity___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BannerAddEntity__get_Count__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_BannerAddEntity__get_Item__, v17);
    sub_B16FFC(&System_Collections_Generic_List_BannerAddEntity__TypeInfo, v18);
    sub_B16FFC(&Method_BannerAddMaster___c__getOverwriteBannerId_b__3_0__, v19);
    sub_B16FFC(&BannerAddMaster___c_TypeInfo, v20);
    byte_40F6EDE = 1;
  }
  v57 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BannerAddEntity__TypeInfo,
                                                                                                  *(_QWORD *)&bannerId,
                                                                                                  *(_QWORD *)&dispType,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v57,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BannerAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v27 = (const MethodInfo_290DF28 **)&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__;
    v28 = &BannerAddEntity_TypeInfo;
    v29 = Count;
    v30 = 0;
    v58 = Count;
    while ( 1 )
    {
      v31 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v31 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(v31, v30, *v27);
      if ( !Item )
        break;
      v33 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
      v34 = *(&(*v28)->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v34
        || (BannerAddEntity_c *)Item->klass->_2.typeHierarchy[v34 - 1] != *v28 )
      {
        break;
      }
      if ( LODWORD(Item[1].klass) == v6 && HIDWORD(Item[1].klass) == v5 )
      {
        v35 = this;
        v36 = v6;
        v37 = v28;
        v38 = v27;
        v39 = v5;
        monitor_high = HIDWORD(Item[1].monitor);
        klass = (int32_t)Item[2].klass;
        klass_high = SHIDWORD(Item[2].klass);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(monitor_high, klass, klass_high, 0, 0LL);
        v5 = v39;
        v27 = v38;
        v28 = v37;
        v6 = v36;
        this = v35;
        v29 = v58;
        if ( IsOpen )
        {
          if ( !v57 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v57,
            v33,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BannerAddEntity__Add__);
        }
      }
      if ( ++v30 >= v29 )
        goto LABEL_19;
    }
LABEL_34:
    sub_B170D4();
  }
LABEL_19:
  if ( !v57 )
    goto LABEL_34;
  if ( v57->fields._size < 1 )
    return -1;
  v44 = BannerAddMaster___c_TypeInfo;
  if ( (BYTE3(BannerAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BannerAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BannerAddMaster___c_TypeInfo);
    v44 = BannerAddMaster___c_TypeInfo;
  }
  static_fields = v44->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      static_fields = BannerAddMaster___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_BannerAddEntity__TypeInfo,
                                                                          v23,
                                                                          v24,
                                                                          v25,
                                                                          v26);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v47,
      Method_BannerAddMaster___c__getOverwriteBannerId_b__3_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_BannerAddEntity___ctor__);
    v48 = BannerAddMaster___c_TypeInfo->static_fields;
    v48->__9__3_0 = (struct System_Comparison_BannerAddEntity__o *)_9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v48->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v57,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_BannerAddEntity__Sort__);
  if ( !v57->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v55 = v57->fields._items->m_Items[0];
  if ( !v55 )
    goto LABEL_34;
  return (int32_t)v55[1].klass;
}


void __fastcall BannerAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F9156 & 1) == 0 )
  {
    sub_B16FFC(&BannerAddMaster___c_TypeInfo, v1);
    byte_40F9156 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BannerAddMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BannerAddMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall BannerAddMaster___c___ctor(BannerAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BannerAddMaster___c___getOverwriteBannerId_b__3_0(
        BannerAddMaster___c_o *this,
        BannerAddEntity_o *a,
        BannerAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}