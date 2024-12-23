void __fastcall GachaMaster___ctor(GachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66E63 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__, method);
    byte_4B66E63 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    32,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__);
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
    sub_1BE4D28(this, drawUsrGachaEnt);
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

  if ( (byte_4B66E6A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_GachaGroupMaster___, *(_QWORD *)&groupId);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserGachaMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__, v7);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v8);
    byte_4B66E6A = 1;
  }
  entity = 0LL;
  v19 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !Master_object )
    goto LABEL_29;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          groupId,
          (const MethodInfo_31FD818 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__) )
    return 0;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GachaMaster__getGachaDataInGroup(this, groupId, v11);
  if ( !entity )
    goto LABEL_29;
  v12 = Master_object;
  klass_high = HIDWORD(entity[1].klass);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserGachaMaster___);
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
        sub_1BE4D30(Master_object, v10);
      v17 = *((_QWORD *)&v12->fields.list + (int)v16);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B61717 )
      {
        sub_1BE4ACC(&NetworkManager_TypeInfo, v10);
        byte_4B61717 = 1;
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
                                                                      (int64_t)Master_object[2].fields._lookup->fields._values,
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
    sub_1BE4D28(Master_object, v10);
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
  int64_t ClearNum; // x0
  __int64 gachaGroupId; // x1
  int max_length; // w8
  unsigned int v26; // w28
  GachaEntity_o *v27; // x26
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  const MethodInfo *v34; // x3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_List_object__o *v39; // x19
  int32_t v40; // w21
  int64_t v41; // x23
  int32_t v42; // w24
  int64_t v43; // x22
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  UserGachaEntity_o *drawUsrGachaEnt; // [xsp+0h] [xbp-80h] BYREF
  UserGachaEntity_o *v56; // [xsp+8h] [xbp-78h] BYREF
  GachaEntity_o *drawGachaEnt; // [xsp+10h] [xbp-70h] BYREF
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B66E69 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_GachaReleaseMaster___, method);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserGachaMaster___, v3);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserQuestMaster___, v4);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity__Contains__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity__get_Count__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_GachaEntity__TypeInfo, v12);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v13);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v14);
    byte_4B66E69 = 1;
  }
  drawGachaEnt = 0LL;
  entity = 0LL;
  drawUsrGachaEnt = 0LL;
  v56 = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    byte_4B61717 = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserQuestMaster___);
  v18 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserGachaMaster___);
  v19 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaReleaseMaster___);
  ListValidData = GachaMaster__getListValidData(this, v20);
  entity = 0LL;
  v22 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_67;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= max_length )
        sub_1BE4D30(ClearNum, gachaGroupId);
      v27 = ListValidData->m_Items[v26];
      drawGachaEnt = v27;
      if ( !v27 || !Master_object )
        goto LABEL_67;
      ClearNum = UserQuestMaster__TryGetEntity(
                   (UserQuestMaster_o *)Master_object,
                   &entity,
                   userIdNumber,
                   v27->fields.condQuestId,
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
        if ( (int)ClearNum >= v27->fields.condQuestPhase )
        {
LABEL_71:
          if ( !v19 )
            goto LABEL_67;
          ClearNum = GachaReleaseMaster__IsEnableRelease((GachaReleaseMaster_o *)v19, v27->fields.id, v28);
          if ( (ClearNum & 1) != 0 )
          {
            LODWORD(v34) = v27->fields.beforeGachaId;
            if ( (int)v34 <= 0 )
              goto LABEL_38;
            if ( !v18 )
              goto LABEL_67;
            ClearNum = UserGachaMaster__TryGetEntity((UserGachaMaster_o *)v18, &v56, userIdNumber, (int32_t)v34, 0LL);
            if ( (ClearNum & 1) != 0 )
            {
              ClearNum = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    v27->fields.beforeGachaId,
                                    (const MethodInfo_31FD7C4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
              if ( !v56 || !ClearNum )
                goto LABEL_67;
              if ( v56->fields.num >= *(_DWORD *)(ClearNum + 92) )
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
      if ( (int)++v26 >= max_length )
        goto LABEL_44;
    }
    ClearNum = UserGachaMaster__TryGetEntity(
                 (UserGachaMaster_o *)v18,
                 &drawUsrGachaEnt,
                 userIdNumber,
                 v27->fields.id,
                 0LL);
    if ( (ClearNum & 1) != 0 )
    {
      ClearNum = GachaMaster__CheckIsMaxDrawNum(this, drawUsrGachaEnt, &drawGachaEnt, v34);
      if ( (ClearNum & 1) != 0 )
        goto LABEL_43;
    }
    else
    {
      gachaGroupId = (unsigned int)v27->fields.gachaGroupId;
      if ( (int)gachaGroupId >= 1 )
      {
        ClearNum = GachaMaster__GetGroupRemainingDrawNum(this, gachaGroupId, v29);
        if ( !(_DWORD)ClearNum )
          goto LABEL_43;
      }
    }
LABEL_38:
    if ( !v22 )
      goto LABEL_67;
    items = v22->fields._items;
    v36 = Method_System_Collections_Generic_List_GachaEntity__Add__;
    ++v22->fields._version;
    if ( !items )
      goto LABEL_67;
    size = v22->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v22,
        (Il2CppObject *)v27,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v38 = &items->obj.klass + size;
      v22->fields._size = size + 1;
      v38[4] = (Il2CppClass *)v27;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)v27, (int64_t)v29, (int32_t)v34, v30, v31, v32, v33);
    }
    goto LABEL_43;
  }
