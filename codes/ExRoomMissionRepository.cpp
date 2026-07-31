void ExRoomMissionRepository___ctor(
        ExRoomMissionRepository_o *this,
        ExRoomMissionStatusResolver_o *inStatusResolver,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.statusResolver = inStatusResolver;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)inStatusResolver, v5, v6, v7, v8, v9, v10);
}


System_Collections_Generic_List_EventMissionConditionEntity__o *ExRoomMissionRepository__BuildConditionEntities(
        ExRoomMissionRepository_o *this,
        EventMissionEntity_o *missionEntity,
        int32_t progressType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t ConditionMessageType; // w21
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionConditionEntity__o *MissionCondListByType; // x0
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppObject *v26; // x1
  Il2CppClass **v27; // x0

  if ( (byte_5932DDB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventMissionConditionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    sub_21FFC50(&MissionInfoMaker_TypeInfo);
    byte_5932DDB = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  if ( missionEntity )
  {
    if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v7, v8);
    ConditionMessageType = MissionInfoMaker__GetConditionMessageType(progressType, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
    if ( !Master_object )
      goto LABEL_19;
    MissionCondListByType = EventMissionConditionMaster__getMissionCondListByType(
                              (EventMissionConditionMaster_o *)Master_object,
                              missionEntity->fields.missionTargetId,
                              missionEntity->fields.id,
                              ConditionMessageType,
                              0);
    if ( MissionCondListByType )
    {
      v15 = (System_Collections_Generic_List_object__o *)MissionCondListByType;
      if ( MissionCondListByType->fields._size >= 1 )
      {
        v16 = 0;
        while ( 1 )
        {
          Master_object = System_Collections_Generic_List_object___get_Item(
                            v15,
                            v16,
                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
          if ( !v6 )
            break;
          items = v6->fields._items;
          v24 = Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            break;
          size = v6->fields._size;
          v26 = Master_object;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              Master_object,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v27[4] = (Il2CppClass *)v26;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v27 + 4), (int32_t)v26, v17, v18, v19, v20, v21, v22);
          }
          if ( ++v16 >= v15->fields._size )
            return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v6;
        }
LABEL_19:
        sub_21FFECC(Master_object, v13);
      }
    }
  }
  return (System_Collections_Generic_List_EventMissionConditionEntity__o *)v6;
}


// local variable allocation has failed, the output may be wrong!
ExRoomMissionListOutput_o *ExRoomMissionRepository__BuildMissionOutput(
        ExRoomMissionRepository_o *this,
        EventMissionEntity_o *missionEntity,
        UserEventMissionEntity_o *userEventMissionEntity,
        int32_t progressType,
        int32_t status,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_EventMissionConditionEntity__o *v12; // x23
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  ExRoomMissionRepository_o *GiftListById; // x25
  const MethodInfo *v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  ExRoomMissionResolvedReward_array *rewardResolvedRewards; // x24
  GiftEntity_o *IconGiftEntity; // x26
  GiftEntity_o *SubGiftEntity; // x27
  ExRoomMissionListOutput_o *v22; // x25
  const MethodInfo *v24; // [xsp+8h] [xbp-58h]

  if ( (byte_5932DDC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_GiftMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&ExRoomMissionListOutput_TypeInfo);
    this = (ExRoomMissionRepository_o *)sub_21FFC50(&MissionInfoMaker_TypeInfo);
    byte_5932DDC = 1;
  }
  if ( !missionEntity )
    return 0;
  v12 = ExRoomMissionRepository__BuildConditionEntities(
          this,
          missionEntity,
          progressType,
          *(const MethodInfo **)&progressType);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v11);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v14);
  GiftListById = (ExRoomMissionRepository_o *)GiftMaster__GetGiftListById(
                                                (GiftMaster_o *)Master_object,
                                                missionEntity->fields.giftId,
                                                0);
  rewardResolvedRewards = ExRoomMissionRepository__BuildResolvedRewards(
                            GiftListById,
                            (GiftEntity_array *)GiftListById,
                            v16);
  if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v17, v18);
  IconGiftEntity = MissionInfoMaker__GetIconGiftEntity((GiftEntity_array *)GiftListById, 0);
  SubGiftEntity = MissionInfoMaker__GetSubGiftEntity((GiftEntity_array *)GiftListById, 0);
  v22 = (ExRoomMissionListOutput_o *)sub_21FFEBC(ExRoomMissionListOutput_TypeInfo);
  ExRoomMissionListOutput___ctor(
    v22,
    missionEntity,
    userEventMissionEntity,
    progressType,
    status,
    v12,
    IconGiftEntity,
    SubGiftEntity,
    rewardResolvedRewards,
    v24);
  return v22;
}


