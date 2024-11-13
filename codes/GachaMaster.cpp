void __fastcall GachaMaster___ctor(GachaMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16486 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__, method, v2);
    byte_4B16486 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    32,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaMaster__CheckIsDrawGroupSummon(GachaMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  GachaEntity_array *Master_object; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *v14; // x21
  const MethodInfo *v15; // x2
  int max_length; // w8
  GachaEntity_array *v17; // x19
  unsigned int v18; // w20
  GachaEntity_o *v19; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1648E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaGroupMaster___, *(_QWORD *)&groupId, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserGachaMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__, v9, v10);
    byte_4B1648E = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&groupId);
  Master_object = (GachaEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !Master_object )
    goto LABEL_20;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         groupId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
    v14 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserGachaMaster___);
    Master_object = GachaMaster__getGachaDataInGroup(this, groupId, v15);
    if ( !Master_object )
      goto LABEL_20;
    max_length = Master_object->max_length;
    v17 = Master_object;
    if ( max_length >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= max_length )
          sub_1BCAA44(Master_object, v12);
        v19 = v17->m_Items[v18];
        if ( !v19 || !v14 )
          break;
        Master_object = (GachaEntity_array *)UserGachaMaster__checkIsDrawGroupSummon(
                                               (UserGachaMaster_o *)v14,
                                               v19->fields.id,
                                               0LL);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          max_length = v17->max_length;
          if ( (int)++v18 < max_length )
            continue;
        }
        return (unsigned __int8)Master_object & 1;
      }
LABEL_20:
      sub_1BCAA3C(Master_object, v12);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  GachaEntity_o *v10; // x8
  int32_t gachaGroupId; // w20
  int32_t klass_high; // w8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1648D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaGroupMaster___, drawUsrGachaEnt, drawGachaEnt);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    this = (GachaMaster_o *)sub_1BCA7E0(
                              &Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__,
                              v8,
                              v9);
    byte_4B1648D = 1;
  }
  entity = 0LL;
  v10 = *drawGachaEnt;
  if ( !*drawGachaEnt )
    goto LABEL_12;
  gachaGroupId = v10->fields.gachaGroupId;
  if ( gachaGroupId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, drawUsrGachaEnt);
    this = (GachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaGroupMaster___);
    if ( this )
    {
      this = (GachaMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                &entity,
                                gachaGroupId,
                                (const MethodInfo_31B2E94 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
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
    sub_1BCAA3C(this, drawUsrGachaEnt);
  }
  klass_high = v10->fields.maxDrawNum;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  int64_t UserId; // x21
  Il2CppObject *Master_object; // x22
  Il2CppObject *v31; // x23
  Il2CppObject *v32; // x24
  const MethodInfo *v33; // x1
  GachaEntity_array *ListValidData; // x25
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Collections_Generic_List_object__o *v38; // x19
  int64_t ClearNum; // x0
  __int64 gachaGroupId; // x1
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x3
  int max_length; // w8
  unsigned int v44; // w28
  GachaEntity_o *v45; // x26
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  System_Collections_Generic_List_object__o *v54; // x20
  int32_t v55; // w21
  int64_t v56; // x23
  int32_t v57; // w24
  int64_t v58; // x22
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x0
  UserGachaEntity_o *drawUsrGachaEnt; // [xsp+0h] [xbp-80h] BYREF
  UserGachaEntity_o *v71; // [xsp+8h] [xbp-78h] BYREF
  GachaEntity_o *drawGachaEnt; // [xsp+10h] [xbp-70h] BYREF
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B1648C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaReleaseMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserGachaMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserQuestMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity__Contains__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity__get_Count__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_GachaEntity__TypeInfo, v22, v23);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v26, v27);
    byte_4B1648C = 1;
  }
  v71 = 0LL;
  drawGachaEnt = 0LL;
  drawUsrGachaEnt = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v28);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserQuestMaster___);
  v31 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserGachaMaster___);
  v32 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaReleaseMaster___);
  ListValidData = GachaMaster__getListValidData(this, v33);
  entity = 0LL;
  v38 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                       v35,
                                                       v36,
                                                       v37);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_63;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v44 = 0;
    while ( 1 )
    {
      if ( v44 >= max_length )
        sub_1BCAA44(ClearNum, gachaGroupId);
      v45 = ListValidData->m_Items[v44];
      drawGachaEnt = v45;
      if ( !v45 || !Master_object )
        goto LABEL_63;
      ClearNum = UserQuestMaster__TryGetEntity(
                   (UserQuestMaster_o *)Master_object,
                   &entity,
                   UserId,
                   v45->fields.condQuestId,
                   0LL);
      if ( (ClearNum & 1) != 0 )
      {
        ClearNum = (int64_t)entity;
        if ( !entity )
          goto LABEL_63;
        ClearNum = UserQuestEntity__getClearNum(entity, 0LL);
        if ( (int)ClearNum > 0 )
          goto LABEL_67;
        ClearNum = (int64_t)entity;
        if ( !entity )
          goto LABEL_63;
        ClearNum = UserQuestEntity__getQuestPhase(entity, 0LL);
        if ( (int)ClearNum >= v45->fields.condQuestPhase )
        {
LABEL_67:
          if ( !v32 )
            goto LABEL_63;
          ClearNum = GachaReleaseMaster__IsEnableRelease((GachaReleaseMaster_o *)v32, v45->fields.id, v41);
          if ( (ClearNum & 1) != 0 )
          {
            LODWORD(v42) = v45->fields.beforeGachaId;
            if ( (int)v42 <= 0 )
              goto LABEL_34;
            if ( !v31 )
              goto LABEL_63;
            ClearNum = UserGachaMaster__TryGetEntity((UserGachaMaster_o *)v31, &v71, UserId, (int32_t)v42, 0LL);
            if ( (ClearNum & 1) != 0 )
            {
              ClearNum = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    v45->fields.beforeGachaId,
                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
              if ( !v71 || !ClearNum )
                goto LABEL_63;
              if ( v71->fields.num >= *(_DWORD *)(ClearNum + 92) )
              {
                if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, gachaGroupId);
                ClearNum = TutorialFlag__IsProgressDone(2, 0LL);
                if ( (ClearNum & 1) != 0 )
                  break;
              }
            }
          }
        }
      }
