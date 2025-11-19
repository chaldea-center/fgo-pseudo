void BoardMessageMaster___ctor(BoardMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5F73 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__int___ctor__);
    byte_4CB5F73 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    236,
    (const MethodInfo_33F6DB8 *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__int___ctor__);
}


BoardMessageEntity_array *BoardMessageMaster__GetData(
        BoardMessageMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_ObjectModel_Collection_T__o *v7; // x1
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4CB5F71 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
    byte_4CB5F71 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Count__);
    if ( (int)list >= 1 )
    {
      v8 = (int)list;
      v9 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          break;
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v9,
                                                                   (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Item__);
        if ( list )
        {
          v7 = list;
          if ( HIDWORD(list->fields.items) == warId )
          {
            if ( !v5 )
              break;
            items = v5->fields._items;
            v13 = Method_System_Collections_Generic_List_BoardMessageEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)list,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
            }
            else
            {
              v15 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v15[4] = (Il2CppClass *)v7;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v7, v10, v11);
            }
          }
        }
        if ( v8 == ++v9 )
          goto LABEL_16;
      }
LABEL_18:
      sub_1C6BC60(list, v7);
    }
  }
LABEL_16:
  if ( !v5 )
    goto LABEL_18;
  return (BoardMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
}


BoardMessageEntity_array *BoardMessageMaster__GetDataCondCheck(
        BoardMessageMaster_o *this,
        int32_t warId,
        int64_t nowTime,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  void *Instance; // x0
  __int64 v9; // x1
  BoardMessageReleaseMaster_o *v10; // x23
  int32_t Count; // w0
  int32_t v12; // w24
  int32_t v13; // w25
  const MethodInfo *v14; // x2
  Il2CppObject *v15; // x26
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int64_t klass; // x8
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Comparison_T__o *v23; // x20
  Il2CppObject *v24; // x21
  struct BoardMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_4CB5F72 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Item__);
    sub_1C6BA08(&System_Comparison_BoardMessageEntity__TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_BoardMessageReleaseMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BoardMessageEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_BoardMessageMaster___c__GetDataCondCheck_b__1_0__);
    sub_1C6BA08(&BoardMessageMaster___c_TypeInfo);
    byte_4CB5F72 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId <= 0 )
  {
    if ( !v7 )
      goto LABEL_32;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_BoardMessageReleaseMaster___);
    if ( !this->fields.list )
      goto LABEL_32;
    v10 = (BoardMessageReleaseMaster_o *)Instance;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
              (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Count__);
    if ( Count >= 1 )
    {
      v12 = Count;
      v13 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)Instance,
                     v13,
                     (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Item__);
        if ( Instance )
        {
          v15 = (Il2CppObject *)Instance;
          if ( *((_DWORD *)Instance + 5) == warId )
          {
            if ( !v10 )
              break;
            Instance = (void *)BoardMessageReleaseMaster__IsOpen(v10, *((_DWORD *)Instance + 4), v14);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              klass = (int64_t)v15[4].klass;
              if ( klass >= 1 && klass > nowTime && (__int64)v15[3].monitor < nowTime )
              {
                if ( !v7 )
                  break;
                items = v7->fields._items;
                v20 = Method_System_Collections_Generic_List_BoardMessageEntity__Add__;
                ++v7->fields._version;
                if ( !items )
                  break;
                size = v7->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v7,
                    v15,
                    *(const MethodInfo_3800974 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
                }
                else
                {
                  v22 = &items->obj.klass + size;
                  v7->fields._size = size + 1;
                  v22[4] = (Il2CppClass *)v15;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v15, v16, v17);
                }
              }
            }
          }
        }
        if ( v12 == ++v13 )
          goto LABEL_22;
      }
LABEL_32:
      sub_1C6BC60(Instance, v9);
    }
LABEL_22:
    Instance = BoardMessageMaster___c_TypeInfo;
    if ( !BoardMessageMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardMessageMaster___c_TypeInfo);
      Instance = BoardMessageMaster___c_TypeInfo;
    }
    v23 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v23 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = BoardMessageMaster___c_TypeInfo;
      }
      v24 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v23 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_BoardMessageEntity__TypeInfo);
      System_Comparison_object____ctor(v23, v24, Method_BoardMessageMaster___c__GetDataCondCheck_b__1_0__, 0);
      static_fields = BoardMessageMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = (struct System_Comparison_BoardMessageEntity__o *)v23;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)v23, v26, v27);
    }
    if ( !v7 )
      goto LABEL_32;
    System_Collections_Generic_List_object___Sort_58729528(
      v7,
      v23,
      (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_BoardMessageEntity__Sort__);
  }
  return (BoardMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v7,
                                       (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
}


void BoardMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB5F74 & 1) == 0 )
  {
    sub_1C6BA08(&BoardMessageMaster___c_TypeInfo);
    byte_4CB5F74 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(BoardMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BoardMessageMaster___c_TypeInfo->static_fields->__9 = (struct BoardMessageMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)BoardMessageMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BoardMessageMaster___c___ctor(BoardMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BoardMessageMaster___c___GetDataCondCheck_b__1_0(
        BoardMessageMaster___c_o *this,
        BoardMessageEntity_o *a,
        BoardMessageEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C6BC60(this, a);
  return b->fields.priority - a->fields.priority;
}