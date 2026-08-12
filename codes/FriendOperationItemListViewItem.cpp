void FriendOperationItemListViewItem___ctor(
        FriendOperationItemListViewItem_o *this,
        int32_t kind,
        int32_t index,
        OtherUserGameEntity_o *otherUserGameEntity,
        int32_t classPos,
        System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary,
        const MethodInfo *method)
{
  IconLabelInfo_o *v13; // x25
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  IconLabelInfo_o *v20; // x25
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Collections_Generic_Dictionary_int__int__o *v39; // x23
  const MethodInfo *v40; // x3

  if ( (byte_596B018 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor___91598536);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    byte_596B018 = 1;
  }
  v13 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0);
  this->fields.iconLabelInfo1 = v13;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v20, 0);
  this->fields.iconLabelInfo2 = v20;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.otherUserGameEntity,
    (int32_t)otherUserGameEntity,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( classBoardMaxNumDictionary )
  {
    v39 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_66659160(
      v39,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_3F92358 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___91598536);
  }
  else
  {
    v39 = 0;
  }
  this->fields.classBoardMaxNumDictionary = v39;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.classBoardMaxNumDictionary,
    (int32_t)v39,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v40);
}


void FriendOperationItemListViewItem___ctor_39322204(
        FriendOperationItemListViewItem_o *this,
        int32_t kind,
        int32_t index,
        OtherUserGameEntity_o *otherUserGameEntity,
        UserBlacklistEntity_o *userBlacklistEntity,
        int32_t classPos,
        System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary,
        const MethodInfo *method)
{
  IconLabelInfo_o *v15; // x26
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  IconLabelInfo_o *v22; // x26
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_Collections_Generic_Dictionary_int__int__o *v47; // x23
  const MethodInfo *v48; // x3

  if ( (byte_596B019 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor___91598536);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    byte_596B019 = 1;
  }
  v15 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0);
  this->fields.iconLabelInfo1 = v15;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0);
  this->fields.iconLabelInfo2 = v22;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.otherUserGameEntity,
    (int32_t)otherUserGameEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.userBlacklistEntity = userBlacklistEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userBlacklistEntity,
    (int32_t)userBlacklistEntity,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( classBoardMaxNumDictionary )
  {
    v47 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_66659160(
      v47,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_3F92358 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___91598536);
  }
  else
  {
    v47 = 0;
  }
  this->fields.classBoardMaxNumDictionary = v47;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.classBoardMaxNumDictionary,
    (int32_t)v47,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v48);
}


