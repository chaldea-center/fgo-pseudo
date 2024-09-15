void __fastcall GachaMaster___ctor(GachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E1D2 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__, method);
    byte_4A2E1D2 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    32,
    (const MethodInfo_30FF740 *)Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaMaster__CheckIsDrawGroupSummon(GachaMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  GachaEntity_array *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x21
  const MethodInfo *v11; // x2
  int max_length; // w8
  GachaEntity_array *v13; // x19
  unsigned int v14; // w20
  GachaEntity_o *v15; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A2E1DA & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMaster_GachaGroupMaster___, *(_QWORD *)&groupId);
    sub_1B761C0(&Method_DataManager_GetMaster_UserGachaMaster___, v5);
    sub_1B761C0(&DataManager_TypeInfo, v6);
    sub_1B761C0(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__, v7);
    byte_4A2E1DA = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GachaEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !Master_object )
    goto LABEL_20;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         groupId,
         (const MethodInfo_30FF7D4 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v10 = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_UserGachaMaster___);
    Master_object = GachaMaster__getGachaDataInGroup(this, groupId, v11);
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
          sub_1B76424(Master_object, v9);
        v15 = v13->m_Items[v14];
        if ( !v15 || !v10 )
          break;
        Master_object = (GachaEntity_array *)UserGachaMaster__checkIsDrawGroupSummon(
                                               (UserGachaMaster_o *)v10,
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
      sub_1B7641C(Master_object, v9);
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

  if ( (byte_4A2E1D9 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMaster_GachaGroupMaster___, drawUsrGachaEnt);
    sub_1B761C0(&DataManager_TypeInfo, v6);
    this = (GachaMaster_o *)sub_1B761C0(
                              &Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__,
                              v7);
    byte_4A2E1D9 = 1;
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
    this = (GachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_GachaGroupMaster___);
    if ( this )
    {
      this = (GachaMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                &entity,
                                gachaGroupId,
                                (const MethodInfo_30FF7D4 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
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
    sub_1B7641C(this, drawUsrGachaEnt);
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
  System_Collections_Generic_List_object__o *v21; // x19
  void *ClearNum; // x0
  __int64 gachaGroupId; // x1
  int max_length; // w8
  unsigned int v25; // w28
  GachaEntity_o *v26; // x26
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_object__o *v34; // x20
  int32_t v35; // w21
  _DWORD *v36; // x23
  int32_t v37; // w24
  Il2CppObject *v38; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x0
  UserGachaEntity_o *drawUsrGachaEnt; // [xsp+0h] [xbp-80h] BYREF
  UserGachaEntity_o *v47; // [xsp+8h] [xbp-78h] BYREF
  GachaEntity_o *drawGachaEnt; // [xsp+10h] [xbp-70h] BYREF
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A2E1D8 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMaster_GachaReleaseMaster___, method);
    sub_1B761C0(&Method_DataManager_GetMaster_UserGachaMaster___, v3);
    sub_1B761C0(&Method_DataManager_GetMaster_UserQuestMaster___, v4);
    sub_1B761C0(&DataManager_TypeInfo, v5);
    sub_1B761C0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_GachaEntity__Add__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_GachaEntity__Contains__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_GachaEntity__get_Count__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v11);
    sub_1B761C0(&System_Collections_Generic_List_GachaEntity__TypeInfo, v12);
    sub_1B761C0(&NetworkManager_TypeInfo, v13);
    sub_1B761C0(&TutorialFlag_TypeInfo, v14);
    byte_4A2E1D8 = 1;
  }
  v47 = 0LL;
  drawGachaEnt = 0LL;
  drawUsrGachaEnt = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_UserQuestMaster___);
  v17 = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_UserGachaMaster___);
  v18 = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_GachaReleaseMaster___);
  ListValidData = GachaMaster__getListValidData(this, v19);
  entity = 0LL;
  v21 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_63;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
        sub_1B76424(ClearNum, gachaGroupId);
      v26 = ListValidData->m_Items[v25];
      drawGachaEnt = v26;
      if ( !v26 || !Master_object )
        goto LABEL_63;
      ClearNum = (void *)UserQuestMaster__TryGetEntity(
                           (UserQuestMaster_o *)Master_object,
                           &entity,
                           UserId,
                           v26->fields.condQuestId,
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
        if ( (int)ClearNum >= v26->fields.condQuestPhase )
        {
LABEL_67:
          if ( !v18 )
            goto LABEL_63;
          ClearNum = (void *)GachaReleaseMaster__IsEnableRelease((GachaReleaseMaster_o *)v18, v26->fields.id, v27);
          if ( ((unsigned __int8)ClearNum & 1) != 0 )
          {
            LODWORD(v29) = v26->fields.beforeGachaId;
            if ( (int)v29 <= 0 )
              goto LABEL_34;
            if ( !v17 )
              goto LABEL_63;
            ClearNum = (void *)UserGachaMaster__TryGetEntity((UserGachaMaster_o *)v17, &v47, UserId, (int32_t)v29, 0LL);
            if ( ((unsigned __int8)ClearNum & 1) != 0 )
            {
              ClearNum = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           v26->fields.beforeGachaId,
                           (const MethodInfo_30FF780 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
              if ( !v47 || !ClearNum )
                goto LABEL_63;
              if ( v47->fields.num >= *((_DWORD *)ClearNum + 23) )
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
      if ( (int)++v25 >= max_length )
        goto LABEL_40;
    }
    ClearNum = (void *)UserGachaMaster__TryGetEntity(
                         (UserGachaMaster_o *)v17,
                         &drawUsrGachaEnt,
                         UserId,
                         v26->fields.id,
                         0LL);
    if ( ((unsigned __int8)ClearNum & 1) != 0 )
    {
      ClearNum = (void *)GachaMaster__CheckIsMaxDrawNum((GachaMaster_o *)ClearNum, drawUsrGachaEnt, &drawGachaEnt, v29);
      if ( ((unsigned __int8)ClearNum & 1) != 0 )
        goto LABEL_39;
    }
    else
    {
      gachaGroupId = (unsigned int)v26->fields.gachaGroupId;
      if ( (int)gachaGroupId >= 1 )
      {
        ClearNum = (void *)GachaMaster__CheckIsDrawGroupSummon(this, gachaGroupId, v28);
        if ( ((unsigned __int8)ClearNum & 1) != 0 )
          goto LABEL_39;
      }
    }
LABEL_34:
    if ( !v21 )
      goto LABEL_63;
    items = v21->fields._items;
    v31 = Method_System_Collections_Generic_List_GachaEntity__Add__;
    ++v21->fields._version;
    if ( !items )
      goto LABEL_63;
    size = v21->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        (Il2CppObject *)v26,
        *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &items->obj.klass + size;
      v21->fields._size = size + 1;
      v33[4] = (Il2CppClass *)v26;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v26, (int32_t)v28, (int32_t)v29);
    }
    goto LABEL_39;
  }
LABEL_40:
  v34 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !v21 )
