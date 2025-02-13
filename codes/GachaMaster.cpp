void __fastcall GachaMaster___ctor(GachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC7E1 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__);
    byte_4BDC7E1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    32,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__);
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
    sub_1C22094(this, drawUsrGachaEnt);
  }
LABEL_5:
  gachaGroupId = v4->fields.gachaGroupId;
  return gachaGroupId >= 1
      && !GachaMaster__GetGroupRemainingDrawNum(this, gachaGroupId, (const MethodInfo *)drawGachaEnt);
}


int32_t __fastcall GachaMaster__GetGroupRemainingDrawNum(
        GachaMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  int32_t klass_high; // w19
  int MasterName_k__BackingField; // w8
  UserGachaMaster_o *v11; // x21
  unsigned int v12; // w23
  __int64 v13; // x26
  UserGachaEntity_o *v15; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4BDC7E8 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_GachaGroupMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC7E8 = 1;
  }
  entity = 0LL;
  v15 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !Master_object )
    goto LABEL_29;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          groupId,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__) )
    return 0;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GachaMaster__getGachaDataInGroup(this, groupId, v7);
  if ( !entity )
    goto LABEL_29;
  v8 = Master_object;
  klass_high = HIDWORD(entity[1].klass);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserGachaMaster___);
  if ( !v8 )
    goto LABEL_29;
  MasterName_k__BackingField = (int)v8->fields._MasterName_k__BackingField;
  if ( MasterName_k__BackingField >= 1 )
  {
    v11 = (UserGachaMaster_o *)Master_object;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= MasterName_k__BackingField )
        sub_1C2209C(Master_object, v6);
      v13 = *((_QWORD *)&v8->fields.revision + (int)v12);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
      }
      if ( !v13 || !v11 )
        break;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserGachaMaster__TryGetEntity(
                                                                      v11,
                                                                      &v15,
                                                                      (int64_t)Master_object[2].fields.list[1].monitor,
                                                                      *(_DWORD *)(v13 + 16),
                                                                      0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v15 )
          break;
        klass_high -= v15->fields.num;
        if ( klass_high < 1 )
          return 0;
      }
      MasterName_k__BackingField = (int)v8->fields._MasterName_k__BackingField;
      if ( (int)++v12 >= MasterName_k__BackingField )
        return klass_high;
    }
LABEL_29:
    sub_1C22094(Master_object, v6);
  }
  return klass_high;
}


System_Collections_Generic_List_GachaEntity__o *__fastcall GachaMaster__GetValidGachaEntityList(
        GachaMaster_o *this,
        const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  int64_t userIdNumber; // x21
  Il2CppObject *Master_object; // x22
  Il2CppObject *v6; // x23
  Il2CppObject *v7; // x24
  const MethodInfo *v8; // x1
  GachaEntity_array *ListValidData; // x25
  System_Collections_Generic_List_object__o *v10; // x20
  int64_t ClearNum; // x0
  __int64 gachaGroupId; // x1
  int max_length; // w8
  unsigned int v14; // w28
  GachaEntity_o *v15; // x26
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_object__o *v27; // x19
  int32_t v28; // w21
  int64_t v29; // x23
  int32_t v30; // w24
  int64_t v31; // x22
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  UserGachaEntity_o *drawUsrGachaEnt; // [xsp+0h] [xbp-80h] BYREF
  UserGachaEntity_o *v44; // [xsp+8h] [xbp-78h] BYREF
  GachaEntity_o *drawGachaEnt; // [xsp+10h] [xbp-70h] BYREF
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4BDC7E7 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_GachaReleaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    byte_4BDC7E7 = 1;
  }
  drawGachaEnt = 0LL;
  entity = 0LL;
  drawUsrGachaEnt = 0LL;
  v44 = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  userIdNumber = v3->static_fields->userIdNumber;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserQuestMaster___);
  v6 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserGachaMaster___);
  v7 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaReleaseMaster___);
  ListValidData = GachaMaster__getListValidData(this, v8);
  entity = 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_67;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C2209C(ClearNum, gachaGroupId);
      v15 = ListValidData->m_Items[v14];
      drawGachaEnt = v15;
      if ( !v15 || !Master_object )
        goto LABEL_67;
      ClearNum = UserQuestMaster__TryGetEntity(
                   (UserQuestMaster_o *)Master_object,
                   &entity,
                   userIdNumber,
                   v15->fields.condQuestId,
                   0LL);
      if ( (ClearNum & 1) != 0 )
      {
        ClearNum = (int64_t)entity;
        if ( !entity )
          goto LABEL_67;
        ClearNum = UserQuestEntity__getClearNum(entity, 0LL);
        if ( (int)ClearNum > 0 )
          goto LABEL_71;
        ClearNum = (int64_t)entity;
        if ( !entity )
          goto LABEL_67;
        ClearNum = UserQuestEntity__getQuestPhase(entity, 0LL);
        if ( (int)ClearNum >= v15->fields.condQuestPhase )
        {
LABEL_71:
          if ( !v7 )
            goto LABEL_67;
          ClearNum = GachaReleaseMaster__IsEnableRelease((GachaReleaseMaster_o *)v7, v15->fields.id, v16);
          if ( (ClearNum & 1) != 0 )
          {
            LODWORD(v22) = v15->fields.beforeGachaId;
            if ( (int)v22 <= 0 )
              goto LABEL_38;
            if ( !v6 )
              goto LABEL_67;
            ClearNum = UserGachaMaster__TryGetEntity((UserGachaMaster_o *)v6, &v44, userIdNumber, (int32_t)v22, 0LL);
            if ( (ClearNum & 1) != 0 )
            {
              ClearNum = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    v15->fields.beforeGachaId,
                                    (const MethodInfo_325BDC8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
              if ( !v44 || !ClearNum )
                goto LABEL_67;
              if ( v44->fields.num >= *(_DWORD *)(ClearNum + 92) )
              {
                if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
                ClearNum = TutorialFlag__IsProgressDone(2, 0LL);
                if ( (ClearNum & 1) != 0 )
                  break;
              }
            }
          }
        }
      }
LABEL_43:
      max_length = ListValidData->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_44;
    }
    ClearNum = UserGachaMaster__TryGetEntity(
                 (UserGachaMaster_o *)v6,
                 &drawUsrGachaEnt,
                 userIdNumber,
                 v15->fields.id,
                 0LL);
    if ( (ClearNum & 1) != 0 )
    {
      ClearNum = GachaMaster__CheckIsMaxDrawNum(this, drawUsrGachaEnt, &drawGachaEnt, v22);
      if ( (ClearNum & 1) != 0 )
        goto LABEL_43;
    }
    else
    {
      gachaGroupId = (unsigned int)v15->fields.gachaGroupId;
      if ( (int)gachaGroupId >= 1 )
      {
        ClearNum = GachaMaster__GetGroupRemainingDrawNum(this, gachaGroupId, v17);
        if ( !(_DWORD)ClearNum )
          goto LABEL_43;
      }
    }
