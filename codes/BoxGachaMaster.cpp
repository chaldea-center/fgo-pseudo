void __fastcall BoxGachaMaster___ctor(BoxGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC779D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__, method);
    byte_4BC779D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    128,
    (const MethodInfo_3246354 *)Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoxGachaEntity_o *__fastcall BoxGachaMaster__GetBoxGachaDataByEventId(
        BoxGachaMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w22
  int32_t v11; // w23
  BoxGachaEntity_o *result; // x0

  if ( (byte_4BC779F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__, v7);
    byte_4BC779F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (BoxGachaEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                     list,
                                     v11,
                                     (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__);
      if ( result && result->fields.eventId == eventId && result->fields.slot == slot )
        return result;
      if ( v10 == ++v11 )
        return 0LL;
    }
LABEL_13:
    sub_1C1AE30(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BoxGachaMaster__GetEventItemList(
        BoxGachaMaster_o *this,
        int32_t event_id,
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_Generic_List_int__o *v23; // x20
  const MethodInfo *v24; // x2
  int64_t BoxGachaDataByEventId; // x0
  __int64 v26; // x1
  int v27; // w8
  int64_t v28; // x19
  unsigned int v29; // w22
  __int64 v30; // x8
  int32_t v31; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v36; // x19
  int32_t v37; // w22
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  int64_t v47; // x1
  Il2CppClass **v48; // x0
  System_Comparison_T__o *v49; // x20
  Il2CppObject *v50; // x21
  struct BoxGachaMaster___c_StaticFields *static_fields; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Int32_array *v58; // x20
  unsigned __int64 v59; // x21

  if ( (byte_4BC77A0 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Comparison_ItemEntity__TypeInfo, *(_QWORD *)&event_id);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_1C1ABD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_1C1ABD4(&int___TypeInfo, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ItemEntity__Add__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__get_Item__, v17);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1C1ABD4(&System_Collections_Generic_List_ItemEntity__TypeInfo, v19);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1C1ABD4(&Method_BoxGachaMaster___c__GetEventItemList_b__3_0__, v21);
    sub_1C1ABD4(&BoxGachaMaster___c_TypeInfo, v22);
    byte_4BC77A0 = 1;
  }
  v23 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  BoxGachaDataByEventId = (int64_t)BoxGachaMaster__getBoxGachaDataByEventId(this, event_id, v24);
  if ( !BoxGachaDataByEventId )
    goto LABEL_42;
  v27 = *(_DWORD *)(BoxGachaDataByEventId + 24);
  v28 = BoxGachaDataByEventId;
  if ( v27 >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= v27 )
LABEL_43:
        sub_1C1AE38(BoxGachaDataByEventId, v26);
      v30 = *(_QWORD *)(v28 + 8LL * (int)v29 + 32);
      if ( !v30 )
        break;
      if ( *(_DWORD *)(v30 + 48) == 6 )
      {
        if ( !v23 )
          break;
        v31 = *(_DWORD *)(v30 + 52);
        BoxGachaDataByEventId = System_Collections_Generic_List_int___Contains(
                                  v23,
                                  v31,
                                  (const MethodInfo_361FBE4 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (BoxGachaDataByEventId & 1) == 0 )
        {
          items = v23->fields._items;
          v33 = Method_System_Collections_Generic_List_int__Add__;
          ++v23->fields._version;
          if ( !items )
            break;
          size = v23->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v23,
              v31,
              *(const MethodInfo_361F86C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v23->fields._size = size + 1;
            items->m_Items[size + 1] = v31;
          }
        }
      }
      v27 = *(_DWORD *)(v28 + 24);
      if ( (int)++v29 >= v27 )
        goto LABEL_16;
    }
LABEL_42:
    sub_1C1AE30(BoxGachaDataByEventId, v26);
  }
LABEL_16:
  BoxGachaDataByEventId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !BoxGachaDataByEventId )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)BoxGachaDataByEventId,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___);
  v36 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !v23 )
    goto LABEL_42;
  if ( v23->fields._size >= 1 )
  {
    v37 = 0;
    do
    {
      BoxGachaDataByEventId = System_Collections_Generic_List_int___get_Item(
                                v23,
                                v37,
                                (const MethodInfo_361F57C *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !MasterData_object )
        goto LABEL_42;
      BoxGachaDataByEventId = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                         BoxGachaDataByEventId,
                                         (const MethodInfo_3248678 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( BoxGachaDataByEventId )
      {
        if ( !v36 )
          goto LABEL_42;
        v44 = v36->fields._items;
        v45 = Method_System_Collections_Generic_List_ItemEntity__Add__;
        ++v36->fields._version;
        if ( !v44 )
          goto LABEL_42;
        v46 = v36->fields._size;
        v47 = BoxGachaDataByEventId;
        if ( (unsigned int)v46 >= v44->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v36,
            (Il2CppObject *)BoxGachaDataByEventId,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = &v44->obj.klass + v46;
          v36->fields._size = v46 + 1;
          v48[4] = (Il2CppClass *)v47;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v48 + 4), v47, v38, v39, v40, v41, v42, v43);
        }
      }
    }
    while ( ++v37 < v23->fields._size );
  }
  BoxGachaDataByEventId = (int64_t)BoxGachaMaster___c_TypeInfo;
  if ( !BoxGachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaMaster___c_TypeInfo);
    BoxGachaDataByEventId = (int64_t)BoxGachaMaster___c_TypeInfo;
  }
  v49 = *(System_Comparison_T__o **)(*(_QWORD *)(BoxGachaDataByEventId + 184) + 16LL);
  if ( !v49 )
  {
    if ( !*(_DWORD *)(BoxGachaDataByEventId + 224) )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaDataByEventId);
      BoxGachaDataByEventId = (int64_t)BoxGachaMaster___c_TypeInfo;
    }
    v50 = **(Il2CppObject ***)(BoxGachaDataByEventId + 184);
    v49 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_object____ctor(v49, v50, Method_BoxGachaMaster___c__GetEventItemList_b__3_0__, 0LL);
    static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ItemEntity__o *)v49;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)v49, v52, v53, v54, v55, v56, v57);
  }
  if ( !v36 )
    goto LABEL_42;
  System_Collections_Generic_List_object___Sort_56877908(
    v36,
    v49,
    (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v58 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, (unsigned int)v36->fields._size);
  if ( v36->fields._size >= 1 )
  {
    v59 = 0LL;
    while ( 1 )
    {
      BoxGachaDataByEventId = (int64_t)System_Collections_Generic_List_object___get_Item(
                                         v36,
                                         v59,
                                         (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !BoxGachaDataByEventId || !v58 )
        goto LABEL_42;
      if ( v59 >= v58->max_length )
        goto LABEL_43;
      v58->m_Items[++v59] = *(_DWORD *)(BoxGachaDataByEventId + 16);
      if ( (__int64)v59 >= v36->fields._size )
        return v58;
    }
  }
  return v58;
}


// local variable allocation has failed, the output may be wrong!
BoxGachaEntity_array *__fastcall BoxGachaMaster__getBoxGachaDataByEventId(
        BoxGachaMaster_o *this,
        int32_t eventId,
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
  System_Collections_Generic_List_object__o *v14; // x19
  int64_t v15; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v18; // w22
  int32_t v19; // w23
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Comparison_T__o *v30; // x20
  Il2CppObject *v31; // x21
  struct BoxGachaMaster___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4BC779E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__, v5);
    sub_1C1ABD4(&System_Comparison_BoxGachaEntity__TypeInfo, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BoxGachaEntity__Add__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BoxGachaEntity__Sort__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BoxGachaEntity___ctor__, v10);
    sub_1C1ABD4(&System_Collections_Generic_List_BoxGachaEntity__TypeInfo, v11);
    sub_1C1ABD4(&Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__, v12);
    sub_1C1ABD4(&BoxGachaMaster___c_TypeInfo, v13);
    byte_4BC779E = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BoxGachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BoxGachaEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v19,
               (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__);
      if ( list )
      {
        v15 = (int64_t)list;
        if ( *((_DWORD *)list + 5) == eventId )
        {
          if ( !v14 )
            break;
          items = v14->fields._items;
          v27 = Method_System_Collections_Generic_List_BoxGachaEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            break;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)list,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v15;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v29 + 4), v15, v20, v21, v22, v23, v24, v25);
          }
        }
      }
      if ( v18 == ++v19 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1C1AE30(list, v15);
  }
