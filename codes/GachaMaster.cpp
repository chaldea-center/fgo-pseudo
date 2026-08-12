void GachaMaster___ctor(GachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970C37 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__);
    byte_5970C37 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    32,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__);
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
    sub_2213CDC(this, drawUsrGachaEnt);
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
  struct GachaMaster___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__9_0; // x20
  Il2CppObject *v7; // x21
  struct GachaMaster___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  __int64 v16; // x1
  GachaMaster___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  struct GachaMaster___c_StaticFields *v19; // x9
  System_Func_object__int__o *_9__9_1; // x20
  Il2CppObject *v21; // x21
  struct GachaMaster___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_5970C3F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_GachaEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_GachaEntity___);
    sub_2213A60(&System_Func_GachaEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_GachaEntity__int__TypeInfo);
    sub_2213A60(&Method_GachaMaster___c__GetClosedBonusSelectGachaIdList_b__9_0__);
    sub_2213A60(&Method_GachaMaster___c__GetClosedBonusSelectGachaIdList_b__9_1__);
    sub_2213A60(&GachaMaster___c_TypeInfo);
    byte_5970C3F = 1;
  }
  v3 = GachaMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !*(&GachaMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo, method);
    v3 = GachaMaster___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__9_0 = (System_Func_object__bool__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = GachaMaster___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GachaEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__9_0, v7, Method_GachaMaster___c__GetClosedBonusSelectGachaIdList_b__9_0__, 0);
    v8 = GachaMaster___c_TypeInfo->static_fields;
    v8->__9__9_0 = (struct System_Func_GachaEntity__bool__o *)_9__9_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__9_0, (int32_t)_9__9_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)_9__9_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GachaEntity___);
  v17 = GachaMaster___c_TypeInfo;
  v18 = v15;
  if ( !*(&GachaMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo, v16);
    v17 = GachaMaster___c_TypeInfo;
  }
  v19 = v17->static_fields;
  _9__9_1 = (System_Func_object__int__o *)v19->__9__9_1;
  if ( !_9__9_1 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v16);
      v19 = GachaMaster___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)v19->__9;
    _9__9_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_GachaEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__9_1, v21, Method_GachaMaster___c__GetClosedBonusSelectGachaIdList_b__9_1__, 0);
    v22 = GachaMaster___c_TypeInfo->static_fields;
    v22->__9__9_1 = (struct System_Func_GachaEntity__int__o *)_9__9_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v22->__9__9_1, (int32_t)_9__9_1, v23, v24, v25, v26, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v18,
                                                               (System_Func_TSource__TResult__o *)_9__9_1,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_GachaEntity__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v29,
           (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
int32_t GachaMaster__GetGroupRemainingDrawNum(GachaMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  int v5; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  int32_t klass_high; // w20
  int MasterName_k__BackingField; // w8
  UserGachaMaster_o *v12; // x21
  unsigned int v13; // w23
  __int64 v14; // x26
  UserGachaEntity_o *v16; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5970C3E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GachaGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970C3E = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  v16 = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&groupId);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !Master_object )
    goto LABEL_29;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          groupId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__) )
    return 0;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GachaMaster__getGachaDataInGroup(this, groupId, v8);
  if ( !entity )
    goto LABEL_29;
  v9 = Master_object;
  klass_high = HIDWORD(entity[1].klass);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserGachaMaster___);
  if ( !v9 )
    goto LABEL_29;
  MasterName_k__BackingField = (int)v9->fields._MasterName_k__BackingField;
  if ( MasterName_k__BackingField >= 1 )
  {
    v12 = (UserGachaMaster_o *)Master_object;
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= MasterName_k__BackingField )
        sub_2213CE4(Master_object);
      v14 = *((_QWORD *)&v9->fields.revision + (int)v13);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
      }
      if ( !v14 || !v12 )
        break;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserGachaMaster__TryGetEntity(
                                                                      v12,
                                                                      &v16,
                                                                      (int64_t)Master_object[2].fields.list[1].monitor,
                                                                      *(_DWORD *)(v14 + 16),
                                                                      0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v16 )
          break;
        klass_high -= v16->fields.num;
        if ( klass_high < 1 )
          return 0;
      }
      MasterName_k__BackingField = (int)v9->fields._MasterName_k__BackingField;
      if ( (int)++v13 >= MasterName_k__BackingField )
        return klass_high;
    }