LABEL_63:
    sub_1B7641C(ClearNum, gachaGroupId);
  if ( v21->fields._size >= 1 )
  {
    v35 = 0;
    do
    {
      ClearNum = System_Collections_Generic_List_object___get_Item(
                   v21,
                   v35,
                   (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
      v36 = ClearNum;
      if ( v21->fields._size < 1 )
      {
        v38 = (Il2CppObject *)ClearNum;
        if ( !v34 )
          goto LABEL_63;
      }
      else
      {
        v37 = 0;
        v38 = (Il2CppObject *)ClearNum;
        do
        {
          ClearNum = System_Collections_Generic_List_object___get_Item(
                       v21,
                       v37,
                       (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
          if ( !v36 || !ClearNum )
            goto LABEL_63;
          if ( v36[4] != *((_DWORD *)ClearNum + 4) && v36[11] == *((_DWORD *)ClearNum + 11) )
          {
            if ( !v38 )
              goto LABEL_63;
            if ( SHIDWORD(v38[2].klass) < *((_DWORD *)ClearNum + 9) )
              v38 = (Il2CppObject *)ClearNum;
          }
          ++v37;
        }
        while ( v37 < v21->fields._size );
        if ( !v34 )
          goto LABEL_63;
      }
      ClearNum = (void *)System_Collections_Generic_List_object___Contains(
                           v34,
                           v38,
                           (const MethodInfo_34D7964 *)Method_System_Collections_Generic_List_GachaEntity__Contains__);
      if ( ((unsigned __int8)ClearNum & 1) == 0 )
      {
        v41 = v34->fields._items;
        v42 = Method_System_Collections_Generic_List_GachaEntity__Add__;
        ++v34->fields._version;
        if ( !v41 )
          goto LABEL_63;
        v43 = v34->fields._size;
        if ( (unsigned int)v43 >= v41->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v34,
            v38,
            *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = &v41->obj.klass + v43;
          v34->fields._size = v43 + 1;
          v44[4] = (Il2CppClass *)v38;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v38, v39, v40);
        }
      }
      ++v35;
    }
    while ( v35 < v21->fields._size );
  }
  return (System_Collections_Generic_List_GachaEntity__o *)v34;
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
  int32_t v18; // w3

  if ( (byte_4A2E1D4 & 1) == 0 )
  {
    sub_1B761C0(&System_Comparison_GachaEntity__TypeInfo, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_GachaEntity__Sort__, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_GachaEntity___ctor___75852512, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v6);
    sub_1B761C0(&System_Collections_Generic_List_GachaEntity__TypeInfo, v7);
    sub_1B761C0(&Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__, v8);
    sub_1B761C0(&GachaMaster___c_TypeInfo, v9);
    byte_4A2E1D4 = 1;
  }
  ListByPayType = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListByPayType(this, 3, v2);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_55406280(
    v11,
    ListByPayType,
    (const MethodInfo_34D6EC8 *)Method_System_Collections_Generic_List_GachaEntity___ctor___75852512);
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
    _9__2_0 = (System_Comparison_T__o *)sub_1B7640C(System_Comparison_GachaEntity__TypeInfo);
    System_Comparison_object____ctor(_9__2_0, v15, Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__, 0LL);
    static_fields = GachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_GachaEntity__o *)_9__2_0;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v17, v18);
  }
  if ( !v11 )
    sub_1B7641C(v13, v12);
  System_Collections_Generic_List_object___Sort_55414936(
    v11,
    _9__2_0,
    (const MethodInfo_34D9098 *)Method_System_Collections_Generic_List_GachaEntity__Sort__);
  return (GachaEntity_o *)System_Collections_Generic_List_object___get_Item(
                            v11,
                            0,
                            (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
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
  int32_t v15; // w3
  int max_length; // w8
  unsigned int v17; // w22
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A2E1D7 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_GachaEntity__Add__, *(_QWORD *)&groupId);
    sub_1B761C0(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_GachaEntity___ctor___75852512, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v7);
    sub_1B761C0(&System_Collections_Generic_List_GachaEntity__TypeInfo, v8);
    byte_4A2E1D7 = 1;
  }
  ListValidData = GachaMaster__getListValidData(this, *(const MethodInfo **)&groupId);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_55406280(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)ListValidData,
    (const MethodInfo_34D6EC8 *)Method_System_Collections_Generic_List_GachaEntity___ctor___75852512);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_17;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1B76424(v12, v13);
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
            *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v13;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v13, v14, v15);
        }
      }
      max_length = ListValidData->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1B7641C(v12, v13);
  }
