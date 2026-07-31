void SetItemMaster___ctor(SetItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59391E1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string___ctor__);
    byte_59391E1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    122,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SetItemEntity_o *SetItemMaster__GetEntity(
        SetItemMaster_o *this,
        int32_t id,
        int32_t purchaseType,
        int32_t targetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59391DF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string__GetEntity__);
    byte_59391DF = 1;
  }
  PK = (Il2CppObject *)SetItemEntity__CreatePK(id, purchaseType, targetId, *(const MethodInfo **)&targetId);
  return (SetItemEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_3EE2044 *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string__GetEntity__);
}


SetItemEntity_array *SetItemMaster__GetList(SetItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_59391E3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SetItemEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SetItemEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SetItemEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SetItemEntity__TypeInfo);
    byte_59391E3 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SetItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SetItemEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Count__);
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
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Item__);
      if ( list )
      {
        v6 = list;
        if ( LODWORD(list->fields.items) == id )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v17 = Method_System_Collections_Generic_List_SetItemEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v6;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_17:
    sub_21FFECC(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (SetItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_445164C *)Method_System_Collections_Generic_List_SetItemEntity__ToArray__);
}


void SetItemMaster__GetSum(
        SetItemMaster_o *this,
        int32_t *itemNum,
        int32_t *servantNum,
        int32_t *servantEquipNum,
        int32_t *cmdCodeNum,
        int32_t *recordNum,
        int32_t id,
        const MethodInfo *method)
{
  char *Instance; // x0
  __int64 v15; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x26
  int32_t Count; // w0
  int32_t v18; // w27
  int32_t i; // w28
  char *v20; // x29
  int v21; // w8
  int32_t v22; // w8
  int32_t *v23; // x9
  int32_t *v24; // x10
  bool IsServantEquip; // w0
  int32_t *v26; // x9

  if ( (byte_59391E2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59391E2 = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___),
        !this->fields.list) )
  {
LABEL_24:
    sub_21FFECC(Instance, v15);
  }
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Count__);
  *itemNum = 0;
  *servantNum = 0;
  *servantEquipNum = 0;
  *cmdCodeNum = 0;
  *recordNum = 0;
  if ( Count >= 1 )
  {
    v18 = Count;
    for ( i = 0; v18 != i; ++i )
    {
      Instance = (char *)this->fields.list;
      if ( !Instance )
        goto LABEL_24;
      Instance = (char *)System_Collections_ObjectModel_Collection_object___get_Item(
                           (System_Collections_ObjectModel_Collection_T__o *)Instance,
                           i,
                           (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Item__);
      if ( Instance )
      {
        v20 = Instance;
        if ( *((_DWORD *)Instance + 4) == id )
        {
          v21 = *((_DWORD *)Instance + 5);
          switch ( v21 )
          {
            case 19:
              *cmdCodeNum += *((_DWORD *)Instance + 7);
LABEL_20:
              v22 = 1;
              v23 = recordNum;
              v24 = recordNum;
              goto LABEL_21;
            case 4:
              if ( !v16 )
                goto LABEL_24;
              Instance = (char *)DataMasterBase_object__object__int___GetEntity(
                                   v16,
                                   *((_DWORD *)Instance + 6),
                                   (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !Instance )
                goto LABEL_24;
              IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0);
              v26 = servantEquipNum;
              if ( !IsServantEquip )
                v26 = servantNum;
              *v26 += *((_DWORD *)v20 + 7);
              goto LABEL_20;
            case 1:
              v22 = *itemNum;
              v23 = (int32_t *)(Instance + 28);
              v24 = itemNum;
LABEL_21:
              *v24 = *v23 + v22;
              break;
          }
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool SetItemMaster__TryGetEntity(
        SetItemMaster_o *this,
        SetItemEntity_o **entity,
        int32_t id,
        int32_t purchaseType,
        int32_t targetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59391E0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string__TryGetEntity__);
    byte_59391E0 = 1;
  }
  PK = (Il2CppObject *)SetItemEntity__CreatePK(id, purchaseType, targetId, *(const MethodInfo **)&purchaseType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string__TryGetEntity__);
}