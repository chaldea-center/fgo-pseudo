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
  if ( (byte_4C40446 & 1) == 0 )
  {
    this = (CostSpriteListManager_o *)sub_1C37058(&Method_System_Collections_Generic_List_int__Clear__);
    byte_4C40446 = 1;
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
        sub_1C372BC(this);
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
    sub_1C372B4(this);
  }
}


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
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  Il2CppClass **v17; // x0

  v4 = (ListViewManager_o *)this;
  if ( (byte_4C40443 & 1) == 0 )
  {
    sub_1C37058(&CostSpriteViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (CostSpriteListManager_o *)sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4C40443 = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_15;
  if ( LODWORD(klass->_1.namespaze) <= type )
    sub_1C372BC(this);
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
               (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
      v11 = sub_1C372A4(CostSpriteViewItem_TypeInfo);
      ListViewItem___ctor_43804668((ListViewItem_o *)v11, v8, 0);
      *(_DWORD *)(v11 + 120) = Item;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v15 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      v16 = itemList->fields._size;
      if ( (unsigned int)v16 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v11,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + v16;
        itemList->fields._size = v16 + 1;
        v17[4] = (Il2CppClass *)v11;
        sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), v11, v12, v13);
      }
      if ( size == ++v8 )
        goto LABEL_14;
    }
LABEL_15:
    sub_1C372B4(this);
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
  const MethodInfo *v6; // x3
  __int64 v7; // x23
  __int64 v8; // x24
  unsigned int *v9; // x25
  System_Collections_Generic_List_int__o *v10; // x20
  __int64 v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  bool v14; // cf
  __int64 v15; // x0

  if ( (byte_4C40442 & 1) == 0 )
  {
    sub_1C37058(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C40442 = 1;
  }
  v3 = (struct System_Collections_Generic_List_int__array *)sub_1C37100(
                                                              System_Collections_Generic_List_int____TypeInfo,
                                                              3);
  p_bannerIdAllList = &this->fields.bannerIdAllList;
  this->fields.bannerIdAllList = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bannerIdAllList, (int32_t)v3, v5, v6);
  v7 = -3;
  v8 = 8;
  do
  {
    v9 = (unsigned int *)*p_bannerIdAllList;
    v10 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v10,
      (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !v9 )
      sub_1C372B4(v11);
    if ( v10 )
    {
      v11 = sub_1C37194(v10, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
      if ( !v11 )
      {
        v15 = sub_1C372D8();
        sub_1C37180(v15, 0);
      }
    }
    if ( v7 + 3 >= (unsigned __int64)v9[6] )
      sub_1C372BC(v11);
    *(_QWORD *)&v9[v8] = v10;
    sub_1C36FFC((CGThumbnailListItem_o *)&v9[v8], (int32_t)v10, v12, v13);
    v14 = __CFADD__(v7++, 1);
    v8 += 2;
  }
  while ( !v14 );
}


