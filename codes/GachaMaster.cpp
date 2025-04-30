void __fastcall GachaMaster___ctor(GachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E74A & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__, method);
    byte_4A4E74A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    32,
    (const MethodInfo_3211F5C *)Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__);
}


bool __fastcall GachaMaster__CheckIsMaxDrawNum(
        GachaMaster_o *this,
        UserGachaEntity_o *drawUsrGachaEnt,
        GachaEntity_o **drawGachaEnt,
        const MethodInfo *method)
{
  GachaEntity_o *v4; // x8
  int32_t maxDrawNum; // w9
  int32_t gachaGroupId; // w1

  v4 = *drawGachaEnt;
  if ( !*drawGachaEnt )
    goto LABEL_9;
  maxDrawNum = v4->fields.maxDrawNum;
  if ( maxDrawNum >= 1 )
  {
    if ( drawUsrGachaEnt )
    {
      if ( drawUsrGachaEnt->fields.num >= maxDrawNum )
        return 1;
      goto LABEL_5;
    }
LABEL_9:
    sub_1B86614(this, drawUsrGachaEnt);
  }
LABEL_5:
  gachaGroupId = v4->fields.gachaGroupId;
  return gachaGroupId >= 1
      && !GachaMaster__GetGroupRemainingDrawNum(this, gachaGroupId, (const MethodInfo *)drawGachaEnt);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall GachaMaster__GetGroupRemainingDrawNum(
        GachaMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  int32_t klass_high; // w19
  int MasterName_k__BackingField; // w8
  UserGachaMaster_o *v15; // x21
  unsigned int v16; // w23
  __int64 v17; // x26
  UserGachaEntity_o *v19; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4A4E751 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_GachaGroupMaster___, *(_QWORD *)&groupId);
    sub_1B863B8(&Method_DataManager_GetMaster_UserGachaMaster___, v5);
    sub_1B863B8(&DataManager_TypeInfo, v6);
    sub_1B863B8(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__, v7);
    sub_1B863B8(&NetworkManager_TypeInfo, v8);
    byte_4A4E751 = 1;
  }
  entity = 0LL;
  v19 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !Master_object )
    goto LABEL_29;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          groupId,
          (const MethodInfo_32142CC *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__) )
    return 0;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GachaMaster__getGachaDataInGroup(this, groupId, v11);
  if ( !entity )
    goto LABEL_29;
  v12 = Master_object;
  klass_high = HIDWORD(entity[1].klass);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserGachaMaster___);
  if ( !v12 )
    goto LABEL_29;
  MasterName_k__BackingField = (int)v12->fields._MasterName_k__BackingField;
  if ( MasterName_k__BackingField >= 1 )
  {
    v15 = (UserGachaMaster_o *)Master_object;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= MasterName_k__BackingField )
        sub_1B8661C(Master_object, v10);
      v17 = *((_QWORD *)&v12->fields.revision + (int)v16);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v10);
        byte_4A48C25 = 1;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
      }
      if ( !v17 || !v15 )
        break;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserGachaMaster__TryGetEntity(
                                                                      v15,
                                                                      &v19,
                                                                      (int64_t)Master_object[2].fields.list[1].monitor,
                                                                      *(_DWORD *)(v17 + 16),
                                                                      0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v19 )
          break;
        klass_high -= v19->fields.num;
        if ( klass_high < 1 )
          return 0;
      }
      MasterName_k__BackingField = (int)v12->fields._MasterName_k__BackingField;
      if ( (int)++v16 >= MasterName_k__BackingField )
        return klass_high;
    }
LABEL_29:
    sub_1B86614(Master_object, v10);
  }
  return klass_high;
}


