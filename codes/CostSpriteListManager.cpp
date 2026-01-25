void CostSpriteListManager___ctor(CostSpriteListManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void CostSpriteListManager__ClearAllList(CostSpriteListManager_o *this, const MethodInfo *method)
{
  CostSpriteListManager_o *v2; // x19
  struct System_Collections_Generic_List_int__array *bannerIdAllList; // x8
  int max_length; // w9
  int v5; // w10
  System_Collections_Generic_List_int__o *v6; // x11
  int v7; // w12

  v2 = this;
  if ( (byte_4CEBABA & 1) == 0 )
  {
    this = (CostSpriteListManager_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Clear__);
    byte_4CEBABA = 1;
  }
  bannerIdAllList = v2->fields.bannerIdAllList;
  if ( !bannerIdAllList )
    goto LABEL_11;
  max_length = bannerIdAllList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( max_length == v5 )
        sub_1C7BD48(this);
      v6 = bannerIdAllList->m_Items[v5];
      if ( !v6 )
        break;
      ++v5;
      v7 = v6->fields._version + 1;
      v6->fields._size = 0;
      v6->fields._version = v7;
      if ( max_length == v5 )
        return;
    }
LABEL_11:
    sub_1C7BD40(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void CostSpriteListManager__CreateList(CostSpriteListManager_o *this, int32_t type, const MethodInfo *method)
{
  ListViewManager_o *v4; // x19
  ListViewManager_c *klass; // x8
  System_Collections_Generic_List_int__o *v6; // x20
  int32_t size; // w21
  int32_t v8; // w22
  System_Collections_Generic_List_object__o *itemList; // x23
  int32_t Item; // w25
  __int64 v11; // x24
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x0

  v4 = (ListViewManager_o *)this;
  if ( (byte_4CEBAB7 & 1) == 0 )
  {
    sub_1C7BAE8(&CostSpriteViewItem_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (CostSpriteListManager_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4CEBAB7 = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_15;
  if ( LODWORD(klass->_1.namespaze) <= type )
    sub_1C7BD48(this);
  v6 = (System_Collections_Generic_List_int__o *)*((_QWORD *)&klass->_1.byval_arg.data + type);
  if ( !v6 )
    goto LABEL_15;
  size = v6->fields._size;
  ListViewManager__CreateList(v4, size, 0);
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)v4->fields.itemList;
      Item = System_Collections_Generic_List_int___get_Item(
               v6,
               v8,
               (const MethodInfo_3821AE8 *)Method_System_Collections_Generic_List_int__get_Item__);
      v11 = sub_1C7BD34(CostSpriteViewItem_TypeInfo);
      ListViewItem___ctor_44325320((ListViewItem_o *)v11, v8, 0);
      *(_DWORD *)(v11 + 120) = Item;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v19 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v20 = itemList->fields._size;
      if ( (unsigned int)v20 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v11,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + v20;
        itemList->fields._size = v20 + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v21 + 4), v11, v12, v13, v14, v15, v16, v17);
      }
      if ( size == ++v8 )
        goto LABEL_14;
    }
LABEL_15:
    sub_1C7BD40(this, *(_QWORD *)&type);
  }
LABEL_14:
  ListViewManager__SortItem(v4, -1, 1, -1, 0);
  ListViewManager__SetTopItem(v4, 0, 0);
}


