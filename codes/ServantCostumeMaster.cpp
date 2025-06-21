void __fastcall ServantCostumeMaster___ctor(ServantCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CD9E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__, method);
    byte_4B1CD9E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    210,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__);
}


System_String_array *__fastcall ServantCostumeMaster__GetCostumeNames(
        ServantCostumeMaster_o *this,
        CostumeReleaseAnnounce_array *releases,
        const MethodInfo *method)
{
  ServantCostumeMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x4
  signed int max_length; // w8
  System_String_array *v9; // x21
  __int64 v10; // x22
  int32_t *p_revision; // x24
  CostumeReleaseAnnounce_o *v12; // x8
  const MethodInfo *v13; // x3
  struct System_String_o *name; // x1
  CGThumbnailListItem_o *v15; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4B1CDA2 & 1) == 0 )
  {
    sub_1BCAFF8(&string___TypeInfo, releases);
    this = (ServantCostumeMaster_o *)sub_1BCAFF8(&StringLiteral_1/*""*/, v5);
    byte_4B1CDA2 = 1;
  }
  entity = 0LL;
  if ( !releases )
LABEL_18:
    sub_1BCB254(this, releases);
  this = (ServantCostumeMaster_o *)sub_1BCB0A0(string___TypeInfo, releases->max_length);
  max_length = releases->max_length;
  v9 = (System_String_array *)this;
  if ( max_length >= 1 )
  {
    v10 = 0LL;
    p_revision = &this->fields.revision;
    while ( (unsigned int)v10 < max_length )
    {
      v12 = releases->m_Items[v10];
      if ( !v12 )
        goto LABEL_18;
      this = (ServantCostumeMaster_o *)ServantCostumeMaster__TryGetEntity(
                                         v4,
                                         &entity,
                                         v12->fields.svtId,
                                         v12->fields.costumeId,
                                         v7);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity || !v9 )
          goto LABEL_18;
        if ( (unsigned int)v10 >= v9->max_length )
          break;
        name = entity->fields.name;
        v15 = (CGThumbnailListItem_o *)&v9->m_Items[(int)v10];
      }
      else
      {
        if ( !v9 )
          goto LABEL_18;
        if ( (unsigned int)v10 >= v9->max_length )
          break;
        name = (struct System_String_o *)StringLiteral_1/*""*/;
        v15 = (CGThumbnailListItem_o *)p_revision;
      }
      *(_QWORD *)p_revision = name;
      sub_1BCAF9C(v15, (int32_t)name, v6, v13);
      max_length = releases->max_length;
      ++v10;
      p_revision += 2;
      if ( (int)v10 >= max_length )
        return v9;
    }
    sub_1BCB25C(this, releases, v6);
  }
  return v9;
}


System_Collections_Generic_List_int__o *__fastcall ServantCostumeMaster__GetCostumeSvtIdList(
        ServantCostumeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *v8; // x20
  __int64 v9; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v12; // w21
  int32_t v13; // w22
  unsigned int *v14; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_4B1CDA0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_4B1CDA0 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v13,
               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
      if ( !list || !v8 )
        break;
      v14 = (unsigned int *)list;
      list = (void *)System_Collections_Generic_List_int___Contains(
                       v8,
                       *((_DWORD *)list + 4),
                       (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)list & 1) == 0 )
      {
        v9 = v14[4];
        items = v8->fields._items;
        v16 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        size = v8->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v8,
            v9,
            *(const MethodInfo_369CBAC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v8->fields._size = size + 1;
          items->m_Items[size + 1] = v9;
        }
      }
      if ( v12 == ++v13 )
        return v8;
    }