void FriendOperationItemListViewItem___ctor_39322540(
        FriendOperationItemListViewItem_o *this,
        int32_t kind,
        int32_t index,
        OtherUserGameEntity_o *otherUserGameEntity,
        UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity,
        int32_t classPos,
        System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary,
        const MethodInfo *method)
{
  IconLabelInfo_o *v15; // x26
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  IconLabelInfo_o *v22; // x26
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_Collections_Generic_Dictionary_int__int__o *v47; // x23
  const MethodInfo *v48; // x3

  if ( (byte_596B01A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor___91598536);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    byte_596B01A = 1;
  }
  v15 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0);
  this->fields.iconLabelInfo1 = v15;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0);
  this->fields.iconLabelInfo2 = v22;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.otherUserGameEntity = otherUserGameEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.otherUserGameEntity,
    (int32_t)otherUserGameEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.userFriendRequestHistoryEntity = userFriendRequestHistoryEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userFriendRequestHistoryEntity,
    (int32_t)userFriendRequestHistoryEntity,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( classBoardMaxNumDictionary )
  {
    v47 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_66659160(
      v47,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_3F92358 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___91598536);
  }
  else
  {
    v47 = 0;
  }
  this->fields.classBoardMaxNumDictionary = v47;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.classBoardMaxNumDictionary,
    (int32_t)v47,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  FriendOperationItemListViewItem__setupItem(this, kind, classPos, v48);
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewItem__AnalyzeEntity(
        FriendOperationItemListViewItem_o *this,
        int32_t classPos,
        int32_t inFollowerGrandGraphId,
        const MethodInfo *method)
{
  void *otherUserGameEntity; // x0
  __int64 v8; // x8
  int32_t v9; // w21
  int32_t SvtId; // w0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w20
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int *v26; // x23
  ServantLeaderInfo_o *ServantLeaderInfo; // x22
  int64_t v28; // x8
  int64_t v29; // x8
  __int64 v30; // x2
  int32_t kind; // w8
  int64_t v32; // x8
  struct System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // x8
  struct OtherUserGameEntity_o *v34; // x8
  int32_t v35; // w20
  struct OtherUserGameEntity_o *v36; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v39; // w21
  unsigned int v40; // w25
  ClassBoardInfo_o *v41; // x22
  int32_t v42; // w8
  bool v44; // w8
  struct System_Int32_array *squareIds; // x8

  if ( (byte_596B01F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596B01F = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  this->fields.classPos = classPos;
  this->fields._FollowerGrandGraphId_k__BackingField = inFollowerGrandGraphId;
  this->fields._OpenClassBoardNum_k__BackingField = -1;
  this->fields._IsMaxOpenClassBoard_k__BackingField = 0;
  if ( !otherUserGameEntity )
    goto LABEL_59;
  v8 = *((_QWORD *)otherUserGameEntity + 13);
  if ( !v8 )
    goto LABEL_59;
  if ( !*(_DWORD *)(v8 + 24) )
LABEL_60:
    sub_2213CE4(otherUserGameEntity);
  v9 = *(_DWORD *)(v8 + 32);
  SvtId = OtherUserGameEntity__getSvtId(
            (OtherUserGameEntity_o *)otherUserGameEntity,
            classPos,
            this->fields.displayServantType,
            v9,
            inFollowerGrandGraphId,
            0);
  if ( !SvtId )
  {
    this->fields.servantEntity = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity, 0, v11, v12, v13, v14, v15, v16);
    this->fields.sortValue1B = 0;
    this->fields.sortValue2 = 0;
    this->fields.sortValue2B = 0;
    goto LABEL_53;
  }
  v17 = SvtId;
  otherUserGameEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !otherUserGameEntity )
    goto LABEL_59;
  otherUserGameEntity = DataManager__GetMasterData_object_(
                          (DataManager_o *)otherUserGameEntity,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !otherUserGameEntity )
    goto LABEL_59;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)otherUserGameEntity,
             v17,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)Entity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  otherUserGameEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !otherUserGameEntity )
    goto LABEL_59;
  otherUserGameEntity = DataManager__GetMasterData_object_(
                          (DataManager_o *)otherUserGameEntity,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !*p_servantEntity )
    goto LABEL_59;
  if ( !otherUserGameEntity )
    goto LABEL_59;
  otherUserGameEntity = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)otherUserGameEntity,
                          (*p_servantEntity)->fields.classId,
                          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !this->fields.otherUserGameEntity )
    goto LABEL_59;
  v26 = (int *)otherUserGameEntity;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        this->fields.otherUserGameEntity,
                        this->fields.classPos,
                        0,
                        this->fields.displayServantType,
                        v9,
                        this->fields._FollowerGrandGraphId_k__BackingField,
                        0);
  otherUserGameEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !otherUserGameEntity )
    goto LABEL_59;
  otherUserGameEntity = DataManager__GetMasterData_object_(
                          (DataManager_o *)otherUserGameEntity,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !ServantLeaderInfo )
    goto LABEL_59;
  if ( !otherUserGameEntity )
    goto LABEL_59;
  otherUserGameEntity = ServantLimitMaster__GetEntity(
                          (ServantLimitMaster_o *)otherUserGameEntity,
                          v17,
                          ServantLeaderInfo->fields.limitCount,
                          0);
  if ( !v26 )
    goto LABEL_59;
  v28 = v26[13];
  this->fields.priority = v28;
  this->fields.sortValue1B = v28;
  otherUserGameEntity = ServantLeaderInfo__GetOverwriteStatus(ServantLeaderInfo, 0);
  if ( !otherUserGameEntity )
    goto LABEL_59;
  v29 = *((int *)otherUserGameEntity + 6);
  otherUserGameEntity = this->fields.otherUserGameEntity;
  this->fields.sortValue2 = v29;
  if ( !otherUserGameEntity )
    goto LABEL_59;
  otherUserGameEntity = (void *)OtherUserGameEntity__getLv(
                                  (OtherUserGameEntity_o *)otherUserGameEntity,
                                  this->fields.classPos,
                                  this->fields.displayServantType,
                                  v9,
                                  this->fields._FollowerGrandGraphId_k__BackingField,
                                  0);
  kind = this->fields.kind;
  this->fields.sortValue0B = 0;
  this->fields.sortValue2B = (int)otherUserGameEntity;
  if ( kind == 9 )
  {
    v32 = 2;
    goto LABEL_24;
  }
  if ( kind == 3 )
  {
    v32 = 1;
LABEL_24:
    this->fields.sortValue0B = v32;
  }
  classBoardMaxNumDictionary = this->fields.classBoardMaxNumDictionary;
  *(_QWORD *)&this->fields.hp = *(_QWORD *)&ServantLeaderInfo->fields.hp;
  if ( !classBoardMaxNumDictionary )
    goto LABEL_52;
  v34 = this->fields.otherUserGameEntity;
  if ( !v34 )
    goto LABEL_59;
  if ( !v34->fields.userClassBoardInfo )
  {
LABEL_52:
    this->fields._IsMaxOpenClassBoard_k__BackingField = 0;
    this->fields._OpenClassBoardNum_k__BackingField = -1;
    goto LABEL_53;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&classPos, v30);
  otherUserGameEntity = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !otherUserGameEntity )
    goto LABEL_59;
  otherUserGameEntity = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)otherUserGameEntity,
                          v17,
                          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !otherUserGameEntity )
    goto LABEL_59;
  v35 = *((_DWORD *)otherUserGameEntity + 20);
  otherUserGameEntity = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !otherUserGameEntity )
    goto LABEL_59;
  otherUserGameEntity = (void *)ClassBoardClassMaster__GetClassBoardBaseId(
                                  (ClassBoardClassMaster_o *)otherUserGameEntity,
                                  v35,
                                  0);
  v36 = this->fields.otherUserGameEntity;
  if ( !v36 )
    goto LABEL_59;
  userClassBoardInfo = v36->fields.userClassBoardInfo;
  if ( !userClassBoardInfo )
    goto LABEL_59;
  max_length = userClassBoardInfo->max_length;
  if ( max_length >= 1 )
  {
    v39 = (int)otherUserGameEntity;
    v40 = 0;
    while ( 1 )
    {
      if ( v40 >= max_length )
        goto LABEL_60;
      v41 = userClassBoardInfo->m_Items[v40];
      if ( !v41 )
        goto LABEL_59;
      if ( v41->fields.classBoardBaseId == v39 )
      {
        otherUserGameEntity = this->fields.classBoardMaxNumDictionary;
        if ( !otherUserGameEntity )
          goto LABEL_59;
        otherUserGameEntity = (void *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                        (System_Collections_Generic_Dictionary_int__int__o *)otherUserGameEntity,
                                        v39,
                                        (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)otherUserGameEntity & 1) != 0 )
        {
          otherUserGameEntity = (void *)ClassBoardInfo__IsReleasedClassId(v41, v35, 0);
          if ( ((unsigned __int8)otherUserGameEntity & 1) != 0 )
            break;
        }
      }
      max_length = userClassBoardInfo->max_length;
      if ( (int)++v40 >= max_length )
        goto LABEL_44;
    }
    otherUserGameEntity = this->fields.classBoardMaxNumDictionary;
    if ( otherUserGameEntity )
    {
      otherUserGameEntity = (void *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                      (System_Collections_Generic_Dictionary_int__int__o *)otherUserGameEntity,
                                      v39,
                                      (const MethodInfo_3F92B84 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      squareIds = v41->fields.squareIds;
      if ( squareIds )
      {
        v42 = squareIds->max_length;
        goto LABEL_45;
      }
    }
LABEL_59:
    sub_2213CDC(otherUserGameEntity, *(_QWORD *)&classPos);
  }
LABEL_44:
  v42 = 0;
  LODWORD(otherUserGameEntity) = -1;
LABEL_45:
  this->fields._OpenClassBoardNum_k__BackingField = v42;
  v44 = (int)otherUserGameEntity > 0 && v42 >= (int)otherUserGameEntity;
  this->fields._IsMaxOpenClassBoard_k__BackingField = v44;
LABEL_53:
  otherUserGameEntity = this->fields.iconLabelInfo1;
  if ( !otherUserGameEntity )
    goto LABEL_59;
  IconLabelInfo__Clear((IconLabelInfo_o *)otherUserGameEntity, 0);
  otherUserGameEntity = this->fields.iconLabelInfo2;
  if ( !otherUserGameEntity )
    goto LABEL_59;
  IconLabelInfo__Clear((IconLabelInfo_o *)otherUserGameEntity, 0);
}