void CostSpriteListManager__DestroyList(CostSpriteListManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


void CostSpriteListManager__Init(CostSpriteListManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__array *v3; // x0
  struct System_Collections_Generic_List_int__array **p_bannerIdAllList; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x23
  __int64 v12; // x24
  unsigned int *v13; // x25
  System_Collections_Generic_List_int__o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  bool v23; // cf
  __int64 v24; // x0

  if ( (byte_4CEBAB6 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CEBAB6 = 1;
  }
  v3 = (struct System_Collections_Generic_List_int__array *)sub_1C7BB90(
                                                              System_Collections_Generic_List_int____TypeInfo,
                                                              3);
  p_bannerIdAllList = &this->fields.bannerIdAllList;
  this->fields.bannerIdAllList = v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.bannerIdAllList, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  v11 = -3;
  v12 = 8;
  do
  {
    v13 = (unsigned int *)*p_bannerIdAllList;
    v14 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v14,
      (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !v13 )
      sub_1C7BD40(v15, v16);
    if ( v14 )
    {
      v15 = sub_1C7BC24(v14, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
      if ( !v15 )
      {
        v24 = sub_1C7BD64();
        sub_1C7BC10(v24, 0);
      }
    }
    if ( v11 + 3 >= (unsigned __int64)v13[6] )
      sub_1C7BD48(v15);
    *(_QWORD *)&v13[v12] = v14;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v13[v12], (int32_t)v14, v17, v18, v19, v20, v21, v22);
    v23 = __CFADD__(v11++, 1);
    v12 += 2;
  }
  while ( !v23 );
}


void CostSpriteListManager__Load(CostSpriteListManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  DataManager_o *v5; // x23
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x22
  Il2CppObject *v9; // x26
  UISprite_o *v10; // x24
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *v13; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int *p_offset; // x10
  __int64 v17; // x0
  const MethodInfo *v18; // x1
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  _DWORD *List; // x0
  __int64 v26; // x1
  int v27; // w8
  int v28; // w27
  __int64 v29; // x8
  int v30; // w8
  int v31; // w23
  __int64 v32; // x8
  System_Collections_ObjectModel_Collection_T__o *monitor; // x0
  int v34; // w27
  __int64 v35; // x1
  System_Collections_Generic_IEnumerator_T__o *v36; // x26
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  QuestEntity_o *v45; // x0
  __int64 v46; // x1
  QuestEntity_o *v47; // x28
  const MethodInfo *v48; // x1
  System_Collections_Generic_List_int__o *allBannerIdList; // x0
  __int64 v50; // x1
  const MethodInfo *v51; // x1
  System_Collections_Generic_List_int__o *v52; // x0
  __int64 v53; // x1
  __int64 bannerId; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  int32_t v58; // w29
  System_String_o *ApSpriteFileName; // x29
  const MethodInfo *v60; // x1
  System_Collections_Generic_List_int__o *successBannerIdList; // x0
  __int64 v62; // x1
  __int64 v63; // x1
  struct System_Int32_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  __int64 v67; // x1
  System_Collections_Generic_IEnumerator_T__c *v68; // x8
  __int64 v69; // x9
  int32_t *v70; // x10
  __int64 v71; // x0
  System_Collections_Generic_IEnumerator_T__c *v72; // x8
  __int64 v73; // x9
  int *v74; // x10
  __int64 v75; // x0
  System_Collections_Generic_IEnumerator_T__o *v76; // [xsp+18h] [xbp-88h]
  _DWORD *v77; // [xsp+20h] [xbp-80h]
  Il2CppObject *v78; // [xsp+28h] [xbp-78h]
  int v79; // [xsp+34h] [xbp-6Ch]
  _DWORD *v80; // [xsp+38h] [xbp-68h]

  if ( (byte_4CEBAB8 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_QuestEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_WarEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntityList__);
    sub_1C7BAE8(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntityList__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_WarEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_QuestEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C7BAE8(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&UISprite_TypeInfo);
    byte_4CEBAB8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_111;
  v5 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_WarMaster___);
  v7 = DataManager__GetMasterData_object_(v5, (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_MapMaster___);
  v8 = DataManager__GetMasterData_object_(
         v5,
         (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_SpotMaster___);
  v9 = DataManager__GetMasterData_object_(
         v5,
         (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestMaster___);
  v10 = (UISprite_o *)sub_1C7BD34(UISprite_TypeInfo);
  UISprite___ctor(v10, 0);
  if ( !MasterData_object || (Instance = (Il2CppObject *)MasterData_object[2].monitor) == 0 )
LABEL_111:
    sub_1C7BD40(Instance, v4);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_WarEntity__GetEnumerator__);
  v76 = Enumerator;
  if ( !Enumerator )
    sub_1C7BD40(0, v12);
  v13 = Enumerator;
  v78 = v9;
  while ( 1 )
  {
LABEL_8:
    klass = v13->klass;
    v15 = *(unsigned __int16 *)&v13->klass->_2.rank;
    if ( *(_WORD *)&v13->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_12;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v17 = sub_1C51E70(v13, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            v13,
            *(_QWORD *)(v17 + 8))
        & 1) == 0 )
      break;
    v19 = v13->klass;
    v20 = *(unsigned __int16 *)&v13->klass->_2.rank;
    if ( *(_WORD *)&v13->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_WarEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_19;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_19:
      v22 = sub_1C51E70(v13, System_Collections_Generic_IEnumerator_WarEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            v13,
            *(_QWORD *)(v22 + 8));
    if ( !v23 )
      sub_1C7BD40(0, v24);
    if ( *(int *)(v23 + 96) >= 1 )
    {
      if ( !v7 )
        sub_1C7BD40(0, v24);
      List = MapMaster__getList((MapMaster_o *)v7, *(_DWORD *)(v23 + 16), 0);
      if ( !List )
        sub_1C7BD40(0, v26);
      v27 = List[6];
      v77 = List;
      if ( v27 >= 1 )
      {
        v28 = 0;
        while ( 1 )
        {
          if ( v28 >= (unsigned int)v27 )
            sub_1C7BD48(List);
          v29 = *(_QWORD *)&v77[2 * v28 + 8];
          if ( !v29 )
            sub_1C7BD40(List, v26);
          if ( !v8 )
            sub_1C7BD40(0, v26);
          List = SpotMaster__getList((SpotMaster_o *)v8, *(_DWORD *)(v29 + 16), 0);
          if ( !List )
            sub_1C7BD40(0, v26);
          v30 = List[6];
          v80 = List;
          if ( v30 < 1 )
            goto LABEL_91;
          v31 = 0;
          v79 = v28;
          do
          {
            if ( v31 >= (unsigned int)v30 )
              sub_1C7BD48(List);
            v32 = *(_QWORD *)&v80[2 * v31 + 8];
            if ( !v32 )
              sub_1C7BD40(List, v26);
            if ( !v9 )
              sub_1C7BD40(List, v26);
            monitor = (System_Collections_ObjectModel_Collection_T__o *)v9[2].monitor;
            if ( !monitor )
              sub_1C7BD40(0, v26);
            v34 = *(_DWORD *)(v32 + 16);
            v36 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                    monitor,
                    (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_QuestEntity__GetEnumerator__);
            if ( !v36 )
              sub_1C7BD40(0, v35);
            while ( 1 )
            {
              v37 = v36->klass;
              v38 = *(unsigned __int16 *)&v36->klass->_2.rank;
              if ( *(_WORD *)&v36->klass->_2.rank )
              {
                v39 = &v37->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v38;
                  v39 += 4;
                  if ( !v38 )
                    goto LABEL_42;
                }
                v40 = (__int64)&v37->vtable[*v39];
              }
              else
              {
LABEL_42:
                v40 = sub_1C51E70(v36, System_Collections_IEnumerator_TypeInfo, 0);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                      v36,
                      *(_QWORD *)(v40 + 8))
                  & 1) == 0 )
                break;
              v41 = v36->klass;
              v42 = *(unsigned __int16 *)&v36->klass->_2.rank;
              if ( *(_WORD *)&v36->klass->_2.rank )
              {
                v43 = &v41->_1.interfaceOffsets->offset;
                while ( *((System_Collections_Generic_IEnumerator_QuestEntity__c **)v43 - 1) != System_Collections_Generic_IEnumerator_QuestEntity__TypeInfo )
                {
                  --v42;
                  v43 += 4;
                  if ( !v42 )
                    goto LABEL_49;
                }
                v44 = (__int64)&v41->vtable[*v43];
              }
              else
              {
LABEL_49:
                v44 = sub_1C51E70(v36, System_Collections_Generic_IEnumerator_QuestEntity__TypeInfo, 0);
              }
              v45 = (QuestEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                       v36,
                                       *(_QWORD *)(v44 + 8));
              v47 = v45;
              if ( !v45 )
                sub_1C7BD40(0, v46);
              if ( QuestEntity__getSpotId(v45, 0) == v34 )
              {
                allBannerIdList = CostSpriteListManager__get_allBannerIdList(this, v48);
                if ( !allBannerIdList )
                  sub_1C7BD40(0, v50);
                if ( !System_Collections_Generic_List_int___Contains(
                        allBannerIdList,
                        v47->fields.bannerId,
                        (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__) )
                {
                  v52 = CostSpriteListManager__get_allBannerIdList(this, v51);
                  if ( !v52 )
                    sub_1C7BD40(0, v53);
                  bannerId = (unsigned int)v47->fields.bannerId;
                  items = v52->fields._items;
                  v56 = Method_System_Collections_Generic_List_int__Add__;
                  ++v52->fields._version;
                  if ( !items )
                    sub_1C7BD40(v52, bannerId);
                  size = v52->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      v52,
                      bannerId,
                      *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v52->fields._size = size + 1;
                    items->m_Items[size] = bannerId;
                  }
                  v58 = v47->fields.bannerId;
                  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                  ApSpriteFileName = QuestBoardListViewItemDraw__GetApSpriteFileName(v58, 0);
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  if ( AtlasManager__SetEventUI(v10, ApSpriteFileName, 0) )
                  {
                    successBannerIdList = CostSpriteListManager__get_successBannerIdList(this, v60);
                    if ( !successBannerIdList )
                      sub_1C7BD40(0, v62);
                    v63 = (unsigned int)v47->fields.bannerId;
                    v64 = successBannerIdList->fields._items;
                    v65 = Method_System_Collections_Generic_List_int__Add__;
                    ++successBannerIdList->fields._version;
                    if ( !v64 )
                      sub_1C7BD40(successBannerIdList, v63);
                    v66 = successBannerIdList->fields._size;
                    if ( (unsigned int)v66 >= LODWORD(v64->max_length) )
                      goto LABEL_68;
LABEL_72:
                    successBannerIdList->fields._size = v66 + 1;
                    v64->m_Items[v66] = v63;
                  }
                  else
                  {
                    successBannerIdList = CostSpriteListManager__get_failedBannerIdList(this, v60);
                    if ( !successBannerIdList )
                      sub_1C7BD40(0, v67);
                    v63 = (unsigned int)v47->fields.bannerId;
                    v64 = successBannerIdList->fields._items;
                    v65 = Method_System_Collections_Generic_List_int__Add__;
                    ++successBannerIdList->fields._version;
                    if ( !v64 )
                      sub_1C7BD40(successBannerIdList, v63);
                    v66 = successBannerIdList->fields._size;
                    if ( (unsigned int)v66 < LODWORD(v64->max_length) )
                      goto LABEL_72;
LABEL_68:
                    System_Collections_Generic_List_int___AddWithResize(
                      successBannerIdList,
                      v63,
                      *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
                  }
                }
              }
            }
            v68 = v36->klass;
            v69 = *(unsigned __int16 *)&v36->klass->_2.rank;
            if ( *(_WORD *)&v36->klass->_2.rank )
            {
              v70 = &v68->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
              {
                --v69;
                v70 += 4;
                if ( !v69 )
                  goto LABEL_78;
              }
              v71 = (__int64)&v68->vtable[*v70];
            }
            else
            {
LABEL_78:
              v71 = sub_1C51E70(v36, System_IDisposable_TypeInfo, 0);
            }
            List = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v71)(
                               v36,
                               *(_QWORD *)(v71 + 8));
            v9 = v78;
            v28 = v79;
            ++v31;
            v30 = v80[6];
          }
          while ( v31 < v30 );
LABEL_91:
          v13 = v76;
          ++v28;
          v27 = v77[6];
          if ( v28 >= v27 )
            goto LABEL_8;
        }
      }
    }
  }
  if ( v13 )
  {
    v72 = v13->klass;
    v73 = *(unsigned __int16 *)&v13->klass->_2.rank;
    if ( *(_WORD *)&v13->klass->_2.rank )
    {
      v74 = &v72->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v74 - 1) != System_IDisposable_TypeInfo )
      {
        --v73;
        v74 += 4;
        if ( !v73 )
          goto LABEL_98;
      }
      v75 = (__int64)&v72->vtable[*v74];
    }
    else
    {
LABEL_98:
      v75 = sub_1C51E70(v13, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v75)(v13, *(_QWORD *)(v75 + 8));
  }
  CostSpriteListManager__SortAllList(this, v18);
}


void CostSpriteListManager__SortAllList(CostSpriteListManager_o *this, const MethodInfo *method)
{
  CostSpriteListManager_o *v2; // x19
  struct System_Collections_Generic_List_int__array *bannerIdAllList; // x19
  int max_length; // w8
  unsigned int v5; // w20

  v2 = this;
  if ( (byte_4CEBAB9 & 1) == 0 )
  {
    this = (CostSpriteListManager_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Sort__);
    byte_4CEBAB9 = 1;
  }
  bannerIdAllList = v2->fields.bannerIdAllList;
  if ( !bannerIdAllList )
    goto LABEL_11;
  max_length = bannerIdAllList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
        sub_1C7BD48(this);
      this = (CostSpriteListManager_o *)bannerIdAllList->m_Items[v5];
      if ( !this )
        break;
      System_Collections_Generic_List_int___Sort(
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_382371C *)Method_System_Collections_Generic_List_int__Sort__);
      max_length = bannerIdAllList->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_11:
    sub_1C7BD40(this, method);
  }
}


