void __fastcall ServantCostumeMaster___ctor(ServantCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC81BB & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__, method);
    byte_4BC81BB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    210,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__);
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
  int32_t *p_revision; // x24
  CostumeReleaseAnnounce_o *v11; // x8
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_String_o *name; // x1
  PartyOrganizationUtility_o *v19; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4BC81BF & 1) == 0 )
  {
    sub_1C1ABD4(&string___TypeInfo, releases);
    this = (ServantCostumeMaster_o *)sub_1C1ABD4(&StringLiteral_1/*""*/, v5);
    byte_4BC81BF = 1;
  }
  entity = 0LL;
  if ( !releases )
LABEL_18:
    sub_1C1AE30(this, releases);
  this = (ServantCostumeMaster_o *)sub_1C1AC7C(string___TypeInfo, releases->max_length);
  max_length = releases->max_length;
  v8 = (System_String_array *)this;
  if ( max_length >= 1 )
  {
    v9 = 0LL;
    p_revision = &this->fields.revision;
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
        v19 = (PartyOrganizationUtility_o *)&v8->m_Items[(int)v9];
      }
      else
      {
        if ( !v8 )
          goto LABEL_18;
        if ( (unsigned int)v9 >= v8->max_length )
          break;
        name = (struct System_String_o *)StringLiteral_1/*""*/;
        v19 = (PartyOrganizationUtility_o *)p_revision;
      }
      *(_QWORD *)p_revision = name;
      sub_1C1AB78(v19, (int64_t)name, v12, v13, v14, v15, v16, v17);
      max_length = releases->max_length;
      ++v9;
      p_revision += 2;
      if ( (int)v9 >= max_length )
        return v8;
    }
    sub_1C1AE38(this, releases);
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

  if ( (byte_4BC81BD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_4BC81BD = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
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
               (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
      if ( !list || !v8 )
        break;
      v14 = (unsigned int *)list;
      list = (void *)System_Collections_Generic_List_int___Contains(
                       v8,
                       *((_DWORD *)list + 4),
                       (const MethodInfo_361FBE4 *)Method_System_Collections_Generic_List_int__Contains__);
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
            *(const MethodInfo_361F86C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
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
    sub_1C1AE30(list, v9);
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

  if ( (byte_4BC81B9 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4BC81B9 = 1;
  }
  PK = (Il2CppObject *)ServantCostumeEntity__CreatePK(svtId, id, *(const MethodInfo **)&id);
  return (ServantCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_324D130 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__);
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

  if ( (byte_4BC81BC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__, v5);
    byte_4BC81BC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
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
                                                                 (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
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
    sub_1C1AE30(list, *(_QWORD *)&svtId);
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

  if ( (byte_4BC81BA & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__, entity);
    byte_4BC81BA = 1;
  }
  PK = (Il2CppObject *)ServantCostumeEntity__CreatePK(svtId, id, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__);
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
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v23; // w23
  int32_t v24; // w24
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x26
  Il2CppObject *MasterData_object; // x27
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Comparison_T__o *v38; // x20
  Il2CppObject *v39; // x21
  struct ServantCostumeMaster___c_StaticFields *static_fields; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4BC81BE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__, v7);
    sub_1C1ABD4(&System_Comparison_ServantCostumeEntity__TypeInfo, v8);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__, v13);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo, v14);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v15);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1C1ABD4(&Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__, v17);
    sub_1C1ABD4(&ServantCostumeMaster___c_TypeInfo, v18);
    byte_4BC81BE = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Count__);
  if ( Count >= 1 )
  {
    v23 = Count;
    v24 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v24,
                        (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_ServantCostumeEntity__get_Item__);
      if ( !list )
        break;
      v31 = list;
      if ( *(_DWORD *)(list + 16) == svtId )
      {
        if ( (*(_BYTE *)(list + 84) & 0x10) == 0 && !isChkHave )
          goto LABEL_38;
        list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !list )
          break;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)list,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BC2585 )
        {
          sub_1C1ABD4(&NetworkManager_TypeInfo, v20);
          byte_4BC2585 = 1;
        }
        list = (int64_t)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          list = (int64_t)NetworkManager_TypeInfo;
        }
        if ( !MasterData_object )
          break;
        EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                             (UserServantCollectionMaster_o *)MasterData_object,
                             *(_QWORD *)(*(_QWORD *)(list + 184) + 64LL),
                             svtId,
                             0LL);
        if ( EntityDefinitely )
        {
          list = UserServantCollectionEntity__IsCostumeGet(EntityDefinitely, *(_DWORD *)(v31 + 20), 0LL);
          if ( (list & 1) != 0 )
          {
LABEL_38:
            if ( !v19 )
              break;
            items = v19->fields._items;
            v35 = Method_System_Collections_Generic_List_ServantCostumeEntity__Add__;
            ++v19->fields._version;
            if ( !items )
              break;
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                (Il2CppObject *)v31,
                *(const MethodInfo_363C890 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = &items->obj.klass + size;
              v19->fields._size = size + 1;
              v37[4] = (Il2CppClass *)v31;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v37 + 4), v31, v25, v26, v27, v28, v29, v30);
            }
          }
        }
      }
      if ( v23 == ++v24 )
        goto LABEL_27;
    }
LABEL_35:
    sub_1C1AE30(list, v20);
  }
LABEL_27:
  list = (int64_t)ServantCostumeMaster___c_TypeInfo;
  if ( !ServantCostumeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeMaster___c_TypeInfo);
    list = (int64_t)ServantCostumeMaster___c_TypeInfo;
  }
  v38 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 8LL);
  if ( !v38 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = (int64_t)ServantCostumeMaster___c_TypeInfo;
    }
    v39 = **(Il2CppObject ***)(list + 184);
    v38 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_object____ctor(v38, v39, Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__, 0LL);
    static_fields = ServantCostumeMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_ServantCostumeEntity__o *)v38;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)v38, v41, v42, v43, v44, v45, v46);
  }
  if ( !v19 )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_56877908(
    v19,
    v38,
    (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  return (ServantCostumeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v19,
                                         (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__);
}


void __fastcall ServantCostumeMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC81C0 & 1) == 0 )
  {
    sub_1C1ABD4(&ServantCostumeMaster___c_TypeInfo, v1);
    byte_4BC81C0 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(ServantCostumeMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantCostumeMaster___c_TypeInfo->static_fields->__9 = (struct ServantCostumeMaster___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)ServantCostumeMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, a);
  return b->fields.priority - a->fields.priority;
}