System_Collections_Generic_List_GachaEntity__o *__fastcall GachaMaster__GetValidGachaEntityList(
        GachaMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  NetworkManager_c *v15; // x0
  int64_t userIdNumber; // x21
  Il2CppObject *Master_object; // x22
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x24
  const MethodInfo *v20; // x1
  GachaEntity_array *ListValidData; // x25
  System_Collections_Generic_List_object__o *v22; // x20
  void *ClearNum; // x0
  __int64 gachaGroupId; // x1
  int max_length; // w8
  unsigned int v26; // w28
  GachaEntity_o *v27; // x26
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  const MethodInfo *beforeGachaId; // x3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_List_object__o *v35; // x19
  int32_t v36; // w21
  _DWORD *v37; // x23
  int32_t v38; // w24
  Il2CppObject *v39; // x22
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  UserGachaEntity_o *drawUsrGachaEnt; // [xsp+0h] [xbp-80h] BYREF
  UserGachaEntity_o *v48; // [xsp+8h] [xbp-78h] BYREF
  GachaEntity_o *drawGachaEnt; // [xsp+10h] [xbp-70h] BYREF
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A4E750 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_GachaReleaseMaster___, method);
    sub_1B863B8(&Method_DataManager_GetMaster_UserGachaMaster___, v3);
    sub_1B863B8(&Method_DataManager_GetMaster_UserQuestMaster___, v4);
    sub_1B863B8(&DataManager_TypeInfo, v5);
    sub_1B863B8(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_GachaEntity__Add__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_GachaEntity__Contains__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_GachaEntity__get_Count__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v11);
    sub_1B863B8(&System_Collections_Generic_List_GachaEntity__TypeInfo, v12);
    sub_1B863B8(&NetworkManager_TypeInfo, v13);
    sub_1B863B8(&TutorialFlag_TypeInfo, v14);
    byte_4A4E750 = 1;
  }
  drawGachaEnt = 0LL;
  entity = 0LL;
  drawUsrGachaEnt = 0LL;
  v48 = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    byte_4A48C25 = 1;
  }
  v15 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = NetworkManager_TypeInfo;
  }
  userIdNumber = v15->static_fields->userIdNumber;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserQuestMaster___);
  v18 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserGachaMaster___);
  v19 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_GachaReleaseMaster___);
  ListValidData = GachaMaster__getListValidData(this, v20);
  entity = 0LL;
  v22 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_67;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= max_length )
        sub_1B8661C(ClearNum, gachaGroupId);
      v27 = ListValidData->m_Items[v26];
      drawGachaEnt = v27;
      if ( !v27 || !Master_object )
        goto LABEL_67;
      ClearNum = (void *)UserQuestMaster__TryGetEntity(
                           (UserQuestMaster_o *)Master_object,
                           &entity,
                           userIdNumber,
                           v27->fields.condQuestId,
                           0LL);
      if ( ((unsigned __int8)ClearNum & 1) != 0 )
      {
        ClearNum = entity;
        if ( !entity )
          goto LABEL_67;
        ClearNum = (void *)UserQuestEntity__getClearNum(entity, 0LL);
        if ( (int)ClearNum > 0 )
          goto LABEL_71;
        ClearNum = entity;
        if ( !entity )
          goto LABEL_67;
        ClearNum = (void *)UserQuestEntity__getQuestPhase(entity, 0LL);
        if ( (int)ClearNum >= v27->fields.condQuestPhase )
        {
LABEL_71:
          if ( !v19 )
            goto LABEL_67;
          ClearNum = (void *)GachaReleaseMaster__IsEnableRelease((GachaReleaseMaster_o *)v19, v27->fields.id, v28);
          if ( ((unsigned __int8)ClearNum & 1) != 0 )
          {
            beforeGachaId = (const MethodInfo *)(unsigned int)v27->fields.beforeGachaId;
            if ( (int)beforeGachaId <= 0 )
              goto LABEL_38;
            if ( !v18 )
              goto LABEL_67;
            ClearNum = (void *)UserGachaMaster__TryGetEntity(
                                 (UserGachaMaster_o *)v18,
                                 &v48,
                                 userIdNumber,
                                 (int32_t)beforeGachaId,
                                 0LL);
            if ( ((unsigned __int8)ClearNum & 1) != 0 )
            {
              ClearNum = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           v27->fields.beforeGachaId,
                           (const MethodInfo_3214280 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
              if ( !v48 || !ClearNum )
                goto LABEL_67;
              if ( v48->fields.num >= *((_DWORD *)ClearNum + 23) )
              {
                if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
                ClearNum = (void *)TutorialFlag__IsProgressDone(2, 0LL);
                if ( ((unsigned __int8)ClearNum & 1) != 0 )
                  break;
              }
            }
          }
        }
      }
LABEL_43:
      max_length = ListValidData->max_length;
      if ( (int)++v26 >= max_length )
        goto LABEL_44;
    }
    ClearNum = (void *)UserGachaMaster__TryGetEntity(
                         (UserGachaMaster_o *)v18,
                         &drawUsrGachaEnt,
                         userIdNumber,
                         v27->fields.id,
                         0LL);
    if ( ((unsigned __int8)ClearNum & 1) != 0 )
    {
      ClearNum = (void *)GachaMaster__CheckIsMaxDrawNum(this, drawUsrGachaEnt, &drawGachaEnt, beforeGachaId);
      if ( ((unsigned __int8)ClearNum & 1) != 0 )
        goto LABEL_43;
    }
    else
    {
      gachaGroupId = (unsigned int)v27->fields.gachaGroupId;
      if ( (int)gachaGroupId >= 1 )
      {
        ClearNum = (void *)GachaMaster__GetGroupRemainingDrawNum(this, gachaGroupId, v29);
        if ( !(_DWORD)ClearNum )
          goto LABEL_43;
      }
    }