void FriendOperationItemListViewItem__Finalize(FriendOperationItemListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool FriendOperationItemListViewItem__GetAppendSkillInfo(
        FriendOperationItemListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  FriendOperationItemListViewItem_o *v4; // x21
  struct OtherUserGameEntity_o *otherUserGameEntity; // x20
  struct System_Int32_array *mainSupportDeckIds; // x8
  BalanceConfig_c *v7; // x0
  SkillInfo_array *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v4 = this;
  if ( (byte_596B026 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    this = (FriendOperationItemListViewItem_o *)sub_2213A60(&SkillInfo___TypeInfo);
    byte_596B026 = 1;
  }
  otherUserGameEntity = v4->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_2213CDC(this, skillInfoList);
    if ( !LODWORD(mainSupportDeckIds->max_length) )
      sub_2213CE4(this);
    OtherUserGameEntity__GetAppendSkillInfo(
      v4->fields.otherUserGameEntity,
      skillInfoList,
      v4->fields.classPos,
      v4->fields.displayServantType,
      mainSupportDeckIds->m_Items[0],
      v4->fields._FollowerGrandGraphId_k__BackingField,
      0);
  }
  else
  {
    v7 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, skillInfoList, method);
      v7 = BalanceConfig_TypeInfo;
    }
    v8 = (SkillInfo_array *)sub_2213B20(
                              SkillInfo___TypeInfo,
                              (unsigned int)v7->static_fields->SvtAppendPassiveSkillListMax);
    *skillInfoList = v8;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)skillInfoList, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  }
  return otherUserGameEntity != 0;
}


bool FriendOperationItemListViewItem__GetNpInfo(
        FriendOperationItemListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x8
  TreasureDvcInfo_o *v8; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596B025 & 1) == 0 )
  {
    sub_2213A60(&TreasureDvcInfo_TypeInfo);
    byte_596B025 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_2213CDC(otherUserGameEntity, tdInfo);
    if ( !LODWORD(mainSupportDeckIds->max_length) )
      sub_2213CE4(otherUserGameEntity);
    return OtherUserGameEntity__getTreasureDeviceInfo(
             otherUserGameEntity,
             tdInfo,
             this->fields.classPos,
             this->fields.displayServantType,
             mainSupportDeckIds->m_Items[0],
             this->fields._FollowerGrandGraphId_k__BackingField,
             0);
  }
  else
  {
    v8 = (TreasureDvcInfo_o *)sub_2213CCC(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v8, 0);
    *tdInfo = v8;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)tdInfo, (int32_t)v8, v9, v10, v11, v12, v13, v14);
    return 0;
  }
}


bool FriendOperationItemListViewItem__GetSkillInfo(
        FriendOperationItemListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  FriendOperationItemListViewItem_o *v4; // x21
  struct OtherUserGameEntity_o *otherUserGameEntity; // x20
  struct System_Int32_array *mainSupportDeckIds; // x8
  BalanceConfig_c *v7; // x0
  SkillInfo_array *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v4 = this;
  if ( (byte_596B024 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    this = (FriendOperationItemListViewItem_o *)sub_2213A60(&SkillInfo___TypeInfo);
    byte_596B024 = 1;
  }
  otherUserGameEntity = v4->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_2213CDC(this, skillInfoList);
    if ( !LODWORD(mainSupportDeckIds->max_length) )
      sub_2213CE4(this);
    OtherUserGameEntity__getSkillInfo(
      v4->fields.otherUserGameEntity,
      skillInfoList,
      v4->fields.classPos,
      v4->fields.displayServantType,
      mainSupportDeckIds->m_Items[0],
      v4->fields._FollowerGrandGraphId_k__BackingField,
      0);
  }
  else
  {
    v7 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, skillInfoList, method);
      v7 = BalanceConfig_TypeInfo;
    }
    v8 = (SkillInfo_array *)sub_2213B20(SkillInfo___TypeInfo, (unsigned int)v7->static_fields->SvtSkillListMax);
    *skillInfoList = v8;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)skillInfoList, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  }
  return otherUserGameEntity != 0;
}


