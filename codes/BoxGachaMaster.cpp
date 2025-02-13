void __fastcall BoxGachaMaster___ctor(BoxGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC234 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__);
    byte_4BDC234 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    128,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoxGachaEntity_o *__fastcall BoxGachaMaster__GetBoxGachaDataByEventId(
        BoxGachaMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  BoxGachaEntity_o *result; // x0

  if ( (byte_4BDC236 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__);
    byte_4BDC236 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (BoxGachaEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                     list,
                                     v10,
                                     (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__);
      if ( result && result->fields.eventId == eventId && result->fields.slot == slot )
        return result;
      if ( v9 == ++v10 )
        return 0LL;
    }
LABEL_13:
    sub_1C22094(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}


System_Int32_array *__fastcall BoxGachaMaster__GetEventItemList(
        BoxGachaMaster_o *this,
        int32_t event_id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  const MethodInfo *v6; // x2
  int64_t BoxGachaDataByEventId; // x0
  __int64 v8; // x1
  int v9; // w8
  int64_t v10; // x19
  unsigned int v11; // w22
  __int64 v12; // x8
  int32_t v13; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v18; // x19
  int32_t v19; // w22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  int64_t v29; // x1
  Il2CppClass **v30; // x0
  System_Comparison_T__o *v31; // x20
  Il2CppObject *v32; // x21
  struct BoxGachaMaster___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Int32_array *v40; // x20
  unsigned __int64 v41; // x21

  if ( (byte_4BDC237 & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_ItemEntity__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_BoxGachaMaster___c__GetEventItemList_b__3_0__);
    sub_1C21E38(&BoxGachaMaster___c_TypeInfo);
    byte_4BDC237 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  BoxGachaDataByEventId = (int64_t)BoxGachaMaster__getBoxGachaDataByEventId(this, event_id, v6);
  if ( !BoxGachaDataByEventId )
    goto LABEL_42;
  v9 = *(_DWORD *)(BoxGachaDataByEventId + 24);
  v10 = BoxGachaDataByEventId;
  if ( v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v9 )
LABEL_43:
        sub_1C2209C(BoxGachaDataByEventId, v8);
      v12 = *(_QWORD *)(v10 + 8LL * (int)v11 + 32);
      if ( !v12 )
        break;
      if ( *(_DWORD *)(v12 + 48) == 6 )
      {
        if ( !v5 )
          break;
        v13 = *(_DWORD *)(v12 + 52);
        BoxGachaDataByEventId = System_Collections_Generic_List_int___Contains(
                                  v5,
                                  v13,
                                  (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (BoxGachaDataByEventId & 1) == 0 )
        {
          items = v5->fields._items;
          v15 = Method_System_Collections_Generic_List_int__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v5,
              v13,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v5->fields._size = size + 1;
            items->m_Items[size + 1] = v13;
          }
        }
      }
      v9 = *(_DWORD *)(v10 + 24);
      if ( (int)++v11 >= v9 )
        goto LABEL_16;
    }
LABEL_42:
    sub_1C22094(BoxGachaDataByEventId, v8);
  }
LABEL_16:
  BoxGachaDataByEventId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !BoxGachaDataByEventId )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)BoxGachaDataByEventId,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !v5 )
    goto LABEL_42;
  if ( v5->fields._size >= 1 )
  {
    v19 = 0;
    do
    {
      BoxGachaDataByEventId = System_Collections_Generic_List_int___get_Item(
                                v5,
                                v19,
                                (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !MasterData_object )
        goto LABEL_42;
      BoxGachaDataByEventId = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                         BoxGachaDataByEventId,
                                         (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( BoxGachaDataByEventId )
      {
        if ( !v18 )
          goto LABEL_42;
        v26 = v18->fields._items;
        v27 = Method_System_Collections_Generic_List_ItemEntity__Add__;
        ++v18->fields._version;
        if ( !v26 )
          goto LABEL_42;
        v28 = v18->fields._size;
        v29 = BoxGachaDataByEventId;
        if ( (unsigned int)v28 >= v26->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)BoxGachaDataByEventId,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &v26->obj.klass + v28;
          v18->fields._size = v28 + 1;
          v30[4] = (Il2CppClass *)v29;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 4), v29, v20, v21, v22, v23, v24, v25);
        }
      }
    }
    while ( ++v19 < v5->fields._size );
  }
  BoxGachaDataByEventId = (int64_t)BoxGachaMaster___c_TypeInfo;
  if ( !BoxGachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaMaster___c_TypeInfo);
    BoxGachaDataByEventId = (int64_t)BoxGachaMaster___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*(_QWORD *)(BoxGachaDataByEventId + 184) + 16LL);
  if ( !v31 )
  {
    if ( !*(_DWORD *)(BoxGachaDataByEventId + 224) )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaDataByEventId);
      BoxGachaDataByEventId = (int64_t)BoxGachaMaster___c_TypeInfo;
    }
    v32 = **(Il2CppObject ***)(BoxGachaDataByEventId + 184);
    v31 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_object____ctor(v31, v32, Method_BoxGachaMaster___c__GetEventItemList_b__3_0__, 0LL);
    static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ItemEntity__o *)v31;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)v31, v34, v35, v36, v37, v38, v39);
  }
  if ( !v18 )
    goto LABEL_42;
  System_Collections_Generic_List_object___Sort_56953720(
    v18,
    v31,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v40 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, (unsigned int)v18->fields._size);
  if ( v18->fields._size >= 1 )
  {
    v41 = 0LL;
    while ( 1 )
    {
      BoxGachaDataByEventId = (int64_t)System_Collections_Generic_List_object___get_Item(
                                         v18,
                                         v41,
                                         (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !BoxGachaDataByEventId || !v40 )
        goto LABEL_42;
      if ( v41 >= v40->max_length )
        goto LABEL_43;
      v40->m_Items[++v41] = *(_DWORD *)(BoxGachaDataByEventId + 16);
      if ( (__int64)v41 >= v18->fields._size )
        return v40;
    }
  }
  return v40;
}


