void __fastcall UserPresentBoxMaster___cctor(const MethodInfo *method)
{
  if ( (byte_4A5BEC6 & 1) == 0 )
  {
    sub_1B885B0(&UserPresentBoxMaster_TypeInfo);
    byte_4A5BEC6 = 1;
  }
  *UserPresentBoxMaster_TypeInfo->static_fields = (struct UserPresentBoxMaster_StaticFields)xmmword_BB49B0;
}


void __fastcall UserPresentBoxMaster___ctor(UserPresentBoxMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BEC0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string___ctor__);
    byte_4A5BEC0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    66,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserPresentBoxMaster__GetCount(
        UserPresentBoxMaster_o *this,
        int32_t type,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  UserPresentBoxEntity_c *v9; // x1
  System_Collections_Generic_IEnumerator_T__o *v10; // x19
  int32_t v11; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0

  if ( (byte_4A5BEC4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UserPresentBoxEntity_TypeInfo);
    byte_4A5BEC4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&type);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v10 = Enumerator;
  v11 = 0;
  while ( 1 )
  {
    if ( !v10 )
      goto LABEL_34;
    klass = v10->klass;
    v13 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(v10, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v10,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = v10->klass;
    v17 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_17;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_17:
      v19 = sub_1BDA590(v10, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                  v10,
                                                                  *(_QWORD *)(v19 + 8));
    if ( !Enumerator )
      sub_1B8880C(0LL, v20);
    v9 = UserPresentBoxEntity_TypeInfo;
    methodPtr_low = LOBYTE(UserPresentBoxEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Enumerator->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (UserPresentBoxEntity_c *)Enumerator->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentBoxEntity_TypeInfo )
    {
      sub_1B88ACC(Enumerator);
LABEL_34:
      sub_1B8880C(Enumerator, v9);
    }
    if ( LODWORD(Enumerator[4].monitor) == type && HIDWORD(Enumerator[4].monitor) == id )
      ++v11;
  }
  v22 = v10->klass;
  v23 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_30;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_30:
    v25 = sub_1BDA590(v10, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(v10, *(_QWORD *)(v25 + 8));
  return v11;
}


UserPresentBoxEntity_o *__fastcall UserPresentBoxMaster__GetEntity(
        UserPresentBoxMaster_o *this,
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BEBE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__GetEntity__);
    byte_4A5BEBE = 1;
  }
  PK = (Il2CppObject *)UserPresentBoxEntity__CreatePK(receiveUserId, presentId, (const MethodInfo *)presentId);
  return (UserPresentBoxEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_311DC8C *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__GetEntity__);
}


bool __fastcall UserPresentBoxMaster__TryGetEntity(
        UserPresentBoxMaster_o *this,
        UserPresentBoxEntity_o **entity,
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5BEBF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__TryGetEntity__);
    byte_4A5BEBF = 1;
  }
  PK = (Il2CppObject *)UserPresentBoxEntity__CreatePK(receiveUserId, presentId, (const MethodInfo *)receiveUserId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__TryGetEntity__);
}


UserPresentBoxEntity_array *__fastcall UserPresentBoxMaster__getVaildList(
        UserPresentBoxMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  const MethodInfo *v9; // x2
  Il2CppObject *v10; // x24
  __int64 methodPtr_low; // x10
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4A5BEC1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_1B885B0(&UserPresentBoxEntity_TypeInfo);
    byte_4A5BEC1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v10 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(UserPresentBoxEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserPresentBoxEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentBoxEntity_TypeInfo
          && list->fields.items == (struct System_Collections_Generic_IList_T__o *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)UserPresentBoxEntity__IsExpired(
                                                                     (UserPresentBoxEntity_o *)list,
                                                                     1,
                                                                     v9);
          if ( ((unsigned __int8)list & 1) == 0 )
          {
            if ( !v7 )
              break;
            items = v7->fields._items;
            v15 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                v10,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
            }
            else
            {
              v17 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v17[4] = (Il2CppClass *)v10;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v10, v12, v13);
            }
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1B8880C(list, userId);
  }
LABEL_18:
  if ( !v7 )
    goto LABEL_20;
  return (UserPresentBoxEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v7,
                                         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
}


UserPresentBoxEntity_array *__fastcall UserPresentBoxMaster__getVaildList_40142556(
        UserPresentBoxMaster_o *this,
        int64_t userId,
        System_Int64_array *presentIdList,
        const MethodInfo *method)
{
  void *list; // x0
  int v8; // w23
  signed int max_length; // w26
  System_Collections_Generic_List_object__o *v10; // x22
  int32_t v11; // w24
  UserPresentBoxEntity_o *Item; // x0
  const MethodInfo *v13; // x2
  Il2CppObject *v14; // x25
  __int64 methodPtr_low; // x10
  int32_t v16; // w2
  int32_t v17; // w3
  int v18; // w10
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Comparison_T__o *v23; // x19
  Il2CppObject *v24; // x20
  struct UserPresentBoxMaster___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_4A5BEC2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_UserPresentBoxEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
    sub_1B885B0(&Method_UserPresentBoxMaster___c__getVaildList_b__8_0__);
    sub_1B885B0(&UserPresentBoxMaster___c_TypeInfo);
    sub_1B885B0(&UserPresentBoxEntity_TypeInfo);
    byte_4A5BEC2 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !presentIdList )
    goto LABEL_33;
  v8 = (int)list;
  max_length = presentIdList->max_length;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
  if ( v8 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (UserPresentBoxEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         (System_Collections_ObjectModel_Collection_T__o *)list,
                                         v11,
                                         (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v14 = (Il2CppObject *)Item;
        methodPtr_low = LOBYTE(UserPresentBoxEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserPresentBoxEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentBoxEntity_TypeInfo
          && Item->fields.receiveUserId == userId )
        {
          list = (void *)UserPresentBoxEntity__IsExpired(Item, 1, v13);
          if ( ((unsigned __int8)list & 1) == 0 && max_length >= 1 )
          {
            v18 = 0;
            while ( 1 )
            {
              if ( presentIdList->max_length == v18 )
                sub_1B88814(list, userId);
              if ( (void *)presentIdList->m_Items[v18] == v14[1].monitor )
                break;
              if ( max_length == ++v18 )
                goto LABEL_24;
            }
            if ( !v10 )
              break;
            items = v10->fields._items;
            v20 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v10->fields._version;
            if ( !items )
              break;
            size = v10->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v14,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v22 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v22[4] = (Il2CppClass *)v14;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v14, v16, v17);
            }
          }
        }
      }