ExRoomMissionResolvedReward_array *ExRoomMissionRepository__BuildResolvedRewards(
        ExRoomMissionRepository_o *this,
        GiftEntity_array *rewardGiftEntities,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  il2cpp_array_size_t v8; // x8
  unsigned int *v9; // x20
  unsigned __int64 v10; // x29
  MissionNaviTransitionBoardItem_o *v11; // x21
  GiftEntity_o *v12; // x22
  GiftEntity_array *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  ItemEntity_o *v17; // x24
  ServantEntity_o *v18; // x25
  CommandCodeEntity_o *v19; // x26
  ServantCostumeEntity_o *v20; // x27
  Il2CppObject *v21; // x28
  ExRoomMissionResolvedReward_o *v22; // x23
  const MethodInfo *v23; // x7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  const MethodInfo *v30; // x7
  __int64 v31; // x1
  __int64 v33; // x0
  GiftEntity_o **m_Items; // [xsp+0h] [xbp-90h]
  ServantCostumeEntity_o *servantCostumeEntity; // [xsp+8h] [xbp-88h] BYREF
  CommandCodeEntity_o *commandCodeEntity; // [xsp+10h] [xbp-80h] BYREF
  ServantEntity_o *servantEntity; // [xsp+18h] [xbp-78h] BYREF
  ItemEntity_o *itemEntity; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_5932DDD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EquipMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_21FFC50(&ExRoomMissionResolvedReward___TypeInfo);
    sub_21FFC50(&ExRoomMissionResolvedReward_TypeInfo);
    sub_21FFC50(&MissionInfoMaker_TypeInfo);
    byte_5932DDD = 1;
  }
  itemEntity = 0;
  entity = 0;
  commandCodeEntity = 0;
  servantEntity = 0;
  servantCostumeEntity = 0;
  if ( !rewardGiftEntities )
    return 0;
  max_length = rewardGiftEntities->max_length;
  if ( !max_length )
    return 0;
  Master_object = (Il2CppObject *)sub_21FFD10(ExRoomMissionResolvedReward___TypeInfo, max_length);
  v8 = rewardGiftEntities->max_length;
  v9 = (unsigned int *)Master_object;
  if ( (int)v8 >= 1 )
  {
    v10 = 0;
    v11 = (MissionNaviTransitionBoardItem_o *)&Master_object[2];
    m_Items = rewardGiftEntities->m_Items;
    do
    {
      if ( v10 >= (unsigned int)v8 )
        goto LABEL_26;
      v12 = m_Items[v10];
      if ( v12 )
      {
        entity = 0;
        if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v6, v7);
        v13 = rewardGiftEntities;
        MissionInfoMaker__SetGiftInfo(v12, &itemEntity, &servantEntity, &commandCodeEntity, &servantCostumeEntity, 0);
        if ( Gift__IsEquip(v12->fields.type, 0) )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EquipMaster___);
          if ( !Master_object )
LABEL_27:
            sub_21FFECC(Master_object, v16);
          DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            v12->fields.objectId,
            (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
        }
        v18 = servantEntity;
        v17 = itemEntity;
        v20 = servantCostumeEntity;
        v19 = commandCodeEntity;
        v21 = entity;
        v22 = (ExRoomMissionResolvedReward_o *)sub_21FFEBC(ExRoomMissionResolvedReward_TypeInfo);
        ExRoomMissionResolvedReward___ctor(v22, v12, v17, v18, v19, v20, (EquipEntity_o *)v21, v23);
        if ( !v9 )
          goto LABEL_27;
        rewardGiftEntities = v13;
      }
      else
      {
        v22 = (ExRoomMissionResolvedReward_o *)sub_21FFEBC(ExRoomMissionResolvedReward_TypeInfo);
        ExRoomMissionResolvedReward___ctor(v22, 0, 0, 0, 0, 0, 0, v30);
        if ( !v9 )
          goto LABEL_27;
      }
      if ( v22 )
      {
        Master_object = (Il2CppObject *)sub_21FFDA4(v22, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
        if ( !Master_object )
        {
          v33 = sub_21FFEF0(0, v31);
          sub_21FFD90(v33, 0);
        }
      }
      if ( v10 >= v9[6] )
LABEL_26:
        sub_21FFED4(Master_object);
      v11->klass = (MissionNaviTransitionBoardItem_c *)v22;
      sub_21FFBF4(v11, (int32_t)v22, v24, v25, v26, v27, v28, v29);
      LODWORD(v8) = rewardGiftEntities->max_length;
      ++v10;
      v11 = (MissionNaviTransitionBoardItem_o *)((char *)v11 + 8);
    }
    while ( (__int64)v10 < (int)v8 );
  }
  return (ExRoomMissionResolvedReward_array *)v9;
}


