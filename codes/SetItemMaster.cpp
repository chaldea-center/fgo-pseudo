void __fastcall SetItemMaster___ctor(SetItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC848A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string___ctor__, method);
    byte_4BC848A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    121,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string___ctor__);
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

  if ( (byte_4BC8488 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4BC8488 = 1;
  }
  PK = (Il2CppObject *)SetItemEntity__CreatePK(id, purchaseType, targetId, *(const MethodInfo **)&targetId);
  return (SetItemEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_324D130 *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
SetItemEntity_array *__fastcall SetItemMaster__GetList(SetItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  int64_t v11; // x1
  int64_t list; // x0
  int v13; // w22
  int32_t v14; // w23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4BC848C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Count__, *(_QWORD *)&id);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Item__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SetItemEntity__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SetItemEntity__ToArray__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SetItemEntity___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_SetItemEntity__TypeInfo, v9);
    byte_4BC848C = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SetItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SetItemEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = list;
    v14 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v14,
                        (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( *(_DWORD *)(list + 16) == id )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v22 = Method_System_Collections_Generic_List_SetItemEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)list,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v11;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v24 + 4), v11, v15, v16, v17, v18, v19, v20);
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C1AE30(list, v11);
  }
LABEL_15:
  if ( !v10 )
    goto LABEL_17;
  return (SetItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                                  v10,
                                  (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_SetItemEntity__ToArray__);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  void *Instance; // x0
  __int64 v19; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x26
  int32_t Count; // w0
  int32_t v22; // w27
  int32_t i; // w28
  _DWORD *v24; // x29
  int v25; // w8
  bool IsServantEquip; // w0
  int32_t *v27; // x8

  if ( (byte_4BC848B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Count__, itemNum);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Item__, v14);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4BC848B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___),
        !this->fields.list) )
  {
LABEL_23:
    sub_1C1AE30(Instance, v19);
  }
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Count__);
  *itemNum = 0;
  *servantNum = 0;
  *servantEquipNum = 0;
  *cmdCodeNum = 0;
  *recordNum = 0;
  if ( Count >= 1 )
  {
    v22 = Count;
    for ( i = 0; v22 != i; ++i )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_23;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   i,
                   (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Item__);
      if ( Instance )
      {
        v24 = Instance;
        if ( *((_DWORD *)Instance + 4) == id )
        {
          v25 = *((_DWORD *)Instance + 5);
          if ( v25 == 19 )
          {
            *cmdCodeNum += *((_DWORD *)Instance + 7);
          }
          else
          {
            if ( v25 != 4 )
            {
              if ( v25 == 1 )
                *itemNum += *((_DWORD *)Instance + 7);
              continue;
            }
            if ( !v20 )
              goto LABEL_23;
            Instance = DataMasterBase_object__object__int___GetEntity(
                         v20,
                         *((_DWORD *)Instance + 6),
                         (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_23;
            IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
            v27 = servantEquipNum;
            if ( !IsServantEquip )
              v27 = servantNum;
            *v27 += v24[7];
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

  if ( (byte_4BC8489 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string__TryGetEntity__, entity);
    byte_4BC8489 = 1;
  }
  PK = (Il2CppObject *)SetItemEntity__CreatePK(id, purchaseType, targetId, *(const MethodInfo **)&purchaseType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string__TryGetEntity__);
}