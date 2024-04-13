void __fastcall BannerAddMaster___ctor(BannerAddMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6619 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E6619 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    199,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string___ctor__);
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

  if ( (byte_42E6617 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__GetEntity__,
      bannerId,
      dispType,
      *(_QWORD *)&priority);
    byte_42E6617 = 1;
  }
  PK = BannerAddEntity__CreatePK(bannerId, dispType, priority, *(const MethodInfo **)&priority);
  return (BannerAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_23FB260 *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__GetEntity__);
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

  if ( (byte_42E6618 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__TryGetEntity__,
      (_DWORD)entity,
      bannerId,
      *(_QWORD *)&dispType);
    byte_42E6618 = 1;
  }
  PK = BannerAddEntity__CreatePK(bannerId, dispType, priority, *(const MethodInfo **)&dispType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_BannerAddMaster__BannerAddEntity__string__TryGetEntity__);
}


int32_t __fastcall BannerAddMaster__getOverwriteBannerId(
        BannerAddMaster_o *this,
        int32_t bannerId,
        int32_t dispType,
        const MethodInfo *method)
{
  int32_t v4; // w26
  int32_t v5; // w21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  __int64 v46; // x1
  void *list; // x0
  const MethodInfo_2BB8668 **v48; // x19
  BannerAddEntity_c **v49; // x20
  int32_t v50; // w23
  int32_t v51; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v52; // x25
  __int64 v53; // x10
  BannerAddMaster_o *v54; // x23
  int32_t v55; // w22
  BannerAddEntity_c **v56; // x21
  const MethodInfo_2BB8668 **v57; // x20
  int32_t v58; // w19
  int32_t v59; // w26
  int32_t v60; // w28
  int64_t v61; // x27
  BannerAddMaster___c_c *v62; // x0
  struct BannerAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v65; // x21
  struct BannerAddMaster___c_StaticFields *v66; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v67; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v69; // [xsp+0h] [xbp-60h]
  int32_t v70; // [xsp+Ch] [xbp-54h]

  v4 = dispType;
  v5 = bannerId;
  if ( (byte_42E661A & 1) == 0 )
  {
    sub_B5D5C4(&BannerAddEntity_TypeInfo, bannerId, dispType, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Comparison_BannerAddEntity___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Comparison_BannerAddEntity__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&CondType_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BannerAddEntity__Add__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BannerAddEntity__Sort__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BannerAddEntity___ctor__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BannerAddEntity__get_Count__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BannerAddEntity__get_Item__, v34, v35, v36);
    sub_B5D5C4(&System_Collections_Generic_List_BannerAddEntity__TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_BannerAddMaster___c__getOverwriteBannerId_b__3_0__, v40, v41, v42);
    sub_B5D5C4(&BannerAddMaster___c_TypeInfo, v43, v44, v45);
    byte_42E661A = 1;
  }
  v69 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BannerAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v69,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BannerAddEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_34;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v48 = (const MethodInfo_2BB8668 **)&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__;
    v49 = &BannerAddEntity_TypeInfo;
    v50 = (int)list;
    v51 = 0;
    v70 = (int)list;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v51,
               *v48);
      if ( !list )
        break;
      v52 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v53 = *(&(*v49)->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v53
        || *(BannerAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v53 - 8) != *v49 )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == v5 && *((_DWORD *)list + 5) == v4 )
      {
        v54 = this;
        v55 = v5;
        v56 = v49;
        v57 = v48;
        v58 = v4;
        v60 = *((_DWORD *)list + 7);
        v59 = *((_DWORD *)list + 8);
        v61 = *((int *)list + 9);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        list = (void *)CondType__IsOpen(v60, v59, v61, 0, 0LL);
        v4 = v58;
        v48 = v57;
        v49 = v56;
        v5 = v55;
        this = v54;
        v50 = v70;
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          list = v69;
          if ( !v69 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v69,
            v52,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BannerAddEntity__Add__);
        }
      }
      if ( ++v51 >= v50 )
        goto LABEL_19;
    }
LABEL_34:
    sub_B5D69C(list, v46);
  }
LABEL_19:
  if ( !v69 )
    goto LABEL_34;
  if ( v69->fields._size < 1 )
    return -1;
  v62 = BannerAddMaster___c_TypeInfo;
  if ( (BYTE3(BannerAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BannerAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BannerAddMaster___c_TypeInfo);
    v62 = BannerAddMaster___c_TypeInfo;
  }
  static_fields = v62->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 && !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      static_fields = BannerAddMaster___c_TypeInfo->static_fields;
    }
    v65 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_BannerAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v65,
      Method_BannerAddMaster___c__getOverwriteBannerId_b__3_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_BannerAddEntity___ctor__);
    v66 = BannerAddMaster___c_TypeInfo->static_fields;
    v66->__9__3_0 = (struct System_Comparison_BannerAddEntity__o *)_9__3_0;
    sub_B5D560(&v66->__9__3_0);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v69,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_BannerAddEntity__Sort__);
  if ( !v69->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v67 = v69->fields._items->m_Items[0];
  if ( !v67 )
    goto LABEL_34;
  return (int32_t)v67[1].klass;
}


void __fastcall BannerAddMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E754C & 1) == 0 )
  {
    sub_B5D5C4(&BannerAddMaster___c_TypeInfo, v1, v2, v3);
    byte_42E754C = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BannerAddMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BannerAddMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}