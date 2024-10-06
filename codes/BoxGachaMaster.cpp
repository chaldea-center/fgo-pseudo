void __fastcall BoxGachaMaster___ctor(BoxGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A6FB77 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__, method);
    byte_4A6FB77 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    124,
    (const MethodInfo_312C568 *)Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoxGachaEntity_o *__fastcall BoxGachaMaster__GetBoxGachaDataByEventId(
        BoxGachaMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  BoxGachaEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A6FB79 & 1) == 0 )
  {
    sub_1B90010(&BoxGachaEntity_TypeInfo, *(_QWORD *)&eventId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    byte_4A6FB79 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (BoxGachaEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                     list,
                                     v12,
                                     (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(BoxGachaEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (BoxGachaEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == BoxGachaEntity_TypeInfo
          && result->fields.eventId == eventId
          && result->fields.slot == slot )
        {
          return result;
        }
      }
      if ( v11 == ++v12 )
        return 0LL;
    }
LABEL_15:
    sub_1B9026C(list, *(_QWORD *)&eventId);
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
  void *BoxGachaDataByEventId; // x0
  __int64 v26; // x1
  int v27; // w8
  void *v28; // x19
  unsigned int v29; // w22
  __int64 v30; // x8
  int32_t v31; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v36; // x19
  int32_t v37; // w22
  int32_t v38; // w2
  int32_t v39; // w3
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass *v43; // x1
  Il2CppClass **v44; // x0
  System_Comparison_T__o *v45; // x20
  Il2CppObject *v46; // x21
  struct BoxGachaMaster___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_Int32_array *v50; // x20
  unsigned __int64 v51; // x21

  if ( (byte_4A6FB7A & 1) == 0 )
  {
    sub_1B90010(&System_Comparison_ItemEntity__TypeInfo, *(_QWORD *)&event_id);
    sub_1B90010(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_1B90010(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_1B90010(&int___TypeInfo, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_ItemEntity__Add__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v16);
    sub_1B90010(&Method_System_Collections_Generic_List_int__get_Item__, v17);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1B90010(&System_Collections_Generic_List_ItemEntity__TypeInfo, v19);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B90010(&Method_BoxGachaMaster___c__GetEventItemList_b__3_0__, v21);
    sub_1B90010(&BoxGachaMaster___c_TypeInfo, v22);
    byte_4A6FB7A = 1;
  }
  v23 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  BoxGachaDataByEventId = BoxGachaMaster__getBoxGachaDataByEventId(this, event_id, v24);
  if ( !BoxGachaDataByEventId )
    goto LABEL_42;
  v27 = *((_DWORD *)BoxGachaDataByEventId + 6);
  v28 = BoxGachaDataByEventId;
  if ( v27 >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= v27 )
LABEL_43:
        sub_1B90274(BoxGachaDataByEventId, v26);
      v30 = *((_QWORD *)v28 + (int)v29 + 4);
      if ( !v30 )
        break;
      if ( *(_DWORD *)(v30 + 48) == 6 )
      {
        if ( !v23 )
          break;
        v31 = *(_DWORD *)(v30 + 52);
        BoxGachaDataByEventId = (void *)System_Collections_Generic_List_int___Contains(
                                          v23,
                                          v31,
                                          (const MethodInfo_34F3D14 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)BoxGachaDataByEventId & 1) == 0 )
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
              *(const MethodInfo_34F399C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v23->fields._size = size + 1;
            items->m_Items[size + 1] = v31;
          }
        }
      }
      v27 = *((_DWORD *)v28 + 6);
      if ( (int)++v29 >= v27 )
        goto LABEL_16;
    }
LABEL_42:
    sub_1B9026C(BoxGachaDataByEventId, v26);
  }
LABEL_16:
  BoxGachaDataByEventId = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !BoxGachaDataByEventId )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)BoxGachaDataByEventId,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ItemMaster___);
  v36 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !v23 )
    goto LABEL_42;
  if ( v23->fields._size >= 1 )
  {
    v37 = 0;
    do
    {
      BoxGachaDataByEventId = (void *)System_Collections_Generic_List_int___get_Item(
                                        v23,
                                        v37,
                                        (const MethodInfo_34F36AC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !MasterData_object )
        goto LABEL_42;
      BoxGachaDataByEventId = DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                (int32_t)BoxGachaDataByEventId,
                                (const MethodInfo_312C5A8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( BoxGachaDataByEventId )
      {
        if ( !v36 )
          goto LABEL_42;
        v40 = v36->fields._items;
        v41 = Method_System_Collections_Generic_List_ItemEntity__Add__;
        ++v36->fields._version;
        if ( !v40 )
          goto LABEL_42;
        v42 = v36->fields._size;
        v43 = (Il2CppClass *)BoxGachaDataByEventId;
        if ( (unsigned int)v42 >= v40->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v36,
            (Il2CppObject *)BoxGachaDataByEventId,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = &v40->obj.klass + v42;
          v36->fields._size = v42 + 1;
          v44[4] = v43;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v43, v38, v39);
        }
      }
    }
    while ( ++v37 < v23->fields._size );
  }
  BoxGachaDataByEventId = BoxGachaMaster___c_TypeInfo;
  if ( !BoxGachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaMaster___c_TypeInfo);
    BoxGachaDataByEventId = BoxGachaMaster___c_TypeInfo;
  }
  v45 = *(System_Comparison_T__o **)(*((_QWORD *)BoxGachaDataByEventId + 23) + 16LL);
  if ( !v45 )
  {
    if ( !*((_DWORD *)BoxGachaDataByEventId + 56) )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaDataByEventId);
      BoxGachaDataByEventId = BoxGachaMaster___c_TypeInfo;
    }
    v46 = (Il2CppObject *)**((_QWORD **)BoxGachaDataByEventId + 23);
    v45 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_object____ctor(v45, v46, Method_BoxGachaMaster___c__GetEventItemList_b__3_0__, 0LL);
    static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ItemEntity__o *)v45;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)v45, v48, v49);
  }
  if ( !v36 )
    goto LABEL_42;
  System_Collections_Generic_List_object___Sort_55649412(
    v36,
    v45,
    (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v50 = (System_Int32_array *)sub_1B900B8(int___TypeInfo, (unsigned int)v36->fields._size);
  if ( v36->fields._size >= 1 )
  {
    v51 = 0LL;
    while ( 1 )
    {
      BoxGachaDataByEventId = System_Collections_Generic_List_object___get_Item(
                                v36,
                                v51,
                                (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !BoxGachaDataByEventId || !v50 )
        goto LABEL_42;
      if ( v51 >= v50->max_length )
        goto LABEL_43;
      v50->m_Items[++v51] = *((_DWORD *)BoxGachaDataByEventId + 4);
      if ( (__int64)v51 >= v36->fields._size )
        return v50;
    }
  }
  return v50;
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
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x19
  Il2CppClass *v16; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v19; // w22
  int32_t v20; // w23
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Comparison_T__o *v28; // x20
  Il2CppObject *v29; // x21
  struct BoxGachaMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3

  if ( (byte_4A6FB78 & 1) == 0 )
  {
    sub_1B90010(&BoxGachaEntity_TypeInfo, *(_QWORD *)&eventId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B90010(&System_Comparison_BoxGachaEntity__TypeInfo, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_BoxGachaEntity__Add__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_BoxGachaEntity__Sort__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_BoxGachaEntity___ctor__, v11);
    sub_1B90010(&System_Collections_Generic_List_BoxGachaEntity__TypeInfo, v12);
    sub_1B90010(&Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__, v13);
    sub_1B90010(&BoxGachaMaster___c_TypeInfo, v14);
    byte_4A6FB78 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_BoxGachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_BoxGachaEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v20,
               (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = (Il2CppClass *)list;
        methodPtr_low = LOBYTE(BoxGachaEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(BoxGachaEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == BoxGachaEntity_TypeInfo
          && *((_DWORD *)list + 5) == eventId )
        {
          if ( !v15 )
            break;
          items = v15->fields._items;
          v25 = Method_System_Collections_Generic_List_BoxGachaEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)list,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v27[4] = v16;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v16, v21, v22);
          }
        }
      }
      if ( v19 == ++v20 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1B9026C(list, v16);
  }
LABEL_17:
  list = BoxGachaMaster___c_TypeInfo;
  if ( !BoxGachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaMaster___c_TypeInfo);
    list = BoxGachaMaster___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v28 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = BoxGachaMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)**((_QWORD **)list + 23);
    v28 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_BoxGachaEntity__TypeInfo);
    System_Comparison_object____ctor(v28, v29, Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__, 0LL);
    static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_BoxGachaEntity__o *)v28;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)v28, v31, v32);
  }
  if ( !v15 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_55649412(
    v15,
    v28,
    (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_BoxGachaEntity__Sort__);
  return (BoxGachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v15,
                                   (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__);
}


void __fastcall BoxGachaMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A6FB7B & 1) == 0 )
  {
    sub_1B90010(&BoxGachaMaster___c_TypeInfo, v1);
    byte_4A6FB7B = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(BoxGachaMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BoxGachaMaster___c_TypeInfo->static_fields->__9 = (struct BoxGachaMaster___c_o *)v2;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)BoxGachaMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B9026C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall BoxGachaMaster___c___getBoxGachaDataByEventId_b__1_0(
        BoxGachaMaster___c_o *this,
        BoxGachaEntity_o *a,
        BoxGachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B9026C(this, a);
  return b->fields.priority - a->fields.priority;
}