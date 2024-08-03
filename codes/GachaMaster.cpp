void __fastcall GachaMaster___ctor(GachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC6A1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__, method);
    byte_49FC6A1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    32,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaMaster__CheckIsDrawGroupSummon(GachaMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  GachaEntity_array *Master_object; // x0
  Il2CppObject *v9; // x21
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  int max_length; // w8
  GachaEntity_array *v13; // x19
  unsigned int v14; // w20
  GachaEntity_o *v15; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC6A9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_GachaGroupMaster___, *(_QWORD *)&groupId);
    sub_1B640C8(&Method_DataManager_GetMaster_UserGachaMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__, v7);
    byte_49FC6A9 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GachaEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !Master_object )
    goto LABEL_20;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         groupId,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v9 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserGachaMaster___);
    Master_object = GachaMaster__getGachaDataInGroup(this, groupId, v10);
    if ( !Master_object )
      goto LABEL_20;
    max_length = Master_object->max_length;
    v13 = Master_object;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
          sub_1B6432C(Master_object, v11);
        v15 = v13->m_Items[v14];
        if ( !v15 || !v9 )
          break;
        Master_object = (GachaEntity_array *)UserGachaMaster__checkIsDrawGroupSummon(
                                               (UserGachaMaster_o *)v9,
                                               v15->fields.id,
                                               0LL);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          max_length = v13->max_length;
          if ( (int)++v14 < max_length )
            continue;
        }
        return (unsigned __int8)Master_object & 1;
      }
