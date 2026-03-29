void GachaMaster___ctor(GachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D30DAA & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__);
    byte_4D30DAA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    32,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__);
}


bool GachaMaster__CheckIsMaxDrawNum(
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
    sub_1C93D2C(this, drawUsrGachaEnt);
  }
LABEL_5:
  gachaGroupId = v4->fields.gachaGroupId;
  return gachaGroupId >= 1
      && !GachaMaster__GetGroupRemainingDrawNum(this, gachaGroupId, (const MethodInfo *)drawGachaEnt);
}


System_Int32_array *GachaMaster__GetClosedBonusSelectGachaIdList(GachaMaster_o *this, const MethodInfo *method)
{
  GachaMaster___c_c *v3; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *_9__9_0; // x20
  Il2CppObject *v6; // x21
  struct GachaMaster___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  GachaMaster___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_object__int__o *_9__9_1; // x20
  Il2CppObject *v18; // x21
  struct GachaMaster___c_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_4D30DB2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_GachaEntity__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_GachaEntity___);
    sub_1C93AD4(&System_Func_GachaEntity__bool__TypeInfo);
    sub_1C93AD4(&System_Func_GachaEntity__int__TypeInfo);
    sub_1C93AD4(&Method_GachaMaster___c__GetClosedBonusSelectGachaIdList_b__9_0__);
    sub_1C93AD4(&Method_GachaMaster___c__GetClosedBonusSelectGachaIdList_b__9_1__);
    sub_1C93AD4(&GachaMaster___c_TypeInfo);
    byte_4D30DB2 = 1;
  }
  v3 = GachaMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !GachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo);
    v3 = GachaMaster___c_TypeInfo;
  }
  _9__9_0 = (System_Func_object__bool__o *)v3->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = GachaMaster___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__9_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_GachaEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__9_0, v6, Method_GachaMaster___c__GetClosedBonusSelectGachaIdList_b__9_0__, 0);
    static_fields = GachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Func_GachaEntity__bool__o *)_9__9_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)_9__9_0,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_GachaEntity___);
  v15 = GachaMaster___c_TypeInfo;
  v16 = v14;
  if ( !GachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo);
    v15 = GachaMaster___c_TypeInfo;
  }
  _9__9_1 = (System_Func_object__int__o *)v15->static_fields->__9__9_1;
  if ( !_9__9_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = GachaMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__9_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_GachaEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__9_1, v18, Method_GachaMaster___c__GetClosedBonusSelectGachaIdList_b__9_1__, 0);
    v19 = GachaMaster___c_TypeInfo->static_fields;
    v19->__9__9_1 = (struct System_Func_GachaEntity__int__o *)_9__9_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v19->__9__9_1, (int32_t)_9__9_1, v20, v21, v22, v23, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v16,
                                                               (System_Func_TSource__TResult__o *)_9__9_1,
                                                               (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_GachaEntity__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v26,
           (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t GachaMaster__GetGroupRemainingDrawNum(GachaMaster_o *this, int32_t groupId, const MethodInfo *method)
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

  if ( (byte_4D30DB1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_GachaGroupMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D30DB1 = 1;
  }
  entity = 0;
  v15 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !Master_object )
    goto LABEL_29;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          groupId,
          (const MethodInfo_34632C0 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__) )
    return 0;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GachaMaster__getGachaDataInGroup(this, groupId, v7);
  if ( !entity )
    goto LABEL_29;
  v8 = Master_object;
  klass_high = HIDWORD(entity[1].klass);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserGachaMaster___);
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
        sub_1C93D34(Master_object);
      v13 = *((_QWORD *)&v8->fields.revision + (int)v12);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
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
                                                                      0);
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
    sub_1C93D2C(Master_object, v6);
  }
  return klass_high;
}