LABEL_38:
    if ( !v22 )
      goto LABEL_67;
    items = v22->fields._items;
    v32 = Method_System_Collections_Generic_List_GachaEntity__Add__;
    ++v22->fields._version;
    if ( !items )
      goto LABEL_67;
    size = v22->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v22,
        (Il2CppObject *)v27,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &items->obj.klass + size;
      v22->fields._size = size + 1;
      v34[4] = (Il2CppClass *)v27;
      sub_1B8635C((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v27, (int32_t)v29, beforeGachaId);
    }
    goto LABEL_43;
  }
LABEL_44:
  v35 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !v22 )
LABEL_67:
    sub_1B86614(ClearNum, gachaGroupId);
  if ( v22->fields._size >= 1 )
  {
    v36 = 0;
    do
    {
      ClearNum = System_Collections_Generic_List_object___get_Item(
                   v22,
                   v36,
                   (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
      v37 = ClearNum;
      if ( v22->fields._size < 1 )
      {
        v39 = (Il2CppObject *)ClearNum;
        if ( !v35 )
          goto LABEL_67;
      }
      else
      {
        v38 = 0;
        v39 = (Il2CppObject *)ClearNum;
        do
        {
          ClearNum = System_Collections_Generic_List_object___get_Item(
                       v22,
                       v38,
                       (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
          if ( !v37 || !ClearNum )
            goto LABEL_67;
          if ( v37[4] != *((_DWORD *)ClearNum + 4) && v37[11] == *((_DWORD *)ClearNum + 11) )
          {
            if ( !v39 )
              goto LABEL_67;
            if ( SHIDWORD(v39[2].klass) < *((_DWORD *)ClearNum + 9) )
              v39 = (Il2CppObject *)ClearNum;
          }
          ++v38;
        }
        while ( v38 < v22->fields._size );
        if ( !v35 )
          goto LABEL_67;
      }
      ClearNum = (void *)System_Collections_Generic_List_object___Contains(
                           v35,
                           v39,
                           (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_GachaEntity__Contains__);
      if ( ((unsigned __int8)ClearNum & 1) == 0 )
      {
        v42 = v35->fields._items;
        v43 = Method_System_Collections_Generic_List_GachaEntity__Add__;
        ++v35->fields._version;
        if ( !v42 )
          goto LABEL_67;
        v44 = v35->fields._size;
        if ( (unsigned int)v44 >= v42->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v35,
            v39,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = &v42->obj.klass + v44;
          v35->fields._size = v44 + 1;
          v45[4] = (Il2CppClass *)v39;
          sub_1B8635C((CGThumbnailListItem_o *)(v45 + 4), (int32_t)v39, v40, v41);
        }
      }
      ++v36;
    }
    while ( v36 < v22->fields._size );
  }
  return (System_Collections_Generic_List_GachaEntity__o *)v35;
}


GachaEntity_o *__fastcall GachaMaster__getFriendPointGachaEntity(GachaMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_T__o *ListByPayType; // x20
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  GachaMaster___c_c *v13; // x0
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v15; // x21
  struct GachaMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4A4E74C & 1) == 0 )
  {
    sub_1B863B8(&System_Comparison_GachaEntity__TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_GachaEntity__Sort__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_GachaEntity___ctor___76034616, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v6);
    sub_1B863B8(&System_Collections_Generic_List_GachaEntity__TypeInfo, v7);
    sub_1B863B8(&Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__, v8);
    sub_1B863B8(&GachaMaster___c_TypeInfo, v9);
    byte_4A4E74C = 1;
  }
  ListByPayType = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListByPayType(this, 3, v2);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_56607308(
    v11,
    ListByPayType,
    (const MethodInfo_35FC24C *)Method_System_Collections_Generic_List_GachaEntity___ctor___76034616);
  v13 = GachaMaster___c_TypeInfo;
  if ( !GachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo);
    v13 = GachaMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Comparison_T__o *)v13->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = GachaMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_GachaEntity__TypeInfo);
    System_Comparison_object____ctor(_9__2_0, v15, Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__, 0LL);
    static_fields = GachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_GachaEntity__o *)_9__2_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v17, v18);
  }
  if ( !v11 )
    sub_1B86614(v13, v12);
  System_Collections_Generic_List_object___Sort_56615964(
    v11,
    _9__2_0,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_GachaEntity__Sort__);
  return (GachaEntity_o *)System_Collections_Generic_List_object___get_Item(
                            v11,
                            0,
                            (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_array *__fastcall GachaMaster__getGachaDataInGroup(
        GachaMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  GachaEntity_array *ListValidData; // x20
  System_Collections_Generic_List_object__o *v10; // x0
  System_Collections_Generic_List_object__o *v11; // x21
  __int64 v12; // x0
  GachaEntity_o *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int max_length; // w8
  unsigned int v17; // w22
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A4E74F & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_GachaEntity__Add__, *(_QWORD *)&groupId);
    sub_1B863B8(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_GachaEntity___ctor___76034616, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v7);
    sub_1B863B8(&System_Collections_Generic_List_GachaEntity__TypeInfo, v8);
    byte_4A4E74F = 1;
  }
  ListValidData = GachaMaster__getListValidData(this, *(const MethodInfo **)&groupId);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_56607308(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)ListValidData,
    (const MethodInfo_35FC24C *)Method_System_Collections_Generic_List_GachaEntity___ctor___76034616);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_17;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1B8661C(v12, v13);
      v13 = ListValidData->m_Items[v17];
      if ( !v13 )
        break;
      if ( v13->fields.gachaGroupId == groupId )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v19 = Method_System_Collections_Generic_List_GachaEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)v13,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v13;
          sub_1B8635C((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v13, v14, v15);
        }
      }
      max_length = ListValidData->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1B86614(v12, v13);
  }
