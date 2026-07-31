void CostSpriteListManager___ctor(CostSpriteListManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void CostSpriteListManager__ClearAllList(CostSpriteListManager_o *this, const MethodInfo *method)
{
  CostSpriteListManager_o *v2; // x19
  struct System_Collections_Generic_List_int__array *bannerIdAllList; // x8
  int max_length; // w9
  int v5; // w11
  System_Collections_Generic_List_int__o *v6; // x12
  int v7; // w13

  v2 = this;
  if ( (byte_5935A68 & 1) == 0 )
  {
    this = (CostSpriteListManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_int__Clear__);
    byte_5935A68 = 1;
  }
  bannerIdAllList = v2->fields.bannerIdAllList;
  if ( !bannerIdAllList )
    goto LABEL_10;
  max_length = bannerIdAllList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( max_length == v5 )
        sub_21FFED4(this);
      v6 = bannerIdAllList->m_Items[v5];
      if ( !v6 )
        break;
      ++v5;
      v7 = v6->fields._version + 1;
      v6->fields._size = 0;
      v6->fields._version = v7;
      if ( (max_length & ~(max_length >> 31)) == v5 )
        return;
    }
LABEL_10:
    sub_21FFECC(this, method);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x0

  v4 = (ListViewManager_o *)this;
  if ( (byte_5935A65 & 1) == 0 )
  {
    sub_21FFC50(&CostSpriteViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (CostSpriteListManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_5935A65 = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_15;
  if ( LODWORD(klass->_1.namespaze) <= type )
    sub_21FFED4(this);
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
               (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
      v11 = sub_21FFEBC(CostSpriteViewItem_TypeInfo);
      ListViewItem___ctor_50749276((ListViewItem_o *)v11, v8, 0);
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
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + v20;
        itemList->fields._size = v20 + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), v11, v12, v13, v14, v15, v16, v17);
      }
      if ( size == ++v8 )
        goto LABEL_14;
    }
LABEL_15:
    sub_21FFECC(this, *(_QWORD *)&type);
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  unsigned __int64 v10; // x23
  __int64 v11; // x24
  unsigned int *bannerIdAllList; // x25
  System_Collections_Generic_List_int__o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  __int64 v23; // x0

  if ( (byte_5935A64 & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Generic_List_int____TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_5935A64 = 1;
  }
  v3 = (struct System_Collections_Generic_List_int__array *)sub_21FFD10(
                                                              System_Collections_Generic_List_int____TypeInfo,
                                                              3);
  this->fields.bannerIdAllList = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.bannerIdAllList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = 0;
  v11 = 8;
  do
  {
    bannerIdAllList = (unsigned int *)this->fields.bannerIdAllList;
    v13 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v13,
      (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !bannerIdAllList )
      sub_21FFECC(v14, v15);
    if ( v13 )
    {
      v14 = sub_21FFDA4(v13, *(_QWORD *)(*(_QWORD *)bannerIdAllList + 64LL));
      if ( !v14 )
      {
        v23 = sub_21FFEF0(0, v22);
        sub_21FFD90(v23, 0);
      }
    }
    if ( v10 >= bannerIdAllList[6] )
      sub_21FFED4(v14);
    *(_QWORD *)&bannerIdAllList[v11] = v13;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&bannerIdAllList[v11], (int32_t)v13, v16, v17, v18, v19, v20, v21);
    ++v10;
    v11 += 2;
  }
  while ( v10 != 3 );
}