LABEL_39:
      max_length = ListValidData->max_length;
      if ( (int)++v44 >= max_length )
        goto LABEL_40;
    }
    ClearNum = UserGachaMaster__TryGetEntity((UserGachaMaster_o *)v31, &drawUsrGachaEnt, UserId, v45->fields.id, 0LL);
    if ( (ClearNum & 1) != 0 )
    {
      ClearNum = GachaMaster__CheckIsMaxDrawNum((GachaMaster_o *)ClearNum, drawUsrGachaEnt, &drawGachaEnt, v42);
      if ( (ClearNum & 1) != 0 )
        goto LABEL_39;
    }
    else
    {
      gachaGroupId = (unsigned int)v45->fields.gachaGroupId;
      if ( (int)gachaGroupId >= 1 )
      {
        ClearNum = GachaMaster__CheckIsDrawGroupSummon(this, gachaGroupId, v41);
        if ( (ClearNum & 1) != 0 )
          goto LABEL_39;
      }
    }
LABEL_34:
    if ( !v38 )
      goto LABEL_63;
    items = v38->fields._items;
    v51 = Method_System_Collections_Generic_List_GachaEntity__Add__;
    ++v38->fields._version;
    if ( !items )
      goto LABEL_63;
    size = v38->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v38,
        (Il2CppObject *)v45,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
    }
    else
    {
      v53 = &items->obj.klass + size;
      v38->fields._size = size + 1;
      v53[4] = (Il2CppClass *)v45;
      sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 4), (int64_t)v45, (int64_t)v41, (int32_t)v42, v46, v47, v48, v49);
    }
    goto LABEL_39;
  }
LABEL_40:
  v54 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                       gachaGroupId,
                                                       v41,
                                                       v42);
  System_Collections_Generic_List_object____ctor(
    v54,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !v38 )
LABEL_63:
    sub_1BCAA3C(ClearNum, gachaGroupId);
  if ( v38->fields._size >= 1 )
  {
    v55 = 0;
    do
    {
      ClearNum = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v38,
                            v55,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
      v56 = ClearNum;
      if ( v38->fields._size < 1 )
      {
        v58 = ClearNum;
        if ( !v54 )
          goto LABEL_63;
      }
      else
      {
        v57 = 0;
        v58 = ClearNum;
        do
        {
          ClearNum = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v38,
                                v57,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
          if ( !v56 || !ClearNum )
            goto LABEL_63;
          if ( *(_DWORD *)(v56 + 16) != *(_DWORD *)(ClearNum + 16)
            && *(_DWORD *)(v56 + 44) == *(_DWORD *)(ClearNum + 44) )
          {
            if ( !v58 )
              goto LABEL_63;
            if ( *(_DWORD *)(v58 + 36) < *(_DWORD *)(ClearNum + 36) )
              v58 = ClearNum;
          }
          ++v57;
        }
        while ( v57 < v38->fields._size );
        if ( !v54 )
          goto LABEL_63;
      }
      ClearNum = System_Collections_Generic_List_object___Contains(
                   v54,
                   (Il2CppObject *)v58,
                   (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_GachaEntity__Contains__);
      if ( (ClearNum & 1) == 0 )
      {
        v65 = v54->fields._items;
        v66 = Method_System_Collections_Generic_List_GachaEntity__Add__;
        ++v54->fields._version;
        if ( !v65 )
          goto LABEL_63;
        v67 = v54->fields._size;
        if ( (unsigned int)v67 >= v65->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v54,
            (Il2CppObject *)v58,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
        }
        else
        {
          v68 = &v65->obj.klass + v67;
          v54->fields._size = v67 + 1;
          v68[4] = (Il2CppClass *)v58;
          sub_1BCA784((PartyOrganizationUtility_o *)(v68 + 4), v58, v59, v60, v61, v62, v63, v64);
        }
      }
      ++v55;
    }
    while ( v55 < v38->fields._size );
  }
  return (System_Collections_Generic_List_GachaEntity__o *)v54;
}