LABEL_20:
      sub_1B64324(Master_object);
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
  __int64 v6; // x1
  __int64 v7; // x1
  GachaEntity_o *v8; // x8
  int32_t gachaGroupId; // w20
  int32_t klass_high; // w8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC6A8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_GachaGroupMaster___, drawUsrGachaEnt);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    this = (GachaMaster_o *)sub_1B640C8(
                              &Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__,
                              v7);
    byte_49FC6A8 = 1;
  }
  entity = 0LL;
  v8 = *drawGachaEnt;
  if ( !*drawGachaEnt )
    goto LABEL_12;
  gachaGroupId = v8->fields.gachaGroupId;
  if ( gachaGroupId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (GachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaGroupMaster___);
    if ( this )
    {
      this = (GachaMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                &entity,
                                gachaGroupId,
                                (const MethodInfo_30D3EF8 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
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
    sub_1B64324(this);
  }
  klass_high = v8->fields.maxDrawNum;
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
  int64_t UserId; // x21
  Il2CppObject *Master_object; // x22
  Il2CppObject *v17; // x23
  Il2CppObject *v18; // x24
  const MethodInfo *v19; // x1
  GachaEntity_array *ListValidData; // x25
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x19
  void *ClearNum; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  int max_length; // w8
  unsigned int v28; // w28
  GachaEntity_o *v29; // x26
  const MethodInfo *v30; // x3
  int32_t gachaGroupId; // w1
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Collections_Generic_List_object__o *v36; // x20
  int32_t v37; // w21
  _DWORD *v38; // x23
  int32_t v39; // w24
  Il2CppObject *v40; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  UserGachaEntity_o *drawUsrGachaEnt; // [xsp+0h] [xbp-80h] BYREF
  UserGachaEntity_o *v49; // [xsp+8h] [xbp-78h] BYREF
  GachaEntity_o *drawGachaEnt; // [xsp+10h] [xbp-70h] BYREF
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_49FC6A7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_GachaReleaseMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_UserGachaMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_UserQuestMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaEntity__Contains__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaEntity__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_List_GachaEntity__TypeInfo, v12);
    sub_1B640C8(&NetworkManager_TypeInfo, v13);
    sub_1B640C8(&TutorialFlag_TypeInfo, v14);
    byte_49FC6A7 = 1;
  }
  v49 = 0LL;
  drawGachaEnt = 0LL;
  drawUsrGachaEnt = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserQuestMaster___);
  v17 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserGachaMaster___);
  v18 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaReleaseMaster___);
  ListValidData = GachaMaster__getListValidData(this, v19);
  entity = 0LL;
  v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_63;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      if ( v28 >= max_length )
        sub_1B6432C(ClearNum, v25);
      v29 = ListValidData->m_Items[v28];
      drawGachaEnt = v29;
      if ( !v29 || !Master_object )
        goto LABEL_63;
      ClearNum = (void *)UserQuestMaster__TryGetEntity(
                           (UserQuestMaster_o *)Master_object,
                           &entity,
                           UserId,
                           v29->fields.condQuestId,
                           0LL);
      if ( ((unsigned __int8)ClearNum & 1) != 0 )
      {
        ClearNum = entity;
        if ( !entity )
          goto LABEL_63;
        ClearNum = (void *)UserQuestEntity__getClearNum(entity, 0LL);
        if ( (int)ClearNum > 0 )
          goto LABEL_67;
        ClearNum = entity;
        if ( !entity )
          goto LABEL_63;
        ClearNum = (void *)UserQuestEntity__getQuestPhase(entity, 0LL);
        if ( (int)ClearNum >= v29->fields.condQuestPhase )
        {
LABEL_67:
          if ( !v18 )
            goto LABEL_63;
          ClearNum = (void *)GachaReleaseMaster__IsEnableRelease((GachaReleaseMaster_o *)v18, v29->fields.id, v26);
          if ( ((unsigned __int8)ClearNum & 1) != 0 )
          {
            LODWORD(v30) = v29->fields.beforeGachaId;
            if ( (int)v30 <= 0 )
              goto LABEL_34;
            if ( !v17 )
              goto LABEL_63;
            ClearNum = (void *)UserGachaMaster__TryGetEntity((UserGachaMaster_o *)v17, &v49, UserId, (int32_t)v30, 0LL);
            if ( ((unsigned __int8)ClearNum & 1) != 0 )
            {
              ClearNum = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           v29->fields.beforeGachaId,
                           (const MethodInfo_30D3EA4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
              if ( !v49 || !ClearNum )
                goto LABEL_63;
              if ( v49->fields.num >= *((_DWORD *)ClearNum + 23) )
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
LABEL_39:
      max_length = ListValidData->max_length;
      if ( (int)++v28 >= max_length )
        goto LABEL_40;
    }
    ClearNum = (void *)UserGachaMaster__TryGetEntity(
                         (UserGachaMaster_o *)v17,
                         &drawUsrGachaEnt,
                         UserId,
                         v29->fields.id,
                         0LL);
    if ( ((unsigned __int8)ClearNum & 1) != 0 )
    {
      ClearNum = (void *)GachaMaster__CheckIsMaxDrawNum((GachaMaster_o *)ClearNum, drawUsrGachaEnt, &drawGachaEnt, v30);
      if ( ((unsigned __int8)ClearNum & 1) != 0 )
        goto LABEL_39;
    }
    else
    {
      gachaGroupId = v29->fields.gachaGroupId;
      if ( gachaGroupId >= 1 )
      {
        ClearNum = (void *)GachaMaster__CheckIsDrawGroupSummon(this, gachaGroupId, v26);
        if ( ((unsigned __int8)ClearNum & 1) != 0 )
          goto LABEL_39;
      }
    }
LABEL_34:
    if ( !v23 )
      goto LABEL_63;
    items = v23->fields._items;
    v33 = Method_System_Collections_Generic_List_GachaEntity__Add__;
    ++v23->fields._version;
    if ( !items )
      goto LABEL_63;
    size = v23->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v23,
        (Il2CppObject *)v29,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &items->obj.klass + size;
      v23->fields._size = size + 1;
      v35[4] = (Il2CppClass *)v29;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v29, (int32_t)v26, (int32_t)v30);
    }
    goto LABEL_39;
  }
LABEL_40:
  v36 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                       v25,
                                                       v26);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !v23 )
