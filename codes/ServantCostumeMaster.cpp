void __fastcall ServantCostumeMaster___ctor(ServantCostumeMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B168D1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__, method, v2);
    byte_4B168D1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    206,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__);
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
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // x24
  CostumeReleaseAnnounce_o *v12; // x8
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_String_o *name; // x1
  PartyOrganizationUtility_o *v20; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4B168D5 & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, releases, method);
    this = (ServantCostumeMaster_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B168D5 = 1;
  }
  entity = 0LL;
  if ( !releases )
LABEL_18:
    sub_1BCAA3C(this, releases);
  this = (ServantCostumeMaster_o *)sub_1BCA888(string___TypeInfo, releases->max_length);
  max_length = releases->max_length;
  v9 = (System_String_array *)this;
  if ( max_length >= 1 )
  {
    v10 = 0LL;
    p_list = &this->fields.list;
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
        v20 = (PartyOrganizationUtility_o *)&v9->m_Items[(int)v10];
      }
      else
      {
        if ( !v9 )
          goto LABEL_18;
        if ( (unsigned int)v10 >= v9->max_length )
          break;
        name = (struct System_String_o *)StringLiteral_1/*""*/;
        v20 = (PartyOrganizationUtility_o *)p_list;
      }
      *p_list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)name;
      sub_1BCA784(v20, (int64_t)name, v13, v14, v15, v16, v17, v18);
      max_length = releases->max_length;
      ++v10;
      ++p_list;
      if ( (int)v10 >= max_length )
        return v9;
    }
    sub_1BCAA44(this, releases);
  }
  return v9;
}


System_Collections_Generic_List_int__o *__fastcall ServantCostumeMaster__GetCostumeSvtIdList(
        ServantCostumeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_int__o *v17; // x20
  __int64 v18; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v21; // w21
  int32_t v22; // w22
  unsigned int *v23; // x23
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10

  if ( (byte_4B168D3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v13, v14);
    sub_1BCA7E0(&ServantCostumeEntity_TypeInfo, v15, v16);
    byte_4B168D3 = 1;
  }
  v17 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v22,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v23 = (unsigned int *)list;
      methodPtr_low = LOBYTE(ServantCostumeEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(ServantCostumeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ServantCostumeEntity_TypeInfo
        || !v17 )
      {
        break;
      }
      list = (void *)System_Collections_Generic_List_int___Contains(
                       v17,
                       *((_DWORD *)list + 4),
                       (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)list & 1) == 0 )
      {
        v18 = v23[4];
        items = v17->fields._items;
        v26 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v17,
            v18,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = size + 1;
          items->m_Items[size + 1] = v18;
        }
      }
      if ( v21 == ++v22 )
        return v17;
    }
LABEL_18:
    sub_1BCAA3C(list, v18);
  }
  return v17;
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeEntity_o *__fastcall ServantCostumeMaster__GetEntity(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B168CF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&id);
    byte_4B168CF = 1;
  }
  PK = (Il2CppObject *)ServantCostumeEntity__CreatePK(svtId, id, *(const MethodInfo **)&id);
  return (ServantCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeMaster__GetIsServantCostumeExist(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w21
  int32_t v12; // w22
  bool v13; // w25
  __int64 methodPtr_low; // x10

  if ( (byte_4B168D2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&ServantCostumeEntity_TypeInfo, v7, v8);
    byte_4B168D2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    v13 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        v13 = ++v12 < v11;
        if ( v11 != v12 )
          continue;
      }
      return v13;
    }
LABEL_15:
    sub_1BCAA3C(list, *(_QWORD *)&svtId);
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

  if ( (byte_4B168D0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B168D0 = 1;
  }
  PK = (Il2CppObject *)ServantCostumeEntity__CreatePK(svtId, id, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeEntity_array *__fastcall ServantCostumeMaster__releasedCostumeEntityList(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        bool isChkHave,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_object__o *v33; // x22
  __int64 v34; // x1
  int64_t list; // x0
  int32_t Count; // w0
  int64_t v37; // x2
  __int64 v38; // x3
  int32_t v39; // w23
  int32_t v40; // w24
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x25
  __int64 methodPtr_low; // x10
  __int64 v47; // x1
  Il2CppObject *MasterData_object; // x26
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  System_Comparison_T__o *v54; // x19
  Il2CppObject *v55; // x20
  struct ServantCostumeMaster___c_StaticFields *static_fields; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7

  if ( (byte_4B168D4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      isChkHave);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&System_Comparison_ServantCostumeEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&ServantCostumeEntity_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__, v29, v30);
    sub_1BCA7E0(&ServantCostumeMaster___c_TypeInfo, v31, v32);
    byte_4B168D4 = 1;
  }
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantCostumeEntity__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       isChkHave,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v39 = Count;
    v40 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v40,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v45 = list;
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
        list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !list )
          break;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)list,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v47);
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
          list = UserServantCollectionEntity__IsCostumeGet(EntityDefinitely, *(_DWORD *)(v45 + 20), 0LL);
          if ( (list & 1) != 0 )
          {
LABEL_36:
            if ( !v33 )
              break;
            items = v33->fields._items;
            v51 = Method_System_Collections_Generic_List_ServantCostumeEntity__Add__;
            ++v33->fields._version;
            if ( !items )
              break;
            size = v33->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v33,
                (Il2CppObject *)v45,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v53 = &items->obj.klass + size;
              v33->fields._size = size + 1;
              v53[4] = (Il2CppClass *)v45;
              sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 4), v45, v37, v38, v41, v42, v43, v44);
            }
          }
        }
      }
      if ( v39 == ++v40 )
        goto LABEL_25;
    }
LABEL_33:
    sub_1BCAA3C(list, v34);
  }
LABEL_25:
  list = (int64_t)ServantCostumeMaster___c_TypeInfo;
  if ( !ServantCostumeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeMaster___c_TypeInfo, v34);
    list = (int64_t)ServantCostumeMaster___c_TypeInfo;
  }
  v54 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 8LL);
  if ( !v54 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list, v34);
      list = (int64_t)ServantCostumeMaster___c_TypeInfo;
    }
    v55 = **(Il2CppObject ***)(list + 184);
    v54 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ServantCostumeEntity__TypeInfo, v34, v37, v38);
    System_Comparison_object____ctor(v54, v55, Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__, 0LL);
    static_fields = ServantCostumeMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_ServantCostumeEntity__o *)v54;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)v54, v57, v58, v59, v60, v61, v62);
  }
  if ( !v33 )
    goto LABEL_33;
  System_Collections_Generic_List_object___Sort_56244000(
    v33,
    v54,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  return (ServantCostumeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v33,
                                         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__);
}


void __fastcall ServantCostumeMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B168D6 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCostumeMaster___c_TypeInfo, v1, v2);
    byte_4B168D6 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantCostumeMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantCostumeMaster___c_TypeInfo->static_fields->__9 = (struct ServantCostumeMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantCostumeMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}