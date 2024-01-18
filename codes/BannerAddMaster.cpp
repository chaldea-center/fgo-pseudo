void __fastcall BannerAddMaster___ctor(BannerAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41849E2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string___ctor__, method);
    byte_41849E2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    198,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string___ctor__);
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

  if ( (byte_41849E0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__GetEntity__, *(_QWORD *)&bannerId);
    byte_41849E0 = 1;
  }
  PK = BannerAddEntity__CreatePK(bannerId, dispType, priority, *(const MethodInfo **)&priority);
  return (BannerAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_24E4520 *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__GetEntity__);
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

  if ( (byte_41849E1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__TryGetEntity__, entity);
    byte_41849E1 = 1;
  }
  PK = BannerAddEntity__CreatePK(bannerId, dispType, priority, *(const MethodInfo **)&dispType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BannerAddMaster__getOverwriteBannerId(
        BannerAddMaster_o *this,
        int32_t bannerId,
        int32_t dispType,
        const MethodInfo *method)
{
  int32_t v5; // w21
  __int64 v7; // x1
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
  void *list; // x0
  const MethodInfo_2A0E38C **v22; // x19
  BannerAddEntity_c **v23; // x20
  int32_t v24; // w23
  int32_t v25; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x25
  __int64 v27; // x10
  BannerAddMaster_o *v28; // x23
  int32_t v29; // w22
  BannerAddEntity_c **v30; // x21
  const MethodInfo_2A0E38C **v31; // x20
  int32_t v32; // w19
  int32_t v33; // w26
  int32_t v34; // w28
  int64_t v35; // x27
  BannerAddMaster___c_c *v36; // x0
  struct BannerAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v39; // x21
  struct BannerAddMaster___c_StaticFields *v40; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v41; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // [xsp+0h] [xbp-60h]
  int32_t v44; // [xsp+Ch] [xbp-54h]

  v5 = bannerId;
  if ( (byte_41849E3 & 1) == 0 )
  {
    sub_B2C35C(&BannerAddEntity_TypeInfo, *(_QWORD *)&bannerId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B2C35C(&Method_System_Comparison_BannerAddEntity___ctor__, v9);
    sub_B2C35C(&System_Comparison_BannerAddEntity__TypeInfo, v10);
    sub_B2C35C(&CondType_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_BannerAddEntity__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_BannerAddEntity__Sort__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_BannerAddEntity___ctor__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_BannerAddEntity__get_Count__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_BannerAddEntity__get_Item__, v16);
    sub_B2C35C(&System_Collections_Generic_List_BannerAddEntity__TypeInfo, v17);
    sub_B2C35C(&Method_BannerAddMaster___c__getOverwriteBannerId_b__3_0__, v18);
    sub_B2C35C(&BannerAddMaster___c_TypeInfo, v19);
    byte_41849E3 = 1;
  }
  v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BannerAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v43,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BannerAddEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_34;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v22 = (const MethodInfo_2A0E38C **)&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__;
    v23 = &BannerAddEntity_TypeInfo;
    v24 = (int)list;
    v25 = 0;
    v44 = (int)list;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v25,
               *v22);
      if ( !list )
        break;
      v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v27 = *(&(*v23)->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v27
        || *(BannerAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v27 - 8) != *v23 )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == v5 && *((_DWORD *)list + 5) == dispType )
      {
        v28 = this;
        v29 = v5;
        v30 = v23;
        v31 = v22;
        v32 = dispType;
        v34 = *((_DWORD *)list + 7);
        v33 = *((_DWORD *)list + 8);
        v35 = *((int *)list + 9);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        list = (void *)CondType__IsOpen(v34, v33, v35, 0, 0LL);
        dispType = v32;
        v22 = v31;
        v23 = v30;
        v5 = v29;
        this = v28;
        v24 = v44;
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          list = v43;
          if ( !v43 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v43,
            v26,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BannerAddEntity__Add__);
        }
      }
      if ( ++v25 >= v24 )
        goto LABEL_19;
    }
LABEL_34:
    sub_B2C434(list, v20);
  }
LABEL_19:
  if ( !v43 )
    goto LABEL_34;
  if ( v43->fields._size < 1 )
    return -1;
  v36 = BannerAddMaster___c_TypeInfo;
  if ( (BYTE3(BannerAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BannerAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BannerAddMaster___c_TypeInfo);
    v36 = BannerAddMaster___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = BannerAddMaster___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_BannerAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v39,
      Method_BannerAddMaster___c__getOverwriteBannerId_b__3_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_BannerAddEntity___ctor__);
    v40 = BannerAddMaster___c_TypeInfo->static_fields;
    v40->__9__3_0 = (struct System_Comparison_BannerAddEntity__o *)_9__3_0;
    sub_B2C2F8(&v40->__9__3_0, _9__3_0);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v43,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_BannerAddEntity__Sort__);
  if ( !v43->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v41 = v43->fields._items->m_Items[0];
  if ( !v41 )
    goto LABEL_34;
  return (int32_t)v41[1].klass;
}


void __fastcall BannerAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186BE0 & 1) == 0 )
  {
    sub_B2C35C(&BannerAddMaster___c_TypeInfo, v1);
    byte_4186BE0 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BannerAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)BannerAddMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}