void CostSpriteListManager__Load(CostSpriteListManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  DataManager_o *v4; // x23
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v6; // x21
  Il2CppObject *v7; // x22
  Il2CppObject *v8; // x26
  UISprite_o *v9; // x24
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  System_Collections_Generic_IEnumerator_T__o *v11; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 v15; // x0
  const MethodInfo *v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  _DWORD *List; // x0
  int v23; // w8
  int v24; // w27
  __int64 v25; // x8
  int v26; // w8
  int v27; // w23
  __int64 v28; // x8
  System_Collections_ObjectModel_Collection_T__o *monitor; // x0
  int v30; // w27
  System_Collections_Generic_IEnumerator_T__o *v31; // x26
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  QuestEntity_o *v40; // x0
  QuestEntity_o *v41; // x28
  const MethodInfo *v42; // x1
  System_Collections_Generic_List_int__o *allBannerIdList; // x0
  const MethodInfo *v44; // x1
  System_Collections_Generic_List_int__o *v45; // x0
  int32_t bannerId; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  int32_t v50; // w29
  System_String_o *ApSpriteFileName; // x29
  const MethodInfo *v52; // x1
  System_Collections_Generic_List_int__o *successBannerIdList; // x0
  int32_t v54; // w1
  struct System_Int32_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0
  System_Collections_Generic_IEnumerator_T__c *v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  System_Collections_Generic_IEnumerator_T__o *v66; // [xsp+18h] [xbp-88h]
  _DWORD *v67; // [xsp+20h] [xbp-80h]
  Il2CppObject *v68; // [xsp+28h] [xbp-78h]
  int v69; // [xsp+34h] [xbp-6Ch]
  _DWORD *v70; // [xsp+38h] [xbp-68h]

  if ( (byte_4C40444 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_WarEntity__GetEnumerator__);
    sub_1C37058(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C37058(&Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntityList__);
    sub_1C37058(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntityList__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_WarEntity__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_QuestEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&QuestBoardListViewItemDraw_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&UISprite_TypeInfo);
    byte_4C40444 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_111;
  v4 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarMaster___);
  v6 = DataManager__GetMasterData_object_(v4, (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_MapMaster___);
  v7 = DataManager__GetMasterData_object_(
         v4,
         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SpotMaster___);
  v8 = DataManager__GetMasterData_object_(
         v4,
         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
  v9 = (UISprite_o *)sub_1C372A4(UISprite_TypeInfo);
  UISprite___ctor(v9, 0);
  if ( !MasterData_object || (Instance = (Il2CppObject *)MasterData_object[2].monitor) == 0 )
LABEL_111:
    sub_1C372B4(Instance);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_WarEntity__GetEnumerator__);
  v66 = Enumerator;
  if ( !Enumerator )
    sub_1C372B4(0);
  v11 = Enumerator;
  v68 = v8;
  while ( 1 )
  {
LABEL_8:
    klass = v11->klass;
    v13 = *(unsigned __int16 *)&v11->klass->_2.rank;
    if ( *(_WORD *)&v11->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_12;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v15 = sub_1C87870(v11, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            v11,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v17 = v11->klass;
    v18 = *(unsigned __int16 *)&v11->klass->_2.rank;
    if ( *(_WORD *)&v11->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_WarEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_19;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_19:
      v20 = sub_1C87870(v11, System_Collections_Generic_IEnumerator_WarEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            v11,
            *(_QWORD *)(v20 + 8));
    if ( !v21 )
      sub_1C372B4(0);
    if ( *(int *)(v21 + 96) >= 1 )
    {
      if ( !v6 )
        sub_1C372B4(0);
      List = MapMaster__getList((MapMaster_o *)v6, *(_DWORD *)(v21 + 16), 0);
      if ( !List )
        sub_1C372B4(0);
      v23 = List[6];
      v67 = List;
      if ( v23 >= 1 )
      {
        v24 = 0;
        while ( 1 )
        {
          if ( v24 >= (unsigned int)v23 )
            sub_1C372BC(List);
          v25 = *(_QWORD *)&v67[2 * v24 + 8];
          if ( !v25 )
            sub_1C372B4(List);
          if ( !v7 )
            sub_1C372B4(0);
          List = SpotMaster__getList((SpotMaster_o *)v7, *(_DWORD *)(v25 + 16), 0);
          if ( !List )
            sub_1C372B4(0);
          v26 = List[6];
          v70 = List;
          if ( v26 < 1 )
            goto LABEL_91;
          v27 = 0;
          v69 = v24;
          do
          {
            if ( v27 >= (unsigned int)v26 )
              sub_1C372BC(List);
            v28 = *(_QWORD *)&v70[2 * v27 + 8];
            if ( !v28 )
              sub_1C372B4(List);
            if ( !v8 )
              sub_1C372B4(List);
            monitor = (System_Collections_ObjectModel_Collection_T__o *)v8[2].monitor;
            if ( !monitor )
              sub_1C372B4(0);
            v30 = *(_DWORD *)(v28 + 16);
            v31 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                    monitor,
                    (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_QuestEntity__GetEnumerator__);
            if ( !v31 )
              sub_1C372B4(0);
            while ( 1 )
            {
              v32 = v31->klass;
              v33 = *(unsigned __int16 *)&v31->klass->_2.rank;
              if ( *(_WORD *)&v31->klass->_2.rank )
              {
                v34 = &v32->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v33;
                  v34 += 4;
                  if ( !v33 )
                    goto LABEL_42;
                }
                v35 = (__int64)&v32->vtable[*v34];
              }
              else
              {
LABEL_42:
                v35 = sub_1C87870(v31, System_Collections_IEnumerator_TypeInfo, 0);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                      v31,
                      *(_QWORD *)(v35 + 8))
                  & 1) == 0 )
                break;
              v36 = v31->klass;
              v37 = *(unsigned __int16 *)&v31->klass->_2.rank;
              if ( *(_WORD *)&v31->klass->_2.rank )
              {
                v38 = &v36->_1.interfaceOffsets->offset;
                while ( *((System_Collections_Generic_IEnumerator_QuestEntity__c **)v38 - 1) != System_Collections_Generic_IEnumerator_QuestEntity__TypeInfo )
                {
                  --v37;
                  v38 += 4;
                  if ( !v37 )
                    goto LABEL_49;
                }
                v39 = (__int64)&v36->vtable[*v38];
              }
              else
              {
LABEL_49:
                v39 = sub_1C87870(v31, System_Collections_Generic_IEnumerator_QuestEntity__TypeInfo, 0);
              }
              v40 = (QuestEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                                       v31,
                                       *(_QWORD *)(v39 + 8));
              v41 = v40;
              if ( !v40 )
                sub_1C372B4(0);
              if ( QuestEntity__getSpotId(v40, 0) == v30 )
              {
                allBannerIdList = CostSpriteListManager__get_allBannerIdList(this, v42);
                if ( !allBannerIdList )
                  sub_1C372B4(0);
                if ( !System_Collections_Generic_List_int___Contains(
                        allBannerIdList,
                        v41->fields.bannerId,
                        (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__) )
                {
                  v45 = CostSpriteListManager__get_allBannerIdList(this, v44);
                  if ( !v45 )
                    sub_1C372B4(0);
                  bannerId = v41->fields.bannerId;
                  items = v45->fields._items;
                  v48 = Method_System_Collections_Generic_List_int__Add__;
                  ++v45->fields._version;
                  if ( !items )
                    sub_1C372B4(v45);
                  size = v45->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      v45,
                      bannerId,
                      *(const MethodInfo_3786000 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v45->fields._size = size + 1;
                    items->m_Items[size] = bannerId;
                  }
                  v50 = v41->fields.bannerId;
                  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                  ApSpriteFileName = QuestBoardListViewItemDraw__GetApSpriteFileName(v50, 0);
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  if ( AtlasManager__SetEventUI(v9, ApSpriteFileName, 0) )
                  {
                    successBannerIdList = CostSpriteListManager__get_successBannerIdList(this, v52);
                    if ( !successBannerIdList )
                      sub_1C372B4(0);
                    v54 = v41->fields.bannerId;
                    v55 = successBannerIdList->fields._items;
                    v56 = Method_System_Collections_Generic_List_int__Add__;
                    ++successBannerIdList->fields._version;
                    if ( !v55 )
                      sub_1C372B4(successBannerIdList);
                    v57 = successBannerIdList->fields._size;
                    if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
                      goto LABEL_68;
LABEL_72:
                    successBannerIdList->fields._size = v57 + 1;
                    v55->m_Items[v57] = v54;
                  }
                  else
                  {
                    successBannerIdList = CostSpriteListManager__get_failedBannerIdList(this, v52);
                    if ( !successBannerIdList )
                      sub_1C372B4(0);
                    v54 = v41->fields.bannerId;
                    v55 = successBannerIdList->fields._items;
                    v56 = Method_System_Collections_Generic_List_int__Add__;
                    ++successBannerIdList->fields._version;
                    if ( !v55 )
                      sub_1C372B4(successBannerIdList);
                    v57 = successBannerIdList->fields._size;
                    if ( (unsigned int)v57 < LODWORD(v55->max_length) )
                      goto LABEL_72;
LABEL_68:
                    System_Collections_Generic_List_int___AddWithResize(
                      successBannerIdList,
                      v54,
                      *(const MethodInfo_3786000 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
                  }
                }
              }
            }
            v58 = v31->klass;
            v59 = *(unsigned __int16 *)&v31->klass->_2.rank;
            if ( *(_WORD *)&v31->klass->_2.rank )
            {
              v60 = &v58->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
              {
                --v59;
                v60 += 4;
                if ( !v59 )
                  goto LABEL_78;
              }
              v61 = (__int64)&v58->vtable[*v60];
            }
            else
            {
LABEL_78:
              v61 = sub_1C87870(v31, System_IDisposable_TypeInfo, 0);
            }
            List = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(
                               v31,
                               *(_QWORD *)(v61 + 8));
            v8 = v68;
            v24 = v69;
            ++v27;
            v26 = v70[6];
          }
          while ( v27 < v26 );
LABEL_91:
          v11 = v66;
          ++v24;
          v23 = v67[6];
          if ( v24 >= v23 )
            goto LABEL_8;
        }
      }
    }
  }
  if ( v11 )
  {
    v62 = v11->klass;
    v63 = *(unsigned __int16 *)&v11->klass->_2.rank;
    if ( *(_WORD *)&v11->klass->_2.rank )
    {
      v64 = &v62->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
      {
        --v63;
        v64 += 4;
        if ( !v63 )
          goto LABEL_98;
      }
      v65 = (__int64)&v62->vtable[*v64];
    }
    else
    {
LABEL_98:
      v65 = sub_1C87870(v11, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v65)(v11, *(_QWORD *)(v65 + 8));
  }
  CostSpriteListManager__SortAllList(this, v16);
}


void CostSpriteListManager__SortAllList(CostSpriteListManager_o *this, const MethodInfo *method)
{
  CostSpriteListManager_o *v2; // x19
  struct System_Collections_Generic_List_int__array *bannerIdAllList; // x19
  int max_length; // w8
  unsigned int v5; // w20

  v2 = this;
  if ( (byte_4C40445 & 1) == 0 )
  {
    this = (CostSpriteListManager_o *)sub_1C37058(&Method_System_Collections_Generic_List_int__Sort__);
    byte_4C40445 = 1;
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
        sub_1C372BC(this);
      this = (CostSpriteListManager_o *)bannerIdAllList->m_Items[v5];
      if ( !this )
        break;
      System_Collections_Generic_List_int___Sort(
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_3787944 *)Method_System_Collections_Generic_List_int__Sort__);
      max_length = bannerIdAllList->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_11:
    sub_1C372B4(this);
  }
}


System_Collections_Generic_List_int__o *CostSpriteListManager__get_allBannerIdList(
        CostSpriteListManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__array *bannerIdAllList; // x8

  bannerIdAllList = this->fields.bannerIdAllList;
  if ( !bannerIdAllList )
    sub_1C372B4(this);
  if ( !LODWORD(bannerIdAllList->max_length) )
    sub_1C372BC(this);
  return bannerIdAllList->m_Items[0];
}


System_Collections_Generic_List_int__o *CostSpriteListManager__get_failedBannerIdList(
        CostSpriteListManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__array *bannerIdAllList; // x8

  bannerIdAllList = this->fields.bannerIdAllList;
  if ( !bannerIdAllList )
    sub_1C372B4(this);
  if ( LODWORD(bannerIdAllList->max_length) <= 1 )
    sub_1C372BC(this);
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
    sub_1C372B4(this);
  if ( LODWORD(bannerIdAllList->max_length) <= 2 )
    sub_1C372BC(this);
  return bannerIdAllList->m_Items[2];
}