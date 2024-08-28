void __fastcall BoardMessageMaster___ctor(BoardMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A08957 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string___ctor__, method);
    byte_4A08957 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    230,
    (const MethodInfo_30E47D8 *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string___ctor__);
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
  System_Collections_ObjectModel_Collection_T__o *v13; // x1
  int v14; // w22
  int32_t v15; // w23
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4A08958 & 1) == 0 )
  {
    sub_1B686D4(&BoardMessageEntity_TypeInfo, *(_QWORD *)&warId);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__, v9);
    sub_1B686D4(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo, v10);
    byte_4A08958 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3081124 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( (int)list >= 1 )
    {
      v14 = (int)list;
      v15 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          break;
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v15,
                                                                   (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v13 = list;
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
                *(const MethodInfo_34BC278 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v22 = &items->obj.klass + size;
              v11->fields._size = size + 1;
              v22[4] = (Il2CppClass *)v13;
              sub_1B68678((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v13, v16, v17);
            }
          }
        }
        if ( v14 == ++v15 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1B68930(list, v13);
    }
  }
LABEL_18:
  if ( !v11 )
    goto LABEL_20;
  return (BoardMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v11,
                                       (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
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
  __int64 v21; // x1
  BoardMessageReleaseMaster_o *v22; // x23
  int32_t Count; // w0
  int32_t v24; // w24
  int32_t v25; // w25
  const MethodInfo *v26; // x2
  Il2CppObject *v27; // x26
  __int64 methodPtr_low; // x10
  int32_t v29; // w2
  int32_t v30; // w3
  int64_t klass; // x8
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Comparison_T__o *v36; // x20
  Il2CppObject *v37; // x21
  struct BoardMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3

  if ( (byte_4A08959 & 1) == 0 )
  {
    sub_1B686D4(&BoardMessageEntity_TypeInfo, *(_QWORD *)&warId);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B686D4(&System_Comparison_BoardMessageEntity__TypeInfo, v9);
    sub_1B686D4(&Method_DataManager_GetMasterData_BoardMessageReleaseMaster___, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_BoardMessageEntity__Sort__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__, v13);
    sub_1B686D4(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__, v14);
    sub_1B686D4(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo, v15);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B686D4(&Method_BoardMessageMaster___c__GetDataCondCheck_b__4_0__, v17);
    sub_1B686D4(&BoardMessageMaster___c_TypeInfo, v18);
    byte_4A08959 = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId <= 0 )
  {
    if ( !v19 )
      goto LABEL_34;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_34;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_BoardMessageReleaseMaster___);
    if ( !this->fields.list )
      goto LABEL_34;
    v22 = (BoardMessageReleaseMaster_o *)Instance;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
              (const MethodInfo_3081124 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v24 = Count;
      v25 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)Instance,
                     v25,
                     (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Instance )
        {
          v27 = (Il2CppObject *)Instance;
          methodPtr_low = LOBYTE(BoardMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
            && *(BoardMessageEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == BoardMessageEntity_TypeInfo
            && *((_DWORD *)Instance + 5) == warId )
          {
            if ( !v22 )
              break;
            Instance = (void *)BoardMessageReleaseMaster__IsOpen(v22, *((_DWORD *)Instance + 4), v26);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              klass = (int64_t)v27[4].klass;
              if ( klass >= 1 && klass > nowTime && (__int64)v27[3].monitor < nowTime )
              {
                if ( !v19 )
                  break;
                items = v19->fields._items;
                v33 = Method_System_Collections_Generic_List_BoardMessageEntity__Add__;
                ++v19->fields._version;
                if ( !items )
                  break;
                size = v19->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v19,
                    v27,
                    *(const MethodInfo_34BC278 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
                }
                else
                {
                  v35 = &items->obj.klass + size;
                  v19->fields._size = size + 1;
                  v35[4] = (Il2CppClass *)v27;
                  sub_1B68678((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v27, v29, v30);
                }
              }
            }
          }
        }
        if ( v24 == ++v25 )
          goto LABEL_24;
      }
LABEL_34:
      sub_1B68930(Instance, v21);
    }
LABEL_24:
    Instance = BoardMessageMaster___c_TypeInfo;
    if ( !BoardMessageMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardMessageMaster___c_TypeInfo);
      Instance = BoardMessageMaster___c_TypeInfo;
    }
    v36 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v36 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = BoardMessageMaster___c_TypeInfo;
      }
      v37 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v36 = (System_Comparison_T__o *)sub_1B68920(System_Comparison_BoardMessageEntity__TypeInfo);
      System_Comparison_object____ctor(v36, v37, Method_BoardMessageMaster___c__GetDataCondCheck_b__4_0__, 0LL);
      static_fields = BoardMessageMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_BoardMessageEntity__o *)v36;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)v36, v39, v40);
    }
    if ( !v19 )
      goto LABEL_34;
    System_Collections_Generic_List_object___Sort_55303484(
      v19,
      v36,
      (const MethodInfo_34BDD3C *)Method_System_Collections_Generic_List_BoardMessageEntity__Sort__);
  }
  return (BoardMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v19,
                                       (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BoardMessageEntity_o *__fastcall BoardMessageMaster__GetEntity(
        BoardMessageMaster_o *this,
        int32_t id,
        int32_t warId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A08955 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4A08955 = 1;
  }
  PK = (Il2CppObject *)BoardMessageEntity__CreatePK(id, warId, *(const MethodInfo **)&warId);
  return (BoardMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_30E4818 *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__GetEntity__);
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

  if ( (byte_4A08956 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__TryGetEntity__, entity);
    byte_4A08956 = 1;
  }
  PK = (Il2CppObject *)BoardMessageEntity__CreatePK(id, warId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30E4868 *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__TryGetEntity__);
}


void __fastcall BoardMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A0895A & 1) == 0 )
  {
    sub_1B686D4(&BoardMessageMaster___c_TypeInfo, v1);
    byte_4A0895A = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(BoardMessageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BoardMessageMaster___c_TypeInfo->static_fields->__9 = (struct BoardMessageMaster___c_o *)v2;
  sub_1B68678((ServantStatusBattleListViewItem_o *)BoardMessageMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B68930(this, a);
  return b->fields.priority - a->fields.priority;
}