void __fastcall ShopGroupMaster___ctor(ShopGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BA54 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__);
    byte_4A5BA54 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    239,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__);
}


void __fastcall ShopGroupMaster__CheckIncludeGroupItemType(
        ShopGroupMaster_o *this,
        int32_t groupId,
        bool *item,
        bool *servant,
        bool *equip,
        bool *quest,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v13; // x23
  const MethodInfo *v14; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v16; // x24
  Il2CppObject *Instance; // x0
  const MethodInfo *v18; // x1
  __int64 v19; // x8
  int v20; // w28
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x25
  int v22; // w29
  ShopGroupEntity_o *v23; // x8
  ShopEntity_o *v24; // x26
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  int v31; // w28
  int32_t v32; // w24
  int klass; // w8
  ShopEntity_o *v34; // x25
  bool *v35; // x9
  Il2CppObject *MasterData_object; // x26
  const MethodInfo *v37; // x1

  if ( (byte_4A5BA57 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA57 = 1;
  }
  *item = 0;
  *servant = 0;
  *equip = 0;
  *quest = 0;
  v13 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v14);
  if ( TargetEntityList )
  {
    v16 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_38;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___);
      v19 = *(_QWORD *)&v16->max_length;
      v20 = v19 - 1;
      if ( (int)v19 >= 1 )
      {
        v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v22 = 0;
        while ( 1 )
        {
          v23 = v16->m_Items[v22];
          if ( !v23 || !v21 )
            break;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       v21,
                       v23->fields.shopId,
                       (const MethodInfo_311D934 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Instance )
          {
            v24 = (ShopEntity_o *)Instance;
            Instance = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, v18);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (Il2CppObject *)ShopEntity__IsSoldOut(v24, v18);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( !v13 )
                  break;
                items = v13->fields._items;
                v28 = Method_System_Collections_Generic_List_ShopEntity__Add__;
                ++v13->fields._version;
                if ( !items )
                  break;
                size = v13->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v13,
                    (Il2CppObject *)v24,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
                }
                else
                {
                  v30 = &items->obj.klass + size;
                  v13->fields._size = size + 1;
                  v30[4] = (Il2CppClass *)v24;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v24, v25, v26);
                }
              }
            }
          }
          if ( v20 == v22 )
            goto LABEL_21;
          if ( ++v22 >= v16->max_length )
            sub_1B88814(Instance, v18);
        }
LABEL_38:
        sub_1B8880C(Instance, v18);
      }
LABEL_21:
      if ( v13 )
      {
        v31 = v13->fields._size;
        if ( v31 >= 1 )
        {
          v32 = 0;
          while ( 1 )
          {
            Instance = System_Collections_Generic_List_object___get_Item(
                         v13,
                         v32,
                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
            if ( !Instance )
              goto LABEL_38;
            klass = (int)Instance[3].klass;
            v34 = (ShopEntity_o *)Instance;
            v35 = item;
            if ( klass == 1 )
              goto LABEL_35;
            if ( klass == 6 )
              break;
            if ( klass == 4 )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_38;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
              Instance = (Il2CppObject *)ShopEntity__get_TargetId(v34, v37);
              if ( !MasterData_object )
                goto LABEL_38;
              Instance = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           (int32_t)Instance,
                           (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !Instance )
                goto LABEL_38;
              if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
                v35 = equip;
              else
                v35 = servant;
              goto LABEL_35;
            }
LABEL_36:
            if ( v31 == ++v32 )
              return;
          }
          v35 = quest;
LABEL_35:
          *v35 = 1;
          goto LABEL_36;
        }
      }
    }
  }
}


int32_t __fastcall ShopGroupMaster__GetBuyableCount(ShopGroupMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  const MethodInfo *v6; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v8; // x20
  Il2CppObject *Master_object; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x8
  int v12; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  int v14; // w24
  ShopGroupEntity_o *v15; // x8
  ShopEntity_o *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4A5BA56 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    byte_4A5BA56 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v6);
  if ( TargetEntityList )
  {
    v8 = TargetEntityList;
    if ( !*(_QWORD *)&TargetEntityList->max_length )
      goto LABEL_24;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ShopMaster___);
    v11 = *(_QWORD *)&v8->max_length;
    v12 = v11 - 1;
    if ( (int)v11 >= 1 )
    {
      v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      v14 = 0;
      while ( 1 )
      {
        v15 = v8->m_Items[v14];
        if ( !v15 || !v13 )
          break;
        Master_object = DataMasterBase_object__object__int___GetEntity(
                          v13,
                          v15->fields.shopId,
                          (const MethodInfo_311D934 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( Master_object )
        {
          v16 = (ShopEntity_o *)Master_object;
          Master_object = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)Master_object, v10);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = (Il2CppObject *)ShopEntity__IsSoldOut(v16, v10);
            if ( ((unsigned __int8)Master_object & 1) == 0 )
            {
              if ( !v5 )
                break;
              items = v5->fields._items;
              v20 = Method_System_Collections_Generic_List_ShopEntity__Add__;
              ++v5->fields._version;
              if ( !items )
                break;
              size = v5->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v5,
                  (Il2CppObject *)v16,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
              }
              else
              {
                v22 = &items->obj.klass + size;
                v5->fields._size = size + 1;
                v22[4] = (Il2CppClass *)v16;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v16, v17, v18);
              }
            }
          }
        }
        if ( v12 == v14 )
          goto LABEL_22;
        if ( ++v14 >= v8->max_length )
          sub_1B88814(Master_object, v10);
      }
      sub_1B8880C(Master_object, v10);
    }
LABEL_22:
    if ( v5 )
      LODWORD(TargetEntityList) = v5->fields._size;
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

  if ( (byte_4A5BA52 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__);
    byte_4A5BA52 = 1;
  }
  PK = (Il2CppObject *)ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&groupId);
  return (ShopGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_311DC8C *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__);
}


ShopGroupEntity_array *__fastcall ShopGroupMaster__GetTargetEntityList(
        ShopGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4A5BA55 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopGroupEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopGroupEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ShopGroupEntity__TypeInfo);
    sub_1B885B0(&ShopGroupEntity_TypeInfo);
    byte_4A5BA55 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ShopGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ShopGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
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
      if ( !list )
        break;
      v6 = list;
      methodPtr_low = LOBYTE(ShopGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ShopGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopGroupEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == groupId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v14 = Method_System_Collections_Generic_List_ShopGroupEntity__Add__;
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
          v16[4] = (Il2CppClass *)v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v6, v10, v11);
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(list, v6);
  }
LABEL_17:
  if ( !v5 )
    goto LABEL_19;
  return (ShopGroupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__);
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

  if ( (byte_4A5BA53 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__);
    byte_4A5BA53 = 1;
  }
  PK = (Il2CppObject *)ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&shopId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__);
}