void __fastcall BoxGachaMaster___ctor(BoxGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B01CFB & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__, method);
    byte_4B01CFB = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    128,
    (const MethodInfo_32ACD4C *)Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__);
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

  if ( (byte_4B01CFD & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__, v7);
    byte_4B01CFD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__);
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
                                     (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__);
      if ( result && result->fields.eventId == eventId && result->fields.slot == slot )
        return result;
      if ( v10 == ++v11 )
        return 0LL;
    }
LABEL_13:
    sub_1BC3264(list, *(_QWORD *)&eventId);
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
  __int64 v27; // x2
  int v28; // w8
  void *v29; // x19
  unsigned int v30; // w22
  __int64 v31; // x8
  int32_t v32; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v37; // x19
  int32_t v38; // w22
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass *v44; // x1
  Il2CppClass **v45; // x0
  System_Comparison_T__o *v46; // x20
  Il2CppObject *v47; // x21
  struct BoxGachaMaster___c_StaticFields *static_fields; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_Int32_array *v51; // x20
  unsigned __int64 v52; // x21

  if ( (byte_4B01CFE & 1) == 0 )
  {
    sub_1BC3008(&System_Comparison_ItemEntity__TypeInfo, *(_QWORD *)&event_id);
    sub_1BC3008(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_1BC3008(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_1BC3008(&int___TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemEntity__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Item__, v17);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1BC3008(&System_Collections_Generic_List_ItemEntity__TypeInfo, v19);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1BC3008(&Method_BoxGachaMaster___c__GetEventItemList_b__3_0__, v21);
    sub_1BC3008(&BoxGachaMaster___c_TypeInfo, v22);
    byte_4B01CFE = 1;
  }
  v23 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  BoxGachaDataByEventId = BoxGachaMaster__getBoxGachaDataByEventId(this, event_id, v24);
  if ( !BoxGachaDataByEventId )
    goto LABEL_42;
  v28 = *((_DWORD *)BoxGachaDataByEventId + 6);
  v29 = BoxGachaDataByEventId;
  if ( v28 >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= v28 )
LABEL_43:
        sub_1BC326C(BoxGachaDataByEventId, v26, v27);
      v31 = *((_QWORD *)v29 + (int)v30 + 4);
      if ( !v31 )
        break;
      if ( *(_DWORD *)(v31 + 48) == 6 )
      {
        if ( !v23 )
          break;
        v32 = *(_DWORD *)(v31 + 52);
        BoxGachaDataByEventId = (void *)System_Collections_Generic_List_int___Contains(
                                          v23,
                                          v32,
                                          (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)BoxGachaDataByEventId & 1) == 0 )
        {
          items = v23->fields._items;
          v34 = Method_System_Collections_Generic_List_int__Add__;
          ++v23->fields._version;
          if ( !items )
            break;
          size = v23->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v23,
              v32,
              *(const MethodInfo_3683E1C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v23->fields._size = size + 1;
            items->m_Items[size + 1] = v32;
          }
        }
      }
      v28 = *((_DWORD *)v29 + 6);
      if ( (int)++v30 >= v28 )
        goto LABEL_16;
    }
LABEL_42:
    sub_1BC3264(BoxGachaDataByEventId, v26);
  }