LABEL_16:
    sub_1BCB254(list, v9);
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeEntity_o *__fastcall ServantCostumeMaster__GetEntity(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1CD9C & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4B1CD9C = 1;
  }
  PK = (Il2CppObject *)ServantCostumeEntity__CreatePK(svtId, id, *(const MethodInfo **)&id);
  return (ServantCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_32CC8B8 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeMaster__GetIsServantCostumeExist(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w21
  int32_t v9; // w22
  bool v10; // w24

  if ( (byte_4B1CD9F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__, v5);
    byte_4B1CD9F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    v10 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
      if ( !list )
        break;
      if ( LODWORD(list->fields.items) != svtId )
      {
        v10 = ++v9 < v8;
        if ( v8 != v9 )
          continue;
      }
      return v10;
    }
LABEL_13:
    sub_1BCB254(list, *(_QWORD *)&svtId);
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

  if ( (byte_4B1CD9D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__, entity);
    byte_4B1CD9D = 1;
  }
  PK = (Il2CppObject *)ServantCostumeEntity__CreatePK(svtId, id, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeEntity_array *__fastcall ServantCostumeMaster__releasedCostumeEntityList(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        bool isChkHave,
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
  __int64 v20; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v23; // w23
  int32_t v24; // w24
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  Il2CppObject *v27; // x26
  Il2CppObject *MasterData_object; // x27
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Comparison_T__o *v34; // x20
  Il2CppObject *v35; // x21
  struct ServantCostumeMaster___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3

  if ( (byte_4B1CDA1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__, v7);
    sub_1BCAFF8(&System_Comparison_ServantCostumeEntity__TypeInfo, v8);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__, v13);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo, v14);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v15);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BCAFF8(&Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__, v17);
    sub_1BCAFF8(&ServantCostumeMaster___c_TypeInfo, v18);
    byte_4B1CDA1 = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_35;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
  if ( Count >= 1 )
  {
    v23 = Count;
    v24 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v24,
               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
      if ( !list )
        break;
      v27 = (Il2CppObject *)list;
      if ( *((_DWORD *)list + 4) == svtId )
      {
        if ( (*((_BYTE *)list + 84) & 0x10) == 0 && !isChkHave )
          goto LABEL_38;
        list = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !list )
          break;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)list,
                              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B165D1 )
        {
          sub_1BCAFF8(&NetworkManager_TypeInfo, v20);
          byte_4B165D1 = 1;
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
                             0LL);
        if ( EntityDefinitely )
        {
          list = (void *)UserServantCollectionEntity__IsCostumeGet(EntityDefinitely, HIDWORD(v27[1].klass), 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_38:
            if ( !v19 )
              break;
            items = v19->fields._items;
            v31 = Method_System_Collections_Generic_List_ServantCostumeEntity__Add__;
            ++v19->fields._version;
            if ( !items )
              break;
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                v27,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &items->obj.klass + size;
              v19->fields._size = size + 1;
              v33[4] = (Il2CppClass *)v27;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v27, v25, v26);
            }
          }
        }
      }
      if ( v23 == ++v24 )
        goto LABEL_27;
    }
LABEL_35:
    sub_1BCB254(list, v20);
  }
LABEL_27:
  list = ServantCostumeMaster___c_TypeInfo;
  if ( !ServantCostumeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeMaster___c_TypeInfo);
    list = ServantCostumeMaster___c_TypeInfo;
  }
  v34 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v34 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantCostumeMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)**((_QWORD **)list + 23);
    v34 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_object____ctor(v34, v35, Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__, 0LL);
    static_fields = ServantCostumeMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_ServantCostumeEntity__o *)v34;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)v34, v37, v38);
  }
  if ( !v19 )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_57390740(
    v19,
    v34,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  return (ServantCostumeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v19,
                                         (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__);
}


void __fastcall ServantCostumeMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1CDA3 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantCostumeMaster___c_TypeInfo, v1);
    byte_4B1CDA3 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ServantCostumeMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantCostumeMaster___c_TypeInfo->static_fields->__9 = (struct ServantCostumeMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)ServantCostumeMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BCB254(this, a);
  return b->fields.priority - a->fields.priority;
}