LABEL_29:
    sub_2213CDC(Master_object, v7);
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
  MethodInfo *v17; // x2
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  MethodInfo *beforeGachaId; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_object__o *v27; // x19
  int32_t v28; // w21
  Il2CppObject *v29; // x23
  int32_t v30; // w24
  Il2CppObject *v31; // x22
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  UserGachaEntity_o *drawUsrGachaEnt; // [xsp+0h] [xbp-80h] BYREF
  UserGachaEntity_o *v44; // [xsp+8h] [xbp-78h] BYREF
  GachaEntity_o *drawGachaEnt; // [xsp+10h] [xbp-70h] BYREF
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5970C3D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GachaReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_5970C3D = 1;
  }
  drawGachaEnt = 0;
  entity = 0;
  drawUsrGachaEnt = 0;
  v44 = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    v3 = NetworkManager_TypeInfo;
  }
  userIdNumber = v3->static_fields->userIdNumber;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserQuestMaster___);
  v6 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserGachaMaster___);
  v7 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaReleaseMaster___);
  ListValidData = GachaMaster__getListValidData(this, v8);
  entity = 0;
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_67;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_2213CE4(ClearNum);
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
            beforeGachaId = (MethodInfo *)(unsigned int)v15->fields.beforeGachaId;
            if ( (int)beforeGachaId <= 0 )
              goto LABEL_38;
            if ( !v6 )
              goto LABEL_67;
            ClearNum = (Il2CppObject *)UserGachaMaster__TryGetEntity(
                                         (UserGachaMaster_o *)v6,
                                         &v44,
                                         userIdNumber,
                                         (int32_t)beforeGachaId,
                                         0);
            if ( ((unsigned __int8)ClearNum & 1) != 0 )
            {
              ClearNum = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           v15->fields.beforeGachaId,
                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
              if ( !v44 || !ClearNum )
                goto LABEL_67;
              if ( v44->fields.num >= SHIDWORD(ClearNum[5].monitor) )
              {
                if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, gachaGroupId);
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
      ClearNum = (Il2CppObject *)GachaMaster__CheckIsMaxDrawNum(this, drawUsrGachaEnt, &drawGachaEnt, beforeGachaId);
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
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      v10->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v15;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(v26 + 4),
        (int32_t)v15,
        (System_String_o *)v17,
        (System_String_o *)beforeGachaId,
        v18,
        v19,
        v20,
        v21);
    }
    goto LABEL_43;
  }
LABEL_44:
  v27 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !v10 )
LABEL_67:
    sub_2213CDC(ClearNum, gachaGroupId);
  if ( v10->fields._size >= 1 )
  {
    v28 = 0;
    do
    {
      ClearNum = System_Collections_Generic_List_object___get_Item(
                   v10,
                   v28,
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
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
                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
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
                                   (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_GachaEntity__Contains__);
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &v38->obj.klass + v40;
          v27->fields._size = v40 + 1;
          v41[4] = (Il2CppClass *)v31;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v41 + 4), (int32_t)v31, v32, v33, v34, v35, v36, v37);
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
  struct GachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v10; // x21
  struct GachaMaster___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5970C39 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_GachaEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity___ctor___91651240);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_2213A60(&Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__);
    sub_2213A60(&GachaMaster___c_TypeInfo);
    byte_5970C39 = 1;
  }
  ListByPayType = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListByPayType(this, 3, v2);
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_71841080(
    v5,
    ListByPayType,
    (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_GachaEntity___ctor___91651240);
  v7 = GachaMaster___c_TypeInfo;
  if ( !*(&GachaMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo, v6);
    v7 = GachaMaster___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__2_0 = (System_Comparison_T__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v6);
      static_fields = GachaMaster___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_GachaEntity__TypeInfo);
    System_Comparison_object____ctor(_9__2_0, v10, Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__, 0);
    v11 = GachaMaster___c_TypeInfo->static_fields;
    v11->__9__2_0 = (struct System_Comparison_GachaEntity__o *)_9__2_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__2_0, (int32_t)_9__2_0, v12, v13, v14, v15, v16, v17);
  }
  if ( !v5 )
    sub_2213CDC(v7, v6);
  System_Collections_Generic_List_object___Sort_71849708(
    v5,
    _9__2_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_GachaEntity__Sort__);
  return (GachaEntity_o *)System_Collections_Generic_List_object___get_Item(
                            v5,
                            0,
                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_array *GachaMaster__getGachaDataInGroup(GachaMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  GachaEntity_array *ListValidData; // x20
  System_Collections_Generic_List_object__o *v6; // x0
  System_Collections_Generic_List_object__o *v7; // x21
  __int64 v8; // x0
  GachaEntity_o *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int max_length; // w8
  unsigned int v17; // w23
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_5970C3C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity___ctor___91651240);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    byte_5970C3C = 1;
  }
  ListValidData = GachaMaster__getListValidData(this, *(const MethodInfo **)&groupId);
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_71841080(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)ListValidData,
    (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_GachaEntity___ctor___91651240);
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_17;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_2213CE4(v8);
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v9;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v9, v10, v11, v12, v13, v14, v15);
        }
      }
      max_length = ListValidData->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_2213CDC(v8, v9);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v7,
                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_array *GachaMaster__getListByPayType(GachaMaster_o *this, int32_t gachaType, const MethodInfo *method)
{
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v6; // x22
  System_Collections_ObjectModel_Collection_T__o *v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v9; // w23
  int32_t v10; // w24
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_5970C38 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970C38 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&gachaType);
  Time = NetworkManager__getTime(0);
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Count__);
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
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Item__);
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v7;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v7, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_19;
    }
