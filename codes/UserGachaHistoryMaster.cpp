void __fastcall UserGachaHistoryMaster___ctor(UserGachaHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421370B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserGachaHistoryMaster__UserGachaHistoryEntity__string___ctor__, method);
    byte_421370B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    395,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_UserGachaHistoryMaster__UserGachaHistoryEntity__string___ctor__);
}


System_Collections_Generic_List_UserGachaHistoryEntity__o *__fastcall UserGachaHistoryMaster__GetEntityList(
        UserGachaHistoryMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  UserGachaHistoryMaster___c_c *v13; // x0
  struct UserGachaHistoryMaster___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__1_0; // x20
  Il2CppObject *v16; // x21
  struct UserGachaHistoryMaster___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_TOutput__o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  UserGachaHistoryMaster___c_c *v27; // x8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v28; // x19
  struct UserGachaHistoryMaster___c_StaticFields *v29; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_1; // x20
  Il2CppObject *v31; // x21
  struct UserGachaHistoryMaster___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_421370C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_UserGachaHistoryEntity___ctor__, method);
    sub_B0D8A4(&System_Comparison_UserGachaHistoryEntity__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Converter_DataEntityBase__UserGachaHistoryEntity___ctor__, v5);
    sub_B0D8A4(&System_Converter_DataEntityBase__UserGachaHistoryEntity__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserGachaHistoryEntity__Sort__, v7);
    sub_B0D8A4(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserGachaHistoryEntity___, v8);
    sub_B0D8A4(&Method_UserGachaHistoryMaster___c__GetEntityList_b__1_0__, v9);
    sub_B0D8A4(&Method_UserGachaHistoryMaster___c__GetEntityList_b__1_1__, v10);
    sub_B0D8A4(&UserGachaHistoryMaster___c_TypeInfo, v11);
    byte_421370C = 1;
  }
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v13 = UserGachaHistoryMaster___c_TypeInfo;
  if ( (BYTE3(UserGachaHistoryMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserGachaHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserGachaHistoryMaster___c_TypeInfo);
    v13 = UserGachaHistoryMaster___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__1_0 = (System_Converter_string__string__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Converter_string__string__o *)sub_B0D974(
                                                      System_Converter_DataEntityBase__UserGachaHistoryEntity__TypeInfo,
                                                      method,
                                                      v2);
    System_Converter_string__string____ctor(
      _9__1_0,
      v16,
      Method_UserGachaHistoryMaster___c__GetEntityList_b__1_0__,
      (const MethodInfo_2666150 *)Method_System_Converter_DataEntityBase__UserGachaHistoryEntity___ctor__);
    v17 = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    v17->__9__1_0 = (struct System_Converter_DataEntityBase__UserGachaHistoryEntity__o *)_9__1_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v17->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_204B038 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserGachaHistoryEntity___);
  v27 = UserGachaHistoryMaster___c_TypeInfo;
  v28 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v24;
  if ( (BYTE3(UserGachaHistoryMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserGachaHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserGachaHistoryMaster___c_TypeInfo);
    v27 = UserGachaHistoryMaster___c_TypeInfo;
  }
  v29 = v27->static_fields;
  _9__1_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v29->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v29 = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)v29->__9;
    _9__1_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_UserGachaHistoryEntity__TypeInfo,
                                                                          v25,
                                                                          v26);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_1,
      v31,
      Method_UserGachaHistoryMaster___c__GetEntityList_b__1_1__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_UserGachaHistoryEntity___ctor__);
    v32 = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    v32->__9__1_1 = (struct System_Comparison_UserGachaHistoryEntity__o *)_9__1_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v32->__9__1_1,
      (System_Int32_array **)_9__1_1,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  if ( !v28 )
    sub_B0D97C(v24);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v28,
    (System_Comparison_T__o *)_9__1_1,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_UserGachaHistoryEntity__Sort__);
  return (System_Collections_Generic_List_UserGachaHistoryEntity__o *)v28;
}


System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__o *__fastcall UserGachaHistoryMaster__GetEnumerator(
        UserGachaHistoryMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *EntityList; // x0
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_421370D & 1) == 0 )
  {
    sub_B0D8A4(&System_Collections_Generic_List_Enumerator_UserGachaHistoryEntity__TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserGachaHistoryEntity__GetEnumerator__, v3);
    byte_421370D = 1;
  }
  EntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGachaHistoryMaster__GetEntityList(
                                                                                                this,
                                                                                                method);
  if ( !EntityList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v7,
    EntityList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_UserGachaHistoryEntity__GetEnumerator__);
  v6 = v7;
  return (System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__o *)j_il2cpp_value_box_0(
                                                                               System_Collections_Generic_List_Enumerator_UserGachaHistoryEntity__TypeInfo,
                                                                               &v6);
}


void __fastcall UserGachaHistoryMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct UserGachaHistoryMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4212623 & 1) == 0 )
  {
    sub_B0D8A4(&UserGachaHistoryMaster___c_TypeInfo, v1);
    byte_4212623 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(UserGachaHistoryMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = UserGachaHistoryMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserGachaHistoryMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall UserGachaHistoryMaster___c___ctor(UserGachaHistoryMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UserGachaHistoryEntity_o *__fastcall UserGachaHistoryMaster___c___GetEntityList_b__1_0(
        UserGachaHistoryMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_4212624 & 1) == 0 )
  {
    sub_B0D8A4(&UserGachaHistoryEntity_TypeInfo, entity);
    byte_4212624 = 1;
  }
  if ( !entity )
    return 0LL;
  v4 = *(&UserGachaHistoryEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&entity->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (UserGachaHistoryEntity_c *)entity->klass->_2.typeHierarchy[v4 - 1] == UserGachaHistoryEntity_TypeInfo )
    return (UserGachaHistoryEntity_o *)entity;
  return 0LL;
}


int32_t __fastcall UserGachaHistoryMaster___c___GetEntityList_b__1_1(
        UserGachaHistoryMaster___c_o *this,
        UserGachaHistoryEntity_o *a,
        UserGachaHistoryEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.idx - b->fields.idx;
}