GachaEntity_o *__fastcall GachaMaster__getFriendPointGachaEntity(GachaMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_IEnumerable_T__o *ListByPayType; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_List_object__o *v20; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  GachaMaster___c_c *v24; // x0
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v26; // x21
  struct GachaMaster___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4B16488 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_GachaEntity__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity__Sort__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity___ctor___76785512, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_GachaEntity__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__, v12, v13);
    sub_1BCA7E0(&GachaMaster___c_TypeInfo, v14, v15);
    byte_4B16488 = 1;
  }
  ListByPayType = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListByPayType(this, 3, v2);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                       v17,
                                                       v18,
                                                       v19);
  System_Collections_Generic_List_object____ctor_56235344(
    v20,
    ListByPayType,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_GachaEntity___ctor___76785512);
  v24 = GachaMaster___c_TypeInfo;
  if ( !GachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo, v21);
    v24 = GachaMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Comparison_T__o *)v24->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24, v21);
      v24 = GachaMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v24->static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_GachaEntity__TypeInfo, v21, v22, v23);
    System_Comparison_object____ctor(_9__2_0, v26, Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__, 0LL);
    static_fields = GachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_GachaEntity__o *)_9__2_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v28, v29, v30, v31, v32, v33);
  }
  if ( !v20 )
    sub_1BCAA3C(v24, v21);
  System_Collections_Generic_List_object___Sort_56244000(
    v20,
    _9__2_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_GachaEntity__Sort__);
  return (GachaEntity_o *)System_Collections_Generic_List_object___get_Item(
                            v20,
                            0,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_array *__fastcall GachaMaster__getGachaDataInGroup(
        GachaMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  GachaEntity_array *ListValidData; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_object__o *v21; // x21
  __int64 v22; // x0
  int64_t v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int max_length; // w8
  unsigned int v31; // w22
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  if ( (byte_4B1648B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity__Add__, *(_QWORD *)&groupId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity___ctor___76785512, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_GachaEntity__TypeInfo, v11, v12);
    byte_4B1648B = 1;
  }
  ListValidData = GachaMaster__getListValidData(this, *(const MethodInfo **)&groupId);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor_56235344(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)ListValidData,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_GachaEntity___ctor___76785512);
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                       v18,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_17;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      if ( v31 >= max_length )
        sub_1BCAA44(v22, v23);
      v23 = (int64_t)ListValidData->m_Items[v31];
      if ( !v23 )
        break;
      if ( *(_DWORD *)(v23 + 144) == groupId )
      {
        if ( !v21 )
          break;
        items = v21->fields._items;
        v33 = Method_System_Collections_Generic_List_GachaEntity__Add__;
        ++v21->fields._version;
        if ( !items )
          break;
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            (Il2CppObject *)v23,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v23;
          sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 4), v23, v24, v25, v26, v27, v28, v29);
        }
      }
      max_length = ListValidData->max_length;
      if ( (int)++v31 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BCAA3C(v22, v23);
  }