LABEL_44:
  v39 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !v22 )
LABEL_67:
    sub_1BE4D28(ClearNum, gachaGroupId);
  if ( v22->fields._size >= 1 )
  {
    v40 = 0;
    do
    {
      ClearNum = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v22,
                            v40,
                            (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
      v41 = ClearNum;
      if ( v22->fields._size < 1 )
      {
        v43 = ClearNum;
        if ( !v39 )
          goto LABEL_67;
      }
      else
      {
        v42 = 0;
        v43 = ClearNum;
        do
        {
          ClearNum = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v22,
                                v42,
                                (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
          if ( !v41 || !ClearNum )
            goto LABEL_67;
          if ( *(_DWORD *)(v41 + 16) != *(_DWORD *)(ClearNum + 16)
            && *(_DWORD *)(v41 + 44) == *(_DWORD *)(ClearNum + 44) )
          {
            if ( !v43 )
              goto LABEL_67;
            if ( *(_DWORD *)(v43 + 36) < *(_DWORD *)(ClearNum + 36) )
              v43 = ClearNum;
          }
          ++v42;
        }
        while ( v42 < v22->fields._size );
        if ( !v39 )
          goto LABEL_67;
      }
      ClearNum = System_Collections_Generic_List_object___Contains(
                   v39,
                   (Il2CppObject *)v43,
                   (const MethodInfo_35EC5B4 *)Method_System_Collections_Generic_List_GachaEntity__Contains__);
      if ( (ClearNum & 1) == 0 )
      {
        v50 = v39->fields._items;
        v51 = Method_System_Collections_Generic_List_GachaEntity__Add__;
        ++v39->fields._version;
        if ( !v50 )
          goto LABEL_67;
        v52 = v39->fields._size;
        if ( (unsigned int)v52 >= v50->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v39,
            (Il2CppObject *)v43,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v53 = &v50->obj.klass + v52;
          v39->fields._size = v52 + 1;
          v53[4] = (Il2CppClass *)v43;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v53 + 4), v43, v44, v45, v46, v47, v48, v49);
        }
      }
      ++v40;
    }
    while ( v40 < v22->fields._size );
  }
  return (System_Collections_Generic_List_GachaEntity__o *)v39;
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B66E65 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Comparison_GachaEntity__TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity__Sort__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity___ctor___77107112, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_GachaEntity__TypeInfo, v7);
    sub_1BE4ACC(&Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__, v8);
    sub_1BE4ACC(&GachaMaster___c_TypeInfo, v9);
    byte_4B66E65 = 1;
  }
  ListByPayType = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListByPayType(this, 3, v2);
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_56539928(
    v11,
    ListByPayType,
    (const MethodInfo_35EBB18 *)Method_System_Collections_Generic_List_GachaEntity___ctor___77107112);
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
    _9__2_0 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_GachaEntity__TypeInfo);
    System_Comparison_object____ctor(_9__2_0, v15, Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__, 0LL);
    static_fields = GachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_GachaEntity__o *)_9__2_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v17, v18, v19, v20, v21, v22);
  }
  if ( !v11 )
    sub_1BE4D28(v13, v12);
  System_Collections_Generic_List_object___Sort_56548584(
    v11,
    _9__2_0,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_GachaEntity__Sort__);
  return (GachaEntity_o *)System_Collections_Generic_List_object___get_Item(
                            v11,
                            0,
                            (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
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
  int64_t v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int max_length; // w8
  unsigned int v21; // w22
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4B66E68 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity__Add__, *(_QWORD *)&groupId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity___ctor___77107112, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v7);
    sub_1BE4ACC(&System_Collections_Generic_List_GachaEntity__TypeInfo, v8);
    byte_4B66E68 = 1;
  }
  ListValidData = GachaMaster__getListValidData(this, *(const MethodInfo **)&groupId);
  v10 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_56539928(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)ListValidData,
    (const MethodInfo_35EBB18 *)Method_System_Collections_Generic_List_GachaEntity___ctor___77107112);
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_17;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
        sub_1BE4D30(v12, v13);
      v13 = (int64_t)ListValidData->m_Items[v21];
      if ( !v13 )
        break;
      if ( *(_DWORD *)(v13 + 144) == groupId )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v23 = Method_System_Collections_Generic_List_GachaEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)v13,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v13;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v25 + 4), v13, v14, v15, v16, v17, v18, v19);
        }
      }
      max_length = ListValidData->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BE4D28(v12, v13);
  }
