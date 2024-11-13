void __fastcall ShopGroupMaster___ctor(ShopGroupMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16BE4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__, method, v2);
    byte_4B16BE4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    239,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopGroupMaster__CheckIncludeGroupItemType(
        ShopGroupMaster_o *this,
        int32_t groupId,
        bool *item,
        bool *servant,
        bool *equip,
        bool *quest,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v31; // x23
  const MethodInfo *v32; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v34; // x24
  Il2CppObject *Instance; // x0
  __int64 v36; // x1
  __int64 v37; // x8
  int v38; // w28
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // x25
  int v40; // w29
  ShopGroupEntity_o *v41; // x8
  ShopEntity_o *v42; // x26
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  int v53; // w28
  int32_t v54; // w24
  int klass; // w8
  ShopEntity_o *v56; // x25
  bool *v57; // x9
  Il2CppObject *MasterData_object; // x26

  if ( (byte_4B16BE7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&groupId, item);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__get_Item__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopEntity__TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    byte_4B16BE7 = 1;
  }
  *item = 0;
  *servant = 0;
  *equip = 0;
  *quest = 0;
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       *(_QWORD *)&groupId,
                                                       item,
                                                       servant);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v32);
  if ( TargetEntityList )
  {
    v34 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_38;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
      v37 = *(_QWORD *)&v34->max_length;
      v38 = v37 - 1;
      if ( (int)v37 >= 1 )
      {
        v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v40 = 0;
        while ( 1 )
        {
          v41 = v34->m_Items[v40];
          if ( !v41 || !v39 )
            break;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       v39,
                       v41->fields.shopId,
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Instance )
          {
            v42 = (ShopEntity_o *)Instance;
            Instance = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (Il2CppObject *)ShopEntity__IsSoldOut(v42, 0LL);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( !v31 )
                  break;
                items = v31->fields._items;
                v50 = Method_System_Collections_Generic_List_ShopEntity__Add__;
                ++v31->fields._version;
                if ( !items )
                  break;
                size = v31->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v31,
                    (Il2CppObject *)v42,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
                }
                else
                {
                  v52 = &items->obj.klass + size;
                  v31->fields._size = size + 1;
                  v52[4] = (Il2CppClass *)v42;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 4), (int64_t)v42, v43, v44, v45, v46, v47, v48);
                }
              }
            }
          }
          if ( v38 == v40 )
            goto LABEL_21;
          if ( ++v40 >= v34->max_length )
            sub_1BCAA44(Instance, v36);
        }
LABEL_38:
        sub_1BCAA3C(Instance, v36);
      }