void ExRoomMissionRepository__IExRoomMissionRepository_GetMissionOutputs(
        ExRoomMissionRepository_o *this,
        System_Action_List_ExRoomMissionListOutput___o *onCompleted,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x24
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UserEventMissionMaster_o *v12; // x22
  int64_t Time; // x0
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *monitor; // x24
  int64_t v16; // x25
  __int64 v17; // x2
  int32_t v18; // w26
  __int64 v19; // x2
  EventMissionEntity_o *v20; // x27
  int32_t MissionProgressType; // w0
  __int64 v22; // x2
  int32_t v23; // w28
  const MethodInfo *v24; // x5
  int32_t v25; // w0
  const MethodInfo *v26; // x5
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  int64_t v36; // x1
  Il2CppClass **v37; // x0
  struct ExRoomMissionRepository___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v40; // x22
  struct ExRoomMissionRepository___c_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Action_T__o *v48; // [xsp+0h] [xbp-70h]
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5932DD9 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_List_ExRoomMissionListOutput____);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_21FFC50(&System_Comparison_ExRoomMissionListOutput__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventMissionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__getEntityList__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListOutput___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ExRoomMissionListOutput__TypeInfo);
    sub_21FFC50(&MissionInfoMaker_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_ExRoomMissionRepository___c__IExRoomMissionRepository_GetMissionOutputs_b__3_0__);
    sub_21FFC50(&ExRoomMissionRepository___c_TypeInfo);
    byte_5932DD9 = 1;
  }
  entity = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ExRoomMissionListOutput__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ExRoomMissionListOutput___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMissionMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
  if ( Master_object )
  {
    v48 = (System_Action_T__o *)onCompleted;
    v12 = (UserEventMissionMaster_o *)v9;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v11);
    Time = NetworkManager__getTime(0);
    monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor;
    if ( !monitor )
      goto LABEL_42;
    v16 = Time;
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           monitor,
           (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__) >= 1 )
    {
      v18 = 0;
      do
      {
        Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                          monitor,
                          v18,
                          (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
        if ( Time )
        {
          v20 = (EventMissionEntity_o *)Time;
          if ( *(_DWORD *)(Time + 24) == 8 )
          {
            if ( !this->fields.statusResolver )
              goto LABEL_42;
            if ( *(_QWORD *)(Time + 56) <= v16 && *(_QWORD *)(Time + 72) >= v16 )
            {
              if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v14, v19);
              MissionProgressType = MissionInfoMaker__GetMissionProgressType(v20, 0);
              if ( MissionProgressType )
              {
                v23 = MissionProgressType;
                if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14, v22);
                if ( !byte_5931D52 )
                {
                  sub_21FFC50(&NetworkManager_TypeInfo);
                  byte_5931D52 = 1;
                }
                Time = (int64_t)NetworkManager_TypeInfo;
                if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14, v22);
                  Time = (int64_t)NetworkManager_TypeInfo;
                }
                if ( !v12 )
                  goto LABEL_42;
                Time = UserEventMissionMaster__TryGetEntity(
                         v12,
                         &entity,
                         *(_QWORD *)(*(_QWORD *)(Time + 184) + 64LL),
                         v20->fields.id,
                         0);
                if ( !this->fields.statusResolver )
                  goto LABEL_42;
                v25 = ExRoomMissionStatusResolver__Resolve(
                        (ExRoomMissionStatusResolver_o *)Time,
                        v20,
                        entity,
                        v23,
                        v16,
                        v24);
                Time = (int64_t)ExRoomMissionRepository__BuildMissionOutput(this, v20, entity, v23, v25, v26);
                if ( !v5 )
                  goto LABEL_42;
                items = v5->fields._items;
                v34 = Method_System_Collections_Generic_List_ExRoomMissionListOutput__Add__;
                ++v5->fields._version;
                if ( !items )
                  goto LABEL_42;
                size = v5->fields._size;
                v36 = Time;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v5,
                    (Il2CppObject *)Time,
                    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
                }
                else
                {
                  v37 = &items->obj.klass + size;
                  v5->fields._size = size + 1;
                  v37[4] = (Il2CppClass *)v36;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v37 + 4), v36, v27, v28, v29, v30, v31, v32);
                }
              }
            }
          }
        }
      }
      while ( ++v18 < System_Collections_ObjectModel_Collection_object___get_Count(
                        monitor,
                        (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__) );
    }
    Time = (int64_t)ExRoomMissionRepository___c_TypeInfo;
    if ( !*(&ExRoomMissionRepository___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ExRoomMissionRepository___c_TypeInfo, v14, v17);
      Time = (int64_t)ExRoomMissionRepository___c_TypeInfo;
    }
    static_fields = *(struct ExRoomMissionRepository___c_StaticFields **)(Time + 184);
    _9__3_0 = (System_Comparison_T__o *)static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( !*(_DWORD *)(Time + 228) )
      {
        j_il2cpp_runtime_class_init_0(Time, v14, v17);
        static_fields = ExRoomMissionRepository___c_TypeInfo->static_fields;
      }
      v40 = (Il2CppObject *)static_fields->__9;
      _9__3_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ExRoomMissionListOutput__TypeInfo);
      System_Comparison_object____ctor(
        _9__3_0,
        v40,
        Method_ExRoomMissionRepository___c__IExRoomMissionRepository_GetMissionOutputs_b__3_0__,
        0);
      v41 = ExRoomMissionRepository___c_TypeInfo->static_fields;
      v41->__9__3_0 = (struct System_Comparison_ExRoomMissionListOutput__o *)_9__3_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v41->__9__3_0, (int32_t)_9__3_0, v42, v43, v44, v45, v46, v47);
    }
    if ( !v5 )