void CostSpriteListManager__Load(CostSpriteListManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  DataManager_o *v5; // x22
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v7; // x22
  UISprite_o *v8; // x23
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *v11; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  const MethodInfo *v17; // x1
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  MapEntity_array *List; // x0
  __int64 v25; // x1
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v27; // x10
  MapEntity_o *v28; // x8
  __int64 v29; // x0
  __int64 v30; // x25
  int v31; // w8
  int i; // w24
  __int64 v33; // x8
  System_Collections_ObjectModel_Collection_T__o *monitor; // x0
  int v35; // w22
  System_Collections_Generic_IEnumerator_T__o *v36; // x0
  __int64 v37; // x1
  System_Collections_Generic_IEnumerator_T__o *v38; // x26
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  QuestEntity_o *v47; // x0
  __int64 v48; // x1
  QuestEntity_o *v49; // x26
  const MethodInfo *v50; // x1
  System_Collections_Generic_List_int__o *allBannerIdList; // x0
  __int64 v52; // x1
  const MethodInfo *v53; // x1
  System_Collections_Generic_List_int__o *v54; // x0
  __int64 bannerId; // x1
  __int64 v56; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  int32_t v60; // w27
  __int64 v61; // x1
  __int64 v62; // x2
  System_String_o *ApSpriteFileName; // x27
  const MethodInfo *v64; // x1
  System_Collections_Generic_List_int__o *successBannerIdList; // x0
  __int64 v66; // x1
  struct System_Int32_array *v67; // x8
  _QWORD *v68; // x11
  int32_t *p_size; // x9
  unsigned int v70; // w10
  System_Collections_Generic_IEnumerator_T__c *v71; // x8
  __int64 v72; // x9
  int *v73; // x10
  __int64 v74; // x0
  System_Collections_Generic_IEnumerator_T__c *v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  MapMaster_o *v79; // [xsp+8h] [xbp-B8h]
  MapEntity_array *v80; // [xsp+10h] [xbp-B0h]
  SpotMaster_o *v81; // [xsp+18h] [xbp-A8h]
  unsigned __int64 v82; // [xsp+20h] [xbp-A0h]
  Il2CppObject *v83; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_IEnumerator_T__o *v84; // [xsp+50h] [xbp-70h]
  System_Collections_Generic_IEnumerator_T__o *v85; // [xsp+58h] [xbp-68h]

  if ( (byte_5935A66 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_WarEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMasterData_MapMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_WarMaster___);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntityList__);
    sub_21FFC50(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntityList__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_WarEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_QuestEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&QuestBoardListViewItemDraw_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&UISprite_TypeInfo);
    byte_5935A66 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  v5 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarMaster___);
  v79 = (MapMaster_o *)DataManager__GetMasterData_object_(
                         v5,
                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_MapMaster___);
  v81 = (SpotMaster_o *)DataManager__GetMasterData_object_(
                          v5,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SpotMaster___);
  v7 = DataManager__GetMasterData_object_(
         v5,
         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___);
  v8 = (UISprite_o *)sub_21FFEBC(UISprite_TypeInfo);
  UISprite___ctor(v8, 0);
  if ( !MasterData_object || (Instance = (Il2CppObject *)MasterData_object[2].monitor) == 0 )
