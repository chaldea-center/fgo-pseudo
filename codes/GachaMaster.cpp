void __fastcall GachaMaster___ctor(GachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B3F2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__);
    byte_4A5B3F2 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    32,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__);
}


bool __fastcall GachaMaster__CheckIsDrawGroupSummon(GachaMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  GachaEntity_array *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x21
  const MethodInfo *v8; // x2
  int max_length; // w8
  GachaEntity_array *v10; // x19
  unsigned int v11; // w20
  GachaEntity_o *v12; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B3FA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_GachaGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
    byte_4A5B3FA = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GachaEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !Master_object )
    goto LABEL_20;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         groupId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v7 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserGachaMaster___);
    Master_object = GachaMaster__getGachaDataInGroup(this, groupId, v8);
    if ( !Master_object )
      goto LABEL_20;
    max_length = Master_object->max_length;
    v10 = Master_object;
    if ( max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= max_length )
          sub_1B88814(Master_object, v6);
        v12 = v10->m_Items[v11];
        if ( !v12 || !v7 )
          break;
        Master_object = (GachaEntity_array *)UserGachaMaster__checkIsDrawGroupSummon(
                                               (UserGachaMaster_o *)v7,
                                               v12->fields.id,
                                               0LL);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          max_length = v10->max_length;
          if ( (int)++v11 < max_length )
            continue;
        }
        return (unsigned __int8)Master_object & 1;
      }
LABEL_20:
      sub_1B8880C(Master_object, v6);
    }
  }
  LOBYTE(Master_object) = 0;
  return (unsigned __int8)Master_object & 1;
}


bool __fastcall GachaMaster__CheckIsMaxDrawNum(
        GachaMaster_o *this,
        UserGachaEntity_o *drawUsrGachaEnt,
        GachaEntity_o **drawGachaEnt,
        const MethodInfo *method)
{
  GachaEntity_o *v6; // x8
  int32_t gachaGroupId; // w20
  int32_t klass_high; // w8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B3F9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_GachaGroupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    this = (GachaMaster_o *)sub_1B885B0(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
    byte_4A5B3F9 = 1;
  }
  entity = 0LL;
  v6 = *drawGachaEnt;
  if ( !*drawGachaEnt )
    goto LABEL_12;
  gachaGroupId = v6->fields.gachaGroupId;
  if ( gachaGroupId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (GachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GachaGroupMaster___);
    if ( this )
    {
      this = (GachaMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                &entity,
                                gachaGroupId,
                                (const MethodInfo_311D988 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) == 0 )
        return 0;
      if ( !entity )
        goto LABEL_12;
      klass_high = HIDWORD(entity[1].klass);
      if ( klass_high < 1 )
        return 0;
      if ( !drawUsrGachaEnt )
        goto LABEL_12;
      return drawUsrGachaEnt->fields.num >= klass_high;
    }
LABEL_12:
    sub_1B8880C(this, drawUsrGachaEnt);
  }
  klass_high = v6->fields.maxDrawNum;
  if ( klass_high < 1 )
    return 0;
  if ( !drawUsrGachaEnt )
    goto LABEL_12;
  return drawUsrGachaEnt->fields.num >= klass_high;
}