LABEL_15:
  if ( !v21 )
    goto LABEL_17;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v21,
                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_array *__fastcall GachaMaster__getListByPayType(
        GachaMaster_o *this,
        int32_t gachaType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int64_t Time; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_object__o *v23; // x21
  int64_t v24; // x1
  int64_t list; // x0
  int v26; // w23
  int32_t v27; // w24
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0

  if ( (byte_4B16487 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&gachaType,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&GachaEntity_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_GachaEntity__TypeInfo, v15, v16);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v17, v18);
    byte_4B16487 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&gachaType);
  Time = NetworkManager__getTime(0LL);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                       v20,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v26 = list;
    v27 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v27,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v24 = list;
        methodPtr_low = LOBYTE(GachaEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(GachaEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == GachaEntity_TypeInfo
          && *(_DWORD *)(list + 48) == gachaType
          && Time >= *(_QWORD *)(list + 104)
          && Time <= *(_QWORD *)(list + 112) )
        {
          if ( !v23 )
            break;
          items = v23->fields._items;
          v36 = Method_System_Collections_Generic_List_GachaEntity__Add__;
          ++v23->fields._version;
          if ( !items )
            break;
          size = v23->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + size;
            v23->fields._size = size + 1;
            v38[4] = (Il2CppClass *)v24;
            sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 4), v24, v28, v29, v30, v31, v32, v33);
          }
        }
      }
      if ( v26 == ++v27 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1BCAA3C(list, v24);
  }
LABEL_21:
  if ( !v23 )
    goto LABEL_23;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v23,
                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


GachaEntity_array *__fastcall GachaMaster__getListValidData(GachaMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  int64_t Time; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *v22; // x20
  int64_t v23; // x1
  int64_t list; // x0
  int v25; // w22
  int32_t v26; // w23
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0

  if ( (byte_4B16489 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&GachaEntity_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_GachaEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v16, v17);
    byte_4B16489 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                       v19,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v25 = list;
    v26 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v26,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v23 = list;
        methodPtr_low = LOBYTE(GachaEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(GachaEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == GachaEntity_TypeInfo
          && Time >= *(_QWORD *)(list + 104)
          && Time <= *(_QWORD *)(list + 112) )
        {
          if ( !v22 )
            break;
          items = v22->fields._items;
          v35 = Method_System_Collections_Generic_List_GachaEntity__Add__;
          ++v22->fields._version;
          if ( !items )
            break;
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v22,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v22->fields._size = size + 1;
            v37[4] = (Il2CppClass *)v23;
            sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 4), v23, v27, v28, v29, v30, v31, v32);
          }
        }
      }
      if ( v25 == ++v26 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BCAA3C(list, v23);
  }
LABEL_20:
  if ( !v22 )
    goto LABEL_22;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v22,
                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


int32_t __fastcall GachaMaster__getVaildPayType(GachaMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_IEnumerable_T__o *ListValidData; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_List_object__o *v20; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  void *Item; // x0
  System_Comparison_T__o *v25; // x20
  Il2CppObject *v26; // x21
  struct GachaMaster___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4B1648A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_GachaEntity__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity__Sort__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity___ctor___76785512, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_GachaEntity__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_GachaMaster___c__getVaildPayType_b__4_0__, v12, v13);
    sub_1BCA7E0(&GachaMaster___c_TypeInfo, v14, v15);
    byte_4B1648A = 1;
  }
  ListValidData = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListValidData(this, method);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                       v17,
                                                       v18,
                                                       v19);
  System_Collections_Generic_List_object____ctor_56235344(
    v20,
    ListValidData,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_GachaEntity___ctor___76785512);
  Item = GachaMaster___c_TypeInfo;
  if ( !GachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo, v21);
    Item = GachaMaster___c_TypeInfo;
  }
  v25 = *(System_Comparison_T__o **)(*((_QWORD *)Item + 23) + 16LL);
  if ( !v25 )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item, v21);
      Item = GachaMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)**((_QWORD **)Item + 23);
    v25 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_GachaEntity__TypeInfo, v21, v22, v23);
    System_Comparison_object____ctor(v25, v26, Method_GachaMaster___c__getVaildPayType_b__4_0__, 0LL);
    static_fields = GachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_GachaEntity__o *)v25;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v25, v28, v29, v30, v31, v32, v33);
  }
  if ( !v20
    || (System_Collections_Generic_List_object___Sort_56244000(
          v20,
          v25,
          (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_GachaEntity__Sort__),
        (Item = System_Collections_Generic_List_object___get_Item(
                  v20,
                  0,
                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GachaEntity__get_Item__)) == 0LL) )
  {
    sub_1BCAA3C(Item, v21);
  }
  return *((_DWORD *)Item + 12);
}


void __fastcall GachaMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1648F & 1) == 0 )
  {
    sub_1BCA7E0(&GachaMaster___c_TypeInfo, v1, v2);
    byte_4B1648F = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(GachaMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  GachaMaster___c_TypeInfo->static_fields->__9 = (struct GachaMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)GachaMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall GachaMaster___c___getVaildPayType_b__4_0(
        GachaMaster___c_o *this,
        GachaEntity_o *a,
        GachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}