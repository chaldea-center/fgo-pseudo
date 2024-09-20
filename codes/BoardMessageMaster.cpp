void __fastcall BoardMessageMaster___ctor(BoardMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AE4F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__int___ctor__);
    byte_4A5AE4F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    230,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__int___ctor__);
}


BoardMessageEntity_array *__fastcall BoardMessageMaster__GetData(
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
  int32_t v11; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4A5AE4D & 1) == 0 )
  {
    sub_1B885B0(&BoardMessageEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
    byte_4A5AE4D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                   (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v7 = list;
          methodPtr_low = LOBYTE(BoardMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (BoardMessageEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == BoardMessageEntity_TypeInfo
            && HIDWORD(list->fields.items) == warId )
          {
            if ( !v5 )
              break;
            items = v5->fields._items;
            v14 = Method_System_Collections_Generic_List_BoardMessageEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)list,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
            }
            else
            {
              v16 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v16[4] = (Il2CppClass *)v7;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v7, v10, v11);
            }
          }
        }
        if ( v8 == ++v9 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1B8880C(list, v7);
    }
  }
LABEL_18:
  if ( !v5 )
    goto LABEL_20;
  return (BoardMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
}


BoardMessageEntity_array *__fastcall BoardMessageMaster__GetDataCondCheck(
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
  __int64 methodPtr_low; // x10
  int32_t v17; // w2
  int32_t v18; // w3
  int64_t klass; // x8
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Comparison_T__o *v24; // x20
  Il2CppObject *v25; // x21
  struct BoardMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_4A5AE4E & 1) == 0 )
  {
    sub_1B885B0(&BoardMessageEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_BoardMessageEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_BoardMessageReleaseMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoardMessageEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_BoardMessageMaster___c__GetDataCondCheck_b__1_0__);
    sub_1B885B0(&BoardMessageMaster___c_TypeInfo);
    byte_4A5AE4E = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId <= 0 )
  {
    if ( !v7 )
      goto LABEL_34;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_34;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BoardMessageReleaseMaster___);
    if ( !this->fields.list )
      goto LABEL_34;
    v10 = (BoardMessageReleaseMaster_o *)Instance;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
              (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                     (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Instance )
        {
          v15 = (Il2CppObject *)Instance;
          methodPtr_low = LOBYTE(BoardMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
            && *(BoardMessageEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == BoardMessageEntity_TypeInfo
            && *((_DWORD *)Instance + 5) == warId )
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
                v21 = Method_System_Collections_Generic_List_BoardMessageEntity__Add__;
                ++v7->fields._version;
                if ( !items )
                  break;
                size = v7->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v7,
                    v15,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
                }
                else
                {
                  v23 = &items->obj.klass + size;
                  v7->fields._size = size + 1;
                  v23[4] = (Il2CppClass *)v15;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v15, v17, v18);
                }
              }
            }
          }
        }
        if ( v12 == ++v13 )
          goto LABEL_24;
      }
LABEL_34:
      sub_1B8880C(Instance, v9);
    }
LABEL_24:
    Instance = BoardMessageMaster___c_TypeInfo;
    if ( !BoardMessageMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardMessageMaster___c_TypeInfo);
      Instance = BoardMessageMaster___c_TypeInfo;
    }
    v24 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v24 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = BoardMessageMaster___c_TypeInfo;
      }
      v25 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v24 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_BoardMessageEntity__TypeInfo);
      System_Comparison_object____ctor(v24, v25, Method_BoardMessageMaster___c__GetDataCondCheck_b__1_0__, 0LL);
      static_fields = BoardMessageMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = (struct System_Comparison_BoardMessageEntity__o *)v24;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)v24, v27, v28);
    }
    if ( !v7 )
      goto LABEL_34;
    System_Collections_Generic_List_object___Sort_55571192(
      v7,
      v24,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_BoardMessageEntity__Sort__);
  }
  return (BoardMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v7,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
}


void __fastcall BoardMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5AE50 & 1) == 0 )
  {
    sub_1B885B0(&BoardMessageMaster___c_TypeInfo);
    byte_4A5AE50 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BoardMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BoardMessageMaster___c_TypeInfo->static_fields->__9 = (struct BoardMessageMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BoardMessageMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}