LABEL_42:
      sub_21FFECC(Time, v14);
    System_Collections_Generic_List_object___Sort_71636404(
      v5,
      _9__3_0,
      (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ExRoomMissionListOutput__Sort__);
    ActionExtensions__Call_object_(
      v48,
      (Il2CppObject *)v5,
      (const MethodInfo_36CDF5C *)Method_ActionExtensions_Call_List_ExRoomMissionListOutput____);
  }
  else
  {
    ActionExtensions__Call_object_(
      (System_Action_T__o *)onCompleted,
      (Il2CppObject *)v5,
      (const MethodInfo_36CDF5C *)Method_ActionExtensions_Call_List_ExRoomMissionListOutput____);
  }
}


void ExRoomMissionRepository__IExRoomMissionRepository_ReceiveRewards(
        ExRoomMissionRepository_o *this,
        System_Int32_array *missionIds,
        System_Action_ExRoomMissionReceiveOutput__o *onCompleted,
        const MethodInfo *method)
{
  __int64 v6; // x21
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_T__o *v18; // x19
  ExRoomMissionReceiveOutput_o *v19; // x20
  const MethodInfo *v20; // x6

  if ( (byte_5932DDA & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_ExRoomMissionReceiveOutput___);
    sub_21FFC50(&ExRoomMissionReceiveOutput_TypeInfo);
    sub_21FFC50(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ExRoomMissionRepository___c__DisplayClass4_0__IExRoomMissionRepository_ReceiveRewards_b__0__);
    sub_21FFC50(&ExRoomMissionRepository___c__DisplayClass4_0_TypeInfo);
    byte_5932DDA = 1;
  }
  v6 = sub_21FFEBC(ExRoomMissionRepository___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_11;
  *(_QWORD *)(v6 + 16) = onCompleted;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)onCompleted, v9, v10, v11, v12, v13, v14);
  if ( missionIds && missionIds->max_length )
  {
    v15 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v15,
      (Il2CppObject *)v6,
      Method_ExRoomMissionRepository___c__DisplayClass4_0__IExRoomMissionRepository_ReceiveRewards_b__0__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16, v17);
    Request_object = NetworkManager__getRequest_object_(
                       v15,
                       (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
    if ( Request_object )
    {
      EventMissionClearRewardRequest__beginRequest_51164764(
        (EventMissionClearRewardRequest_o *)Request_object,
        missionIds,
        0);
      return;
    }
LABEL_11:
    sub_21FFECC(Request_object, v8);
  }
  v18 = *(System_Action_T__o **)(v6 + 16);
  v19 = (ExRoomMissionReceiveOutput_o *)sub_21FFEBC(ExRoomMissionReceiveOutput_TypeInfo);
  ExRoomMissionReceiveOutput___ctor(v19, 0, 0, 0, 0, 0, v20);
  ActionExtensions__Call_object_(
    v18,
    (Il2CppObject *)v19,
    (const MethodInfo_36CDF5C *)Method_ActionExtensions_Call_ExRoomMissionReceiveOutput___);
}