int32_t FriendOperationItemListViewItem__GetTreasureDeviceLevelIcon(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x9

  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( !otherUserGameEntity || (mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds) == 0 )
    sub_2213CDC(otherUserGameEntity, method);
  if ( !LODWORD(mainSupportDeckIds->max_length) )
    sub_2213CE4(otherUserGameEntity);
  return OtherUserGameEntity__getTreasureDeviceLevelIcon(
           otherUserGameEntity,
           this->fields.classPos,
           this->fields.displayServantType,
           mainSupportDeckIds->m_Items[0],
           this->fields._FollowerGrandGraphId_k__BackingField,
           0);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_string__int__o *FriendOperationItemListViewItem__GetValuesDictionary(
        FriendOperationItemListViewItem_o *this,
        int32_t priorityKind,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__int__o *result; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *keys; // x20
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *values; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Master_object; // x20
  const MethodInfo *v14; // x1
  __int64 v15; // x2
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v16; // x21
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v17; // x22
  ServantSkillEntity_array *ServantSkillList; // x20
  Il2CppObject *v19; // x21
  Il2CppObject *v20; // x22
  const MethodInfo *v21; // x1
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_string__int__o *v23; // x23
  unsigned __int64 v24; // x25
  int max_length; // w8
  int32_t v26; // w2
  int v27; // w10
  ServantSkillEntity_o *v28; // x11
  SkillLvEntity_o *v29; // x8
  unsigned __int64 v30; // x29
  struct System_Int32_array *funcId; // x8
  unsigned __int64 max_length_low; // x9
  unsigned __int64 entries_low; // x8
  System_Collections_Generic_Dictionary_string__int__c **v34; // x8
  System_Collections_Generic_Dictionary_object__int__o *v35; // x24
  int monitor; // w8
  unsigned __int64 v37; // x8
  Il2CppObject *v38; // [xsp+0h] [xbp-70h] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_596B020 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_1455/*"3"*/);
    byte_596B020 = 1;
  }
  v38 = 0;
  entity = 0;
  result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                     this,
                                                                     *(const MethodInfo **)&priorityKind);
  if ( result )
  {
    result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                       this,
                                                                       v6);
    if ( !result )
      goto LABEL_80;
    keys = result->fields._keys;
    values = result->fields._values;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    *(_QWORD *)&v40.fields.currentCryptoKey = keys;
    *(_QWORD *)&v40.fields.fakeValue = values;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v40, 0) >= 1 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v12);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantSkillMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                         this,
                                                                         v14);
      if ( !result )
        goto LABEL_80;
      v16 = result->fields._keys;
      v17 = result->fields._values;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v15);
      *(_QWORD *)&v41.fields.currentCryptoKey = v16;
      *(_QWORD *)&v41.fields.fakeValue = v17;
      result = (System_Collections_Generic_Dictionary_string__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                         v41,
                                                                         0);
      if ( !Master_object )
        goto LABEL_80;
      ServantSkillList = ServantSkillMaster__getServantSkillList(
                           (ServantSkillMaster_o *)Master_object,
                           (int32_t)result,
                           0);
      v19 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
      v20 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                                                         this,
                                                                         v21);
      if ( !result )
        goto LABEL_80;
      result = (System_Collections_Generic_Dictionary_string__int__o *)EquipTargetInfo__getSkillIdList(
                                                                         (EquipTargetInfo_o *)result,
                                                                         0);
      if ( !result )
        goto LABEL_80;
      entries = result->fields._entries;
      v23 = result;
      if ( (int)entries >= 1 )
      {
        v24 = 0;
        while ( 1 )
        {
          if ( v24 >= (unsigned int)entries )
            goto LABEL_81;
          if ( !ServantSkillList )
            goto LABEL_80;
          max_length = ServantSkillList->max_length;
          v26 = *(&v23->fields._count + v24);
          if ( max_length >= 1 )
          {
            v27 = 0;
            while ( max_length != v27 )
            {
              v28 = ServantSkillList->m_Items[v27];
              if ( !v28 )
                goto LABEL_80;
              if ( v28->fields.skillId == v26 && v28->fields.eventId > 0 )
                goto LABEL_77;
              if ( (max_length & ~(max_length >> 31)) == ++v27 )
                goto LABEL_27;
            }
LABEL_81:
            sub_2213CE4(result);
          }
LABEL_27:
          if ( !v19 )
            goto LABEL_80;
          result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvMaster__TryGetEntity(
                                                                             (SkillLvMaster_o *)v19,
                                                                             &entity,
                                                                             v26,
                                                                             1,
                                                                             0);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
LABEL_77:
          LODWORD(entries) = v23->fields._entries;
          if ( (__int64)++v24 >= (int)entries )
            return 0;
        }
        v29 = entity;
        if ( entity )
        {
          v30 = 0;
          do
          {
            funcId = v29->fields.funcId;
            if ( !funcId )
              break;
            max_length_low = LODWORD(funcId->max_length);
            if ( (__int64)v30 >= (int)max_length_low )
              goto LABEL_77;
            if ( v30 >= max_length_low )
              goto LABEL_81;
            if ( !v20 )
              break;
            result = (System_Collections_Generic_Dictionary_string__int__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)v20,
                                                                               &v38,
                                                                               funcId->m_Items[v30],
                                                                               (const MethodInfo_3F10B80 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)result & 1) != 0 )
            {
              if ( priorityKind > 3 )
              {
                switch ( priorityKind )
                {
                  case 4:
                    if ( !v38 )
                      goto LABEL_80;
                    if ( LODWORD(v38[1].monitor) != 111 )
                      goto LABEL_75;
                    break;
                  case 5:
                    if ( !v38 )
                      goto LABEL_80;
                    if ( (LODWORD(v38[1].monitor) | 8) != 0x6E )
                      goto LABEL_75;
                    break;
                  case 6:
                    if ( !v38 )
                      goto LABEL_80;
                    if ( LODWORD(v38[1].monitor) != 106 )
                      goto LABEL_75;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_80;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvEntity__getValues(entity, 0);
                    if ( !result )
                      goto LABEL_80;
                    entries_low = LODWORD(result->fields._entries);
                    if ( (__int64)v30 > (int)entries_low )
                      goto LABEL_75;
                    if ( v30 >= entries_low )
                      goto LABEL_81;
                    v34 = &result->klass + v30;
                    v35 = (System_Collections_Generic_Dictionary_object__int__o *)v34[4];
                    if ( !v35 )
                      goto LABEL_75;
                    if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                           (System_Collections_Generic_Dictionary_object__int__o *)v34[4],
                           (Il2CppObject *)StringLiteral_1455/*"3"*/,
                           (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      result = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                         v35,
                                                                                         (Il2CppObject *)StringLiteral_1455/*"3"*/,
                                                                                         (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( (_DWORD)result )
                        goto LABEL_75;
                    }
                    break;
                }
              }
              else
              {
                switch ( priorityKind )
                {
                  case 1:
                    if ( !v38 )
                      goto LABEL_80;
                    monitor = (int)v38[1].monitor;
                    if ( monitor != 104 && monitor != 123 )
                      goto LABEL_75;
                    break;
                  case 2:
                    if ( !v38 )
                      goto LABEL_80;
                    if ( LODWORD(v38[1].monitor) != 101 )
                      goto LABEL_75;
                    break;
                  case 3:
                    if ( !v38 )
                      goto LABEL_80;
                    if ( LODWORD(v38[1].monitor) != 112 )
                      goto LABEL_75;
                    break;
                }
              }
              result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
              if ( !entity )
                break;
              result = SkillLvEntity__GetFollowerValsDictionary(entity, 0);
              if ( result )
                return result;
              result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
              if ( !entity )
                break;
              result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvEntity__getValues(entity, 0);
              if ( !result )
                break;
              v37 = LODWORD(result->fields._entries);
              if ( (__int64)v30 < (int)v37 )
              {
                if ( v30 >= v37 )
                  goto LABEL_81;
                result = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&result->fields._count + v30);
                if ( result )
                  return result;
              }
            }
LABEL_75:
            v29 = entity;
            ++v30;
          }
          while ( entity );
        }
LABEL_80:
        sub_2213CDC(result, v7);
      }
    }
    return 0;
  }
  return result;
}


void FriendOperationItemListViewItem__RefreshLockInfo(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct OtherUserGameEntity_o *v6; // x8

  if ( (byte_596B01E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596B01E = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  this->fields.isSwapLock = 0;
  if ( otherUserGameEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TblFriendMaster___),
          (v6 = this->fields.otherUserGameEntity) == 0)
      || !Instance )
    {
      sub_2213CDC(Instance, v5);
    }
    this->fields.isLock = TblFriendMaster__IsLockUser(
                            (TblFriendMaster_o *)Instance,
                            this->fields.kind,
                            v6->fields.userId,
                            0);
  }
}