LABEL_15:
  if ( !v11 )
    goto LABEL_17;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v11,
                                (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
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
  System_Collections_Generic_List_object__o *v13; // x21
  int64_t v14; // x1
  int64_t list; // x0
  int v16; // w23
  int32_t v17; // w24
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4B66E64 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&gachaType);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&GachaEntity_TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_GachaEntity__TypeInfo, v10);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v11);
    byte_4B66E64 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v13 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v16 = list;
    v17 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v17,
                        (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v14 = list;
        methodPtr_low = LOBYTE(GachaEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(GachaEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == GachaEntity_TypeInfo
          && *(_DWORD *)(list + 48) == gachaType
          && Time >= *(_QWORD *)(list + 104)
          && Time <= *(_QWORD *)(list + 112) )
        {
          if ( !v13 )
            break;
          items = v13->fields._items;
          v26 = Method_System_Collections_Generic_List_GachaEntity__Add__;
          ++v13->fields._version;
          if ( !items )
            break;
          size = v13->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)list,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v14;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v28 + 4), v14, v18, v19, v20, v21, v22, v23);
          }
        }
      }
      if ( v16 == ++v17 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1BE4D28(list, v14);
  }
LABEL_21:
  if ( !v13 )
    goto LABEL_23;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v13,
                                (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
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
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x1
  int64_t list; // x0
  int v14; // w22
  int32_t v15; // w23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4B66E66 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BE4ACC(&GachaEntity_TypeInfo, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity__Add__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v7);
    sub_1BE4ACC(&System_Collections_Generic_List_GachaEntity__TypeInfo, v8);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v9);
    byte_4B66E66 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = list;
    v15 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v15,
                        (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        methodPtr_low = LOBYTE(GachaEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(GachaEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == GachaEntity_TypeInfo
          && Time >= *(_QWORD *)(list + 104)
          && Time <= *(_QWORD *)(list + 112) )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v24 = Method_System_Collections_Generic_List_GachaEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v12;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 4), v12, v16, v17, v18, v19, v20, v21);
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BE4D28(list, v12);
  }
LABEL_20:
  if ( !v11 )
    goto LABEL_22;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v11,
                                (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B66E67 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Comparison_GachaEntity__TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity__Sort__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity___ctor___77107112, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v5);
    sub_1BE4ACC(&System_Collections_Generic_List_GachaEntity__TypeInfo, v6);
    sub_1BE4ACC(&Method_GachaMaster___c__getVaildPayType_b__4_0__, v7);
    sub_1BE4ACC(&GachaMaster___c_TypeInfo, v8);
    byte_4B66E67 = 1;
  }
  ListValidData = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListValidData(this, method);
  v10 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_56539928(
    v10,
    ListValidData,
    (const MethodInfo_35EBB18 *)Method_System_Collections_Generic_List_GachaEntity___ctor___77107112);
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
    v13 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_GachaEntity__TypeInfo);
    System_Comparison_object____ctor(v13, v14, Method_GachaMaster___c__getVaildPayType_b__4_0__, 0LL);
    static_fields = GachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_GachaEntity__o *)v13;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v13, v16, v17, v18, v19, v20, v21);
  }
  if ( !v10
    || (System_Collections_Generic_List_object___Sort_56548584(
          v10,
          v13,
          (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_GachaEntity__Sort__),
        (Item = System_Collections_Generic_List_object___get_Item(
                  v10,
                  0,
                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__)) == 0LL) )
  {
    sub_1BE4D28(Item, v11);
  }
  return *((_DWORD *)Item + 12);
}


void __fastcall GachaMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B66E6B & 1) == 0 )
  {
    sub_1BE4ACC(&GachaMaster___c_TypeInfo, v1);
    byte_4B66E6B = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(GachaMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GachaMaster___c_TypeInfo->static_fields->__9 = (struct GachaMaster___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)GachaMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall GachaMaster___c___getVaildPayType_b__4_0(
        GachaMaster___c_o *this,
        GachaEntity_o *a,
        GachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BE4D28(this, a);
  return b->fields.priority - a->fields.priority;
}