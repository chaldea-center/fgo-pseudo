void __fastcall SetItemMaster___ctor(SetItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF3AC & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string___ctor__, method);
    byte_49FF3AC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    117,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SetItemEntity_o *__fastcall SetItemMaster__GetEntity(
        SetItemMaster_o *this,
        int32_t id,
        int32_t purchaseType,
        int32_t targetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FF3AA & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_49FF3AA = 1;
  }
  PK = (Il2CppObject *)SetItemEntity__CreatePK(id, purchaseType, targetId, *(const MethodInfo **)&targetId);
  return (SetItemEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_30D6AF0 *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
SetItemEntity_array *__fastcall SetItemMaster__GetList(SetItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v14; // w22
  int32_t v15; // w23
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_49FF3AE & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_SetItemEntity__Add__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_SetItemEntity__ToArray__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_SetItemEntity___ctor__, v8);
    sub_1B64A00(&System_Collections_Generic_List_SetItemEntity__TypeInfo, v9);
    sub_1B64A00(&SetItemEntity_TypeInfo, v10);
    byte_49FF3AE = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_SetItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_SetItemEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        methodPtr_low = LOBYTE(SetItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (SetItemEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == SetItemEntity_TypeInfo
          && LODWORD(list->fields.items) == id )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v20 = Method_System_Collections_Generic_List_SetItemEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v12;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v12, v16, v17);
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B64C5C(list, v12);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return (SetItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                                  v11,
                                  (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_SetItemEntity__ToArray__);
}


void __fastcall SetItemMaster__GetSum(
        SetItemMaster_o *this,
        int32_t *itemNum,
        int32_t *servantNum,
        int32_t *servantEquipNum,
        int32_t *cmdCodeNum,
        int32_t *recordNum,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  int32_t Count; // w0
  int32_t v24; // w27
  int32_t i; // w28
  Il2CppObject *Item; // x0
  Il2CppObject *v27; // x29
  __int64 methodPtr_low; // x10
  int klass_high; // w8
  bool IsServantEquip; // w0
  int32_t *v31; // x8
  int32_t *v32; // [xsp+0h] [xbp-70h]
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // [xsp+8h] [xbp-68h]

  if ( (byte_49FF3AD & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, itemNum);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v15);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_1B64A00(&SetItemEntity_TypeInfo, v18);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_49FF3AD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___),
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
        v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        !list) )
  {
LABEL_25:
    sub_1B64C5C(Instance, v21);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *itemNum = 0;
  *servantNum = 0;
  v32 = servantEquipNum;
  *servantEquipNum = 0;
  *cmdCodeNum = 0;
  *recordNum = 0;
  if ( Count >= 1 )
  {
    v24 = Count;
    for ( i = 0; v24 != i; ++i )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_25;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               i,
               (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v27 = Item;
        methodPtr_low = LOBYTE(SetItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (SetItemEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == SetItemEntity_TypeInfo
          && LODWORD(Item[1].klass) == id )
        {
          klass_high = HIDWORD(Item[1].klass);
          if ( klass_high == 19 )
          {
            *cmdCodeNum += HIDWORD(Item[1].monitor);
          }
          else
          {
            if ( klass_high != 4 )
            {
              if ( klass_high == 1 )
                *itemNum += HIDWORD(Item[1].monitor);
              continue;
            }
            Instance = (DataManager_o *)v33;
            if ( !v33 )
              goto LABEL_25;
            Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                          v33,
                                          (int32_t)v27[1].monitor,
                                          (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_25;
            IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
            v31 = v32;
            if ( !IsServantEquip )
              v31 = servantNum;
            *v31 += HIDWORD(v27[1].monitor);
          }
          ++*recordNum;
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SetItemMaster__TryGetEntity(
        SetItemMaster_o *this,
        SetItemEntity_o **entity,
        int32_t id,
        int32_t purchaseType,
        int32_t targetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FF3AB & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string__TryGetEntity__, entity);
    byte_49FF3AB = 1;
  }
  PK = (Il2CppObject *)SetItemEntity__CreatePK(id, purchaseType, targetId, *(const MethodInfo **)&purchaseType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string__TryGetEntity__);
}