System_Collections_Generic_List_GachaEntity__o *__fastcall GachaMaster__GetValidGachaEntityList(
        GachaMaster_o *this,
        const MethodInfo *method)
{
  int64_t UserId; // x21
  Il2CppObject *Master_object; // x22
  Il2CppObject *v5; // x23
  Il2CppObject *v6; // x24
  const MethodInfo *v7; // x1
  GachaEntity_array *ListValidData; // x25
  System_Collections_Generic_List_object__o *v9; // x19
  GachaMaster_o *ClearNum; // x0
  __int64 gachaGroupId; // x1
  int max_length; // w8
  unsigned int v13; // w28
  GachaEntity_o *v14; // x26
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_object__o *v22; // x20
  int32_t v23; // w21
  GachaMaster_o *v24; // x23
  int32_t v25; // w24
  Il2CppObject *v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0
  UserGachaEntity_o *drawUsrGachaEnt; // [xsp+0h] [xbp-80h] BYREF
  UserGachaEntity_o *v35; // [xsp+8h] [xbp-78h] BYREF
  GachaEntity_o *drawGachaEnt; // [xsp+10h] [xbp-70h] BYREF
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A5B3F8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_GachaReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaEntity__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5B3F8 = 1;
  }
  v35 = 0LL;
  drawGachaEnt = 0LL;
  drawUsrGachaEnt = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserQuestMaster___);
  v5 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserGachaMaster___);
  v6 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GachaReleaseMaster___);
  ListValidData = GachaMaster__getListValidData(this, v7);
  entity = 0LL;
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_63;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1B88814(ClearNum, gachaGroupId);
      v14 = ListValidData->m_Items[v13];
      drawGachaEnt = v14;
      if ( !v14 || !Master_object )
        goto LABEL_63;
      ClearNum = (GachaMaster_o *)UserQuestMaster__TryGetEntity(
                                    (UserQuestMaster_o *)Master_object,
                                    &entity,
                                    UserId,
                                    v14->fields.condQuestId,
                                    0LL);
      if ( ((unsigned __int8)ClearNum & 1) != 0 )
      {
        ClearNum = (GachaMaster_o *)entity;
        if ( !entity )
          goto LABEL_63;
        ClearNum = (GachaMaster_o *)UserQuestEntity__getClearNum(entity, 0LL);
        if ( (int)ClearNum > 0 )
          goto LABEL_67;
        ClearNum = (GachaMaster_o *)entity;
        if ( !entity )
          goto LABEL_63;
        ClearNum = (GachaMaster_o *)UserQuestEntity__getQuestPhase(entity, 0LL);
        if ( (int)ClearNum >= v14->fields.condQuestPhase )
        {
LABEL_67:
          if ( !v6 )
            goto LABEL_63;
          ClearNum = (GachaMaster_o *)GachaReleaseMaster__IsEnableRelease(
                                        (GachaReleaseMaster_o *)v6,
                                        v14->fields.id,
                                        v15);
          if ( ((unsigned __int8)ClearNum & 1) != 0 )
          {
            LODWORD(v17) = v14->fields.beforeGachaId;
            if ( (int)v17 <= 0 )
              goto LABEL_34;
            if ( !v5 )
              goto LABEL_63;
            ClearNum = (GachaMaster_o *)UserGachaMaster__TryGetEntity(
                                          (UserGachaMaster_o *)v5,
                                          &v35,
                                          UserId,
                                          (int32_t)v17,
                                          0LL);
            if ( ((unsigned __int8)ClearNum & 1) != 0 )
            {
              ClearNum = (GachaMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            v14->fields.beforeGachaId,
                                            (const MethodInfo_311D934 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
              if ( !v35 || !ClearNum )
                goto LABEL_63;
              if ( v35->fields.num >= *(&ClearNum[1].fields._MasterKind_k__BackingField + 1) )
              {
                if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
                ClearNum = (GachaMaster_o *)TutorialFlag__IsProgressDone(2, 0LL);
                if ( ((unsigned __int8)ClearNum & 1) != 0 )
                  break;
              }
            }
          }
        }
      }
LABEL_39:
      max_length = ListValidData->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_40;
    }
    ClearNum = (GachaMaster_o *)UserGachaMaster__TryGetEntity(
                                  (UserGachaMaster_o *)v5,
                                  &drawUsrGachaEnt,
                                  UserId,
                                  v14->fields.id,
                                  0LL);
    if ( ((unsigned __int8)ClearNum & 1) != 0 )
    {
      ClearNum = (GachaMaster_o *)GachaMaster__CheckIsMaxDrawNum(ClearNum, drawUsrGachaEnt, &drawGachaEnt, v17);
      if ( ((unsigned __int8)ClearNum & 1) != 0 )
        goto LABEL_39;
    }
    else
    {
      gachaGroupId = (unsigned int)v14->fields.gachaGroupId;
      if ( (int)gachaGroupId >= 1 )
      {
        ClearNum = (GachaMaster_o *)GachaMaster__CheckIsDrawGroupSummon(this, gachaGroupId, v16);
        if ( ((unsigned __int8)ClearNum & 1) != 0 )
          goto LABEL_39;
      }
    }
LABEL_34:
    if ( !v9 )
      goto LABEL_63;
    items = v9->fields._items;
    v19 = Method_System_Collections_Generic_List_GachaEntity__Add__;
    ++v9->fields._version;
    if ( !items )
      goto LABEL_63;
    size = v9->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v9,
        (Il2CppObject *)v14,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      v9->fields._size = size + 1;
      v21[4] = (Il2CppClass *)v14;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v14, (int32_t)v16, (int32_t)v17);
    }
    goto LABEL_39;
  }
LABEL_40:
  v22 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !v9 )
