void __fastcall ServantCostumeMaster___ctor(ServantCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A0930D & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__, method);
    byte_4A0930D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    206,
    (const MethodInfo_30E47D8 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__);
}


System_String_array *__fastcall ServantCostumeMaster__GetCostumeNames(
        ServantCostumeMaster_o *this,
        CostumeReleaseAnnounce_array *releases,
        const MethodInfo *method)
{
  ServantCostumeMaster_o *v4; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x4
  signed int max_length; // w8
  System_String_array *v8; // x21
  __int64 v9; // x22
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // x24
  CostumeReleaseAnnounce_o *v11; // x8
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_String_o *name; // x1
  ServantStatusBattleListViewItem_o *v15; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4A09311 & 1) == 0 )
  {
    sub_1B686D4(&string___TypeInfo, releases);
    this = (ServantCostumeMaster_o *)sub_1B686D4(&StringLiteral_1/*""*/, v5);
    byte_4A09311 = 1;
  }
  entity = 0LL;
  if ( !releases )
LABEL_18:
    sub_1B68930(this, releases);
  this = (ServantCostumeMaster_o *)sub_1B6877C(string___TypeInfo, releases->max_length);
  max_length = releases->max_length;
  v8 = (System_String_array *)this;
  if ( max_length >= 1 )
  {
    v9 = 0LL;
    p_list = &this->fields.list;
    while ( (unsigned int)v9 < max_length )
    {
      v11 = releases->m_Items[v9];
      if ( !v11 )
        goto LABEL_18;
      this = (ServantCostumeMaster_o *)ServantCostumeMaster__TryGetEntity(
                                         v4,
                                         &entity,
                                         v11->fields.svtId,
                                         v11->fields.costumeId,
                                         v6);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity || !v8 )
          goto LABEL_18;
        if ( (unsigned int)v9 >= v8->max_length )
          break;
        name = entity->fields.name;
        v15 = (ServantStatusBattleListViewItem_o *)&v8->m_Items[(int)v9];
      }
      else
      {
        if ( !v8 )
          goto LABEL_18;
        if ( (unsigned int)v9 >= v8->max_length )
          break;
        name = (struct System_String_o *)StringLiteral_1/*""*/;
        v15 = (ServantStatusBattleListViewItem_o *)p_list;
      }
      *p_list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)name;
      sub_1B68678(v15, (int32_t)name, v12, v13);
      max_length = releases->max_length;
      ++v9;
      ++p_list;
      if ( (int)v9 >= max_length )
        return v8;
    }
    sub_1B68938(this, releases);
  }
  return v8;
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
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x20
  __int64 v10; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v13; // w21
  int32_t v14; // w22
  unsigned int *v15; // x23
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10

  if ( (byte_4A0930F & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1B686D4(&ServantCostumeEntity_TypeInfo, v8);
    byte_4A0930F = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3081124 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v14,
               (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v15 = (unsigned int *)list;
      methodPtr_low = LOBYTE(ServantCostumeEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(ServantCostumeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ServantCostumeEntity_TypeInfo
        || !v9 )
      {
        break;
      }
      list = (void *)System_Collections_Generic_List_int___Contains(
                       v9,
                       *((_DWORD *)list + 4),
                       (const MethodInfo_349F5CC *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)list & 1) == 0 )
      {
        v10 = v15[4];
        items = v9->fields._items;
        v18 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v9,
            v10,
            *(const MethodInfo_349F254 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v9->fields._size = size + 1;
          items->m_Items[size + 1] = v10;
        }
      }
      if ( v13 == ++v14 )
        return v9;
    }
LABEL_18:
    sub_1B68930(list, v10);
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeEntity_o *__fastcall ServantCostumeMaster__GetEntity(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A0930B & 1) == 0 )
  {
    sub_1B686D4(
      &Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4A0930B = 1;
  }
  PK = (Il2CppObject *)ServantCostumeEntity__CreatePK(svtId, id, *(const MethodInfo **)&id);
  return (ServantCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_30E4818 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeMaster__GetIsServantCostumeExist(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  bool v11; // w25
  __int64 methodPtr_low; // x10

  if ( (byte_4A0930E & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B686D4(&ServantCostumeEntity_TypeInfo, v6);
    byte_4A0930E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3081124 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        v11 = ++v10 < v9;
        if ( v9 != v10 )
          continue;
      }
      return v11;
    }
LABEL_15:
    sub_1B68930(list, *(_QWORD *)&svtId);
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

  if ( (byte_4A0930C & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__, entity);
    byte_4A0930C = 1;
  }
  PK = (Il2CppObject *)ServantCostumeEntity__CreatePK(svtId, id, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30E4868 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__);
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
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *v20; // x22
  __int64 v21; // x1
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v24; // w23
  int32_t v25; // w24
  int32_t v26; // w2
  int32_t v27; // w3
  int64_t v28; // x25
  __int64 methodPtr_low; // x10
  Il2CppObject *MasterData_object; // x26
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Comparison_T__o *v36; // x19
  Il2CppObject *v37; // x20
  struct ServantCostumeMaster___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3

  if ( (byte_4A09310 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B686D4(&System_Comparison_ServantCostumeEntity__TypeInfo, v8);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__, v13);
    sub_1B686D4(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo, v14);
    sub_1B686D4(&NetworkManager_TypeInfo, v15);
    sub_1B686D4(&ServantCostumeEntity_TypeInfo, v16);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B686D4(&Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__, v18);
    sub_1B686D4(&ServantCostumeMaster___c_TypeInfo, v19);
    byte_4A09310 = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3081124 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v24 = Count;
    v25 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v25,
                        (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v28 = list;
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
        list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !list )
          break;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)list,
                              (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
          list = UserServantCollectionEntity__IsCostumeGet(EntityDefinitely, *(_DWORD *)(v28 + 20), 0LL);
          if ( (list & 1) != 0 )
          {
LABEL_36:
            if ( !v20 )
              break;
            items = v20->fields._items;
            v33 = Method_System_Collections_Generic_List_ServantCostumeEntity__Add__;
            ++v20->fields._version;
            if ( !items )
              break;
            size = v20->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v20,
                (Il2CppObject *)v28,
                *(const MethodInfo_34BC278 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v35 = &items->obj.klass + size;
              v20->fields._size = size + 1;
              v35[4] = (Il2CppClass *)v28;
              sub_1B68678((ServantStatusBattleListViewItem_o *)(v35 + 4), v28, v26, v27);
            }
          }
        }
      }
      if ( v24 == ++v25 )
        goto LABEL_25;
    }
LABEL_33:
    sub_1B68930(list, v21);
  }
LABEL_25:
  list = (int64_t)ServantCostumeMaster___c_TypeInfo;
  if ( !ServantCostumeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeMaster___c_TypeInfo);
    list = (int64_t)ServantCostumeMaster___c_TypeInfo;
  }
  v36 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 8LL);
  if ( !v36 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = (int64_t)ServantCostumeMaster___c_TypeInfo;
    }
    v37 = **(Il2CppObject ***)(list + 184);
    v36 = (System_Comparison_T__o *)sub_1B68920(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_object____ctor(v36, v37, Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__, 0LL);
    static_fields = ServantCostumeMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_ServantCostumeEntity__o *)v36;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)v36, v39, v40);
  }
  if ( !v20 )
    goto LABEL_33;
  System_Collections_Generic_List_object___Sort_55303484(
    v20,
    v36,
    (const MethodInfo_34BDD3C *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  return (ServantCostumeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v20,
                                         (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__);
}


void __fastcall ServantCostumeMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A09312 & 1) == 0 )
  {
    sub_1B686D4(&ServantCostumeMaster___c_TypeInfo, v1);
    byte_4A09312 = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(ServantCostumeMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantCostumeMaster___c_TypeInfo->static_fields->__9 = (struct ServantCostumeMaster___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)ServantCostumeMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B68930(this, a);
  return b->fields.priority - a->fields.priority;
}