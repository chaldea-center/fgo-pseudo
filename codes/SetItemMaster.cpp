void __fastcall SetItemMaster___ctor(SetItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BA05 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string___ctor__);
    byte_4A5BA05 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    117,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string___ctor__);
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

  if ( (byte_4A5BA03 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string__GetEntity__);
    byte_4A5BA03 = 1;
  }
  PK = (Il2CppObject *)SetItemEntity__CreatePK(id, purchaseType, targetId, *(const MethodInfo **)&targetId);
  return (SetItemEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_311DC8C *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string__GetEntity__);
}


SetItemEntity_array *__fastcall SetItemMaster__GetList(SetItemMaster_o *this, int32_t id, const MethodInfo *method)
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

  if ( (byte_4A5BA07 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SetItemEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SetItemEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SetItemEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SetItemEntity__TypeInfo);
    sub_1B885B0(&SetItemEntity_TypeInfo);
    byte_4A5BA07 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SetItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SetItemEntity___ctor__);
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
      if ( list )
      {
        v6 = list;
        methodPtr_low = LOBYTE(SetItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (SetItemEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == SetItemEntity_TypeInfo
          && LODWORD(list->fields.items) == id )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v14 = Method_System_Collections_Generic_List_SetItemEntity__Add__;
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
  return (SetItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_SetItemEntity__ToArray__);
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
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  int32_t Count; // w0
  int32_t v19; // w27
  int32_t i; // w28
  Il2CppObject *Item; // x0
  Il2CppObject *v22; // x29
  __int64 methodPtr_low; // x10
  int klass_high; // w8
  bool IsServantEquip; // w0
  int32_t *v26; // x8
  int32_t *v27; // [xsp+0h] [xbp-70h]
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // [xsp+8h] [xbp-68h]

  if ( (byte_4A5BA06 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&SetItemEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BA06 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___),
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
        v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        !list) )
  {
LABEL_25:
    sub_1B8880C(Instance, v16);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *itemNum = 0;
  *servantNum = 0;
  v27 = servantEquipNum;
  *servantEquipNum = 0;
  *cmdCodeNum = 0;
  *recordNum = 0;
  if ( Count >= 1 )
  {
    v19 = Count;
    for ( i = 0; v19 != i; ++i )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_25;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               i,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v22 = Item;
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
            Instance = (DataManager_o *)v28;
            if ( !v28 )
              goto LABEL_25;
            Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                          v28,
                                          (int32_t)v22[1].monitor,
                                          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_25;
            IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
            v26 = v27;
            if ( !IsServantEquip )
              v26 = servantNum;
            *v26 += HIDWORD(v22[1].monitor);
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

  if ( (byte_4A5BA04 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string__TryGetEntity__);
    byte_4A5BA04 = 1;
  }
  PK = (Il2CppObject *)SetItemEntity__CreatePK(id, purchaseType, targetId, *(const MethodInfo **)&purchaseType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string__TryGetEntity__);
}