BoxGachaEntity_array *__fastcall BoxGachaMaster__getBoxGachaDataByEventId(
        BoxGachaMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  int64_t v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Comparison_T__o *v21; // x20
  Il2CppObject *v22; // x21
  struct BoxGachaMaster___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4BDC235 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__);
    sub_1C21E38(&System_Comparison_BoxGachaEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BoxGachaEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BoxGachaEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BoxGachaEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BoxGachaEntity__TypeInfo);
    sub_1C21E38(&Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__);
    sub_1C21E38(&BoxGachaMaster___c_TypeInfo);
    byte_4BDC235 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BoxGachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BoxGachaEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__);
      if ( list )
      {
        v6 = (int64_t)list;
        if ( *((_DWORD *)list + 5) == eventId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v18 = Method_System_Collections_Generic_List_BoxGachaEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v6;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), v6, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1C22094(list, v6);
  }
LABEL_15:
  list = BoxGachaMaster___c_TypeInfo;
  if ( !BoxGachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaMaster___c_TypeInfo);
    list = BoxGachaMaster___c_TypeInfo;
  }
  v21 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = BoxGachaMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)list + 23);
    v21 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_BoxGachaEntity__TypeInfo);
    System_Comparison_object____ctor(v21, v22, Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__, 0LL);
    static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_BoxGachaEntity__o *)v21;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)v21, v24, v25, v26, v27, v28, v29);
  }
  if ( !v5 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_56953720(
    v5,
    v21,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_BoxGachaEntity__Sort__);
  return (BoxGachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v5,
                                   (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__);
}


void __fastcall BoxGachaMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC238 & 1) == 0 )
  {
    sub_1C21E38(&BoxGachaMaster___c_TypeInfo);
    byte_4BDC238 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BoxGachaMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BoxGachaMaster___c_TypeInfo->static_fields->__9 = (struct BoxGachaMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BoxGachaMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BoxGachaMaster___c___ctor(BoxGachaMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BoxGachaMaster___c___GetEventItemList_b__3_0(
        BoxGachaMaster___c_o *this,
        ItemEntity_o *a,
        ItemEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C22094(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall BoxGachaMaster___c___getBoxGachaDataByEventId_b__1_0(
        BoxGachaMaster___c_o *this,
        BoxGachaEntity_o *a,
        BoxGachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}