LABEL_16:
  BoxGachaDataByEventId = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !BoxGachaDataByEventId )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)BoxGachaDataByEventId,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ItemMaster___);
  v37 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !v23 )
    goto LABEL_42;
  if ( v23->fields._size >= 1 )
  {
    v38 = 0;
    do
    {
      BoxGachaDataByEventId = (void *)System_Collections_Generic_List_int___get_Item(
                                        v23,
                                        v38,
                                        (const MethodInfo_3683B2C *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !MasterData_object )
        goto LABEL_42;
      BoxGachaDataByEventId = DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                (int32_t)BoxGachaDataByEventId,
                                (const MethodInfo_32AF070 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( BoxGachaDataByEventId )
      {
        if ( !v37 )
          goto LABEL_42;
        v41 = v37->fields._items;
        v42 = Method_System_Collections_Generic_List_ItemEntity__Add__;
        ++v37->fields._version;
        if ( !v41 )
          goto LABEL_42;
        v43 = v37->fields._size;
        v44 = (Il2CppClass *)BoxGachaDataByEventId;
        if ( (unsigned int)v43 >= v41->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v37,
            (Il2CppObject *)BoxGachaDataByEventId,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = &v41->obj.klass + v43;
          v37->fields._size = v43 + 1;
          v45[4] = v44;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v45 + 4), (int32_t)v44, v39, v40);
        }
      }
    }
    while ( ++v38 < v23->fields._size );
  }
  BoxGachaDataByEventId = BoxGachaMaster___c_TypeInfo;
  if ( !BoxGachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaMaster___c_TypeInfo);
    BoxGachaDataByEventId = BoxGachaMaster___c_TypeInfo;
  }
  v46 = *(System_Comparison_T__o **)(*((_QWORD *)BoxGachaDataByEventId + 23) + 16LL);
  if ( !v46 )
  {
    if ( !*((_DWORD *)BoxGachaDataByEventId + 56) )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaDataByEventId);
      BoxGachaDataByEventId = BoxGachaMaster___c_TypeInfo;
    }
    v47 = (Il2CppObject *)**((_QWORD **)BoxGachaDataByEventId + 23);
    v46 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_object____ctor(v46, v47, Method_BoxGachaMaster___c__GetEventItemList_b__3_0__, 0LL);
    static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ItemEntity__o *)v46;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)v46, v49, v50);
  }
  if ( !v37 )
    goto LABEL_42;
  System_Collections_Generic_List_object___Sort_57288964(
    v37,
    v46,
    (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v51 = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, (unsigned int)v37->fields._size);
  if ( v37->fields._size >= 1 )
  {
    v52 = 0LL;
    while ( 1 )
    {
      BoxGachaDataByEventId = System_Collections_Generic_List_object___get_Item(
                                v37,
                                v52,
                                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !BoxGachaDataByEventId || !v51 )
        goto LABEL_42;
      if ( v52 >= v51->max_length )
        goto LABEL_43;
      v51->m_Items[++v52] = *((_DWORD *)BoxGachaDataByEventId + 4);
      if ( (__int64)v52 >= v37->fields._size )
        return v51;
    }
  }
  return v51;
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
  Il2CppClass *v15; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v18; // w22
  int32_t v19; // w23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Comparison_T__o *v26; // x20
  Il2CppObject *v27; // x21
  struct BoxGachaMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4B01CFC & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__, v5);
    sub_1BC3008(&System_Comparison_BoxGachaEntity__TypeInfo, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_BoxGachaEntity__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_BoxGachaEntity__Sort__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_BoxGachaEntity___ctor__, v10);
    sub_1BC3008(&System_Collections_Generic_List_BoxGachaEntity__TypeInfo, v11);
    sub_1BC3008(&Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__, v12);
    sub_1BC3008(&BoxGachaMaster___c_TypeInfo, v13);
    byte_4B01CFC = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_BoxGachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_BoxGachaEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Count__);
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
               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_BoxGachaEntity__get_Item__);
      if ( list )
      {
        v15 = (Il2CppClass *)list;
        if ( *((_DWORD *)list + 5) == eventId )
        {
          if ( !v14 )
            break;
          items = v14->fields._items;
          v23 = Method_System_Collections_Generic_List_BoxGachaEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            break;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)list,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v25[4] = v15;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v15, v20, v21);
          }
        }
      }
      if ( v18 == ++v19 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1BC3264(list, v15);
  }
LABEL_15:
  list = BoxGachaMaster___c_TypeInfo;
  if ( !BoxGachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaMaster___c_TypeInfo);
    list = BoxGachaMaster___c_TypeInfo;
  }
  v26 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = BoxGachaMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)list + 23);
    v26 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_BoxGachaEntity__TypeInfo);
    System_Comparison_object____ctor(v26, v27, Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__, 0LL);
    static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_BoxGachaEntity__o *)v26;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)v26, v29, v30);
  }
  if ( !v14 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_57288964(
    v14,
    v26,
    (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_BoxGachaEntity__Sort__);
  return (BoxGachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v14,
                                   (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__);
}


void __fastcall BoxGachaMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B01CFF & 1) == 0 )
  {
    sub_1BC3008(&BoxGachaMaster___c_TypeInfo, v1);
    byte_4B01CFF = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(BoxGachaMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BoxGachaMaster___c_TypeInfo->static_fields->__9 = (struct BoxGachaMaster___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)BoxGachaMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BC3264(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall BoxGachaMaster___c___getBoxGachaDataByEventId_b__1_0(
        BoxGachaMaster___c_o *this,
        BoxGachaEntity_o *a,
        BoxGachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BC3264(this, a);
  return b->fields.priority - a->fields.priority;
}