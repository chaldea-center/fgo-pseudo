void UserGachaHistoryMaster___ctor(UserGachaHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971777 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserGachaHistoryMaster__UserGachaHistoryEntity__string___ctor__);
    byte_5971777 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    405,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_UserGachaHistoryMaster__UserGachaHistoryEntity__string___ctor__);
}


System_Collections_Generic_List_UserGachaHistoryEntity__o *UserGachaHistoryMaster__GetEntityList(
        UserGachaHistoryMaster_o *this,
        const MethodInfo *method)
{
  UserGachaHistoryMaster___c_c *v3; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  struct UserGachaHistoryMaster___c_StaticFields *static_fields; // x8
  System_Converter_TInput__TOutput__o *_9__1_0; // x20
  Il2CppObject *v7; // x21
  struct UserGachaHistoryMaster___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_TOutput__o *v15; // x0
  __int64 v16; // x1
  UserGachaHistoryMaster___c_c *v17; // x8
  System_Collections_Generic_List_object__o *v18; // x19
  struct UserGachaHistoryMaster___c_StaticFields *v19; // x9
  System_Comparison_T__o *_9__1_1; // x20
  Il2CppObject *v21; // x21
  struct UserGachaHistoryMaster___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_5971778 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_UserGachaHistoryEntity__TypeInfo);
    sub_2213A60(&System_Converter_UserGachaHistoryEntity__UserGachaHistoryEntity__TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserGachaHistoryMaster__UserGachaHistoryEntity__string__getEntityList__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserGachaHistoryEntity__Sort__);
    sub_2213A60(&Method_ObservableCollectionExtensions_ConvertAll_UserGachaHistoryEntity__UserGachaHistoryEntity___);
    sub_2213A60(&Method_UserGachaHistoryMaster___c__GetEntityList_b__1_0__);
    sub_2213A60(&Method_UserGachaHistoryMaster___c__GetEntityList_b__1_1__);
    sub_2213A60(&UserGachaHistoryMaster___c_TypeInfo);
    byte_5971778 = 1;
  }
  v3 = UserGachaHistoryMaster___c_TypeInfo;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  if ( !*(&UserGachaHistoryMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserGachaHistoryMaster___c_TypeInfo, method);
    v3 = UserGachaHistoryMaster___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__1_0 = (System_Converter_TInput__TOutput__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Converter_TInput__TOutput__o *)sub_2213CCC(System_Converter_UserGachaHistoryEntity__UserGachaHistoryEntity__TypeInfo);
    System_Converter_object__object____ctor(_9__1_0, v7, Method_UserGachaHistoryMaster___c__GetEntityList_b__1_0__, 0);
    v8 = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    v8->__9__1_0 = (struct System_Converter_UserGachaHistoryEntity__UserGachaHistoryEntity__o *)_9__1_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__1_0, (int32_t)_9__1_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_38F3F3C *)Method_ObservableCollectionExtensions_ConvertAll_UserGachaHistoryEntity__UserGachaHistoryEntity___);
  v17 = UserGachaHistoryMaster___c_TypeInfo;
  v18 = (System_Collections_Generic_List_object__o *)v15;
  if ( !*(&UserGachaHistoryMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserGachaHistoryMaster___c_TypeInfo, v16);
    v17 = UserGachaHistoryMaster___c_TypeInfo;
  }
  v19 = v17->static_fields;
  _9__1_1 = (System_Comparison_T__o *)v19->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v16);
      v19 = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)v19->__9;
    _9__1_1 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_UserGachaHistoryEntity__TypeInfo);
    System_Comparison_object____ctor(_9__1_1, v21, Method_UserGachaHistoryMaster___c__GetEntityList_b__1_1__, 0);
    v22 = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    v22->__9__1_1 = (struct System_Comparison_UserGachaHistoryEntity__o *)_9__1_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v22->__9__1_1, (int32_t)_9__1_1, v23, v24, v25, v26, v27, v28);
  }
  if ( !v18 )
    sub_2213CDC(v15, v16);
  System_Collections_Generic_List_object___Sort_71849708(
    v18,
    _9__1_1,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_UserGachaHistoryEntity__Sort__);
  return (System_Collections_Generic_List_UserGachaHistoryEntity__o *)v18;
}


System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__o *UserGachaHistoryMaster__GetEnumerator(
        UserGachaHistoryMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *EntityList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5971779 & 1) == 0 )
  {
    sub_2213A60(&System_Collections_Generic_List_Enumerator_UserGachaHistoryEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserGachaHistoryEntity__GetEnumerator__);
    byte_5971779 = 1;
  }
  EntityList = (System_Collections_Generic_List_object__o *)UserGachaHistoryMaster__GetEntityList(this, method);
  if ( !EntityList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    &v7,
    EntityList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserGachaHistoryEntity__GetEnumerator__);
  v6 = v7;
  return (System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__o *)j_il2cpp_value_box_0(
                                                                               System_Collections_Generic_List_Enumerator_UserGachaHistoryEntity__TypeInfo,
                                                                               &v6);
}


void UserGachaHistoryMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597177A & 1) == 0 )
  {
    sub_2213A60(&UserGachaHistoryMaster___c_TypeInfo);
    byte_597177A = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(UserGachaHistoryMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserGachaHistoryMaster___c_TypeInfo->static_fields->__9 = (struct UserGachaHistoryMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)UserGachaHistoryMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserGachaHistoryMaster___c___ctor(UserGachaHistoryMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UserGachaHistoryEntity_o *UserGachaHistoryMaster___c___GetEntityList_b__1_0(
        UserGachaHistoryMaster___c_o *this,
        UserGachaHistoryEntity_o *entity,
        const MethodInfo *method)
{
  return entity;
}


int32_t UserGachaHistoryMaster___c___GetEntityList_b__1_1(
        UserGachaHistoryMaster___c_o *this,
        UserGachaHistoryEntity_o *a,
        UserGachaHistoryEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.idx - b->fields.idx;
}