LABEL_63:
    sub_1B8880C(ClearNum, gachaGroupId);
  if ( v9->fields._size >= 1 )
  {
    v23 = 0;
    do
    {
      ClearNum = (GachaMaster_o *)System_Collections_Generic_List_object___get_Item(
                                    v9,
                                    v23,
                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
      v24 = ClearNum;
      if ( v9->fields._size < 1 )
      {
        v26 = (Il2CppObject *)ClearNum;
        if ( !v22 )
          goto LABEL_63;
      }
      else
      {
        v25 = 0;
        v26 = (Il2CppObject *)ClearNum;
        do
        {
          ClearNum = (GachaMaster_o *)System_Collections_Generic_List_object___get_Item(
                                        v9,
                                        v25,
                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
          if ( !v24 || !ClearNum )
            goto LABEL_63;
          if ( v24->fields._MasterKind_k__BackingField != ClearNum->fields._MasterKind_k__BackingField
            && HIDWORD(v24->fields._lookup) == HIDWORD(ClearNum->fields._lookup) )
          {
            if ( !v26 )
              goto LABEL_63;
            if ( SHIDWORD(v26[2].klass) < SHIDWORD(ClearNum->fields.list) )
              v26 = (Il2CppObject *)ClearNum;
          }
          ++v25;
        }
        while ( v25 < v9->fields._size );
        if ( !v22 )
          goto LABEL_63;
      }
      ClearNum = (GachaMaster_o *)System_Collections_Generic_List_object___Contains(
                                    v22,
                                    v26,
                                    (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_GachaEntity__Contains__);
      if ( ((unsigned __int8)ClearNum & 1) == 0 )
      {
        v29 = v22->fields._items;
        v30 = Method_System_Collections_Generic_List_GachaEntity__Add__;
        ++v22->fields._version;
        if ( !v29 )
          goto LABEL_63;
        v31 = v22->fields._size;
        if ( (unsigned int)v31 >= v29->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            v26,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &v29->obj.klass + v31;
          v22->fields._size = v31 + 1;
          v32[4] = (Il2CppClass *)v26;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)v26, v27, v28);
        }
      }
      ++v23;
    }
    while ( v23 < v9->fields._size );
  }
  return (System_Collections_Generic_List_GachaEntity__o *)v22;
}


GachaEntity_o *__fastcall GachaMaster__getFriendPointGachaEntity(GachaMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_IEnumerable_T__o *ListByPayType; // x20
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  GachaMaster___c_c *v7; // x0
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v9; // x21
  struct GachaMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5B3F4 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_GachaEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaEntity___ctor___76034656);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_1B885B0(&Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__);
    sub_1B885B0(&GachaMaster___c_TypeInfo);
    byte_4A5B3F4 = 1;
  }
  ListByPayType = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListByPayType(this, 3, v2);
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_55562536(
    v5,
    ListByPayType,
    (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_GachaEntity___ctor___76034656);
  v7 = GachaMaster___c_TypeInfo;
  if ( !GachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo);
    v7 = GachaMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Comparison_T__o *)v7->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = GachaMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_GachaEntity__TypeInfo);
    System_Comparison_object____ctor(_9__2_0, v9, Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__, 0LL);
    static_fields = GachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_GachaEntity__o *)_9__2_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v11, v12);
  }
  if ( !v5 )
    sub_1B8880C(v7, v6);
  System_Collections_Generic_List_object___Sort_55571192(
    v5,
    _9__2_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_GachaEntity__Sort__);
  return (GachaEntity_o *)System_Collections_Generic_List_object___get_Item(
                            v5,
                            0,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_array *__fastcall GachaMaster__getGachaDataInGroup(
        GachaMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  GachaEntity_array *ListValidData; // x20
  System_Collections_Generic_List_object__o *v6; // x0
  System_Collections_Generic_List_object__o *v7; // x21
  __int64 v8; // x0
  GachaEntity_o *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int max_length; // w8
  unsigned int v13; // w22
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4A5B3F7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaEntity___ctor___76034656);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    byte_4A5B3F7 = 1;
  }
  ListValidData = GachaMaster__getListValidData(this, *(const MethodInfo **)&groupId);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_55562536(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)ListValidData,
    (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_GachaEntity___ctor___76034656);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_17;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1B88814(v8, v9);
      v9 = ListValidData->m_Items[v13];
      if ( !v9 )
        break;
      if ( v9->fields.gachaGroupId == groupId )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v15 = Method_System_Collections_Generic_List_GachaEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)v9,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v9;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v9, v10, v11);
        }
      }
      max_length = ListValidData->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1B8880C(v8, v9);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v7,
                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