LABEL_15:
  if ( !v11 )
    goto LABEL_17;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v11,
                                (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_array *__fastcall GachaMaster__getListByPayType(
        GachaMaster_o *this,
        int32_t gachaType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t Time; // x22
  System_Collections_Generic_List_object__o *v12; // x21
  System_Collections_ObjectModel_Collection_T__o *v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v15; // w23
  int32_t v16; // w24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4A4E74B & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Count__, *(_QWORD *)&gachaType);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Item__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_GachaEntity__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_GachaEntity__TypeInfo, v9);
    sub_1B863B8(&NetworkManager_TypeInfo, v10);
    byte_4A4E74B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v15 = (int)list;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v16,
                                                                 (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Item__);
      if ( list )
      {
        v13 = list;
        if ( LODWORD(list[2].klass) == gachaType
          && Time >= (__int64)list[4].monitor
          && Time <= (__int64)list[4].fields.items )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v20 = Method_System_Collections_Generic_List_GachaEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)list,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v13;
            sub_1B8635C((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v13, v17, v18);
          }
        }
      }
      if ( v15 == ++v16 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1B86614(list, v13);
  }
LABEL_19:
  if ( !v12 )
    goto LABEL_21;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v12,
                                (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


GachaEntity_array *__fastcall GachaMaster__getListValidData(GachaMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v10; // x20
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v13; // w22
  int32_t v14; // w23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4A4E74D & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Count__, method);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Item__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_GachaEntity__Add__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v6);
    sub_1B863B8(&System_Collections_Generic_List_GachaEntity__TypeInfo, v7);
    sub_1B863B8(&NetworkManager_TypeInfo, v8);
    byte_4A4E74D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( Time >= (__int64)list[4].monitor && Time <= (__int64)list[4].fields.items )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v18 = Method_System_Collections_Generic_List_GachaEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)list,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v11;
            sub_1B8635C((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v11, v15, v16);
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1B86614(list, v11);
  }
LABEL_18:
  if ( !v10 )
    goto LABEL_20;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v10,
                                (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


int32_t __fastcall GachaMaster__getVaildPayType(GachaMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_T__o *ListValidData; // x20
  System_Collections_Generic_List_object__o *v10; // x19
  __int64 v11; // x1
  void *Item; // x0
  System_Comparison_T__o *v13; // x20
  Il2CppObject *v14; // x21
  struct GachaMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4A4E74E & 1) == 0 )
  {
    sub_1B863B8(&System_Comparison_GachaEntity__TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_GachaEntity__Sort__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_GachaEntity___ctor___76034616, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v5);
    sub_1B863B8(&System_Collections_Generic_List_GachaEntity__TypeInfo, v6);
    sub_1B863B8(&Method_GachaMaster___c__getVaildPayType_b__4_0__, v7);
    sub_1B863B8(&GachaMaster___c_TypeInfo, v8);
    byte_4A4E74E = 1;
  }
  ListValidData = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListValidData(this, method);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_56607308(
    v10,
    ListValidData,
    (const MethodInfo_35FC24C *)Method_System_Collections_Generic_List_GachaEntity___ctor___76034616);
  Item = GachaMaster___c_TypeInfo;
  if ( !GachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo);
    Item = GachaMaster___c_TypeInfo;
  }
  v13 = *(System_Comparison_T__o **)(*((_QWORD *)Item + 23) + 16LL);
  if ( !v13 )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      Item = GachaMaster___c_TypeInfo;
    }
    v14 = (Il2CppObject *)**((_QWORD **)Item + 23);
    v13 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_GachaEntity__TypeInfo);
    System_Comparison_object____ctor(v13, v14, Method_GachaMaster___c__getVaildPayType_b__4_0__, 0LL);
    static_fields = GachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_GachaEntity__o *)v13;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)v13, v16, v17);
  }
  if ( !v10
    || (System_Collections_Generic_List_object___Sort_56615964(
          v10,
          v13,
          (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_GachaEntity__Sort__),
        (Item = System_Collections_Generic_List_object___get_Item(
                  v10,
                  0,
                  (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__)) == 0LL) )
  {
    sub_1B86614(Item, v11);
  }
  return *((_DWORD *)Item + 12);
}


void __fastcall GachaMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4E752 & 1) == 0 )
  {
    sub_1B863B8(&GachaMaster___c_TypeInfo, v1);
    byte_4A4E752 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(GachaMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GachaMaster___c_TypeInfo->static_fields->__9 = (struct GachaMaster___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)GachaMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B86614(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall GachaMaster___c___getVaildPayType_b__4_0(
        GachaMaster___c_o *this,
        GachaEntity_o *a,
        GachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B86614(this, a);
  return b->fields.priority - a->fields.priority;
}