LABEL_21:
    sub_2213CDC(list, v7);
  }
LABEL_19:
  if ( !v6 )
    goto LABEL_21;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v6,
                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


GachaEntity_array *GachaMaster__getListValidData(GachaMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x20
  System_Collections_Generic_List_object__o *v4; // x21
  System_Collections_ObjectModel_Collection_T__o *v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v7; // w22
  int32_t v8; // w23
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_5970C3A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970C3A = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0);
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Count__);
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
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_GachaEntity__get_Item__);
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v5;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v5, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_18;
    }
LABEL_20:
    sub_2213CDC(list, v5);
  }
LABEL_18:
  if ( !v4 )
    goto LABEL_20;
  return (GachaEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v4,
                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


int32_t GachaMaster__getVaildPayType(GachaMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *ListValidData; // x20
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x1
  void *Item; // x0
  struct GachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__4_0; // x20
  Il2CppObject *v9; // x21
  struct GachaMaster___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5970C3B & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_GachaEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity___ctor___91651240);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_2213A60(&Method_GachaMaster___c__getVaildPayType_b__4_0__);
    sub_2213A60(&GachaMaster___c_TypeInfo);
    byte_5970C3B = 1;
  }
  ListValidData = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListValidData(this, method);
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_71841080(
    v4,
    ListValidData,
    (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_GachaEntity___ctor___91651240);
  Item = GachaMaster___c_TypeInfo;
  if ( !*(&GachaMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo, v5);
    Item = GachaMaster___c_TypeInfo;
  }
  static_fields = (struct GachaMaster___c_StaticFields *)*((_QWORD *)Item + 23);
  _9__4_0 = (System_Comparison_T__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*((_DWORD *)Item + 57) )
    {
      j_il2cpp_runtime_class_init_0(Item, v5);
      static_fields = GachaMaster___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_GachaEntity__TypeInfo);
    System_Comparison_object____ctor(_9__4_0, v9, Method_GachaMaster___c__getVaildPayType_b__4_0__, 0);
    v10 = GachaMaster___c_TypeInfo->static_fields;
    v10->__9__4_0 = (struct System_Comparison_GachaEntity__o *)_9__4_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__4_0, (int32_t)_9__4_0, v11, v12, v13, v14, v15, v16);
  }
  if ( !v4
    || (System_Collections_Generic_List_object___Sort_71849708(
          v4,
          _9__4_0,
          (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_GachaEntity__Sort__),
        (Item = System_Collections_Generic_List_object___get_Item(
                  v4,
                  0,
                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GachaEntity__get_Item__)) == 0) )
  {
    sub_2213CDC(Item, v5);
  }
  return *((_DWORD *)Item + 12);
}


void GachaMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970C40 & 1) == 0 )
  {
    sub_2213A60(&GachaMaster___c_TypeInfo);
    byte_5970C40 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(GachaMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GachaMaster___c_TypeInfo->static_fields->__9 = (struct GachaMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)GachaMaster___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return (x->fields.flag & 8) != 0 && GachaEntity__IsClosed(x, (const MethodInfo *)x);
}


int32_t GachaMaster___c___GetClosedBonusSelectGachaIdList_b__9_1(
        GachaMaster___c_o *this,
        GachaEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.id;
}


int32_t GachaMaster___c___getFriendPointGachaEntity_b__2_0(
        GachaMaster___c_o *this,
        GachaEntity_o *a,
        GachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t GachaMaster___c___getVaildPayType_b__4_0(
        GachaMaster___c_o *this,
        GachaEntity_o *a,
        GachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}