// local variable allocation has failed, the output may be wrong!
void ExRoomMissionRepository__IExRoomMissionRepository_SaveFilter(
        ExRoomMissionRepository_o *this,
        int32_t filter,
        const MethodInfo *method)
{
  ExRoomMissionFilterSaveData__Save(filter, *(const MethodInfo **)&filter);
}


void ExRoomMissionRepository_ReceiveResponse___ctor(
        ExRoomMissionRepository_ReceiveResponse_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomMissionRepository___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5932DDE & 1) == 0 )
  {
    sub_21FFC50(&ExRoomMissionRepository___c_TypeInfo);
    byte_5932DDE = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ExRoomMissionRepository___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ExRoomMissionRepository___c_TypeInfo->static_fields->__9 = (struct ExRoomMissionRepository___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ExRoomMissionRepository___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionRepository___c___ctor(ExRoomMissionRepository___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ExRoomMissionRepository___c___IExRoomMissionRepository_GetMissionOutputs_b__3_0(
        ExRoomMissionRepository___c_o *this,
        ExRoomMissionListOutput_o *a,
        ExRoomMissionListOutput_o *b,
        const MethodInfo *method)
{
  struct EventMissionEntity_o *EventMissionEntity_k__BackingField; // x8
  struct EventMissionEntity_o *v7; // x9
  struct EventMissionEntity_o *v8; // x8
  struct EventMissionEntity_o *v9; // x9

  if ( !a )
    goto LABEL_9;
  EventMissionEntity_k__BackingField = a->fields._EventMissionEntity_k__BackingField;
  if ( !EventMissionEntity_k__BackingField )
    goto LABEL_9;
  if ( !b )
    goto LABEL_9;
  v7 = b->fields._EventMissionEntity_k__BackingField;
  if ( !v7 )
    goto LABEL_9;
  this = (ExRoomMissionRepository___c_o *)System_Int32__CompareTo_76925088(
                                            (_DWORD)EventMissionEntity_k__BackingField + 32,
                                            v7->fields.dispNo,
                                            0);
  if ( !(_DWORD)this )
  {
    v8 = a->fields._EventMissionEntity_k__BackingField;
    if ( v8 )
    {
      v9 = b->fields._EventMissionEntity_k__BackingField;
      if ( v9 )
      {
        LODWORD(this) = System_Int32__CompareTo_76925088((_DWORD)v8 + 16, v9->fields.id, 0);
        return (int)this;
      }
    }
LABEL_9:
    sub_21FFECC(this, a);
  }
  return (int)this;
}


void ExRoomMissionRepository___c__DisplayClass4_0___ctor(
        ExRoomMissionRepository___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomMissionRepository___c__DisplayClass4_0___IExRoomMissionRepository_ReceiveRewards_b__0(
        ExRoomMissionRepository___c__DisplayClass4_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *v7; // x20
  System_Object_array *v8; // x0
  il2cpp_array_size_t max_length; // x8
  Il2CppObject *v10; // x8
  GetSvts_array *klass; // x23
  GetCommandCodes_array *monitor; // x24
  struct System_Action_ExRoomMissionReceiveOutput__o *onCompleted; // x19
  System_Int32_array *v14; // x20
  char v15; // w21
  int32_t monitor_high; // w22
  ExRoomMissionReceiveOutput_o *v17; // x25
  const MethodInfo *v18; // x6
  const MethodInfo_36CDF5C *v19; // x2
  System_Action_T__o *v20; // x0
  Il2CppObject *v21; // x1
  struct System_Action_ExRoomMissionReceiveOutput__o *v22; // x19
  ExRoomMissionReceiveOutput_o *v23; // x20
  const MethodInfo *v24; // x6

  if ( (byte_5932DDF & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_ExRoomMissionReceiveOutput___);
    sub_21FFC50(&ExRoomMissionReceiveOutput_TypeInfo);
    sub_21FFC50(&Method_JsonManager_DeserializeArray_ExRoomMissionRepository_ReceiveResponse___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_5932DDF = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
    goto LABEL_11;
  v7 = (Il2CppObject *)System_String__Concat_75481624(
                         (System_String_o *)StringLiteral_16395/*"["*/,
                         result,
                         (System_String_o *)StringLiteral_16659/*"]"*/,
                         0);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v5, v6);
  v8 = JsonManager__DeserializeArray_object_(
         v7,
         (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_ExRoomMissionRepository_ReceiveResponse___);
  if ( !v8 )
    goto LABEL_11;
  max_length = v8->max_length;
  if ( !max_length )
    goto LABEL_11;
  if ( !(_DWORD)max_length )
    sub_21FFED4(v8);
  v10 = v8->m_Items[0];
  if ( v10 )
  {
    klass = (GetSvts_array *)v10[2].klass;
    monitor = (GetCommandCodes_array *)v10[2].monitor;
    onCompleted = this->fields.onCompleted;
    v14 = (System_Int32_array *)v10[1].klass;
    v15 = (char)v10[1].monitor;
    monitor_high = HIDWORD(v10[1].monitor);
    v17 = (ExRoomMissionReceiveOutput_o *)sub_21FFEBC(ExRoomMissionReceiveOutput_TypeInfo);
    ExRoomMissionReceiveOutput___ctor(v17, v14, v15, monitor_high, klass, monitor, v18);
    v19 = (const MethodInfo_36CDF5C *)Method_ActionExtensions_Call_ExRoomMissionReceiveOutput___;
    v20 = (System_Action_T__o *)onCompleted;
    v21 = (Il2CppObject *)v17;
  }
  else
  {
LABEL_11:
    v22 = this->fields.onCompleted;
    v23 = (ExRoomMissionReceiveOutput_o *)sub_21FFEBC(ExRoomMissionReceiveOutput_TypeInfo);
    ExRoomMissionReceiveOutput___ctor(v23, 0, 0, 0, 0, 0, v24);
    v19 = (const MethodInfo_36CDF5C *)Method_ActionExtensions_Call_ExRoomMissionReceiveOutput___;
    v20 = (System_Action_T__o *)v22;
    v21 = (Il2CppObject *)v23;
  }
  ActionExtensions__Call_object_(v20, v21, v19);
}