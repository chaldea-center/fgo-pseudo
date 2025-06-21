void __fastcall BoardMessageMaster___ctor(BoardMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C1DD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__int___ctor__, method);
    byte_4B1C1DD = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    236,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__int___ctor__);
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
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  int v13; // w22
  int32_t v14; // w23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4B1C1DB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Count__, *(_QWORD *)&warId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo, v9);
    byte_4B1C1DB = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Count__);
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
                                                                   (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Item__);
        if ( list )
        {
          v12 = list;
          if ( HIDWORD(list->fields.items) == warId )
          {
            if ( !v10 )
              break;
            items = v10->fields._items;
            v18 = Method_System_Collections_Generic_List_BoardMessageEntity__Add__;
            ++v10->fields._version;
            if ( !items )
              break;
            size = v10->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)list,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v12;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v12, v15, v16);
            }
          }
        }
        if ( v13 == ++v14 )
          goto LABEL_16;
      }
LABEL_18:
      sub_1BCB254(list, v12);
    }
  }
LABEL_16:
  if ( !v10 )
    goto LABEL_18;
  return (BoardMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v10,
                                       (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
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
  System_Collections_Generic_List_object__o *v18; // x19
  void *Instance; // x0
  __int64 v20; // x1
  BoardMessageReleaseMaster_o *v21; // x23
  int32_t Count; // w0
  int32_t v23; // w24
  int32_t v24; // w25
  const MethodInfo *v25; // x2
  Il2CppObject *v26; // x26
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int64_t klass; // x8
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Comparison_T__o *v34; // x20
  Il2CppObject *v35; // x21
  struct BoardMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3

  if ( (byte_4B1C1DC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Count__, *(_QWORD *)&warId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Item__, v7);
    sub_1BCAFF8(&System_Comparison_BoardMessageEntity__TypeInfo, v8);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_BoardMessageReleaseMaster___, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BoardMessageEntity__Sort__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__, v13);
    sub_1BCAFF8(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BCAFF8(&Method_BoardMessageMaster___c__GetDataCondCheck_b__1_0__, v16);
    sub_1BCAFF8(&BoardMessageMaster___c_TypeInfo, v17);
    byte_4B1C1DC = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId <= 0 )
  {
    if ( !v18 )
      goto LABEL_32;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_BoardMessageReleaseMaster___);
    if ( !this->fields.list )
      goto LABEL_32;
    v21 = (BoardMessageReleaseMaster_o *)Instance;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
              (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Count__);
    if ( Count >= 1 )
    {
      v23 = Count;
      v24 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)Instance,
                     v24,
                     (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_BoardMessageEntity__get_Item__);
        if ( Instance )
        {
          v26 = (Il2CppObject *)Instance;
          if ( *((_DWORD *)Instance + 5) == warId )
          {
            if ( !v21 )
              break;
            Instance = (void *)BoardMessageReleaseMaster__IsOpen(v21, *((_DWORD *)Instance + 4), v25);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              klass = (int64_t)v26[4].klass;
              if ( klass >= 1 && klass > nowTime && (__int64)v26[3].monitor < nowTime )
              {
                if ( !v18 )
                  break;
                items = v18->fields._items;
                v31 = Method_System_Collections_Generic_List_BoardMessageEntity__Add__;
                ++v18->fields._version;
                if ( !items )
                  break;
                size = v18->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v18,
                    v26,
                    *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                }
                else
                {
                  v33 = &items->obj.klass + size;
                  v18->fields._size = size + 1;
                  v33[4] = (Il2CppClass *)v26;
                  sub_1BCAF9C((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v26, v27, v28);
                }
              }
            }
          }
        }
        if ( v23 == ++v24 )
          goto LABEL_22;
      }
LABEL_32:
      sub_1BCB254(Instance, v20);
    }
LABEL_22:
    Instance = BoardMessageMaster___c_TypeInfo;
    if ( !BoardMessageMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardMessageMaster___c_TypeInfo);
      Instance = BoardMessageMaster___c_TypeInfo;
    }
    v34 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v34 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = BoardMessageMaster___c_TypeInfo;
      }
      v35 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v34 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_BoardMessageEntity__TypeInfo);
      System_Comparison_object____ctor(v34, v35, Method_BoardMessageMaster___c__GetDataCondCheck_b__1_0__, 0LL);
      static_fields = BoardMessageMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = (struct System_Comparison_BoardMessageEntity__o *)v34;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)v34, v37, v38);
    }
    if ( !v18 )
      goto LABEL_32;
    System_Collections_Generic_List_object___Sort_57390740(
      v18,
      v34,
      (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_BoardMessageEntity__Sort__);
  }
  return (BoardMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v18,
                                       (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
}


void __fastcall BoardMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1C1DE & 1) == 0 )
  {
    sub_1BCAFF8(&BoardMessageMaster___c_TypeInfo, v1);
    byte_4B1C1DE = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(BoardMessageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BoardMessageMaster___c_TypeInfo->static_fields->__9 = (struct BoardMessageMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)BoardMessageMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BoardMessageMaster___c___ctor(BoardMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BoardMessageMaster___c___GetDataCondCheck_b__1_0(
        BoardMessageMaster___c_o *this,
        BoardMessageEntity_o *a,
        BoardMessageEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCB254(this, a);
  return b->fields.priority - a->fields.priority;
}