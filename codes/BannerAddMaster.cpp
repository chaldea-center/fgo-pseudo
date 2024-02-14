void __fastcall BannerAddMaster___ctor(BannerAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421162A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string___ctor__, method);
    byte_421162A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    198,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string___ctor__);
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

  if ( (byte_4211628 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__GetEntity__, *(_QWORD *)&bannerId);
    byte_4211628 = 1;
  }
  PK = BannerAddEntity__CreatePK(bannerId, dispType, priority, *(const MethodInfo **)&priority);
  return (BannerAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_266A024 *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__GetEntity__);
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

  if ( (byte_4211629 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__TryGetEntity__, entity);
    byte_4211629 = 1;
  }
  PK = BannerAddEntity__CreatePK(bannerId, dispType, priority, *(const MethodInfo **)&dispType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BannerAddMaster__getOverwriteBannerId(
        BannerAddMaster_o *this,
        int32_t bannerId,
        int32_t dispType,
        const MethodInfo *method)
{
  int32_t v4; // w26
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
  void *list; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  const MethodInfo_2AB57BC **v23; // x19
  BannerAddEntity_c **v24; // x20
  int32_t v25; // w23
  int32_t v26; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x25
  __int64 v28; // x10
  BannerAddMaster_o *v29; // x23
  int32_t v30; // w22
  BannerAddEntity_c **v31; // x21
  const MethodInfo_2AB57BC **v32; // x20
  int32_t v33; // w19
  int32_t v34; // w26
  int32_t v35; // w28
  int64_t v36; // x27
  BannerAddMaster___c_c *v37; // x0
  struct BannerAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v40; // x21
  struct BannerAddMaster___c_StaticFields *v41; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v42; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // [xsp+0h] [xbp-60h]
  int32_t v45; // [xsp+Ch] [xbp-54h]

  v4 = dispType;
  v5 = bannerId;
  if ( (byte_421162B & 1) == 0 )
  {
    sub_B0D8A4(&BannerAddEntity_TypeInfo, *(_QWORD *)&bannerId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B0D8A4(&Method_System_Comparison_BannerAddEntity___ctor__, v9);
    sub_B0D8A4(&System_Comparison_BannerAddEntity__TypeInfo, v10);
    sub_B0D8A4(&CondType_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BannerAddEntity__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BannerAddEntity__Sort__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BannerAddEntity___ctor__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BannerAddEntity__get_Count__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BannerAddEntity__get_Item__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_BannerAddEntity__TypeInfo, v17);
    sub_B0D8A4(&Method_BannerAddMaster___c__getOverwriteBannerId_b__3_0__, v18);
    sub_B0D8A4(&BannerAddMaster___c_TypeInfo, v19);
    byte_421162B = 1;
  }
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BannerAddEntity__TypeInfo,
                                                                                                  *(_QWORD *)&bannerId,
                                                                                                  *(_QWORD *)&dispType);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BannerAddEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_34;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v23 = (const MethodInfo_2AB57BC **)&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__;
    v24 = &BannerAddEntity_TypeInfo;
    v25 = (int)list;
    v26 = 0;
    v45 = (int)list;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v26,
               *v23);
      if ( !list )
        break;
      v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v28 = *(&(*v24)->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v28
        || *(BannerAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v28 - 8) != *v24 )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == v5 && *((_DWORD *)list + 5) == v4 )
      {
        v29 = this;
        v30 = v5;
        v31 = v24;
        v32 = v23;
        v33 = v4;
        v35 = *((_DWORD *)list + 7);
        v34 = *((_DWORD *)list + 8);
        v36 = *((int *)list + 9);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        list = (void *)CondType__IsOpen(v35, v34, v36, 0, 0LL);
        v4 = v33;
        v23 = v32;
        v24 = v31;
        v5 = v30;
        this = v29;
        v25 = v45;
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          list = v44;
          if ( !v44 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            v27,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BannerAddEntity__Add__);
        }
      }
      if ( ++v26 >= v25 )
        goto LABEL_19;
    }
LABEL_34:
    sub_B0D97C(list);
  }
LABEL_19:
  if ( !v44 )
    goto LABEL_34;
  if ( v44->fields._size < 1 )
    return -1;
  v37 = BannerAddMaster___c_TypeInfo;
  if ( (BYTE3(BannerAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BannerAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BannerAddMaster___c_TypeInfo);
    v37 = BannerAddMaster___c_TypeInfo;
  }
  static_fields = v37->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      static_fields = BannerAddMaster___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_BannerAddEntity__TypeInfo,
                                                                          v21,
                                                                          v22);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v40,
      Method_BannerAddMaster___c__getOverwriteBannerId_b__3_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_BannerAddEntity___ctor__);
    v41 = BannerAddMaster___c_TypeInfo->static_fields;
    v41->__9__3_0 = (struct System_Comparison_BannerAddEntity__o *)_9__3_0;
    sub_B0D840(&v41->__9__3_0, _9__3_0);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v44,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_BannerAddEntity__Sort__);
  if ( !v44->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v42 = v44->fields._items->m_Items[0];
  if ( !v42 )
    goto LABEL_34;
  return (int32_t)v42[1].klass;
}


void __fastcall BannerAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213996 & 1) == 0 )
  {
    sub_B0D8A4(&BannerAddMaster___c_TypeInfo, v1);
    byte_4213996 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BannerAddMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BannerAddMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}