System_Collections_Generic_List_int__o *CostSpriteListManager__get_allBannerIdList(
        CostSpriteListManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__array *bannerIdAllList; // x8

  bannerIdAllList = this->fields.bannerIdAllList;
  if ( !bannerIdAllList )
    sub_1C7BD40(this, method);
  if ( !LODWORD(bannerIdAllList->max_length) )
    sub_1C7BD48(this);
  return bannerIdAllList->m_Items[0];
}


System_Collections_Generic_List_int__o *CostSpriteListManager__get_failedBannerIdList(
        CostSpriteListManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__array *bannerIdAllList; // x8

  bannerIdAllList = this->fields.bannerIdAllList;
  if ( !bannerIdAllList )
    sub_1C7BD40(this, method);
  if ( LODWORD(bannerIdAllList->max_length) <= 1 )
    sub_1C7BD48(this);
  return bannerIdAllList->m_Items[1];
}


int32_t CostSpriteListManager__get_listTypeCount(CostSpriteListManager_o *this, const MethodInfo *method)
{
  return 3;
}


System_Collections_Generic_List_int__o *CostSpriteListManager__get_successBannerIdList(
        CostSpriteListManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__array *bannerIdAllList; // x8

  bannerIdAllList = this->fields.bannerIdAllList;
  if ( !bannerIdAllList )
    sub_1C7BD40(this, method);
  if ( LODWORD(bannerIdAllList->max_length) <= 2 )
    sub_1C7BD48(this);
  return bannerIdAllList->m_Items[2];
}