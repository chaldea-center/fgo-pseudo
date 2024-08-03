void __fastcall BoardMessageMaster___ctor(BoardMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC100 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string___ctor__, method);
    byte_49FC100 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    230,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoardMessageEntity_array *__fastcall BoardMessageMaster__GetData(
        BoardMessageMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v13; // w22
  int32_t v14; // w23
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_ObjectModel_Collection_T__o *v17; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_49FC101 & 1) == 0 )
  {
    sub_1B640C8(&BoardMessageEntity_TypeInfo, *(_QWORD *)&warId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo, v10);
    byte_49FC101 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BoardMessageEntity__TypeInfo,
                                                       *(_QWORD *)&warId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( (int)list >= 1 )
    {
      v13 = (int)list;
      v14 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          break;
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v14,
                                                                   (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v17 = list;
          methodPtr_low = LOBYTE(BoardMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (BoardMessageEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == BoardMessageEntity_TypeInfo
            && HIDWORD(list->fields.items) == warId )
          {
            if ( !v11 )
              break;
            items = v11->fields._items;
            v20 = Method_System_Collections_Generic_List_BoardMessageEntity__Add__;
            ++v11->fields._version;
            if ( !items )
              break;
            size = v11->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                (Il2CppObject *)list,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v22 = &items->obj.klass + size;
              v11->fields._size = size + 1;
              v22[4] = (Il2CppClass *)v17;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v17, v15, v16);
            }
          }
        }
        if ( v13 == ++v14 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1B64324(list);
    }
  }
LABEL_18:
  if ( !v11 )
    goto LABEL_20;
  return (BoardMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v11,
                                       (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BoardMessageEntity_array *__fastcall BoardMessageMaster__GetDataCondCheck(
        BoardMessageMaster_o *this,
        int32_t warId,
        int64_t nowTime,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v19; // x19
  void *Instance; // x0
  BoardMessageReleaseMaster_o *v21; // x23
  int32_t Count; // w0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  int32_t v25; // w24
  int32_t v26; // w25
  Il2CppObject *v27; // x26
  __int64 methodPtr_low; // x10
  int32_t v29; // w3
  int64_t klass; // x8
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Comparison_T__o *v35; // x20
  Il2CppObject *v36; // x21
  struct BoardMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  int32_t v39; // w3

  if ( (byte_49FC102 & 1) == 0 )
  {
    sub_1B640C8(&BoardMessageEntity_TypeInfo, *(_QWORD *)&warId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B640C8(&System_Comparison_BoardMessageEntity__TypeInfo, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_BoardMessageReleaseMaster___, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_BoardMessageEntity__Sort__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__, v14);
    sub_1B640C8(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&Method_BoardMessageMaster___c__GetDataCondCheck_b__4_0__, v17);
    sub_1B640C8(&BoardMessageMaster___c_TypeInfo, v18);
    byte_49FC102 = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BoardMessageEntity__TypeInfo,
                                                       *(_QWORD *)&warId,
                                                       nowTime);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId <= 0 )
  {
    if ( !v19 )
      goto LABEL_34;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_34;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BoardMessageReleaseMaster___);
    if ( !this->fields.list )
      goto LABEL_34;
    v21 = (BoardMessageReleaseMaster_o *)Instance;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
              (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v25 = Count;
      v26 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)Instance,
                     v26,
                     (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Instance )
        {
          v27 = (Il2CppObject *)Instance;
          methodPtr_low = LOBYTE(BoardMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
            && *(BoardMessageEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == BoardMessageEntity_TypeInfo
            && *((_DWORD *)Instance + 5) == warId )
          {
            if ( !v21 )
              break;
            Instance = (void *)BoardMessageReleaseMaster__IsOpen(v21, *((_DWORD *)Instance + 4), v24);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              klass = (int64_t)v27[4].klass;
              if ( klass >= 1 && klass > nowTime && (__int64)v27[3].monitor < nowTime )
              {
                if ( !v19 )
                  break;
                items = v19->fields._items;
                v32 = Method_System_Collections_Generic_List_BoardMessageEntity__Add__;
                ++v19->fields._version;
                if ( !items )
                  break;
                size = v19->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v19,
                    v27,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
                }
                else
                {
                  v34 = &items->obj.klass + size;
                  v19->fields._size = size + 1;
                  v34[4] = (Il2CppClass *)v27;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v27, (int32_t)v24, v29);
                }
              }
            }
          }
        }
        if ( v25 == ++v26 )
          goto LABEL_24;
      }
LABEL_34:
      sub_1B64324(Instance);
    }
LABEL_24:
    Instance = BoardMessageMaster___c_TypeInfo;
    if ( !BoardMessageMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardMessageMaster___c_TypeInfo);
      Instance = BoardMessageMaster___c_TypeInfo;
    }
    v35 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v35 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = BoardMessageMaster___c_TypeInfo;
      }
      v36 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v35 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_BoardMessageEntity__TypeInfo, v23, v24);
      System_Comparison_object____ctor(v35, v36, Method_BoardMessageMaster___c__GetDataCondCheck_b__4_0__, 0LL);
      static_fields = BoardMessageMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_BoardMessageEntity__o *)v35;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)v35, v38, v39);
    }
    if ( !v19 )
      goto LABEL_34;
    System_Collections_Generic_List_object___Sort_55243320(
      v19,
      v35,
      (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_BoardMessageEntity__Sort__);
  }
  return (BoardMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v19,
                                       (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BoardMessageEntity_o *__fastcall BoardMessageMaster__GetEntity(
        BoardMessageMaster_o *this,
        int32_t id,
        int32_t warId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FC0FE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_49FC0FE = 1;
  }
  PK = (Il2CppObject *)BoardMessageEntity__CreatePK(id, warId, *(const MethodInfo **)&warId);
  return (BoardMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_30D41FC *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BoardMessageMaster__TryGetEntity(
        BoardMessageMaster_o *this,
        BoardMessageEntity_o **entity,
        int32_t id,
        int32_t warId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FC0FF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__TryGetEntity__, entity);
    byte_49FC0FF = 1;
  }
  PK = (Il2CppObject *)BoardMessageEntity__CreatePK(id, warId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__TryGetEntity__);
}


void __fastcall BoardMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC103 & 1) == 0 )
  {
    sub_1B640C8(&BoardMessageMaster___c_TypeInfo, v1);
    byte_49FC103 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BoardMessageMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BoardMessageMaster___c_TypeInfo->static_fields->__9 = (struct BoardMessageMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BoardMessageMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall BoardMessageMaster___c___ctor(BoardMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BoardMessageMaster___c___GetDataCondCheck_b__4_0(
        BoardMessageMaster___c_o *this,
        BoardMessageEntity_o *a,
        BoardMessageEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}