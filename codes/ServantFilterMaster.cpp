void __fastcall ServantFilterMaster___ctor(ServantFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42168D4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__, method);
    byte_42168D4 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    202,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int___ctor__);
}


bool __fastcall ServantFilterMaster__IsEnableServant(
        ServantFilterMaster_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x20
  ServantFilterEntity_o *Entity; // x0
  const MethodInfo *v9; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x1.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_42168D6 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__,
      *(_QWORD *)&svtId.fields.currentCryptoKey);
    byte_42168D6 = 1;
  }
  Entity = (ServantFilterEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                      id,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__);
  if ( !Entity )
    sub_B0D97C(0LL);
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  *(_QWORD *)&v11.fields.fakeValue = v5;
  return ServantFilterEntity__IsEnableServant(Entity, v11, v9);
}


bool __fastcall ServantFilterMaster__IsEnableServant_28100244(
        ServantFilterMaster_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  ServantFilterMaster_o *v7; // x22
  __int64 v8; // x8
  unsigned __int64 v9; // x23
  const MethodInfo *v10; // x3
  __int64 v12; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x1.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  v7 = this;
  if ( (byte_42168D7 & 1) == 0 )
  {
    this = (ServantFilterMaster_o *)sub_B0D8A4(
                                      &Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__,
                                      *(_QWORD *)&svtId.fields.currentCryptoKey);
    byte_42168D7 = 1;
  }
  if ( !ids )
LABEL_13:
    sub_B0D97C(this);
  v8 = *(_QWORD *)&ids->max_length;
  if ( (int)v8 < 1 )
    return 0;
  v9 = 0LL;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)v8 )
    {
      v12 = sub_B0D9A8(this);
      sub_B0D948(v12, 0LL);
    }
    this = (ServantFilterMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)v7,
                                      ids->m_Items[v9 + 1],
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantFilterMaster__ServantFilterEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_13;
    *(_QWORD *)&v13.fields.currentCryptoKey = v6;
    *(_QWORD *)&v13.fields.fakeValue = v5;
    this = (ServantFilterMaster_o *)ServantFilterEntity__IsEnableServant((ServantFilterEntity_o *)this, v13, v10);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    LODWORD(v8) = ids->max_length;
    if ( (__int64)++v9 >= (int)v8 )
      return 0;
  }
}


System_Int32_array *__fastcall ServantFilterMaster__getEnableIdList(
        ServantFilterMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v16; // x1
  int64_t Time; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  __int64 list; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  int32_t v24; // w22
  int32_t v25; // w23
  const MethodInfo *v26; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x24
  __int64 v28; // x10
  int size; // w20
  ServantFilterMaster___c_c *v30; // x0
  struct ServantFilterMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x21
  Il2CppObject *v33; // x22
  struct ServantFilterMaster___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array *v41; // x21
  __int64 v42; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v43; // x8
  __int64 v45; // x0

  if ( (byte_42168D5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B0D8A4(&Method_System_Comparison_ServantFilterEntity___ctor__, v4);
    sub_B0D8A4(&System_Comparison_ServantFilterEntity__TypeInfo, v5);
    sub_B0D8A4(&int___TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterEntity__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterEntity__Sort__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterEntity___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterEntity__get_Item__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_ServantFilterEntity__TypeInfo, v12);
    sub_B0D8A4(&NetworkManager_TypeInfo, v13);
    sub_B0D8A4(&ServantFilterEntity_TypeInfo, v14);
    sub_B0D8A4(&Method_ServantFilterMaster___c__getEnableIdList_b__1_0__, v15);
    sub_B0D8A4(&ServantFilterMaster___c_TypeInfo, v16);
    byte_42168D5 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantFilterEntity__TypeInfo,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantFilterEntity___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_37;
  list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
           (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v24 = list;
    v25 = 0;
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        break;
      list = (__int64)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v25,
                        (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v28 = *(&ServantFilterEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v28
        || *(ServantFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v28 - 8) != ServantFilterEntity_TypeInfo )
      {
        break;
      }
      list = ServantFilterEntity__IsEnable((ServantFilterEntity_o *)list, Time, v26);
      if ( (list & 1) != 0 )
      {
        if ( !v20 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          v27,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantFilterEntity__Add__);
      }
      if ( ++v25 >= v24 )
        goto LABEL_17;
    }
LABEL_37:
    sub_B0D97C(list);
  }
LABEL_17:
  if ( !v20 )
    goto LABEL_37;
  size = v20->fields._size;
  if ( size >= 1 )
  {
    v30 = ServantFilterMaster___c_TypeInfo;
    if ( (BYTE3(ServantFilterMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantFilterMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantFilterMaster___c_TypeInfo);
      v30 = ServantFilterMaster___c_TypeInfo;
    }
    static_fields = v30->static_fields;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        static_fields = ServantFilterMaster___c_TypeInfo->static_fields;
      }
      v33 = (Il2CppObject *)static_fields->__9;
      _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                            System_Comparison_ServantFilterEntity__TypeInfo,
                                                                            v22,
                                                                            v23);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__1_0,
        v33,
        Method_ServantFilterMaster___c__getEnableIdList_b__1_0__,
        (const MethodInfo_2412E90 *)Method_System_Comparison_ServantFilterEntity___ctor__);
      v34 = ServantFilterMaster___c_TypeInfo->static_fields;
      v34->__9__1_0 = (struct System_Comparison_ServantFilterEntity__o *)_9__1_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v34->__9__1_0,
        (System_Int32_array **)_9__1_0,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v20,
      (System_Comparison_T__o *)_9__1_0,
      (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_ServantFilterEntity__Sort__);
    list = sub_B0D8BC(int___TypeInfo, (unsigned int)size);
    v41 = (System_Int32_array *)list;
    v42 = 0LL;
    while ( 1 )
    {
      if ( v20->fields._size <= (unsigned int)v42 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v43 = v20->fields._items->m_Items[v42];
      if ( !v43 || !list )
        break;
      if ( (unsigned int)v42 >= *(_DWORD *)(list + 24) )
      {
        v45 = sub_B0D9A8(list);
        sub_B0D948(v45, 0LL);
      }
      *(_DWORD *)(list + 32 + 4 * v42++) = v43->fields.missionTargetId;
      if ( (int)v42 >= size )
        return v41;
    }
    goto LABEL_37;
  }
  return 0LL;
}


void __fastcall ServantFilterMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ServantFilterMaster___c_StaticFields *static_fields; // x0

  if ( (byte_421222F & 1) == 0 )
  {
    sub_B0D8A4(&ServantFilterMaster___c_TypeInfo, v1);
    byte_421222F = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantFilterMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantFilterMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantFilterMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall ServantFilterMaster___c___ctor(ServantFilterMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantFilterMaster___c___getEnableIdList_b__1_0(
        ServantFilterMaster___c_o *this,
        ServantFilterEntity_o *a,
        ServantFilterEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.priority - b->fields.priority;
}