LABEL_63:
    sub_1B64324(ClearNum);
  if ( v23->fields._size >= 1 )
  {
    v37 = 0;
    do
    {
      ClearNum = System_Collections_Generic_List_object___get_Item(
                   v23,
                   v37,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
      v38 = ClearNum;
      if ( v23->fields._size < 1 )
      {
        v40 = (Il2CppObject *)ClearNum;
        if ( !v36 )
          goto LABEL_63;
      }
      else
      {
        v39 = 0;
        v40 = (Il2CppObject *)ClearNum;
        do
        {
          ClearNum = System_Collections_Generic_List_object___get_Item(
                       v23,
                       v39,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
          if ( !v38 || !ClearNum )
            goto LABEL_63;
          if ( v38[4] != *((_DWORD *)ClearNum + 4) && v38[11] == *((_DWORD *)ClearNum + 11) )
          {
            if ( !v40 )
              goto LABEL_63;
            if ( SHIDWORD(v40[2].klass) < *((_DWORD *)ClearNum + 9) )
              v40 = (Il2CppObject *)ClearNum;
          }
          ++v39;
        }
        while ( v39 < v23->fields._size );
        if ( !v36 )
          goto LABEL_63;
      }
      ClearNum = (void *)System_Collections_Generic_List_object___Contains(
                           v36,
                           v40,
                           (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_GachaEntity__Contains__);
      if ( ((unsigned __int8)ClearNum & 1) == 0 )
      {
        v43 = v36->fields._items;
        v44 = Method_System_Collections_Generic_List_GachaEntity__Add__;
        ++v36->fields._version;
        if ( !v43 )
          goto LABEL_63;
        v45 = v36->fields._size;
        if ( (unsigned int)v45 >= v43->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v36,
            v40,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &v43->obj.klass + v45;
          v36->fields._size = v45 + 1;
          v46[4] = (Il2CppClass *)v40;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v40, v41, v42);
        }
      }
      ++v37;
    }
    while ( v37 < v23->fields._size );
  }
  return (System_Collections_Generic_List_GachaEntity__o *)v36;
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  GachaMaster___c_c *v16; // x0
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v18; // x21
  struct GachaMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_49FC6A3 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_GachaEntity__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaEntity__Sort__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaEntity___ctor___75655344, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v6);
    sub_1B640C8(&System_Collections_Generic_List_GachaEntity__TypeInfo, v7);
    sub_1B640C8(&Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__, v8);
    sub_1B640C8(&GachaMaster___c_TypeInfo, v9);
    byte_49FC6A3 = 1;
  }
  ListByPayType = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListByPayType(this, 3, v2);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                       v11,
                                                       v12);
  System_Collections_Generic_List_object____ctor_55234504(
    v13,
    ListByPayType,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_GachaEntity___ctor___75655344);
  v16 = GachaMaster___c_TypeInfo;
  if ( !GachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo);
    v16 = GachaMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Comparison_T__o *)v16->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = GachaMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_GachaEntity__TypeInfo, v14, v15);
    System_Comparison_object____ctor(_9__2_0, v18, Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__, 0LL);
    static_fields = GachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_GachaEntity__o *)_9__2_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v20, v21);
  }
  if ( !v13 )
    sub_1B64324(v16);
  System_Collections_Generic_List_object___Sort_55243320(
    v13,
    _9__2_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_GachaEntity__Sort__);
  return (GachaEntity_o *)System_Collections_Generic_List_object___get_Item(
                            v13,
                            0,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x21
  __int64 v16; // x0
  GachaEntity_o *v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  int max_length; // w8
  unsigned int v21; // w22
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_49FC6A6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaEntity__Add__, *(_QWORD *)&groupId);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaEntity___ctor___75655344, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_GachaEntity__TypeInfo, v8);
    byte_49FC6A6 = 1;
  }
  ListValidData = GachaMaster__getListValidData(this, *(const MethodInfo **)&groupId);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                       v10,
                                                       v11);
  System_Collections_Generic_List_object____ctor_55234504(
    v12,
    (System_Collections_Generic_IEnumerable_T__o *)ListValidData,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_GachaEntity___ctor___75655344);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                       v13,
                                                       v14);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_17;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
        sub_1B6432C(v16, v17);
      v17 = ListValidData->m_Items[v21];
      if ( !v17 )
        break;
      if ( v17->fields.gachaGroupId == groupId )
      {
        if ( !v15 )
          break;
        items = v15->fields._items;
        v23 = Method_System_Collections_Generic_List_GachaEntity__Add__;
        ++v15->fields._version;
        if ( !items )
          break;
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            (Il2CppObject *)v17,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v17;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v17, v18, v19);
        }
      }
      max_length = ListValidData->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1B64324(v16);
  }