LABEL_21:
      if ( v31 )
      {
        v53 = v31->fields._size;
        if ( v53 >= 1 )
        {
          v54 = 0;
          while ( 1 )
          {
            Instance = System_Collections_Generic_List_object___get_Item(
                         v31,
                         v54,
                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
            if ( !Instance )
              goto LABEL_38;
            klass = (int)Instance[3].klass;
            v56 = (ShopEntity_o *)Instance;
            v57 = item;
            if ( klass == 1 )
              goto LABEL_35;
            if ( klass == 6 )
              break;
            if ( klass == 4 )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_38;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
              Instance = (Il2CppObject *)ShopEntity__get_TargetId(v56, 0LL);
              if ( !MasterData_object )
                goto LABEL_38;
              Instance = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           (int32_t)Instance,
                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !Instance )
                goto LABEL_38;
              if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
                v57 = equip;
              else
                v57 = servant;
              goto LABEL_35;
            }
LABEL_36:
            if ( v53 == ++v54 )
              return;
          }
          v57 = quest;
LABEL_35:
          *v57 = 1;
          goto LABEL_36;
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopGroupMaster__GetBuyableCount(ShopGroupMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x19
  const MethodInfo *v19; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  __int64 v21; // x1
  ShopGroupEntity_array *v22; // x20
  Il2CppObject *Master_object; // x0
  __int64 v24; // x1
  __int64 v25; // x8
  int v26; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x21
  int v28; // w24
  ShopGroupEntity_o *v29; // x8
  ShopEntity_o *v30; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0

  if ( (byte_4B16BE6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopMaster___, *(_QWORD *)&groupId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopEntity__TypeInfo, v16, v17);
    byte_4B16BE6 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       *(_QWORD *)&groupId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v19);
  if ( TargetEntityList )
  {
    v22 = TargetEntityList;
    if ( !*(_QWORD *)&TargetEntityList->max_length )
      goto LABEL_24;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopMaster___);
    v25 = *(_QWORD *)&v22->max_length;
    v26 = v25 - 1;
    if ( (int)v25 >= 1 )
    {
      v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      v28 = 0;
      while ( 1 )
      {
        v29 = v22->m_Items[v28];
        if ( !v29 || !v27 )
          break;
        Master_object = DataMasterBase_object__object__int___GetEntity(
                          v27,
                          v29->fields.shopId,
                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( Master_object )
        {
          v30 = (ShopEntity_o *)Master_object;
          Master_object = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)Master_object, 0LL);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = (Il2CppObject *)ShopEntity__IsSoldOut(v30, 0LL);
            if ( ((unsigned __int8)Master_object & 1) == 0 )
            {
              if ( !v18 )
                break;
              items = v18->fields._items;
              v38 = Method_System_Collections_Generic_List_ShopEntity__Add__;
              ++v18->fields._version;
              if ( !items )
                break;
              size = v18->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v18,
                  (Il2CppObject *)v30,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
              }
              else
              {
                v40 = &items->obj.klass + size;
                v18->fields._size = size + 1;
                v40[4] = (Il2CppClass *)v30;
                sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 4), (int64_t)v30, v31, v32, v33, v34, v35, v36);
              }
            }
          }
        }
        if ( v26 == v28 )
          goto LABEL_22;
        if ( ++v28 >= v22->max_length )
          sub_1BCAA44(Master_object, v24);
      }
      sub_1BCAA3C(Master_object, v24);
    }
LABEL_22:
    if ( v18 )
      LODWORD(TargetEntityList) = v18->fields._size;
    else
LABEL_24:
      LODWORD(TargetEntityList) = 0;
  }
  return (int)TargetEntityList;
}


// local variable allocation has failed, the output may be wrong!
ShopGroupEntity_o *__fastcall ShopGroupMaster__GetEntity(
        ShopGroupMaster_o *this,
        int32_t shopId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16BE2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__,
      *(_QWORD *)&shopId,
      *(_QWORD *)&groupId);
    byte_4B16BE2 = 1;
  }
  PK = (Il2CppObject *)ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&groupId);
  return (ShopGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_31B3198 *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ShopGroupEntity_array *__fastcall ShopGroupMaster__GetTargetEntityList(
        ShopGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t v19; // x1
  int64_t list; // x0
  int v21; // w22
  int32_t v22; // w23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B16BE5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&groupId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopGroupEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopGroupEntity___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopGroupEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&ShopGroupEntity_TypeInfo, v16, v17);
    byte_4B16BE5 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopGroupEntity__TypeInfo,
                                                       *(_QWORD *)&groupId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopGroupEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v21 = list;
    v22 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v22,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v19 = list;
      methodPtr_low = LOBYTE(ShopGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(ShopGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ShopGroupEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 20) == groupId )
      {
        if ( !v18 )
          break;
        items = v18->fields._items;
        v31 = Method_System_Collections_Generic_List_ShopGroupEntity__Add__;
        ++v18->fields._version;
        if ( !items )
          break;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v19;
          sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), v19, v23, v24, v25, v26, v27, v28);
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(list, v19);
  }
LABEL_17:
  if ( !v18 )
    goto LABEL_19;
  return (ShopGroupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v18,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopGroupMaster__TryGetEntity(
        ShopGroupMaster_o *this,
        ShopGroupEntity_o **entity,
        int32_t shopId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16BE3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&shopId);
    byte_4B16BE3 = 1;
  }
  PK = (Il2CppObject *)ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&shopId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__);
}