LABEL_38:
    if ( !v10 )
      goto LABEL_67;
    items = v10->fields._items;
    v24 = Method_System_Collections_Generic_List_GachaEntity__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_67;
    size = v10->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v10,
        (Il2CppObject *)v15,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      v10->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v15;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v15, (int64_t)v17, (int32_t)v22, v18, v19, v20, v21);
    }
    goto LABEL_43;
  }
LABEL_44:
  v27 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !v10 )
LABEL_67:
    sub_1C22094(ClearNum, gachaGroupId);
  if ( v10->fields._size >= 1 )
  {
    v28 = 0;
    do
    {
      ClearNum = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v10,
                            v28,
                            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
      v29 = ClearNum;
      if ( v10->fields._size < 1 )
      {
        v31 = ClearNum;
        if ( !v27 )
          goto LABEL_67;
      }
      else
      {
        v30 = 0;
        v31 = ClearNum;
        do
        {
          ClearNum = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v10,
                                v30,
                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
          if ( !v29 || !ClearNum )
            goto LABEL_67;
          if ( *(_DWORD *)(v29 + 16) != *(_DWORD *)(ClearNum + 16)
            && *(_DWORD *)(v29 + 44) == *(_DWORD *)(ClearNum + 44) )
          {
            if ( !v31 )
              goto LABEL_67;
            if ( *(_DWORD *)(v31 + 36) < *(_DWORD *)(ClearNum + 36) )
              v31 = ClearNum;
          }
          ++v30;
        }
        while ( v30 < v10->fields._size );
        if ( !v27 )
          goto LABEL_67;
      }
      ClearNum = System_Collections_Generic_List_object___Contains(
                   v27,
                   (Il2CppObject *)v31,
                   (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_GachaEntity__Contains__);
      if ( (ClearNum & 1) == 0 )
      {
        v38 = v27->fields._items;
        v39 = Method_System_Collections_Generic_List_GachaEntity__Add__;
        ++v27->fields._version;
        if ( !v38 )
          goto LABEL_67;
        v40 = v27->fields._size;
        if ( (unsigned int)v40 >= v38->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            (Il2CppObject *)v31,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &v38->obj.klass + v40;
          v27->fields._size = v40 + 1;
          v41[4] = (Il2CppClass *)v31;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v41 + 4), v31, v32, v33, v34, v35, v36, v37);
        }
      }
      ++v28;
    }
    while ( v28 < v10->fields._size );
  }
  return (System_Collections_Generic_List_GachaEntity__o *)v27;
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BDC7E3 & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_GachaEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity___ctor___77574672);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_1C21E38(&Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__);
    sub_1C21E38(&GachaMaster___c_TypeInfo);
    byte_4BDC7E3 = 1;
  }
  ListByPayType = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListByPayType(this, 3, v2);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_56945064(
    v5,
    ListByPayType,
    (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_GachaEntity___ctor___77574672);
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
    _9__2_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_GachaEntity__TypeInfo);
    System_Comparison_object____ctor(_9__2_0, v9, Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__, 0LL);
    static_fields = GachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_GachaEntity__o *)_9__2_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v11, v12, v13, v14, v15, v16);
  }
  if ( !v5 )
    sub_1C22094(v7, v6);
  System_Collections_Generic_List_object___Sort_56953720(
    v5,
    _9__2_0,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_GachaEntity__Sort__);
  return (GachaEntity_o *)System_Collections_Generic_List_object___get_Item(
                            v5,
                            0,
                            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
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
  int64_t v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int max_length; // w8
  unsigned int v17; // w22
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4BDC7E6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity___ctor___77574672);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    byte_4BDC7E6 = 1;
  }
  ListValidData = GachaMaster__getListValidData(this, *(const MethodInfo **)&groupId);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_56945064(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)ListValidData,
    (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_GachaEntity___ctor___77574672);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_17;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1C2209C(v8, v9);
      v9 = (int64_t)ListValidData->m_Items[v17];
      if ( !v9 )
        break;
      if ( *(_DWORD *)(v9 + 144) == groupId )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v19 = Method_System_Collections_Generic_List_GachaEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)v9,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v9;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 4), v9, v10, v11, v12, v13, v14, v15);
        }
      }
      max_length = ListValidData->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C22094(v8, v9);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v7,
                                (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


GachaEntity_array *__fastcall GachaMaster__getListByPayType(
        GachaMaster_o *this,
        int32_t gachaType,
        const MethodInfo *method)
{
  int64_t Time; // x22
  System_Collections_Generic_List_object__o *v6; // x21
  int64_t v7; // x1
  int64_t list; // x0
  int v9; // w23
  int32_t v10; // w24
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4BDC7E2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC7E2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v9 = list;
    v10 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v10,
                        (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Item__);
      if ( list )
      {
        v7 = list;
        if ( *(_DWORD *)(list + 48) == gachaType && Time >= *(_QWORD *)(list + 104) && Time <= *(_QWORD *)(list + 112) )
        {
          if ( !v6 )
            break;
          items = v6->fields._items;
          v18 = Method_System_Collections_Generic_List_GachaEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            break;
          size = v6->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)list,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v7;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), v7, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1C22094(list, v7);
  }
LABEL_19:
  if ( !v6 )
    goto LABEL_21;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v6,
                                (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


GachaEntity_array *__fastcall GachaMaster__getListValidData(GachaMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x1
  int64_t list; // x0
  int v7; // w22
  int32_t v8; // w23
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4BDC7E4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC7E4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v7 = list;
    v8 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v8,
                        (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Item__);
      if ( list )
      {
        v5 = list;
        if ( Time >= *(_QWORD *)(list + 104) && Time <= *(_QWORD *)(list + 112) )
        {
          if ( !v4 )
            break;
          items = v4->fields._items;
          v16 = Method_System_Collections_Generic_List_GachaEntity__Add__;
          ++v4->fields._version;
          if ( !items )
            break;
          size = v4->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)list,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v5;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), v5, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1C22094(list, v5);
  }
LABEL_18:
  if ( !v4 )
    goto LABEL_20;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v4,
                                (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BDC7E5 & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_GachaEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity___ctor___77574672);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_1C21E38(&Method_GachaMaster___c__getVaildPayType_b__4_0__);
    sub_1C21E38(&GachaMaster___c_TypeInfo);
    byte_4BDC7E5 = 1;
  }
  ListValidData = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListValidData(this, method);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_56945064(
    v4,
    ListValidData,
    (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_GachaEntity___ctor___77574672);
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
    v7 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_GachaEntity__TypeInfo);
    System_Comparison_object____ctor(v7, v8, Method_GachaMaster___c__getVaildPayType_b__4_0__, 0LL);
    static_fields = GachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_GachaEntity__o *)v7;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v7, v10, v11, v12, v13, v14, v15);
  }
  if ( !v4
    || (System_Collections_Generic_List_object___Sort_56953720(
          v4,
          v7,
          (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_GachaEntity__Sort__),
        (Item = System_Collections_Generic_List_object___get_Item(
                  v4,
                  0,
                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__)) == 0LL) )
  {
    sub_1C22094(Item, v5);
  }
  return *((_DWORD *)Item + 12);
}


void __fastcall GachaMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC7E9 & 1) == 0 )
  {
    sub_1C21E38(&GachaMaster___c_TypeInfo);
    byte_4BDC7E9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(GachaMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  GachaMaster___c_TypeInfo->static_fields->__9 = (struct GachaMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)GachaMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall GachaMaster___c___getVaildPayType_b__4_0(
        GachaMaster___c_o *this,
        GachaEntity_o *a,
        GachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}