bool FriendOperationItemListViewItem__SetSortValue(
        FriendOperationItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x9
  int64_t iconLabelInfo2; // x0
  const MethodInfo *v7; // x2
  int32_t kind; // w8
  int64_t v9; // x8
  int32_t priorityKind; // w22
  System_Collections_Generic_Dictionary_string__int__o *ValuesDictionary; // x21
  const MethodInfo *v12; // x1
  __int64 v13; // x2
  __int64 v14; // x23
  __int64 v15; // x24
  int32_t Item; // w0
  const MethodInfo *v17; // x1
  int v18; // w8
  __int64 *v19; // x22
  int64_t v20; // x21
  const MethodInfo *v21; // x1
  int v22; // w22
  int64_t v23; // x21
  __int64 v24; // x2
  int32_t v25; // w22
  int64_t v26; // x8
  __int64 sortValue0B; // x21
  int v28; // w22
  int64_t v29; // x21
  __int64 v30; // x2
  int32_t v31; // w22
  __int64 v32; // x9
  int32_t sortKind; // w8
  int32_t v34; // w20
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  int32_t displayServantType; // w2
  int32_t FollowerGrandGraphId_k__BackingField; // w4
  IconLabelInfo_o *iconLabelInfo1; // x21
  int32_t classPos; // w1
  int32_t atk; // w21
  int32_t EquipAtk; // w8
  IconLabelInfo_o *v42; // x22
  int32_t v43; // w21
  int32_t v44; // w23
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8
  int64_t createdAt; // x8
  int32_t Lv; // w8
  int64_t sortValue2; // x8
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8
  int32_t hp; // w21
  int32_t EquipHp; // w8
  IconLabelInfo_o *v52; // x22
  int32_t v53; // w21
  int32_t v54; // w23
  int32_t v55; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_596B021 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_1393/*"2"*/);
    sub_2213A60(&StringLiteral_1248/*"1"*/);
    sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_596B021 = 1;
  }
  servantEntity = this->fields.servantEntity;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0 = 0;
  this->fields.sortValue1 = -1;
  if ( !servantEntity )
  {
    this->fields.sortValue0 = -1;
    return 1;
  }
  iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
  if ( !iconLabelInfo2 )
    goto LABEL_86;
  IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
  kind = this->fields.kind;
  this->fields.sortValue0B = 0;
  if ( kind == 9 )
  {
    v9 = 2;
    goto LABEL_10;
  }
  if ( kind == 3 )
  {
    v9 = 1;
LABEL_10:
    this->fields.sortValue0B = v9;
  }
  if ( !sort )
    goto LABEL_86;
  priorityKind = sort->fields.priorityKind;
  ValuesDictionary = FriendOperationItemListViewItem__GetValuesDictionary(this, priorityKind, v7);
  if ( FriendOperationItemListViewItem__get_EquipTargetInfo(this, v12) )
  {
    iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, (const MethodInfo *)sort);
    if ( !iconLabelInfo2 )
      goto LABEL_86;
    v14 = *(_QWORD *)(iconLabelInfo2 + 56);
    v15 = *(_QWORD *)(iconLabelInfo2 + 64);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort, v13);
    *(_QWORD *)&v57.fields.currentCryptoKey = v14;
    *(_QWORD *)&v57.fields.fakeValue = v15;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v57, 0) >= 1 )
    {
      if ( ValuesDictionary )
      {
        if ( (unsigned int)(priorityKind - 2) >= 4 )
        {
          if ( priorityKind == 6 )
          {
            v19 = &StringLiteral_1393/*"2"*/;
          }
          else
          {
            if ( priorityKind != 1 )
              goto LABEL_47;
            v19 = &StringLiteral_1198/*"0"*/;
          }
          if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                 (Il2CppObject *)*v19,
                 (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
          {
            v20 = 100000LL
                * System_Collections_Generic_Dictionary_object__int___get_Item(
                    (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                    (Il2CppObject *)*v19,
                    (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            this->fields.sortValue0B = v20;
            iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, v21);
            if ( !iconLabelInfo2 )
              goto LABEL_86;
            v22 = *(_DWORD *)(iconLabelInfo2 + 84);
            iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                        this,
                                        (const MethodInfo *)sort);
            if ( !iconLabelInfo2 )
              goto LABEL_86;
            v23 = v20 + 10LL * (*(_DWORD *)(iconLabelInfo2 + 88) + v22);
            this->fields.sortValue0B = v23;
            iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                        this,
                                        (const MethodInfo *)sort);
            if ( !iconLabelInfo2 )
              goto LABEL_86;
            v25 = *(_DWORD *)(iconLabelInfo2 + 72);
            if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, sort, v24);
            v26 = v23 | (v25 >= BalanceConfig_TypeInfo->static_fields->ServantLimitMax);
            goto LABEL_46;
          }
        }
        else if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                    (Il2CppObject *)StringLiteral_1198/*"0"*/,
                    (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
               && System_Collections_Generic_Dictionary_object__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                    (Il2CppObject *)StringLiteral_1248/*"1"*/,
                    (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
        {
          if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                 (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                 (Il2CppObject *)StringLiteral_1198/*"0"*/,
                 (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
          {
            Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                     (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                     (Il2CppObject *)StringLiteral_1248/*"1"*/,
                     (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v18 = 100000;
          }
          else
          {
            if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                   (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                   (Il2CppObject *)StringLiteral_1198/*"0"*/,
                   (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 2 )
            {
              sortValue0B = this->fields.sortValue0B;
LABEL_38:
              iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(this, v17);
              if ( !iconLabelInfo2 )
                goto LABEL_86;
              v28 = *(_DWORD *)(iconLabelInfo2 + 84);
              iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                          this,
                                          (const MethodInfo *)sort);
              if ( !iconLabelInfo2 )
                goto LABEL_86;
              v29 = sortValue0B + 10LL * (*(_DWORD *)(iconLabelInfo2 + 88) + v28);
              this->fields.sortValue0B = v29;
              iconLabelInfo2 = (int64_t)FriendOperationItemListViewItem__get_EquipTargetInfo(
                                          this,
                                          (const MethodInfo *)sort);
              if ( !iconLabelInfo2 )
                goto LABEL_86;
              v31 = *(_DWORD *)(iconLabelInfo2 + 72);
              if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, sort, v30);
              if ( v31 < BalanceConfig_TypeInfo->static_fields->ServantLimitMax )
                v26 = v29;
              else
                v26 = v29 + 1;
LABEL_46:
              this->fields.sortValue0B = v26;
              goto LABEL_47;
            }
            Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                     (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                     (Il2CppObject *)StringLiteral_1248/*"1"*/,
                     (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v18 = 100000000;
          }
          sortValue0B = Item * (__int64)v18;
          this->fields.sortValue0B = sortValue0B;
          goto LABEL_38;
        }
      }
    }
  }
LABEL_47:
  iconLabelInfo2 = (int64_t)this->fields.otherUserGameEntity;
  if ( !iconLabelInfo2 )
    goto LABEL_86;
  v32 = *(_QWORD *)(iconLabelInfo2 + 104);
  if ( !v32 )
    goto LABEL_86;
  if ( !*(_DWORD *)(v32 + 24) )
    sub_2213CE4(iconLabelInfo2);
  sortKind = sort->fields.sortKind;
  v34 = *(_DWORD *)(v32 + 32);
  if ( sortKind <= 7 )
  {
    if ( sortKind == 3 )
    {
      Lv = OtherUserGameEntity__getLv(
             (OtherUserGameEntity_o *)iconLabelInfo2,
             this->fields.classPos,
             this->fields.displayServantType,
             v34,
             this->fields._FollowerGrandGraphId_k__BackingField,
             0);
      iconLabelInfo2 = (int64_t)this->fields.otherUserGameEntity;
      this->fields.sortValue1 = Lv;
      if ( !iconLabelInfo2 )
        goto LABEL_86;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
    }
    else
    {
      if ( sortKind == 5 )
      {
        hp = this->fields.hp;
        EquipHp = OtherUserGameEntity__getEquipHp(
                    (OtherUserGameEntity_o *)iconLabelInfo2,
                    this->fields.classPos,
                    this->fields.displayServantType,
                    v34,
                    this->fields._FollowerGrandGraphId_k__BackingField,
                    0);
        iconLabelInfo2 = (int64_t)this->fields.otherUserGameEntity;
        this->fields.sortValue1 = EquipHp + hp;
        if ( !iconLabelInfo2 )
          goto LABEL_86;
        v52 = this->fields.iconLabelInfo1;
        v53 = this->fields.hp;
        iconLabelInfo2 = OtherUserGameEntity__GetHpBoostValue(
                           (OtherUserGameEntity_o *)iconLabelInfo2,
                           this->fields.classPos,
                           this->fields.displayServantType,
                           v34,
                           0,
                           0);
        if ( !this->fields.otherUserGameEntity )
          goto LABEL_86;
        v54 = iconLabelInfo2;
        iconLabelInfo2 = OtherUserGameEntity__getEquipHp(
                           this->fields.otherUserGameEntity,
                           this->fields.classPos,
                           this->fields.displayServantType,
                           v34,
                           0,
                           0);
        if ( !v52 )
          goto LABEL_86;
        IconLabelInfo__Set_47880948(v52, 3, v53, v54, iconLabelInfo2, 0, 0, 0, 0, 0);
      }
      else
      {
        if ( sortKind != 6 )
          goto LABEL_69;
        atk = this->fields.atk;
        EquipAtk = OtherUserGameEntity__getEquipAtk(
                     (OtherUserGameEntity_o *)iconLabelInfo2,
                     this->fields.classPos,
                     this->fields.displayServantType,
                     v34,
                     this->fields._FollowerGrandGraphId_k__BackingField,
                     0);
        iconLabelInfo2 = (int64_t)this->fields.otherUserGameEntity;
        this->fields.sortValue1 = EquipAtk + atk;
        if ( !iconLabelInfo2 )
          goto LABEL_86;
        v42 = this->fields.iconLabelInfo1;
        v43 = this->fields.atk;
        iconLabelInfo2 = OtherUserGameEntity__GetAtkBoostValue(
                           (OtherUserGameEntity_o *)iconLabelInfo2,
                           this->fields.classPos,
                           this->fields.displayServantType,
                           v34,
                           0,
                           0);
        if ( !this->fields.otherUserGameEntity )
          goto LABEL_86;
        v44 = iconLabelInfo2;
        iconLabelInfo2 = OtherUserGameEntity__getEquipAtk(
                           this->fields.otherUserGameEntity,
                           this->fields.classPos,
                           this->fields.displayServantType,
                           v34,
                           0,
                           0);
        if ( !v42 )
          goto LABEL_86;
        IconLabelInfo__Set_47880948(v42, 5, v43, v44, iconLabelInfo2, 0, 0, 0, 0, 0);
      }
      iconLabelInfo2 = (int64_t)this->fields.otherUserGameEntity;
      if ( !iconLabelInfo2 )
        goto LABEL_86;
      iconLabelInfo1 = this->fields.iconLabelInfo2;
    }
    FollowerGrandGraphId_k__BackingField = this->fields._FollowerGrandGraphId_k__BackingField;
    displayServantType = this->fields.displayServantType;
    classPos = this->fields.classPos;
    goto LABEL_82;
  }
  if ( sortKind <= 16 )
  {
    if ( sortKind == 8 )
    {
      classPos = this->fields.classPos;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      sortValue2 = -this->fields.priority;
      goto LABEL_71;
    }
    if ( sortKind == 11 )
    {
      iconLabelInfo2 = OtherUserGameEntity__getUpdatedAt(
                         (OtherUserGameEntity_o *)iconLabelInfo2,
                         this->fields.classPos,
                         0);
      otherUserGameEntity = this->fields.otherUserGameEntity;
      this->fields.sortValue1 = iconLabelInfo2;
      if ( !otherUserGameEntity )
        goto LABEL_86;
      FollowerGrandGraphId_k__BackingField = this->fields._FollowerGrandGraphId_k__BackingField;
      displayServantType = this->fields.displayServantType;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      classPos = this->fields.classPos;
      iconLabelInfo2 = (int64_t)otherUserGameEntity;
      goto LABEL_82;
    }
LABEL_69:
    sortValue2 = this->fields.sortValue2;
    iconLabelInfo1 = this->fields.iconLabelInfo1;
    classPos = this->fields.classPos;
LABEL_71:
    FollowerGrandGraphId_k__BackingField = this->fields._FollowerGrandGraphId_k__BackingField;
    displayServantType = this->fields.displayServantType;
    this->fields.sortValue1 = sortValue2;
LABEL_82:
    iconLabelInfo2 = OtherUserGameEntity__getLv(
                       (OtherUserGameEntity_o *)iconLabelInfo2,
                       classPos,
                       displayServantType,
                       v34,
                       FollowerGrandGraphId_k__BackingField,
                       0);
    if ( this->fields.otherUserGameEntity )
    {
      v55 = iconLabelInfo2;
      iconLabelInfo2 = OtherUserGameEntity__getMaxLv(
                         this->fields.otherUserGameEntity,
                         this->fields.classPos,
                         this->fields.displayServantType,
                         v34,
                         this->fields._FollowerGrandGraphId_k__BackingField,
                         0);
      if ( iconLabelInfo1 )
      {
        IconLabelInfo__Set_47880948(iconLabelInfo1, 2, v55, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
        return 1;
      }
    }
LABEL_86:
    sub_2213CDC(iconLabelInfo2, sort);
  }
  if ( sortKind == 17 )
  {
    userBlacklistEntity = this->fields.userBlacklistEntity;
    if ( userBlacklistEntity )
    {
      createdAt = userBlacklistEntity->fields.createdAt;
      goto LABEL_74;
    }
  }
  else
  {
    if ( sortKind != 18 )
      goto LABEL_69;
    userFriendRequestHistoryEntity = this->fields.userFriendRequestHistoryEntity;
    if ( userFriendRequestHistoryEntity )
    {
      createdAt = userFriendRequestHistoryEntity->fields.createdAt;
LABEL_74:
      this->fields.sortValue1 = createdAt;
    }
  }
  return 1;
}


void FriendOperationItemListViewItem__SwapLock(FriendOperationItemListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewObject_o *viewObject; // x9
  __int64 naturalAligment; // x12
  UnityEngine_Object_o *v6; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_596B01C & 1) == 0 )
  {
    sub_2213A60(&FriendOperationItemListViewObject_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B01C = 1;
  }
  viewObject = this->fields.viewObject;
  this->fields.isSwapLock ^= 1u;
  if ( viewObject
    && (naturalAligment = FriendOperationItemListViewObject_TypeInfo->_2.naturalAligment,
        viewObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (FriendOperationItemListViewObject_c *)viewObject->klass->_2.typeHierarchy[naturalAligment - 1] == FriendOperationItemListViewObject_TypeInfo )
      v6 = (UnityEngine_Object_o *)viewObject;
    else
      v6 = 0;
  }
  else
  {
    v6 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v7 = UnityEngine_Object__op_Inequality(v6, 0, 0);
  if ( v7 )
  {
    if ( !v6 )
      sub_2213CDC(v7, v8);
    FriendOperationItemListViewObject__UpdateLock((FriendOperationItemListViewObject_o *)v6, this, 0);
  }
}


int32_t FriendOperationItemListViewItem__get_ClassPos(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.classPos;
}


int32_t FriendOperationItemListViewItem__get_DisplayServantType(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.displayServantType;
}


EquipTargetInfo_o *FriendOperationItemListViewItem__get_EquipTargetInfo(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  EquipTargetInfo_o *result; // x0
  __int64 v4; // x9

  result = (EquipTargetInfo_o *)this->fields.otherUserGameEntity;
  if ( result )
  {
    v4 = *(_QWORD *)&result->fields.skillLv1;
    if ( !v4 )
      sub_2213CDC(result, method);
    if ( !*(_DWORD *)(v4 + 24) )
      sub_2213CE4(result);
    return OtherUserGameEntity__getEquipInfo(
             (OtherUserGameEntity_o *)result,
             this->fields.classPos,
             this->fields.displayServantType,
             *(_DWORD *)(v4 + 32),
             this->fields._FollowerGrandGraphId_k__BackingField,
             0,
             0);
  }
  return result;
}


int32_t FriendOperationItemListViewItem__get_FollowerGrandGraphId(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._FollowerGrandGraphId_k__BackingField;
}


OtherUserGameEntity_o *FriendOperationItemListViewItem__get_GameUser(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.otherUserGameEntity;
}


IconLabelInfo_o *FriendOperationItemListViewItem__get_IconInfo1(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *FriendOperationItemListViewItem__get_IconInfo2(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool FriendOperationItemListViewItem__get_IsLockDisp(FriendOperationItemListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool FriendOperationItemListViewItem__get_IsMaxOpenClassBoard(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsMaxOpenClassBoard_k__BackingField;
}


bool FriendOperationItemListViewItem__get_IsSwapLock(FriendOperationItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


int32_t FriendOperationItemListViewItem__get_Kind(FriendOperationItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.kind;
}


int64_t FriendOperationItemListViewItem__get_LoginTime(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  int64_t result; // x0

  result = (int64_t)this->fields.otherUserGameEntity;
  if ( result )
    return OtherUserGameEntity__getUpdatedAt((OtherUserGameEntity_o *)result, this->fields.classPos, 0);
  return result;
}


int32_t FriendOperationItemListViewItem__get_OpenClassBoardNum(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._OpenClassBoardNum_k__BackingField;
}


int32_t FriendOperationItemListViewItem__get_PlayerLevel(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8

  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
    return otherUserGameEntity->fields.userLv;
  else
    return 1;
}


System_String_o *FriendOperationItemListViewItem__get_PlayerNameText(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  System_String_o **p_userName; // x8

  if ( (byte_596B022 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19957/*"error"*/);
    byte_596B022 = 1;
  }
  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
    p_userName = &otherUserGameEntity->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_19957/*"error"*/;
  return *p_userName;
}


ServantLeaderInfo_o *FriendOperationItemListViewItem__get_ServantLeader(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *result; // x0
  __int64 v4; // x9

  result = (ServantLeaderInfo_o *)this->fields.otherUserGameEntity;
  if ( result )
  {
    v4 = *(_QWORD *)&result->fields.skillLv1;
    if ( !v4 )
      sub_2213CDC(result, method);
    if ( !*(_DWORD *)(v4 + 24) )
      sub_2213CE4(result);
    return OtherUserGameEntity__getServantLeaderInfo(
             (OtherUserGameEntity_o *)result,
             this->fields.classPos,
             0,
             this->fields.displayServantType,
             *(_DWORD *)(v4 + 32),
             this->fields._FollowerGrandGraphId_k__BackingField,
             0);
  }
  return result;
}


ServantEntity_o *FriendOperationItemListViewItem__get_SvtEntity(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t FriendOperationItemListViewItem__get_SvtId(FriendOperationItemListViewItem_o *this, const MethodInfo *method)
{
  struct OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x9

  otherUserGameEntity = this->fields.otherUserGameEntity;
  if ( otherUserGameEntity )
  {
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      sub_2213CDC(otherUserGameEntity, method);
    if ( !LODWORD(mainSupportDeckIds->max_length) )
      sub_2213CE4(otherUserGameEntity);
    LODWORD(otherUserGameEntity) = OtherUserGameEntity__getSvtId(
                                     otherUserGameEntity,
                                     this->fields.classPos,
                                     this->fields.displayServantType,
                                     mainSupportDeckIds->m_Items[0],
                                     this->fields._FollowerGrandGraphId_k__BackingField,
                                     0);
  }
  return (int)otherUserGameEntity;
}


System_String_o *FriendOperationItemListViewItem__get_SvtNameText(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantEntity_o *servantEntity; // x8
  OtherUserGameEntity_o *otherUserGameEntity; // x0
  struct System_Int32_array *mainSupportDeckIds; // x8

  if ( (byte_596B023 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3846/*"COMMON_NO_ENTRY"*/);
    byte_596B023 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    otherUserGameEntity = this->fields.otherUserGameEntity;
    if ( otherUserGameEntity )
    {
      mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
      if ( !mainSupportDeckIds )
        goto LABEL_14;
      if ( !LODWORD(mainSupportDeckIds->max_length) )
        sub_2213CE4(otherUserGameEntity);
      otherUserGameEntity = (OtherUserGameEntity_o *)OtherUserGameEntity__getServantLeaderInfo(
                                                       otherUserGameEntity,
                                                       this->fields.classPos,
                                                       0,
                                                       this->fields.displayServantType,
                                                       mainSupportDeckIds->m_Items[0],
                                                       this->fields._FollowerGrandGraphId_k__BackingField,
                                                       0);
      if ( otherUserGameEntity )
        return ServantLeaderInfo__GetName((ServantLeaderInfo_o *)otherUserGameEntity, 0);
      servantEntity = this->fields.servantEntity;
      if ( !servantEntity )
LABEL_14:
        sub_2213CDC(otherUserGameEntity, method);
    }
    return ServantEntity__getName(servantEntity, -1, -1, 0, 0, 0);
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
    return LocalizationManager__Get((System_String_o *)StringLiteral_3846/*"COMMON_NO_ENTRY"*/, 0);
  }
}


int64_t FriendOperationItemListViewItem__get_blacklistRegistDate(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserBlacklistEntity_o *userBlacklistEntity; // x8

  userBlacklistEntity = this->fields.userBlacklistEntity;
  if ( userBlacklistEntity )
    return userBlacklistEntity->fields.createdAt;
  else
    return 0;
}


int64_t FriendOperationItemListViewItem__get_friendReqDate(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserFriendRequestHistoryEntity_o *userFriendRequestHistoryEntity; // x8

  userFriendRequestHistoryEntity = this->fields.userFriendRequestHistoryEntity;
  if ( userFriendRequestHistoryEntity )
    return userFriendRequestHistoryEntity->fields.createdAt;
  else
    return 0;
}


bool FriendOperationItemListViewItem__get_isSwapMessageDisp(
        FriendOperationItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.swapMessageDisp;
}


void FriendOperationItemListViewItem__set_FollowerGrandGraphId(
        FriendOperationItemListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._FollowerGrandGraphId_k__BackingField = value;
}


void FriendOperationItemListViewItem__set_IsMaxOpenClassBoard(
        FriendOperationItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsMaxOpenClassBoard_k__BackingField = value;
}


void FriendOperationItemListViewItem__set_OpenClassBoardNum(
        FriendOperationItemListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._OpenClassBoardNum_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewItem__set_isSwapMessageDisp(
        FriendOperationItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  _BOOL4 v4; // w21
  UnityEngine_Object_o *viewObject; // x20
  FriendOperationItemListViewObject_c *v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  FriendOperationItemListViewObject_o *v9; // x0
  __int64 naturalAligment; // x9
  struct ListViewManager_o *manager; // x8
  __int64 v12; // x11
  bool swapMessageDisp; // w1
  FriendOperationItemListViewItem_o *v14; // x0
  const MethodInfo *v15; // x1

  v4 = value;
  if ( (byte_596B01B & 1) == 0 )
  {
    sub_2213A60(&FriendOperationItemListViewManager_TypeInfo);
    sub_2213A60(&FriendOperationItemListViewObject_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B01B = 1;
  }
  if ( this->fields.swapMessageDisp != v4 )
  {
    viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
    this->fields.swapMessageDisp = v4;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value, method);
    if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
    {
      v9 = (FriendOperationItemListViewObject_o *)this->fields.viewObject;
      if ( !v9 )
        goto LABEL_15;
      v6 = FriendOperationItemListViewObject_TypeInfo;
      naturalAligment = FriendOperationItemListViewObject_TypeInfo->_2.naturalAligment;
      if ( v9->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (FriendOperationItemListViewObject_c *)v9->klass->_2.typeHierarchy[naturalAligment - 1] == FriendOperationItemListViewObject_TypeInfo )
      {
        manager = v9->fields.manager;
        if ( manager )
        {
          v12 = FriendOperationItemListViewManager_TypeInfo->_2.naturalAligment;
          if ( manager->klass->_2.naturalAligment >= (unsigned int)v12
            && (FriendOperationItemListViewManager_c *)manager->klass->_2.typeHierarchy[v12 - 1] == FriendOperationItemListViewManager_TypeInfo )
          {
            swapMessageDisp = this->fields.swapMessageDisp;
            LOBYTE(manager[1].fields.emptyMessageLabel) = 1;
            FriendOperationItemListViewObject__setMessageButtonUI(v9, swapMessageDisp, 0);
            return;
          }
        }
LABEL_15:
        sub_2213CDC(v9, v6);
      }
      v14 = (FriendOperationItemListViewItem_o *)sub_221405C(v9, FriendOperationItemListViewObject_TypeInfo, v7, v8);
      FriendOperationItemListViewItem__get_IsSwapLock(v14, v15);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void FriendOperationItemListViewItem__setupItem(
        FriendOperationItemListViewItem_o *this,
        int32_t kind,
        int32_t classPos,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  bool isMessageDisp; // w0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3

  if ( (byte_596B01D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596B01D = 1;
  }
  this->fields.kind = kind;
  FriendOperationItemListViewItem__set_isSwapMessageDisp(this, 0, *(const MethodInfo **)&classPos);
  if ( this->fields.otherUserGameEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TblFriendMaster___),
          (otherUserGameEntity = this->fields.otherUserGameEntity) == 0)
      || !Instance )
    {
      sub_2213CDC(Instance, v9);
    }
    isMessageDisp = TblFriendMaster__isMessageDisp(
                      (TblFriendMaster_o *)Instance,
                      3,
                      otherUserGameEntity->fields.userId,
                      0);
    FriendOperationItemListViewItem__set_isSwapMessageDisp(this, isMessageDisp, v12);
  }
  FriendOperationItemListViewItem__RefreshLockInfo(this, v7);
  FriendOperationItemListViewItem__AnalyzeEntity(this, classPos, 0, v13);
}