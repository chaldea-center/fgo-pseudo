void __fastcall BoxGachaMaster___ctor(BoxGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC11F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__, method);
    byte_49FC11F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    124,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__);
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

  if ( (byte_49FC121 & 1) == 0 )
  {
    sub_1B640C8(&BoxGachaEntity_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    byte_49FC121 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                     (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    sub_1B64324(list);
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
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_List_object__o *v38; // x19
  __int64 v39; // x1
  __int64 v40; // x2
  int32_t v41; // w22
  int32_t v42; // w3
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass *v46; // x1
  Il2CppClass **v47; // x0
  System_Comparison_T__o *v48; // x20
  Il2CppObject *v49; // x21
  struct BoxGachaMaster___c_StaticFields *static_fields; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_Int32_array *v53; // x20
  unsigned __int64 v54; // x21

  if ( (byte_49FC122 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_ItemEntity__TypeInfo, *(_QWORD *)&event_id);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_1B640C8(&int___TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v17);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1B640C8(&System_Collections_Generic_List_ItemEntity__TypeInfo, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B640C8(&Method_BoxGachaMaster___c__GetEventItemList_b__3_0__, v21);
    sub_1B640C8(&BoxGachaMaster___c_TypeInfo, v22);
    byte_49FC122 = 1;
  }
  v23 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&event_id,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1B6432C(BoxGachaDataByEventId, v26);
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
                                          (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
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
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
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
    sub_1B64324(BoxGachaDataByEventId);
  }
LABEL_16:
  BoxGachaDataByEventId = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !BoxGachaDataByEventId )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)BoxGachaDataByEventId,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  v38 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                       v36,
                                                       v37);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !v23 )
    goto LABEL_42;
  if ( v23->fields._size >= 1 )
  {
    v41 = 0;
    do
    {
      BoxGachaDataByEventId = (void *)System_Collections_Generic_List_int___get_Item(
                                        v23,
                                        v41,
                                        (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !MasterData_object )
        goto LABEL_42;
      BoxGachaDataByEventId = DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                (int32_t)BoxGachaDataByEventId,
                                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( BoxGachaDataByEventId )
      {
        if ( !v38 )
          goto LABEL_42;
        v43 = v38->fields._items;
        v44 = Method_System_Collections_Generic_List_ItemEntity__Add__;
        ++v38->fields._version;
        if ( !v43 )
          goto LABEL_42;
        v45 = v38->fields._size;
        v46 = (Il2CppClass *)BoxGachaDataByEventId;
        if ( (unsigned int)v45 >= v43->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v38,
            (Il2CppObject *)BoxGachaDataByEventId,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &v43->obj.klass + v45;
          v38->fields._size = v45 + 1;
          v47[4] = v46;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v46, v40, v42);
        }
      }
    }
    while ( ++v41 < v23->fields._size );
  }
  BoxGachaDataByEventId = BoxGachaMaster___c_TypeInfo;
  if ( !BoxGachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaMaster___c_TypeInfo);
    BoxGachaDataByEventId = BoxGachaMaster___c_TypeInfo;
  }
  v48 = *(System_Comparison_T__o **)(*((_QWORD *)BoxGachaDataByEventId + 23) + 16LL);
  if ( !v48 )
  {
    if ( !*((_DWORD *)BoxGachaDataByEventId + 56) )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaDataByEventId);
      BoxGachaDataByEventId = BoxGachaMaster___c_TypeInfo;
    }
    v49 = (Il2CppObject *)**((_QWORD **)BoxGachaDataByEventId + 23);
    v48 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ItemEntity__TypeInfo, v39, v40);
    System_Comparison_object____ctor(v48, v49, Method_BoxGachaMaster___c__GetEventItemList_b__3_0__, 0LL);
    static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ItemEntity__o *)v48;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)v48, v51, v52);
  }
  if ( !v38 )
    goto LABEL_42;
  System_Collections_Generic_List_object___Sort_55243320(
    v38,
    v48,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v53 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)v38->fields._size);
  if ( v38->fields._size >= 1 )
  {
    v54 = 0LL;
    while ( 1 )
    {
      BoxGachaDataByEventId = System_Collections_Generic_List_object___get_Item(
                                v38,
                                v54,
                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !BoxGachaDataByEventId || !v53 )
        goto LABEL_42;
      if ( v54 >= v53->max_length )
        goto LABEL_43;
      v53->m_Items[++v54] = *((_DWORD *)BoxGachaDataByEventId + 4);
      if ( (__int64)v54 >= v38->fields._size )
        return v53;
    }
  }
  return v53;
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
  void *list; // x0
  int32_t Count; // w0
  Il2CppClass *v18; // x1
  __int64 v19; // x2
  int32_t v20; // w22
  int32_t v21; // w23
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

  if ( (byte_49FC120 & 1) == 0 )
  {
    sub_1B640C8(&BoxGachaEntity_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B640C8(&System_Comparison_BoxGachaEntity__TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BoxGachaEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BoxGachaEntity__Sort__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BoxGachaEntity___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_BoxGachaEntity__TypeInfo, v12);
    sub_1B640C8(&Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__, v13);
    sub_1B640C8(&BoxGachaMaster___c_TypeInfo, v14);
    byte_49FC120 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BoxGachaEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BoxGachaEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v21,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v18 = (Il2CppClass *)list;
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
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v27[4] = v18;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v18, v19, v22);
          }
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1B64324(list);
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
    v28 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_BoxGachaEntity__TypeInfo, v18, v19);
    System_Comparison_object____ctor(v28, v29, Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__, 0LL);
    static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_BoxGachaEntity__o *)v28;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)v28, v31, v32);
  }
  if ( !v15 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_55243320(
    v15,
    v28,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_BoxGachaEntity__Sort__);
  return (BoxGachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v15,
                                   (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__);
}


void __fastcall BoxGachaMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC123 & 1) == 0 )
  {
    sub_1B640C8(&BoxGachaMaster___c_TypeInfo, v1);
    byte_49FC123 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BoxGachaMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BoxGachaMaster___c_TypeInfo->static_fields->__9 = (struct BoxGachaMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BoxGachaMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall BoxGachaMaster___c___getBoxGachaDataByEventId_b__1_0(
        BoxGachaMaster___c_o *this,
        BoxGachaEntity_o *a,
        BoxGachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}