System_Collections_Generic_List_GachaEntity__o *GachaMaster__GetValidGachaEntityList(
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
  Il2CppObject *ClearNum; // x0
  __int64 gachaGroupId; // x1
  int max_length; // w8
  unsigned int v14; // w28
  GachaEntity_o *v15; // x26
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_object__o *v27; // x19
  int32_t v28; // w21
  Il2CppObject *v29; // x23
  int32_t v30; // w24
  Il2CppObject *v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  UserGachaEntity_o *drawUsrGachaEnt; // [xsp+0h] [xbp-80h] BYREF
  UserGachaEntity_o *v44; // [xsp+8h] [xbp-78h] BYREF
  GachaEntity_o *drawGachaEnt; // [xsp+10h] [xbp-70h] BYREF
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4D30DB0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_GachaReleaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaEntity__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaEntity__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D30DB0 = 1;
  }
  drawGachaEnt = 0;
  entity = 0;
  drawUsrGachaEnt = 0;
  v44 = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserQuestMaster___);
  v6 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserGachaMaster___);
  v7 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GachaReleaseMaster___);
  ListValidData = GachaMaster__getListValidData(this, v8);
  entity = 0;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_67;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C93D34(ClearNum);
      v15 = ListValidData->m_Items[v14];
      drawGachaEnt = v15;
      if ( !v15 || !Master_object )
        goto LABEL_67;
      ClearNum = (Il2CppObject *)UserQuestMaster__TryGetEntity(
                                   (UserQuestMaster_o *)Master_object,
                                   &entity,
                                   userIdNumber,
                                   v15->fields.condQuestId,
                                   0);
      if ( ((unsigned __int8)ClearNum & 1) != 0 )
      {
        ClearNum = (Il2CppObject *)entity;
        if ( !entity )
          goto LABEL_67;
        ClearNum = (Il2CppObject *)UserQuestEntity__getClearNum(entity, 0);
        if ( (int)ClearNum > 0 )
          goto LABEL_71;
        ClearNum = (Il2CppObject *)entity;
        if ( !entity )
          goto LABEL_67;
        ClearNum = (Il2CppObject *)UserQuestEntity__getQuestPhase(entity, 0);
        if ( (int)ClearNum >= v15->fields.condQuestPhase )
        {
LABEL_71:
          if ( !v7 )
            goto LABEL_67;
          ClearNum = (Il2CppObject *)GachaReleaseMaster__IsEnableRelease(
                                       (GachaReleaseMaster_o *)v7,
                                       v15->fields.id,
                                       v16);
          if ( ((unsigned __int8)ClearNum & 1) != 0 )
          {
            LODWORD(v22) = v15->fields.beforeGachaId;
            if ( (int)v22 <= 0 )
              goto LABEL_38;
            if ( !v6 )
              goto LABEL_67;
            ClearNum = (Il2CppObject *)UserGachaMaster__TryGetEntity(
                                         (UserGachaMaster_o *)v6,
                                         &v44,
                                         userIdNumber,
                                         (int32_t)v22,
                                         0);
            if ( ((unsigned __int8)ClearNum & 1) != 0 )
            {
              ClearNum = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           v15->fields.beforeGachaId,
                           (const MethodInfo_3463274 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
              if ( !v44 || !ClearNum )
                goto LABEL_67;
              if ( v44->fields.num >= SHIDWORD(ClearNum[5].monitor) )
              {
                if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
                ClearNum = (Il2CppObject *)TutorialFlag__IsProgressDone(2, 0);
                if ( ((unsigned __int8)ClearNum & 1) != 0 )
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
    ClearNum = (Il2CppObject *)UserGachaMaster__TryGetEntity(
                                 (UserGachaMaster_o *)v6,
                                 &drawUsrGachaEnt,
                                 userIdNumber,
                                 v15->fields.id,
                                 0);
    if ( ((unsigned __int8)ClearNum & 1) != 0 )
    {
      ClearNum = (Il2CppObject *)GachaMaster__CheckIsMaxDrawNum(this, drawUsrGachaEnt, &drawGachaEnt, v22);
      if ( ((unsigned __int8)ClearNum & 1) != 0 )
        goto LABEL_43;
    }
    else
    {
      gachaGroupId = (unsigned int)v15->fields.gachaGroupId;
      if ( (int)gachaGroupId >= 1 )
      {
        ClearNum = (Il2CppObject *)GachaMaster__GetGroupRemainingDrawNum(this, gachaGroupId, v17);
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
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v10,
        (Il2CppObject *)v15,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      v10->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v15;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)(v26 + 4),
        (int32_t)v15,
        (int32_t)v17,
        (int32_t)v22,
        v18,
        v19,
        v20,
        v21);
    }
    goto LABEL_43;
  }
LABEL_44:
  v27 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !v10 )
LABEL_67:
    sub_1C93D2C(ClearNum, gachaGroupId);
  if ( v10->fields._size >= 1 )
  {
    v28 = 0;
    do
    {
      ClearNum = System_Collections_Generic_List_object___get_Item(
                   v10,
                   v28,
                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
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
          ClearNum = System_Collections_Generic_List_object___get_Item(
                       v10,
                       v30,
                       (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
          if ( !v29 || !ClearNum )
            goto LABEL_67;
          if ( LODWORD(v29[1].klass) != LODWORD(ClearNum[1].klass)
            && HIDWORD(v29[2].monitor) == HIDWORD(ClearNum[2].monitor) )
          {
            if ( !v31 )
              goto LABEL_67;
            if ( SHIDWORD(v31[2].klass) < SHIDWORD(ClearNum[2].klass) )
              v31 = ClearNum;
          }
          ++v30;
        }
        while ( v30 < v10->fields._size );
        if ( !v27 )
          goto LABEL_67;
      }
      ClearNum = (Il2CppObject *)System_Collections_Generic_List_object___Contains(
                                   v27,
                                   v31,
                                   (const MethodInfo_3879D2C *)Method_System_Collections_Generic_List_GachaEntity__Contains__);
      if ( ((unsigned __int8)ClearNum & 1) == 0 )
      {
        v38 = v27->fields._items;
        v39 = Method_System_Collections_Generic_List_GachaEntity__Add__;
        ++v27->fields._version;
        if ( !v38 )
          goto LABEL_67;
        v40 = v27->fields._size;
        if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            v31,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &v38->obj.klass + v40;
          v27->fields._size = v40 + 1;
          v41[4] = (Il2CppClass *)v31;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v41 + 4), (int32_t)v31, v32, v33, v34, v35, v36, v37);
        }
      }
      ++v28;
    }
    while ( v28 < v10->fields._size );
  }
  return (System_Collections_Generic_List_GachaEntity__o *)v27;
}


