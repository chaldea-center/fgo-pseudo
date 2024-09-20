void __fastcall ServantCostumeMaster___ctor(ServantCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B81E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__);
    byte_4A5B81E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    206,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__);
}


System_String_array *__fastcall ServantCostumeMaster__GetCostumeNames(
        ServantCostumeMaster_o *this,
        CostumeReleaseAnnounce_array *releases,
        const MethodInfo *method)
{
  ServantCostumeMaster_o *v4; // x20
  const MethodInfo *v5; // x4
  signed int max_length; // w8
  System_String_array *v7; // x21
  __int64 v8; // x22
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // x24
  CostumeReleaseAnnounce_o *v10; // x8
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_String_o *name; // x1
  ServantStatusBattleListViewItem_o *v14; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4A5B822 & 1) == 0 )
  {
    sub_1B885B0(&string___TypeInfo);
    this = (ServantCostumeMaster_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B822 = 1;
  }
  entity = 0LL;
  if ( !releases )
LABEL_18:
    sub_1B8880C(this, releases);
  this = (ServantCostumeMaster_o *)sub_1B88658(string___TypeInfo, releases->max_length);
  max_length = releases->max_length;
  v7 = (System_String_array *)this;
  if ( max_length >= 1 )
  {
    v8 = 0LL;
    p_list = &this->fields.list;
    while ( (unsigned int)v8 < max_length )
    {
      v10 = releases->m_Items[v8];
      if ( !v10 )
        goto LABEL_18;
      this = (ServantCostumeMaster_o *)ServantCostumeMaster__TryGetEntity(
                                         v4,
                                         &entity,
                                         v10->fields.svtId,
                                         v10->fields.costumeId,
                                         v5);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity || !v7 )
          goto LABEL_18;
        if ( (unsigned int)v8 >= v7->max_length )
          break;
        name = entity->fields.name;
        v14 = (ServantStatusBattleListViewItem_o *)&v7->m_Items[(int)v8];
      }
      else
      {
        if ( !v7 )
          goto LABEL_18;
        if ( (unsigned int)v8 >= v7->max_length )
          break;
        name = (struct System_String_o *)StringLiteral_1/*""*/;
        v14 = (ServantStatusBattleListViewItem_o *)p_list;
      }
      *p_list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)name;
      sub_1B88554(v14, (int32_t)name, v11, v12);
      max_length = releases->max_length;
      ++v8;
      ++p_list;
      if ( (int)v8 >= max_length )
        return v7;
    }
    sub_1B88814(this, releases);
  }
  return v7;
}


System_Collections_Generic_List_int__o *__fastcall ServantCostumeMaster__GetCostumeSvtIdList(
        ServantCostumeMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 v4; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  unsigned int *v9; // x23
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4A5B820 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&ServantCostumeEntity_TypeInfo);
    byte_4A5B820 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v8,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v9 = (unsigned int *)list;
      methodPtr_low = LOBYTE(ServantCostumeEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(ServantCostumeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ServantCostumeEntity_TypeInfo
        || !v3 )
      {
        break;
      }
      list = (void *)System_Collections_Generic_List_int___Contains(
                       v3,
                       *((_DWORD *)list + 4),
                       (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)list & 1) == 0 )
      {
        v4 = v9[4];
        items = v3->fields._items;
        v12 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            v4,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size + 1] = v4;
        }
      }
      if ( v7 == ++v8 )
        return v3;
    }
LABEL_18:
    sub_1B8880C(list, v4);
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeEntity_o *__fastcall ServantCostumeMaster__GetEntity(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B81C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__);
    byte_4A5B81C = 1;
  }
  PK = (Il2CppObject *)ServantCostumeEntity__CreatePK(svtId, id, *(const MethodInfo **)&id);
  return (ServantCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeMaster__GetIsServantCostumeExist(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  bool v9; // w25
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B81F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&ServantCostumeEntity_TypeInfo);
    byte_4A5B81F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      methodPtr_low = LOBYTE(ServantCostumeEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantCostumeEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCostumeEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) != svtId )
      {
        v9 = ++v8 < v7;
        if ( v7 != v8 )
          continue;
      }
      return v9;
    }