LABEL_24:
      if ( ++v11 == v8 )
        goto LABEL_25;
    }
LABEL_33:
    sub_1B8880C(list, userId);
  }
LABEL_25:
  list = UserPresentBoxMaster___c_TypeInfo;
  if ( !UserPresentBoxMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster___c_TypeInfo);
    list = UserPresentBoxMaster___c_TypeInfo;
  }
  v23 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v23 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = UserPresentBoxMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)**((_QWORD **)list + 23);
    v23 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_UserPresentBoxEntity__TypeInfo);
    System_Comparison_object____ctor(v23, v24, Method_UserPresentBoxMaster___c__getVaildList_b__8_0__, 0LL);
    static_fields = UserPresentBoxMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_UserPresentBoxEntity__o *)v23;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)v23, v26, v27);
  }
  if ( !v10 )
    goto LABEL_33;
  System_Collections_Generic_List_object___Sort_55571192(
    v10,
    v23,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Sort__);
  return (UserPresentBoxEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v10,
                                         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
}


void __fastcall UserPresentBoxMaster__getValidItemInfo(
        UserPresentBoxMaster_o *this,
        int64_t userId,
        int32_t *count,
        bool *hasLimited,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x24
  int32_t v13; // w25
  const MethodInfo *v14; // x2
  UserPresentBoxEntity_o *v15; // x26
  __int64 methodPtr_low; // x10
  int64_t v17; // x23
  int64_t Time; // [xsp+8h] [xbp-68h]

  if ( (byte_4A5BEC5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserPresentBoxEntity_TypeInfo);
    byte_4A5BEC5 = 1;
  }
  *count = 0;
  *hasLimited = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
LABEL_23:
    sub_1B8880C(Instance, v10);
  }
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = (int64_t)this->fields.list;
    if ( !Instance )
      goto LABEL_23;
    Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)Instance,
                          v13,
                          (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_23;
    v15 = (UserPresentBoxEntity_o *)Instance;
    methodPtr_low = LOBYTE(UserPresentBoxEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
      || *(UserPresentBoxEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != UserPresentBoxEntity_TypeInfo )
    {
      goto LABEL_23;
    }
    if ( *(_QWORD *)(Instance + 16) == userId )
    {
      Instance = UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)Instance, 1, v14);
      if ( (Instance & 1) == 0 )
      {
        ++*count;
        if ( !*hasLimited && v15->fields.giftType == 2 )
        {
          if ( !v12 )
            goto LABEL_23;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                v12,
                                v15->fields.objectId,
                                (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_23;
          v17 = *(_QWORD *)(Instance + 96);
          if ( v17 > Time )
          {
            Instance = UserPresentBoxEntity__expireAt(v15, v10);
            if ( v17 < Instance )
              *hasLimited = 1;
          }
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_23;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserPresentBoxMaster__isExist(
        UserPresentBoxMaster_o *this,
        int32_t type,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v14; // w22
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  _DWORD *v19; // x0
  __int64 v20; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4A5BEC3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UserPresentBoxEntity_TypeInfo);
    byte_4A5BEC3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&type);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v14 & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                      Enumerator,
                      *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(UserPresentBoxEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 304LL) < (unsigned int)methodPtr_low
      || *(UserPresentBoxEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * methodPtr_low - 8) != UserPresentBoxEntity_TypeInfo )
    {
      sub_1B88ACC(v19);
LABEL_33:
      sub_1B8880C(v19, v20);
    }
    if ( v19[18] == type && v19[19] == id )
      goto LABEL_25;
  }
  v14 = 0;
LABEL_25:
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_29;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_29:
    v25 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v14 & 1;
}


void __fastcall UserPresentBoxMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BEC7 & 1) == 0 )
  {
    sub_1B885B0(&UserPresentBoxMaster___c_TypeInfo);
    byte_4A5BEC7 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(UserPresentBoxMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  UserPresentBoxMaster___c_TypeInfo->static_fields->__9 = (struct UserPresentBoxMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)UserPresentBoxMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall UserPresentBoxMaster___c___ctor(UserPresentBoxMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserPresentBoxMaster___c___getVaildList_b__8_0(
        UserPresentBoxMaster___c_o *this,
        UserPresentBoxEntity_o *a,
        UserPresentBoxEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return LODWORD(b->fields.createdAt) - LODWORD(a->fields.createdAt);
}