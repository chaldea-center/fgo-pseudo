void BoxGachaMaster___ctor(BoxGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C42C85 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__);
    byte_4C42C85 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    128,
    (const MethodInfo_339ED7C *)Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__);
}


BoxGachaEntity_o *BoxGachaMaster__GetBoxGachaDataByEventId(
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

  if ( (byte_4C42C87 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__);
    byte_4C42C87 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__);
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
                                     (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__);
      if ( result && result->fields.eventId == eventId && result->fields.slot == slot )
        return result;
      if ( v9 == ++v10 )
        return 0;
    }
LABEL_13:
    sub_1C372B4(list);
  }
  return 0;
}


System_Int32_array *BoxGachaMaster__GetEventItemList(
        BoxGachaMaster_o *this,
        int32_t event_id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  const MethodInfo *v6; // x2
  void *BoxGachaDataByEventId; // x0
  int v8; // w8
  void *v9; // x19
  unsigned int v10; // w22
  __int64 v11; // x8
  int32_t v12; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v17; // x19
  int32_t v18; // w22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass *v24; // x1
  Il2CppClass **v25; // x0
  System_Comparison_T__o *v26; // x20
  Il2CppObject *v27; // x21
  struct BoxGachaMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x20
  unsigned __int64 v32; // x21

  if ( (byte_4C42C88 & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_ItemEntity__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_ItemEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ItemEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ItemEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_BoxGachaMaster___c__GetEventItemList_b__3_0__);
    sub_1C37058(&BoxGachaMaster___c_TypeInfo);
    byte_4C42C88 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  BoxGachaDataByEventId = BoxGachaMaster__getBoxGachaDataByEventId(this, event_id, v6);
  if ( !BoxGachaDataByEventId )
    goto LABEL_42;
  v8 = *((_DWORD *)BoxGachaDataByEventId + 6);
  v9 = BoxGachaDataByEventId;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v8 )
LABEL_43:
        sub_1C372BC(BoxGachaDataByEventId);
      v11 = *((_QWORD *)v9 + (int)v10 + 4);
      if ( !v11 )
        break;
      if ( *(_DWORD *)(v11 + 48) == 6 )
      {
        if ( !v5 )
          break;
        v12 = *(_DWORD *)(v11 + 52);
        BoxGachaDataByEventId = (void *)System_Collections_Generic_List_int___Contains(
                                          v5,
                                          v12,
                                          (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)BoxGachaDataByEventId & 1) == 0 )
        {
          items = v5->fields._items;
          v14 = Method_System_Collections_Generic_List_int__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v5,
              v12,
              *(const MethodInfo_3786000 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v5->fields._size = size + 1;
            items->m_Items[size] = v12;
          }
        }
      }
      v8 = *((_DWORD *)v9 + 6);
      if ( (int)++v10 >= v8 )
        goto LABEL_16;
    }
LABEL_42:
    sub_1C372B4(BoxGachaDataByEventId);
  }