LABEL_15:
    sub_1B8880C(list, *(_QWORD *)&svtId);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeMaster__TryGetEntity(
        ServantCostumeMaster_o *this,
        ServantCostumeEntity_o **entity,
        int32_t svtId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B81D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__);
    byte_4A5B81D = 1;
  }
  PK = (Il2CppObject *)ServantCostumeEntity__CreatePK(svtId, id, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__);
}


ServantCostumeEntity_array *__fastcall ServantCostumeMaster__releasedCostumeEntityList(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        bool isChkHave,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  __int64 v8; // x1
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  int32_t v13; // w2
  int32_t v14; // w3
  int64_t v15; // x25
  __int64 methodPtr_low; // x10
  Il2CppObject *MasterData_object; // x26
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Comparison_T__o *v23; // x19
  Il2CppObject *v24; // x20
  struct ServantCostumeMaster___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_4A5B821 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_ServantCostumeEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&ServantCostumeEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__);
    sub_1B885B0(&ServantCostumeMaster___c_TypeInfo);
    byte_4A5B821 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v12,
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v15 = list;
      methodPtr_low = LOBYTE(ServantCostumeEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(ServantCostumeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ServantCostumeEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 16) == svtId )
      {
        if ( (*(_BYTE *)(list + 84) & 0x10) == 0 && !isChkHave )
          goto LABEL_36;
        list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !list )
          break;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)list,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        list = NetworkManager__get_UserId(0LL);
        if ( !MasterData_object )
          break;
        EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                             (UserServantCollectionMaster_o *)MasterData_object,
                             list,
                             svtId,
                             0LL);
        if ( EntityDefinitely )
        {
          list = UserServantCollectionEntity__IsCostumeGet(EntityDefinitely, *(_DWORD *)(v15 + 20), 0LL);
          if ( (list & 1) != 0 )
          {
LABEL_36:
            if ( !v7 )
              break;
            items = v7->fields._items;
            v20 = Method_System_Collections_Generic_List_ServantCostumeEntity__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)v15,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v22 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v22[4] = (Il2CppClass *)v15;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), v15, v13, v14);
            }
          }
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_25;
    }
LABEL_33:
    sub_1B8880C(list, v8);
  }
LABEL_25:
  list = (int64_t)ServantCostumeMaster___c_TypeInfo;
  if ( !ServantCostumeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeMaster___c_TypeInfo);
    list = (int64_t)ServantCostumeMaster___c_TypeInfo;
  }
  v23 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 8LL);
  if ( !v23 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = (int64_t)ServantCostumeMaster___c_TypeInfo;
    }
    v24 = **(Il2CppObject ***)(list + 184);
    v23 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_object____ctor(v23, v24, Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__, 0LL);
    static_fields = ServantCostumeMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_ServantCostumeEntity__o *)v23;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)v23, v26, v27);
  }
  if ( !v7 )
    goto LABEL_33;
  System_Collections_Generic_List_object___Sort_55571192(
    v7,
    v23,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  return (ServantCostumeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v7,
                                         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__);
}


void __fastcall ServantCostumeMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B823 & 1) == 0 )
  {
    sub_1B885B0(&ServantCostumeMaster___c_TypeInfo);
    byte_4A5B823 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantCostumeMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantCostumeMaster___c_TypeInfo->static_fields->__9 = (struct ServantCostumeMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantCostumeMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall ServantCostumeMaster___c___ctor(ServantCostumeMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantCostumeMaster___c___releasedCostumeEntityList_b__5_0(
        ServantCostumeMaster___c_o *this,
        ServantCostumeEntity_o *a,
        ServantCostumeEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}