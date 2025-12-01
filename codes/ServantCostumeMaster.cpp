void ServantCostumeMaster___ctor(ServantCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7CB9 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__);
    byte_4CC7CB9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    210,
    (const MethodInfo_340B614 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__);
}


System_String_array *ServantCostumeMaster__GetCostumeNames(
        ServantCostumeMaster_o *this,
        CostumeReleaseAnnounce_array *releases,
        const MethodInfo *method)
{
  ServantCostumeMaster_o *v4; // x20
  const MethodInfo *v5; // x4
  int max_length; // w8
  ServantCostumeMaster_o *v7; // x21
  __int64 v8; // x22
  int32_t *p_revision; // x24
  CostumeReleaseAnnounce_o *v10; // x8
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_String_o *name; // x1
  GrandQuestFolderBoardItem_o *v18; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4CC7CBD & 1) == 0 )
  {
    sub_1C713B0(&string___TypeInfo);
    this = (ServantCostumeMaster_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC7CBD = 1;
  }
  entity = 0;
  if ( !releases )
LABEL_18:
    sub_1C71608(this, releases);
  this = (ServantCostumeMaster_o *)sub_1C71458(string___TypeInfo, LODWORD(releases->max_length));
  max_length = releases->max_length;
  v7 = this;
  if ( max_length >= 1 )
  {
    v8 = 0;
    p_revision = &this->fields.revision;
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
        if ( (unsigned int)v8 >= LODWORD(v7->fields._MasterName_k__BackingField) )
          break;
        name = entity->fields.name;
        v18 = (GrandQuestFolderBoardItem_o *)(&v7->fields.revision + 2 * (int)v8);
      }
      else
      {
        if ( !v7 )
          goto LABEL_18;
        if ( (unsigned int)v8 >= LODWORD(v7->fields._MasterName_k__BackingField) )
          break;
        name = (struct System_String_o *)StringLiteral_1/*""*/;
        v18 = (GrandQuestFolderBoardItem_o *)p_revision;
      }
      *(_QWORD *)p_revision = name;
      sub_1C71354(v18, (int32_t)name, v11, v12, v13, v14, v15, v16);
      max_length = releases->max_length;
      ++v8;
      p_revision += 2;
      if ( (int)v8 >= max_length )
        return (System_String_array *)v7;
    }
    sub_1C71610(this);
  }
  return (System_String_array *)v7;
}


System_Collections_Generic_List_int__o *ServantCostumeMaster__GetCostumeSvtIdList(
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
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10

  if ( (byte_4CC7CBB & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CC7CBB = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
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
               (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
      if ( !list || !v3 )
        break;
      v9 = (unsigned int *)list;
      list = (void *)System_Collections_Generic_List_int___Contains(
                       v3,
                       *((_DWORD *)list + 4),
                       (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)list & 1) == 0 )
      {
        v4 = v9[4];
        items = v3->fields._items;
        v11 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            v4,
            *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = v4;
        }
      }
      if ( v7 == ++v8 )
        return v3;
    }
LABEL_16:
    sub_1C71608(list, v4);
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeEntity_o *ServantCostumeMaster__GetEntity(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC7CB7 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__);
    byte_4CC7CB7 = 1;
  }
  PK = (Il2CppObject *)ServantCostumeEntity__CreatePK(svtId, id, *(const MethodInfo **)&id);
  return (ServantCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_340D938 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantCostumeMaster__GetIsServantCostumeExist(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  bool v9; // w24

  if ( (byte_4CC7CBA & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
    byte_4CC7CBA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
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
                                                                 (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
      if ( !list )
        break;
      if ( LODWORD(list->fields.items) != svtId )
      {
        v9 = ++v8 < v7;
        if ( v7 != v8 )
          continue;
      }
      return v9;
    }
LABEL_13:
    sub_1C71608(list, *(_QWORD *)&svtId);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool ServantCostumeMaster__TryGetEntity(
        ServantCostumeMaster_o *this,
        ServantCostumeEntity_o **entity,
        int32_t svtId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC7CB8 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__);
    byte_4CC7CB8 = 1;
  }
  PK = (Il2CppObject *)ServantCostumeEntity__CreatePK(svtId, id, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__);
}


ServantCostumeEntity_array *ServantCostumeMaster__releasedCostumeEntityList(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        bool isChkHave,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  Il2CppObject *v19; // x26
  Il2CppObject *MasterData_object; // x27
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Comparison_T__o *v26; // x20
  Il2CppObject *v27; // x21
  struct ServantCostumeMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7

  if ( (byte_4CC7CBC & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
    sub_1C713B0(&System_Comparison_ServantCostumeEntity__TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__);
    sub_1C713B0(&ServantCostumeMaster___c_TypeInfo);
    byte_4CC7CBC = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_35;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v12,
               (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
      if ( !list )
        break;
      v19 = (Il2CppObject *)list;
      if ( *((_DWORD *)list + 4) == svtId )
      {
        if ( (*((_BYTE *)list + 84) & 0x10) == 0 && !isChkHave )
          goto LABEL_38;
        list = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !list )
          break;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)list,
                              (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CC112A )
        {
          sub_1C713B0(&NetworkManager_TypeInfo);
          byte_4CC112A = 1;
        }
        list = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          list = NetworkManager_TypeInfo;
        }
        if ( !MasterData_object )
          break;
        EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                             (UserServantCollectionMaster_o *)MasterData_object,
                             *(_QWORD *)(*((_QWORD *)list + 23) + 64LL),
                             svtId,
                             0);
        if ( EntityDefinitely )
        {
          list = (void *)UserServantCollectionEntity__IsCostumeGet(EntityDefinitely, HIDWORD(v19[1].klass), 0);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_38:
            if ( !v7 )
              break;
            items = v7->fields._items;
            v23 = Method_System_Collections_Generic_List_ServantCostumeEntity__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                v19,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v19;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v19, v13, v14, v15, v16, v17, v18);
            }
          }
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_27;
    }
LABEL_35:
    sub_1C71608(list, v8);
  }
LABEL_27:
  list = ServantCostumeMaster___c_TypeInfo;
  if ( !ServantCostumeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeMaster___c_TypeInfo);
    list = ServantCostumeMaster___c_TypeInfo;
  }
  v26 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantCostumeMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)list + 23);
    v26 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_object____ctor(v26, v27, Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__, 0);
    static_fields = ServantCostumeMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_ServantCostumeEntity__o *)v26;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__5_0, (int32_t)v26, v29, v30, v31, v32, v33, v34);
  }
  if ( !v7 )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_58794460(
    v7,
    v26,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  return (ServantCostumeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v7,
                                         (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__);
}


void ServantCostumeMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC7CBE & 1) == 0 )
  {
    sub_1C713B0(&ServantCostumeMaster___c_TypeInfo);
    byte_4CC7CBE = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(ServantCostumeMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantCostumeMaster___c_TypeInfo->static_fields->__9 = (struct ServantCostumeMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)ServantCostumeMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantCostumeMaster___c___ctor(ServantCostumeMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantCostumeMaster___c___releasedCostumeEntityList_b__5_0(
        ServantCostumeMaster___c_o *this,
        ServantCostumeEntity_o *a,
        ServantCostumeEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C71608(this, a);
  return b->fields.priority - a->fields.priority;
}