GachaEntity_array *__fastcall GachaMaster__getListByPayType(
        GachaMaster_o *this,
        int32_t gachaType,
        const MethodInfo *method)
{
  int64_t Time; // x22
  System_Collections_Generic_List_object__o *v6; // x21
  System_Collections_ObjectModel_Collection_T__o *v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v9; // w23
  int32_t v10; // w24
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4A5B3F3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&GachaEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B3F3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v9 = (int)list;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v7 = list;
        methodPtr_low = LOBYTE(GachaEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (GachaEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == GachaEntity_TypeInfo
          && LODWORD(list[2].klass) == gachaType
          && Time >= (__int64)list[4].monitor
          && Time <= (__int64)list[4].fields.items )
        {
          if ( !v6 )
            break;
          items = v6->fields._items;
          v15 = Method_System_Collections_Generic_List_GachaEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            break;
          size = v6->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v17[4] = (Il2CppClass *)v7;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v7, v11, v12);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B8880C(list, v7);
  }
LABEL_21:
  if ( !v6 )
    goto LABEL_23;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v6,
                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


GachaEntity_array *__fastcall GachaMaster__getListValidData(GachaMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v4; // x20
  System_Collections_ObjectModel_Collection_T__o *v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v7; // w22
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5B3F5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&GachaEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B3F5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v7 = (int)list;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v5 = list;
        methodPtr_low = LOBYTE(GachaEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (GachaEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == GachaEntity_TypeInfo
          && Time >= (__int64)list[4].monitor
          && Time <= (__int64)list[4].fields.items )
        {
          if ( !v4 )
            break;
          items = v4->fields._items;
          v13 = Method_System_Collections_Generic_List_GachaEntity__Add__;
          ++v4->fields._version;
          if ( !items )
            break;
          size = v4->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v5;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v5, v9, v10);
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B8880C(list, v5);
  }
LABEL_20:
  if ( !v4 )
    goto LABEL_22;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v4,
                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


int32_t __fastcall GachaMaster__getVaildPayType(GachaMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *ListValidData; // x20
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x1
  void *Item; // x0
  System_Comparison_T__o *v7; // x20
  Il2CppObject *v8; // x21
  struct GachaMaster___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5B3F6 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_GachaEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaEntity___ctor___76034656);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_1B885B0(&Method_GachaMaster___c__getVaildPayType_b__4_0__);
    sub_1B885B0(&GachaMaster___c_TypeInfo);
    byte_4A5B3F6 = 1;
  }
  ListValidData = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListValidData(this, method);
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_55562536(
    v4,
    ListValidData,
    (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_GachaEntity___ctor___76034656);
  Item = GachaMaster___c_TypeInfo;
  if ( !GachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo);
    Item = GachaMaster___c_TypeInfo;
  }
  v7 = *(System_Comparison_T__o **)(*((_QWORD *)Item + 23) + 16LL);
  if ( !v7 )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      Item = GachaMaster___c_TypeInfo;
    }
    v8 = (Il2CppObject *)**((_QWORD **)Item + 23);
    v7 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_GachaEntity__TypeInfo);
    System_Comparison_object____ctor(v7, v8, Method_GachaMaster___c__getVaildPayType_b__4_0__, 0LL);
    static_fields = GachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_GachaEntity__o *)v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)v7, v10, v11);
  }
  if ( !v4
    || (System_Collections_Generic_List_object___Sort_55571192(
          v4,
          v7,
          (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_GachaEntity__Sort__),
        (Item = System_Collections_Generic_List_object___get_Item(
                  v4,
                  0,
                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__)) == 0LL) )
  {
    sub_1B8880C(Item, v5);
  }
  return *((_DWORD *)Item + 12);
}


void __fastcall GachaMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B3FB & 1) == 0 )
  {
    sub_1B885B0(&GachaMaster___c_TypeInfo);
    byte_4A5B3FB = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(GachaMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  GachaMaster___c_TypeInfo->static_fields->__9 = (struct GachaMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)GachaMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall GachaMaster___c___ctor(GachaMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall GachaMaster___c___getFriendPointGachaEntity_b__2_0(
        GachaMaster___c_o *this,
        GachaEntity_o *a,
        GachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall GachaMaster___c___getVaildPayType_b__4_0(
        GachaMaster___c_o *this,
        GachaEntity_o *a,
        GachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}