GachaEntity_o *GachaMaster__getFriendPointGachaEntity(GachaMaster_o *this, const MethodInfo *method)
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
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D30DAC & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_GachaEntity__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaEntity___ctor___79006344);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaEntity__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_1C93AD4(&Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__);
    sub_1C93AD4(&GachaMaster___c_TypeInfo);
    byte_4D30DAC = 1;
  }
  ListByPayType = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListByPayType(this, 3, v2);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_59216528(
    v5,
    ListByPayType,
    (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_GachaEntity___ctor___79006344);
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
    _9__2_0 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_GachaEntity__TypeInfo);
    System_Comparison_object____ctor(_9__2_0, v9, Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__, 0);
    static_fields = GachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_GachaEntity__o *)_9__2_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v11, v12, v13, v14, v15, v16);
  }
  if ( !v5 )
    sub_1C93D2C(v7, v6);
  System_Collections_Generic_List_object___Sort_59225184(
    v5,
    _9__2_0,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_GachaEntity__Sort__);
  return (GachaEntity_o *)System_Collections_Generic_List_object___get_Item(
                            v5,
                            0,
                            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_array *GachaMaster__getGachaDataInGroup(GachaMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  GachaEntity_array *ListValidData; // x20
  System_Collections_Generic_List_object__o *v6; // x0
  System_Collections_Generic_List_object__o *v7; // x21
  __int64 v8; // x0
  GachaEntity_o *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int max_length; // w8
  unsigned int v17; // w22
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4D30DAF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaEntity___ctor___79006344);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    byte_4D30DAF = 1;
  }
  ListValidData = GachaMaster__getListValidData(this, *(const MethodInfo **)&groupId);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_59216528(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)ListValidData,
    (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_GachaEntity___ctor___79006344);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_17;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1C93D34(v8);
      v9 = ListValidData->m_Items[v17];
      if ( !v9 )
        break;
      if ( v9->fields.gachaGroupId == groupId )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v19 = Method_System_Collections_Generic_List_GachaEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)v9,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v9;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v9, v10, v11, v12, v13, v14, v15);
        }
      }
      max_length = ListValidData->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C93D2C(v8, v9);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v7,
                                (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


GachaEntity_array *GachaMaster__getListByPayType(GachaMaster_o *this, int32_t gachaType, const MethodInfo *method)
{
  int64_t Time; // x22
  System_Collections_Generic_List_object__o *v6; // x21
  System_Collections_ObjectModel_Collection_T__o *v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v9; // w23
  int32_t v10; // w24
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4D30DAB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D30DAB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Count__);
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
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Item__);
      if ( list )
      {
        v7 = list;
        if ( LODWORD(list[2].klass) == gachaType
          && Time >= (__int64)list[4].monitor
          && Time <= (__int64)list[4].fields.items )
        {
          if ( !v6 )
            break;
          items = v6->fields._items;
          v18 = Method_System_Collections_Generic_List_GachaEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            break;
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)list,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v7;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v7, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1C93D2C(list, v7);
  }
