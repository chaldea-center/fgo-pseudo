void __fastcall BoxGachaBaseMaster___ctor(BoxGachaBaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41896A9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string___ctor__, method);
    byte_41896A9 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    123,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoxGachaBaseEntity_o *__fastcall BoxGachaBaseMaster__GetEntity(
        BoxGachaBaseMaster_o *this,
        int32_t id,
        int32_t no,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_41896A7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_41896A7 = 1;
  }
  PK = BoxGachaBaseEntity__CreatePK(id, no, *(const MethodInfo **)&no);
  return (BoxGachaBaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_24E4520 *)Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BoxGachaBaseMaster__TryGetEntity(
        BoxGachaBaseMaster_o *this,
        BoxGachaBaseEntity_o **entity,
        int32_t id,
        int32_t no,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_41896A8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string__TryGetEntity__, entity);
    byte_41896A8 = 1;
  }
  PK = BoxGachaBaseEntity__CreatePK(id, no, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_BoxGachaBaseMaster__BoxGachaBaseEntity__string__TryGetEntity__);
}


bool __fastcall BoxGachaBaseMaster__checkIsResetTarget(
        BoxGachaBaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  BoxGachaBaseEntity_array *GachaBaseList; // x0
  __int64 v4; // x1
  int max_length; // w8
  unsigned int v6; // w9
  BoxGachaBaseEntity_o *v7; // x10
  __int64 v9; // x0

  GachaBaseList = BoxGachaBaseMaster__getGachaBaseList(this, id, method);
  if ( !GachaBaseList )
LABEL_12:
    sub_B2C434(GachaBaseList, v4);
  max_length = GachaBaseList->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= max_length )
    {
      v9 = sub_B2C460(GachaBaseList);
      sub_B2C400(v9, 0LL);
    }
    v7 = GachaBaseList->m_Items[v6];
    if ( !v7 )
      goto LABEL_12;
    if ( v7->fields.isRare )
      return 1;
    if ( (int)++v6 >= max_length )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
BoxGachaBaseEntity_array *__fastcall BoxGachaBaseMaster__getGachaBaseList(
        BoxGachaBaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  void *v17; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v20; // w22
  int32_t v21; // w23
  __int64 v22; // x10
  struct BoxGachaBaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v25; // x21
  struct BoxGachaBaseMaster___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_41896AA & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaBaseEntity_TypeInfo, *(_QWORD *)&id);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B2C35C(&Method_System_Comparison_BoxGachaBaseEntity___ctor__, v7);
    sub_B2C35C(&System_Comparison_BoxGachaBaseEntity__TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaBaseEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaBaseEntity__Sort__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaBaseEntity__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaBaseEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_BoxGachaBaseEntity__TypeInfo, v13);
    sub_B2C35C(&Method_BoxGachaBaseMaster___c__getGachaBaseList_b__3_0__, v14);
    sub_B2C35C(&BoxGachaBaseMaster___c_TypeInfo, v15);
    byte_41896AA = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BoxGachaBaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BoxGachaBaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v21,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v17 = list;
        v22 = *(&BoxGachaBaseEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v22
          && *(BoxGachaBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v22 - 8) == BoxGachaBaseEntity_TypeInfo
          && (id < 1 || *((_DWORD *)list + 4) == id) )
        {
          if ( !v16 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v16,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BoxGachaBaseEntity__Add__);
        }
      }
      if ( ++v21 >= v20 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B2C434(list, v17);
  }
LABEL_15:
  list = BoxGachaBaseMaster___c_TypeInfo;
  if ( (BYTE3(BoxGachaBaseMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoxGachaBaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaBaseMaster___c_TypeInfo);
    list = BoxGachaBaseMaster___c_TypeInfo;
  }
  static_fields = (struct BoxGachaBaseMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = BoxGachaBaseMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_BoxGachaBaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v25,
      Method_BoxGachaBaseMaster___c__getGachaBaseList_b__3_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_BoxGachaBaseEntity___ctor__);
    v26 = BoxGachaBaseMaster___c_TypeInfo->static_fields;
    v26->__9__3_0 = (struct System_Comparison_BoxGachaBaseEntity__o *)_9__3_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v26->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !v16 )
    goto LABEL_25;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_BoxGachaBaseEntity__Sort__);
  return (BoxGachaBaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BoxGachaBaseEntity__ToArray__);
}


void __fastcall BoxGachaBaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct BoxGachaBaseMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184EA9 & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaBaseMaster___c_TypeInfo, v1);
    byte_4184EA9 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BoxGachaBaseMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BoxGachaBaseMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BoxGachaBaseMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall BoxGachaBaseMaster___c___ctor(BoxGachaBaseMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BoxGachaBaseMaster___c___getGachaBaseList_b__3_0(
        BoxGachaBaseMaster___c_o *this,
        BoxGachaBaseEntity_o *a,
        BoxGachaBaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}