LABEL_15:
  if ( !v11 )
    goto LABEL_17;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v11,
                                (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
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
  System_Collections_ObjectModel_Collection_T__o *v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v16; // w23
  int32_t v17; // w24
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4A2E1D3 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&gachaType);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B761C0(&GachaEntity_TypeInfo, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_GachaEntity__Add__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v9);
    sub_1B761C0(&System_Collections_Generic_List_GachaEntity__TypeInfo, v10);
    sub_1B761C0(&NetworkManager_TypeInfo, v11);
    byte_4A2E1D3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v16 = (int)list;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v17,
                                                                 (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v14 = list;
        methodPtr_low = LOBYTE(GachaEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (GachaEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == GachaEntity_TypeInfo
          && LODWORD(list[2].klass) == gachaType
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
              *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v14;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v14, v18, v19);
          }
        }
      }
      if ( v16 == ++v17 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B7641C(list, v14);
  }
LABEL_21:
  if ( !v13 )
    goto LABEL_23;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v13,
                                (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
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
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v14; // w22
  int32_t v15; // w23
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4A2E1D5 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B761C0(&GachaEntity_TypeInfo, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_GachaEntity__Add__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v7);
    sub_1B761C0(&System_Collections_Generic_List_GachaEntity__TypeInfo, v8);
    sub_1B761C0(&NetworkManager_TypeInfo, v9);
    byte_4A2E1D5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        methodPtr_low = LOBYTE(GachaEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (GachaEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == GachaEntity_TypeInfo
          && Time >= (__int64)list[4].monitor
          && Time <= (__int64)list[4].fields.items )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v20 = Method_System_Collections_Generic_List_GachaEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v12;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v12, v16, v17);
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B7641C(list, v12);
  }