LABEL_19:
  if ( !v6 )
    goto LABEL_21;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v6,
                                (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


GachaEntity_array *GachaMaster__getListValidData(GachaMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v4; // x20
  System_Collections_ObjectModel_Collection_T__o *v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v7; // w22
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4D30DAD & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D30DAD = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Count__);
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
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Item__);
      if ( list )
      {
        v5 = list;
        if ( Time >= (__int64)list[4].monitor && Time <= (__int64)list[4].fields.items )
        {
          if ( !v4 )
            break;
          items = v4->fields._items;
          v16 = Method_System_Collections_Generic_List_GachaEntity__Add__;
          ++v4->fields._version;
          if ( !items )
            break;
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)list,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v5;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v5, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1C93D2C(list, v5);
  }
LABEL_18:
  if ( !v4 )
    goto LABEL_20;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v4,
                                (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


int32_t GachaMaster__getVaildPayType(GachaMaster_o *this, const MethodInfo *method)
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
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D30DAE & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_GachaEntity__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaEntity___ctor___79006344);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaEntity__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_1C93AD4(&Method_GachaMaster___c__getVaildPayType_b__4_0__);
    sub_1C93AD4(&GachaMaster___c_TypeInfo);
    byte_4D30DAE = 1;
  }
  ListValidData = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListValidData(this, method);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_59216528(
    v4,
    ListValidData,
    (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_GachaEntity___ctor___79006344);
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
    v7 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_GachaEntity__TypeInfo);
    System_Comparison_object____ctor(v7, v8, Method_GachaMaster___c__getVaildPayType_b__4_0__, 0);
    static_fields = GachaMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_GachaEntity__o *)v7;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0, (int32_t)v7, v10, v11, v12, v13, v14, v15);
  }
  if ( !v4
    || (System_Collections_Generic_List_object___Sort_59225184(
          v4,
          v7,
          (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_GachaEntity__Sort__),
        (Item = System_Collections_Generic_List_object___get_Item(
                  v4,
                  0,
                  (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GachaEntity__get_Item__)) == 0) )
  {
    sub_1C93D2C(Item, v5);
  }
  return *((_DWORD *)Item + 12);
}


void GachaMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D30DB3 & 1) == 0 )
  {
    sub_1C93AD4(&GachaMaster___c_TypeInfo);
    byte_4D30DB3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(GachaMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GachaMaster___c_TypeInfo->static_fields->__9 = (struct GachaMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)GachaMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GachaMaster___c___ctor(GachaMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GachaMaster___c___GetClosedBonusSelectGachaIdList_b__9_0(
        GachaMaster___c_o *this,
        GachaEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return (x->fields.flag & 8) != 0 && GachaEntity__IsClosed(x, (const MethodInfo *)x);
}


int32_t GachaMaster___c___GetClosedBonusSelectGachaIdList_b__9_1(
        GachaMaster___c_o *this,
        GachaEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.id;
}


int32_t GachaMaster___c___getFriendPointGachaEntity_b__2_0(
        GachaMaster___c_o *this,
        GachaEntity_o *a,
        GachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C93D2C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t GachaMaster___c___getVaildPayType_b__4_0(
        GachaMaster___c_o *this,
        GachaEntity_o *a,
        GachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C93D2C(this, a);
  return b->fields.priority - a->fields.priority;
}