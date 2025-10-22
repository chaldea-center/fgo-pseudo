void BoxGachaMaster___ctor(BoxGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C56A2E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__);
    byte_4C56A2E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    128,
    (const MethodInfo_33B0C34 *)Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4C56A30 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__);
    byte_4C56A30 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__);
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
                                     (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__);
      if ( result && result->fields.eventId == eventId && result->fields.slot == slot )
        return result;
      if ( v9 == ++v10 )
        return 0;
    }
LABEL_13:
    sub_1C3E7C0(list, *(_QWORD *)&eventId);
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
  __int64 v8; // x1
  int v9; // w8
  void *v10; // x19
  unsigned int v11; // w22
  __int64 v12; // x8
  int32_t v13; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v18; // x19
  int32_t v19; // w22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass *v25; // x1
  Il2CppClass **v26; // x0
  System_Comparison_T__o *v27; // x20
  Il2CppObject *v28; // x21
  struct BoxGachaMaster___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x20
  unsigned __int64 v33; // x21

  if ( (byte_4C56A31 & 1) == 0 )
  {
    sub_1C3E564(&System_Comparison_ItemEntity__TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemEntity__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemEntity__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_BoxGachaMaster___c__GetEventItemList_b__3_0__);
    sub_1C3E564(&BoxGachaMaster___c_TypeInfo);
    byte_4C56A31 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  BoxGachaDataByEventId = BoxGachaMaster__getBoxGachaDataByEventId(this, event_id, v6);
  if ( !BoxGachaDataByEventId )
    goto LABEL_42;
  v9 = *((_DWORD *)BoxGachaDataByEventId + 6);
  v10 = BoxGachaDataByEventId;
  if ( v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v9 )
LABEL_43:
        sub_1C3E7C8(BoxGachaDataByEventId, v8);
      v12 = *((_QWORD *)v10 + (int)v11 + 4);
      if ( !v12 )
        break;
      if ( *(_DWORD *)(v12 + 48) == 6 )
      {
        if ( !v5 )
          break;
        v13 = *(_DWORD *)(v12 + 52);
        BoxGachaDataByEventId = (void *)System_Collections_Generic_List_int___Contains(
                                          v5,
                                          v13,
                                          (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)BoxGachaDataByEventId & 1) == 0 )
        {
          items = v5->fields._items;
          v15 = Method_System_Collections_Generic_List_int__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v5,
              v13,
              *(const MethodInfo_379843C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v5->fields._size = size + 1;
            items->m_Items[size] = v13;
          }
        }
      }
      v9 = *((_DWORD *)v10 + 6);
      if ( (int)++v11 >= v9 )
        goto LABEL_16;
    }
LABEL_42:
    sub_1C3E7C0(BoxGachaDataByEventId, v8);
  }
LABEL_16:
  BoxGachaDataByEventId = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !BoxGachaDataByEventId )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)BoxGachaDataByEventId,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !v5 )
    goto LABEL_42;
  if ( v5->fields._size >= 1 )
  {
    v19 = 0;
    do
    {
      BoxGachaDataByEventId = (void *)System_Collections_Generic_List_int___get_Item(
                                        v5,
                                        v19,
                                        (const MethodInfo_379814C *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !MasterData_object )
        goto LABEL_42;
      BoxGachaDataByEventId = DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                (int32_t)BoxGachaDataByEventId,
                                (const MethodInfo_33B2F58 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( BoxGachaDataByEventId )
      {
        if ( !v18 )
          goto LABEL_42;
        v22 = v18->fields._items;
        v23 = Method_System_Collections_Generic_List_ItemEntity__Add__;
        ++v18->fields._version;
        if ( !v22 )
          goto LABEL_42;
        v24 = v18->fields._size;
        v25 = (Il2CppClass *)BoxGachaDataByEventId;
        if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)BoxGachaDataByEventId,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &v22->obj.klass + v24;
          v18->fields._size = v24 + 1;
          v26[4] = v25;
          sub_1C3E508((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v25, v20, v21);
        }
      }
    }
    while ( ++v19 < v5->fields._size );
  }
  BoxGachaDataByEventId = BoxGachaMaster___c_TypeInfo;
  if ( !BoxGachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaMaster___c_TypeInfo);
    BoxGachaDataByEventId = BoxGachaMaster___c_TypeInfo;
  }
  v27 = *(System_Comparison_T__o **)(*((_QWORD *)BoxGachaDataByEventId + 23) + 16LL);
  if ( !v27 )
  {
    if ( !*((_DWORD *)BoxGachaDataByEventId + 56) )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaDataByEventId);
      BoxGachaDataByEventId = BoxGachaMaster___c_TypeInfo;
    }
    v28 = (Il2CppObject *)**((_QWORD **)BoxGachaDataByEventId + 23);
    v27 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_object____ctor(v27, v28, Method_BoxGachaMaster___c__GetEventItemList_b__3_0__, 0);
    static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ItemEntity__o *)v27;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)v27, v30, v31);
  }
  if ( !v18 )
    goto LABEL_42;
  System_Collections_Generic_List_object___Sort_58421028(
    v18,
    v27,
    (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v32 = sub_1C3E60C(int___TypeInfo, (unsigned int)v18->fields._size);
  if ( v18->fields._size >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      BoxGachaDataByEventId = System_Collections_Generic_List_object___get_Item(
                                v18,
                                v33,
                                (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !BoxGachaDataByEventId || !v32 )
        goto LABEL_42;
      if ( v33 >= *(unsigned int *)(v32 + 24) )
        goto LABEL_43;
      *(_DWORD *)(v32 + 32 + 4 * v33++) = *((_DWORD *)BoxGachaDataByEventId + 4);
      if ( (__int64)v33 >= v18->fields._size )
        return (System_Int32_array *)v32;
    }
  }
  return (System_Int32_array *)v32;
}


BoxGachaEntity_array *BoxGachaMaster__getBoxGachaDataByEventId(
        BoxGachaMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppClass *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Comparison_T__o *v17; // x20
  Il2CppObject *v18; // x21
  struct BoxGachaMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C56A2F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__);
    sub_1C3E564(&System_Comparison_BoxGachaEntity__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BoxGachaEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BoxGachaEntity__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BoxGachaEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BoxGachaEntity__TypeInfo);
    sub_1C3E564(&Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__);
    sub_1C3E564(&BoxGachaMaster___c_TypeInfo);
    byte_4C56A2F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BoxGachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BoxGachaEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__);
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
               (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__);
      if ( list )
      {
        v6 = (Il2CppClass *)list;
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
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v16[4] = v6;
            sub_1C3E508((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v6, v11, v12);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1C3E7C0(list, v6);
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
    v17 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_BoxGachaEntity__TypeInfo);
    System_Comparison_object____ctor(v17, v18, Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__, 0);
    static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_BoxGachaEntity__o *)v17;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)v17, v20, v21);
  }
  if ( !v5 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_58421028(
    v5,
    v17,
    (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_BoxGachaEntity__Sort__);
  return (BoxGachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v5,
                                   (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__);
}


void BoxGachaMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C56A32 & 1) == 0 )
  {
    sub_1C3E564(&BoxGachaMaster___c_TypeInfo);
    byte_4C56A32 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(BoxGachaMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BoxGachaMaster___c_TypeInfo->static_fields->__9 = (struct BoxGachaMaster___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)BoxGachaMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t BoxGachaMaster___c___getBoxGachaDataByEventId_b__1_0(
        BoxGachaMaster___c_o *this,
        BoxGachaEntity_o *a,
        BoxGachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C3E7C0(this, a);
  return b->fields.priority - a->fields.priority;
}