LABEL_114:
    sub_21FFECC(Instance, v4);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_WarEntity__GetEnumerator__);
  v85 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v10);
  v11 = Enumerator;
  v83 = v7;
  while ( 1 )
  {
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
      v15 = sub_2237E2C(v11, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            v11,
            *(_QWORD *)(v15 + 8));
    if ( (v16 & 1) == 0 )
      break;
    if ( !v85 )
      sub_21FFECC(v16, v17);
    v18 = v85->klass;
    v19 = *(unsigned __int16 *)&v85->klass->_2.rank;
    if ( *(_WORD *)&v85->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_WarEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_20;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_20:
      v21 = sub_2237E2C(v85, System_Collections_Generic_IEnumerator_WarEntity__TypeInfo, 0);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            v85,
            *(_QWORD *)(v21 + 8));
    if ( !v22 )
      sub_21FFECC(0, v23);
    if ( *(int *)(v22 + 96) > 0 )
    {
      if ( !v79 )
        sub_21FFECC(v22, v23);
      List = MapMaster__getList(v79, *(_DWORD *)(v22 + 16), 0);
      if ( !List )
        sub_21FFECC(0, v25);
      max_length_low = LODWORD(List->max_length);
      if ( (int)max_length_low >= 1 )
      {
        v27 = 0;
        v80 = List;
        do
        {
          if ( v27 >= max_length_low )
            sub_21FFED4(List);
          v28 = List->m_Items[v27];
          if ( !v28 )
            sub_21FFECC(List, v25);
          if ( !v81 )
            sub_21FFECC(List, v25);
          v82 = v27;
          v29 = (__int64)SpotMaster__getList(v81, v28->fields.id, 0);
          v30 = v29;
          if ( !v29 )
            sub_21FFECC(0, v25);
          v31 = *(_DWORD *)(v29 + 24);
          if ( v31 < 1 )
            goto LABEL_94;
          for ( i = 0; i < v31; ++i )
          {
            if ( i >= (unsigned int)v31 )
              sub_21FFED4(v29);
            v33 = *(_QWORD *)(v30 + 8LL * i + 32);
            if ( !v33 )
              sub_21FFECC(v29, v25);
            if ( !v7 )
              sub_21FFECC(v29, v25);
            monitor = (System_Collections_ObjectModel_Collection_T__o *)v7[2].monitor;
            if ( !monitor )
              sub_21FFECC(0, v25);
            v35 = *(_DWORD *)(v33 + 16);
            v36 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                    monitor,
                    (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_QuestEntity__GetEnumerator__);
            v38 = v36;
            v84 = v36;
            if ( !v36 )
              sub_21FFECC(0, v37);
            while ( 1 )
            {
              v39 = v38->klass;
              v40 = *(unsigned __int16 *)&v38->klass->_2.rank;
              if ( *(_WORD *)&v38->klass->_2.rank )
              {
                v41 = &v39->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v40;
                  v41 += 4;
                  if ( !v40 )
                    goto LABEL_43;
                }
                v42 = (__int64)&v39->vtable[*v41];
              }
              else
              {
LABEL_43:
                v42 = sub_2237E2C(v38, System_Collections_IEnumerator_TypeInfo, 0);
              }
              v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                      v38,
                      *(_QWORD *)(v42 + 8));
              if ( (v29 & 1) == 0 )
                break;
              if ( !v84 )
                sub_21FFECC(v29, v25);
              v43 = v84->klass;
              v44 = *(unsigned __int16 *)&v84->klass->_2.rank;
              if ( *(_WORD *)&v84->klass->_2.rank )
              {
                v45 = &v43->_1.interfaceOffsets->offset;
                while ( *((System_Collections_Generic_IEnumerator_QuestEntity__c **)v45 - 1) != System_Collections_Generic_IEnumerator_QuestEntity__TypeInfo )
                {
                  --v44;
                  v45 += 4;
                  if ( !v44 )
                    goto LABEL_51;
                }
                v46 = (__int64)&v43->vtable[*v45];
              }
              else
              {
LABEL_51:
                v46 = sub_2237E2C(v84, System_Collections_Generic_IEnumerator_QuestEntity__TypeInfo, 0);
              }
              v47 = (QuestEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(
                                       v84,
                                       *(_QWORD *)(v46 + 8));
              v49 = v47;
              if ( !v47 )
                sub_21FFECC(0, v48);
              if ( QuestEntity__getSpotId(v47, 0) == v35 )
              {
                allBannerIdList = CostSpriteListManager__get_allBannerIdList(this, v50);
                if ( !allBannerIdList )
                  sub_21FFECC(0, v52);
                if ( !System_Collections_Generic_List_int___Contains(
                        allBannerIdList,
                        v49->fields.bannerId,
                        (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__) )
                {
                  v54 = CostSpriteListManager__get_allBannerIdList(this, v53);
                  if ( !v54
                    || (items = v54->fields._items,
                        bannerId = (unsigned int)v49->fields.bannerId,
                        v58 = Method_System_Collections_Generic_List_int__Add__,
                        ++v54->fields._version,
                        !items) )
                  {
                    sub_21FFECC(v54, bannerId);
                  }
                  size = v54->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      v54,
                      bannerId,
                      *(const MethodInfo_4433138 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v54->fields._size = size + 1;
                    items->m_Items[size] = bannerId;
                  }
                  v60 = v49->fields.bannerId;
                  if ( !*(&QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo, bannerId, v56);
                  ApSpriteFileName = QuestBoardListViewItemDraw__GetApSpriteFileName(v60, 0);
                  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v61, v62);
                  if ( AtlasManager__SetEventUI(v8, ApSpriteFileName, 0) )
                  {
                    successBannerIdList = CostSpriteListManager__get_successBannerIdList(this, v64);
                    if ( !successBannerIdList
                      || (v67 = successBannerIdList->fields._items,
                          v66 = (unsigned int)v49->fields.bannerId,
                          v68 = Method_System_Collections_Generic_List_int__Add__,
                          ++successBannerIdList->fields._version,
                          !v67) )
                    {
                      sub_21FFECC(successBannerIdList, v66);
                    }
                    p_size = &successBannerIdList->fields._size;
                    v70 = successBannerIdList->fields._size;
                    if ( v70 < LODWORD(v67->max_length) )
                      goto LABEL_74;
                  }
                  else
                  {
                    successBannerIdList = CostSpriteListManager__get_failedBannerIdList(this, v64);
                    if ( !successBannerIdList
                      || (v67 = successBannerIdList->fields._items,
                          v66 = (unsigned int)v49->fields.bannerId,
                          v68 = Method_System_Collections_Generic_List_int__Add__,
                          ++successBannerIdList->fields._version,
                          !v67) )
                    {
                      sub_21FFECC(successBannerIdList, v66);
                    }
                    p_size = &successBannerIdList->fields._size;
                    v70 = successBannerIdList->fields._size;
                    if ( v70 < LODWORD(v67->max_length) )
                    {
LABEL_74:
                      *p_size = v70 + 1;
                      v67->m_Items[v70] = v66;
                      goto LABEL_76;
                    }
                  }
                  System_Collections_Generic_List_int___AddWithResize(
                    successBannerIdList,
                    v66,
                    *(const MethodInfo_4433138 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
                }
              }
LABEL_76:
              v38 = v84;
            }
            if ( v84 )
            {
              v71 = v84->klass;
              v72 = *(unsigned __int16 *)&v84->klass->_2.rank;
              if ( *(_WORD *)&v84->klass->_2.rank )
              {
                v73 = &v71->_1.interfaceOffsets->offset;
                while ( *((System_IDisposable_c **)v73 - 1) != System_IDisposable_TypeInfo )
                {
                  --v72;
                  v73 += 4;
                  if ( !v72 )
                    goto LABEL_83;
                }
                v74 = (__int64)&v71->vtable[*v73];
              }
              else
              {
LABEL_83:
                v74 = sub_2237E2C(v84, System_IDisposable_TypeInfo, 0);
              }
              v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v74)(
                      v84,
                      *(_QWORD *)(v74 + 8));
            }
            v31 = *(_DWORD *)(v30 + 24);
            v7 = v83;
          }
LABEL_94:
          List = v80;
          max_length_low = LODWORD(v80->max_length);
          v27 = v82 + 1;
        }
        while ( (int)v82 + 1 < (int)max_length_low );
      }
    }
    v11 = v85;
  }
  if ( v85 )
  {
    v75 = v85->klass;
    v76 = *(unsigned __int16 *)&v85->klass->_2.rank;
    if ( *(_WORD *)&v85->klass->_2.rank )
    {
      v77 = &v75->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
      {
        --v76;
        v77 += 4;
        if ( !v76 )
          goto LABEL_102;
      }
      v78 = (__int64)&v75->vtable[*v77];
    }
    else
    {
LABEL_102:
      v78 = sub_2237E2C(v85, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v78)(v85, *(_QWORD *)(v78 + 8));
  }
  CostSpriteListManager__SortAllList(this, v17);
}


void CostSpriteListManager__SortAllList(CostSpriteListManager_o *this, const MethodInfo *method)
{
  CostSpriteListManager_o *v2; // x19
  struct System_Collections_Generic_List_int__array *bannerIdAllList; // x19
  int max_length; // w8
  __int64 v5; // x20

  v2 = this;
  if ( (byte_5935A67 & 1) == 0 )
  {
    this = (CostSpriteListManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_int__Sort__);
    byte_5935A67 = 1;
  }
  bannerIdAllList = v2->fields.bannerIdAllList;
  if ( !bannerIdAllList )
    goto LABEL_10;
  max_length = bannerIdAllList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v5 >= max_length )
        sub_21FFED4(this);
      this = (CostSpriteListManager_o *)bannerIdAllList->m_Items[v5];
      if ( !this )
        break;
      System_Collections_Generic_List_int___Sort(
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_4434A40 *)Method_System_Collections_Generic_List_int__Sort__);
      max_length = bannerIdAllList->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_10:
    sub_21FFECC(this, method);
  }
}


System_Collections_Generic_List_int__o *CostSpriteListManager__get_allBannerIdList(
        CostSpriteListManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__array *bannerIdAllList; // x8

  bannerIdAllList = this->fields.bannerIdAllList;
  if ( !bannerIdAllList )
    sub_21FFECC(this, method);
  if ( !LODWORD(bannerIdAllList->max_length) )
    sub_21FFED4(this);
  return bannerIdAllList->m_Items[0];
}


System_Collections_Generic_List_int__o *CostSpriteListManager__get_failedBannerIdList(
        CostSpriteListManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__array *bannerIdAllList; // x8

  bannerIdAllList = this->fields.bannerIdAllList;
  if ( !bannerIdAllList )
    sub_21FFECC(this, method);
  if ( (bannerIdAllList->max_length & 0xFFFFFFFE) == 0 )
    sub_21FFED4(this);
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
    sub_21FFECC(this, method);
  if ( LODWORD(bannerIdAllList->max_length) <= 2 )
    sub_21FFED4(this);
  return bannerIdAllList->m_Items[2];
}