LABEL_16:
  BoxGachaDataByEventId = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !BoxGachaDataByEventId )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)BoxGachaDataByEventId,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !v5 )
    goto LABEL_42;
  if ( v5->fields._size >= 1 )
  {
    v18 = 0;
    do
    {
      BoxGachaDataByEventId = (void *)System_Collections_Generic_List_int___get_Item(
                                        v5,
                                        v18,
                                        (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !MasterData_object )
        goto LABEL_42;
      BoxGachaDataByEventId = DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                (int32_t)BoxGachaDataByEventId,
                                (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( BoxGachaDataByEventId )
      {
        if ( !v17 )
          goto LABEL_42;
        v21 = v17->fields._items;
        v22 = Method_System_Collections_Generic_List_ItemEntity__Add__;
        ++v17->fields._version;
        if ( !v21 )
          goto LABEL_42;
        v23 = v17->fields._size;
        v24 = (Il2CppClass *)BoxGachaDataByEventId;
        if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)BoxGachaDataByEventId,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &v21->obj.klass + v23;
          v17->fields._size = v23 + 1;
          v25[4] = v24;
          sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
        }
      }
    }
    while ( ++v18 < v5->fields._size );
  }
  BoxGachaDataByEventId = BoxGachaMaster___c_TypeInfo;
  if ( !BoxGachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaMaster___c_TypeInfo);
    BoxGachaDataByEventId = BoxGachaMaster___c_TypeInfo;
  }
  v26 = *(System_Comparison_T__o **)(*((_QWORD *)BoxGachaDataByEventId + 23) + 16LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)BoxGachaDataByEventId + 56) )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaDataByEventId);
      BoxGachaDataByEventId = BoxGachaMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)BoxGachaDataByEventId + 23);
    v26 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_object____ctor(v26, v27, Method_BoxGachaMaster___c__GetEventItemList_b__3_0__, 0);
    static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ItemEntity__o *)v26;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)v26, v29, v30);
  }
  if ( !v17 )
    goto LABEL_42;
  System_Collections_Generic_List_object___Sort_58346216(
    v17,
    v26,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v31 = sub_1C37100(int___TypeInfo, (unsigned int)v17->fields._size);
  if ( v17->fields._size >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      BoxGachaDataByEventId = System_Collections_Generic_List_object___get_Item(
                                v17,
                                v32,
                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !BoxGachaDataByEventId || !v31 )
        goto LABEL_42;
      if ( v32 >= *(unsigned int *)(v31 + 24) )
        goto LABEL_43;
      *(_DWORD *)(v31 + 32 + 4 * v32++) = *((_DWORD *)BoxGachaDataByEventId + 4);
      if ( (__int64)v32 >= v17->fields._size )
        return (System_Int32_array *)v31;
    }
  }
  return (System_Int32_array *)v31;
}


BoxGachaEntity_array *BoxGachaMaster__getBoxGachaDataByEventId(
        BoxGachaMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  void *list; // x0
  int32_t Count; // w0
  int32_t v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppClass *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Comparison_T__o *v17; // x20
  Il2CppObject *v18; // x21
  struct BoxGachaMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C42C86 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__);
    sub_1C37058(&System_Comparison_BoxGachaEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BoxGachaEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_BoxGachaEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BoxGachaEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BoxGachaEntity__TypeInfo);
    sub_1C37058(&Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__);
    sub_1C37058(&BoxGachaMaster___c_TypeInfo);
    byte_4C42C86 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BoxGachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BoxGachaEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v9,
               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__);
      if ( list )
      {
        v12 = (Il2CppClass *)list;
        if ( *((_DWORD *)list + 5) == eventId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v14 = Method_System_Collections_Generic_List_BoxGachaEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v16[4] = v12;
            sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1C372B4(list);
  }
LABEL_15:
  list = BoxGachaMaster___c_TypeInfo;
  if ( !BoxGachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaMaster___c_TypeInfo);
    list = BoxGachaMaster___c_TypeInfo;
  }
  v17 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v17 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = BoxGachaMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)**((_QWORD **)list + 23);
    v17 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_BoxGachaEntity__TypeInfo);
    System_Comparison_object____ctor(v17, v18, Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__, 0);
    static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_BoxGachaEntity__o *)v17;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)v17, v20, v21);
  }
  if ( !v5 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_58346216(
    v5,
    v17,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_BoxGachaEntity__Sort__);
  return (BoxGachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v5,
                                   (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__);
}


void BoxGachaMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C42C89 & 1) == 0 )
  {
    sub_1C37058(&BoxGachaMaster___c_TypeInfo);
    byte_4C42C89 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BoxGachaMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BoxGachaMaster___c_TypeInfo->static_fields->__9 = (struct BoxGachaMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)BoxGachaMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BoxGachaMaster___c___ctor(BoxGachaMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BoxGachaMaster___c___GetEventItemList_b__3_0(
        BoxGachaMaster___c_o *this,
        ItemEntity_o *a,
        ItemEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C372B4(this);
  return a->fields.priority - b->fields.priority;
}


int32_t BoxGachaMaster___c___getBoxGachaDataByEventId_b__1_0(
        BoxGachaMaster___c_o *this,
        BoxGachaEntity_o *a,
        BoxGachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C372B4(this);
  return b->fields.priority - a->fields.priority;
}