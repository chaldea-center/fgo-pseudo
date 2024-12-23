void __fastcall ShopGroupMaster___ctor(ShopGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B675D4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__, method);
    byte_4B675D4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    243,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_List_object__o *v22; // x23
  const MethodInfo *v23; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v25; // x24
  Il2CppObject *Instance; // x0
  __int64 v27; // x1
  __int64 v28; // x8
  int v29; // w28
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x25
  int v31; // w29
  ShopGroupEntity_o *v32; // x8
  ShopEntity_o *v33; // x26
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  int v44; // w28
  int32_t v45; // w24
  int klass; // w8
  ShopEntity_o *v47; // x25
  bool *v48; // x9
  Il2CppObject *MasterData_object; // x26

  if ( (byte_4B675D7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&groupId);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ShopMaster___, v13);
    sub_1BE4ACC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v14);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopEntity__Add__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopEntity__get_Item__, v19);
    sub_1BE4ACC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v20);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4B675D7 = 1;
  }
  *item = 0;
  *servant = 0;
  *equip = 0;
  *quest = 0;
  v22 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v23);
  if ( TargetEntityList )
  {
    v25 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_38;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ShopMaster___);
      v28 = *(_QWORD *)&v25->max_length;
      v29 = v28 - 1;
      if ( (int)v28 >= 1 )
      {
        v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v31 = 0;
        while ( 1 )
        {
          v32 = v25->m_Items[v31];
          if ( !v32 || !v30 )
            break;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       v30,
                       v32->fields.shopId,
                       (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Instance )
          {
            v33 = (ShopEntity_o *)Instance;
            Instance = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (Il2CppObject *)ShopEntity__IsSoldOut(v33, 0LL);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( !v22 )
                  break;
                items = v22->fields._items;
                v41 = Method_System_Collections_Generic_List_ShopEntity__Add__;
                ++v22->fields._version;
                if ( !items )
                  break;
                size = v22->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v22,
                    (Il2CppObject *)v33,
                    *(const MethodInfo_35EC224 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
                }
                else
                {
                  v43 = &items->obj.klass + size;
                  v22->fields._size = size + 1;
                  v43[4] = (Il2CppClass *)v33;
                  sub_1BE4A70((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)v33, v34, v35, v36, v37, v38, v39);
                }
              }
            }
          }
          if ( v29 == v31 )
            goto LABEL_21;
          if ( ++v31 >= v25->max_length )
            sub_1BE4D30(Instance, v27);
        }
LABEL_38:
        sub_1BE4D28(Instance, v27);
      }
LABEL_21:
      if ( v22 )
      {
        v44 = v22->fields._size;
        if ( v44 >= 1 )
        {
          v45 = 0;
          while ( 1 )
          {
            Instance = System_Collections_Generic_List_object___get_Item(
                         v22,
                         v45,
                         (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
            if ( !Instance )
              goto LABEL_38;
            klass = (int)Instance[3].klass;
            v47 = (ShopEntity_o *)Instance;
            v48 = item;
            if ( klass == 1 )
              goto LABEL_35;
            if ( klass == 6 )
              break;
            if ( klass == 4 )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_38;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
              Instance = (Il2CppObject *)ShopEntity__get_TargetId(v47, 0LL);
              if ( !MasterData_object )
                goto LABEL_38;
              Instance = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           (int32_t)Instance,
                           (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !Instance )
                goto LABEL_38;
              if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
                v48 = equip;
              else
                v48 = servant;
              goto LABEL_35;
            }
LABEL_36:
            if ( v44 == ++v45 )
              return;
          }
          v48 = quest;
LABEL_35:
          *v48 = 1;
          goto LABEL_36;
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopGroupMaster__GetBuyableCount(ShopGroupMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  const MethodInfo *v12; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v14; // x20
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  __int64 v17; // x8
  int v18; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  int v20; // w24
  ShopGroupEntity_o *v21; // x8
  ShopEntity_o *v22; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B675D6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_ShopMaster___, *(_QWORD *)&groupId);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopEntity__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v10);
    byte_4B675D6 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v12);
  if ( TargetEntityList )
  {
    v14 = TargetEntityList;
    if ( !*(_QWORD *)&TargetEntityList->max_length )
      goto LABEL_24;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ShopMaster___);
    v17 = *(_QWORD *)&v14->max_length;
    v18 = v17 - 1;
    if ( (int)v17 >= 1 )
    {
      v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      v20 = 0;
      while ( 1 )
      {
        v21 = v14->m_Items[v20];
        if ( !v21 || !v19 )
          break;
        Master_object = DataMasterBase_object__object__int___GetEntity(
                          v19,
                          v21->fields.shopId,
                          (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( Master_object )
        {
          v22 = (ShopEntity_o *)Master_object;
          Master_object = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)Master_object, 0LL);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = (Il2CppObject *)ShopEntity__IsSoldOut(v22, 0LL);
            if ( ((unsigned __int8)Master_object & 1) == 0 )
            {
              if ( !v11 )
                break;
              items = v11->fields._items;
              v30 = Method_System_Collections_Generic_List_ShopEntity__Add__;
              ++v11->fields._version;
              if ( !items )
                break;
              size = v11->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v11,
                  (Il2CppObject *)v22,
                  *(const MethodInfo_35EC224 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
              }
              else
              {
                v32 = &items->obj.klass + size;
                v11->fields._size = size + 1;
                v32[4] = (Il2CppClass *)v22;
                sub_1BE4A70((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)v22, v23, v24, v25, v26, v27, v28);
              }
            }
          }
        }
        if ( v18 == v20 )
          goto LABEL_22;
        if ( ++v20 >= v14->max_length )
          sub_1BE4D30(Master_object, v16);
      }
      sub_1BE4D28(Master_object, v16);
    }
LABEL_22:
    if ( v11 )
      LODWORD(TargetEntityList) = v11->fields._size;
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

  if ( (byte_4B675D2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__, *(_QWORD *)&shopId);
    byte_4B675D2 = 1;
  }
  PK = (Il2CppObject *)ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&groupId);
  return (ShopGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_31FDB1C *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ShopGroupEntity_array *__fastcall ShopGroupMaster__GetTargetEntityList(
        ShopGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  int64_t v12; // x1
  int64_t list; // x0
  int v14; // w22
  int32_t v15; // w23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4B675D5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&groupId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopGroupEntity__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ShopGroupEntity___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_ShopGroupEntity__TypeInfo, v9);
    sub_1BE4ACC(&ShopGroupEntity_TypeInfo, v10);
    byte_4B675D5 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ShopGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ShopGroupEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = list;
    v15 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v15,
                        (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v12 = list;
      methodPtr_low = LOBYTE(ShopGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(ShopGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ShopGroupEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 20) == groupId )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v24 = Method_System_Collections_Generic_List_ShopGroupEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v12;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 4), v12, v16, v17, v18, v19, v20, v21);
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BE4D28(list, v12);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return (ShopGroupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__);
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

  if ( (byte_4B675D3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__, entity);
    byte_4B675D3 = 1;
  }
  PK = (Il2CppObject *)ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&shopId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__);
}