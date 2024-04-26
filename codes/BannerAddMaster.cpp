void __fastcall BannerAddMaster___ctor(BannerAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_434F788 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string___ctor__);
    byte_434F788 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    199,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string___ctor__);
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

  if ( (byte_434F786 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__GetEntity__);
    byte_434F786 = 1;
  }
  PK = BannerAddEntity__CreatePK(bannerId, dispType, priority, *(const MethodInfo **)&priority);
  return (BannerAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_21C0890 *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__GetEntity__);
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

  if ( (byte_434F787 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__TryGetEntity__);
    byte_434F787 = 1;
  }
  PK = BannerAddEntity__CreatePK(bannerId, dispType, priority, *(const MethodInfo **)&dispType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__TryGetEntity__);
}


int32_t __fastcall BannerAddMaster__getOverwriteBannerId(
        BannerAddMaster_o *this,
        int32_t bannerId,
        int32_t dispType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  void *list; // x0
  const MethodInfo_2C86014 **v9; // x19
  BannerAddEntity_c **v10; // x20
  int32_t v11; // w23
  int32_t v12; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x25
  __int64 v14; // x10
  BannerAddMaster_o *v15; // x23
  int32_t v16; // w22
  BannerAddEntity_c **v17; // x21
  const MethodInfo_2C86014 **v18; // x20
  int32_t v19; // w19
  int32_t v20; // w26
  int32_t v21; // w28
  int64_t v22; // x27
  BannerAddMaster___c_c *v23; // x0
  struct BannerAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v26; // x21
  struct BannerAddMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // [xsp+0h] [xbp-60h]
  int32_t v37; // [xsp+Ch] [xbp-54h]

  if ( (byte_434F789 & 1) == 0 )
  {
    sub_B70694(&BannerAddEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_System_Comparison_BannerAddEntity___ctor__);
    sub_B70694(&System_Comparison_BannerAddEntity__TypeInfo);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BannerAddEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BannerAddEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_BannerAddEntity___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_BannerAddEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_BannerAddEntity__get_Item__);
    sub_B70694(&System_Collections_Generic_List_BannerAddEntity__TypeInfo);
    sub_B70694(&Method_BannerAddMaster___c__getOverwriteBannerId_b__3_0__);
    sub_B70694(&BannerAddMaster___c_TypeInfo);
    byte_434F789 = 1;
  }
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BannerAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BannerAddEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_34;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v9 = (const MethodInfo_2C86014 **)&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__;
    v10 = &BannerAddEntity_TypeInfo;
    v11 = (int)list;
    v12 = 0;
    v37 = (int)list;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v12,
               *v9);
      if ( !list )
        break;
      v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v14 = *(&(*v10)->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v14
        || *(BannerAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v14 - 8) != *v10 )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == bannerId && *((_DWORD *)list + 5) == dispType )
      {
        v15 = this;
        v16 = bannerId;
        v17 = v10;
        v18 = v9;
        v19 = dispType;
        v21 = *((_DWORD *)list + 7);
        v20 = *((_DWORD *)list + 8);
        v22 = *((int *)list + 9);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        list = (void *)CondType__IsOpen(v21, v20, v22, 0, 0LL);
        dispType = v19;
        v9 = v18;
        v10 = v17;
        bannerId = v16;
        this = v15;
        v11 = v37;
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          list = v36;
          if ( !v36 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v36,
            v13,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BannerAddEntity__Add__);
        }
      }
      if ( ++v12 >= v11 )
        goto LABEL_19;
    }
LABEL_34:
    sub_B7076C(list, v7);
  }
LABEL_19:
  if ( !v36 )
    goto LABEL_34;
  if ( v36->fields._size < 1 )
    return -1;
  v23 = BannerAddMaster___c_TypeInfo;
  if ( (BYTE3(BannerAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BannerAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BannerAddMaster___c_TypeInfo);
    v23 = BannerAddMaster___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = BannerAddMaster___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_BannerAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v26,
      Method_BannerAddMaster___c__getOverwriteBannerId_b__3_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_BannerAddEntity___ctor__);
    v27 = BannerAddMaster___c_TypeInfo->static_fields;
    v27->__9__3_0 = (struct System_Comparison_BannerAddEntity__o *)_9__3_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v27->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v36,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_BannerAddEntity__Sort__);
  if ( !v36->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v34 = v36->fields._items->m_Items[0];
  if ( !v34 )
    goto LABEL_34;
  return (int32_t)v34[1].klass;
}


void __fastcall BannerAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_43509EB & 1) == 0 )
  {
    sub_B70694(&BannerAddMaster___c_TypeInfo);
    byte_43509EB = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(BannerAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BannerAddMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7076C(this, a);
  return b->fields.priority - a->fields.priority;
}