LABEL_20:
  if ( !v11 )
    goto LABEL_22;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v11,
                                (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
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
  int32_t v17; // w3

  if ( (byte_4A2E1D6 & 1) == 0 )
  {
    sub_1B761C0(&System_Comparison_GachaEntity__TypeInfo, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_GachaEntity__Sort__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_GachaEntity___ctor___75852512, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v5);
    sub_1B761C0(&System_Collections_Generic_List_GachaEntity__TypeInfo, v6);
    sub_1B761C0(&Method_GachaMaster___c__getVaildPayType_b__4_0__, v7);
    sub_1B761C0(&GachaMaster___c_TypeInfo, v8);
    byte_4A2E1D6 = 1;
  }
  ListValidData = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListValidData(this, method);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_55406280(
    v10,
    ListValidData,
    (const MethodInfo_34D6EC8 *)Method_System_Collections_Generic_List_GachaEntity___ctor___75852512);
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
    v13 = (System_Comparison_T__o *)sub_1B7640C(System_Comparison_GachaEntity__TypeInfo);
    System_Comparison_object____ctor(v13, v14, Method_GachaMaster___c__getVaildPayType_b__4_0__, 0LL);
    static_fields = GachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_GachaEntity__o *)v13;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)v13, v16, v17);
  }
  if ( !v10
    || (System_Collections_Generic_List_object___Sort_55414936(
          v10,
          v13,
          (const MethodInfo_34D9098 *)Method_System_Collections_Generic_List_GachaEntity__Sort__),
        (Item = System_Collections_Generic_List_object___get_Item(
                  v10,
                  0,
                  (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__)) == 0LL) )
  {
    sub_1B7641C(Item, v11);
  }
  return *((_DWORD *)Item + 12);
}


void __fastcall GachaMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A2E1DB & 1) == 0 )
  {
    sub_1B761C0(&GachaMaster___c_TypeInfo, v1);
    byte_4A2E1DB = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(GachaMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GachaMaster___c_TypeInfo->static_fields->__9 = (struct GachaMaster___c_o *)v2;
  sub_1B76164((ServantStatusBattleListViewItem_o *)GachaMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B7641C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall GachaMaster___c___getVaildPayType_b__4_0(
        GachaMaster___c_o *this,
        GachaEntity_o *a,
        GachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B7641C(this, a);
  return b->fields.priority - a->fields.priority;
}