LABEL_15:
  list = BoxGachaMaster___c_TypeInfo;
  if ( !BoxGachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaMaster___c_TypeInfo);
    list = BoxGachaMaster___c_TypeInfo;
  }
  v30 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v30 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = BoxGachaMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)**((_QWORD **)list + 23);
    v30 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_BoxGachaEntity__TypeInfo);
    System_Comparison_object____ctor(v30, v31, Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__, 0LL);
    static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_BoxGachaEntity__o *)v30;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)v30, v33, v34, v35, v36, v37, v38);
  }
  if ( !v14 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_56877908(
    v14,
    v30,
    (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_BoxGachaEntity__Sort__);
  return (BoxGachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v14,
                                   (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__);
}


void __fastcall BoxGachaMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC77A1 & 1) == 0 )
  {
    sub_1C1ABD4(&BoxGachaMaster___c_TypeInfo, v1);
    byte_4BC77A1 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(BoxGachaMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BoxGachaMaster___c_TypeInfo->static_fields->__9 = (struct BoxGachaMaster___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)BoxGachaMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall BoxGachaMaster___c___getBoxGachaDataByEventId_b__1_0(
        BoxGachaMaster___c_o *this,
        BoxGachaEntity_o *a,
        BoxGachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C1AE30(this, a);
  return b->fields.priority - a->fields.priority;
}