LABEL_15:
  if ( !v15 )
    goto LABEL_17;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v15,
                                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
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
  __int64 v11; // x1
  int64_t Time; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v17; // w23
  int32_t v18; // w24
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_ObjectModel_Collection_T__o *v21; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_49FC6A2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&gachaType);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&GachaEntity_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_GachaEntity__TypeInfo, v10);
    sub_1B640C8(&NetworkManager_TypeInfo, v11);
    byte_49FC6A2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                       v13,
                                                       v14);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v17 = (int)list;
    v18 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v18,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v21 = list;
        methodPtr_low = LOBYTE(GachaEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (GachaEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == GachaEntity_TypeInfo
          && LODWORD(list[2].klass) == gachaType
          && Time >= (__int64)list[4].monitor
          && Time <= (__int64)list[4].fields.items )
        {
          if ( !v15 )
            break;
          items = v15->fields._items;
          v24 = Method_System_Collections_Generic_List_GachaEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)list,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v21;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v21, v19, v20);
          }
        }
      }
      if ( v17 == ++v18 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B64324(list);
  }
LABEL_21:
  if ( !v15 )
    goto LABEL_23;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v15,
                                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


GachaEntity_array *__fastcall GachaMaster__getListValidData(GachaMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t Time; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v15; // w22
  int32_t v16; // w23
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_ObjectModel_Collection_T__o *v19; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_49FC6A4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&GachaEntity_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaEntity__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_GachaEntity__TypeInfo, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    byte_49FC6A4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                       v11,
                                                       v12);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v19 = list;
        methodPtr_low = LOBYTE(GachaEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (GachaEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == GachaEntity_TypeInfo
          && Time >= (__int64)list[4].monitor
          && Time <= (__int64)list[4].fields.items )
        {
          if ( !v13 )
            break;
          items = v13->fields._items;
          v22 = Method_System_Collections_Generic_List_GachaEntity__Add__;
          ++v13->fields._version;
          if ( !items )
            break;
          size = v13->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)list,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v19;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v19, v17, v18);
          }
        }
      }
      if ( v15 == ++v16 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B64324(list);
  }
LABEL_20:
  if ( !v13 )
    goto LABEL_22;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v13,
                                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  void *Item; // x0
  System_Comparison_T__o *v16; // x20
  Il2CppObject *v17; // x21
  struct GachaMaster___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_49FC6A5 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_GachaEntity__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaEntity__Sort__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaEntity___ctor___75655344, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v5);
    sub_1B640C8(&System_Collections_Generic_List_GachaEntity__TypeInfo, v6);
    sub_1B640C8(&Method_GachaMaster___c__getVaildPayType_b__4_0__, v7);
    sub_1B640C8(&GachaMaster___c_TypeInfo, v8);
    byte_49FC6A5 = 1;
  }
  ListValidData = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListValidData(this, method);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                       v10,
                                                       v11);
  System_Collections_Generic_List_object____ctor_55234504(
    v12,
    ListValidData,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_GachaEntity___ctor___75655344);
  Item = GachaMaster___c_TypeInfo;
  if ( !GachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo);
    Item = GachaMaster___c_TypeInfo;
  }
  v16 = *(System_Comparison_T__o **)(*((_QWORD *)Item + 23) + 16LL);
  if ( !v16 )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      Item = GachaMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)**((_QWORD **)Item + 23);
    v16 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_GachaEntity__TypeInfo, v13, v14);
    System_Comparison_object____ctor(v16, v17, Method_GachaMaster___c__getVaildPayType_b__4_0__, 0LL);
    static_fields = GachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_GachaEntity__o *)v16;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)v16, v19, v20);
  }
  if ( !v12
    || (System_Collections_Generic_List_object___Sort_55243320(
          v12,
          v16,
          (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_GachaEntity__Sort__),
        (Item = System_Collections_Generic_List_object___get_Item(
                  v12,
                  0,
                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__)) == 0LL) )
  {
    sub_1B64324(Item);
  }
  return *((_DWORD *)Item + 12);
}


void __fastcall GachaMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC6AA & 1) == 0 )
  {
    sub_1B640C8(&GachaMaster___c_TypeInfo, v1);
    byte_49FC6AA = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(GachaMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  GachaMaster___c_TypeInfo->static_fields->__9 = (struct GachaMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)GachaMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall GachaMaster___c___getVaildPayType_b__4_0(
        GachaMaster___c_o *this,
        GachaEntity_o *a,
        GachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}