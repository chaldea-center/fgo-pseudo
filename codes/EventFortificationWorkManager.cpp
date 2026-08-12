void EventFortificationWorkManager___ctor(EventFortificationWorkManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596A695 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1391/*"1B2FA5"*/);
    sub_2213A60(&StringLiteral_1385/*"11814B"*/);
    sub_2213A60(&StringLiteral_1918/*"A51B1B"*/);
    byte_596A695 = 1;
  }
  v9 = StringLiteral_1918/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1918/*"A51B1B"*/;
  *(_OWORD *)&this->fields.addWidthForIcon = xmmword_E9D6B0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.colorCodeMilitsry, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_1391/*"1B2FA5"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1391/*"1B2FA5"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.colorCodeInternal, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_1385/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1385/*"11814B"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.colorCodeFarmming, v17, v18, v19, v20, v21, v22, v23);
  this->fields.colorCodeA = 156;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventFortificationWorkManager__CreateItem(
        EventFortificationWorkManager_o *this,
        System_Collections_Generic_List_EventFortificationDetailEntity__o *eventFortificationDetailEntities,
        System_Action_int__o *onClick,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_List_object__o *v22; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Action_object__o *v29; // x21
  const MethodInfo *v30; // x1

  if ( (byte_596A68D & 1) == 0 )
  {
    sub_2213A60(&System_Action_EventFortificationDetailEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo);
    sub_2213A60(&Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__);
    sub_2213A60(&EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo);
    byte_596A68D = 1;
  }
  v7 = sub_2213CCC(EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_6;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = onClick;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)onClick, v16, v17, v18, v19, v20, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__);
  this->fields.servantItemList = (struct System_Collections_Generic_List_EventFortificationWorkItem__o *)v22;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantItemList,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Action_object__o *)sub_2213CCC(System_Action_EventFortificationDetailEntity__TypeInfo);
  System_Action_object____ctor(
    v29,
    (Il2CppObject *)v7,
    Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__,
    0);
  if ( !eventFortificationDetailEntities )
LABEL_6:
    sub_2213CDC(v8, v9);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)eventFortificationDetailEntities,
    (System_Action_T__o *)v29,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__);
  EventFortificationWorkManager__ModifyItems(this, v30);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationWorkItem_o *EventFortificationWorkManager__GetItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventFortificationWorkManager_o *v4; // x20
  struct System_Collections_Generic_List_EventFortificationWorkItem__o *servantItemList; // x8
  int size; // w22
  int32_t v7; // w21

  v4 = this;
  if ( (byte_596A68F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__);
    this = (EventFortificationWorkManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
    byte_596A68F = 1;
  }
  servantItemList = v4->fields.servantItemList;
  if ( !servantItemList )
    goto LABEL_12;
  size = servantItemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      this = (EventFortificationWorkManager_o *)v4->fields.servantItemList;
      if ( !this )
        break;
      this = (EventFortificationWorkManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v7,
                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
      if ( !this )
        break;
      if ( this->fields.bgSpriteOffSetWidth == index )
        return (EventFortificationWorkItem_o *)this;
      if ( size == ++v7 )
        return 0;
    }
LABEL_12:
    sub_2213CDC(this, *(_QWORD *)&index);
  }
  return 0;
}


void EventFortificationWorkManager__ModifyItem(
        EventFortificationWorkManager_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int32_t index,
        const MethodInfo *method)
{
  EventFortificationWorkManager_o *v8; // x22
  struct System_Collections_Generic_List_EventFortificationWorkItem__o *servantItemList; // x8
  int size; // w25
  int32_t v11; // w23
  EventFortificationWorkItem_o *v12; // x24
  System_Action_int__o *v13; // x23
  const MethodInfo *v14; // x5

  v8 = this;
  if ( (byte_596A691 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_EventFortificationWorkManager_OnClickItem__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__);
    this = (EventFortificationWorkManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
    byte_596A691 = 1;
  }
  servantItemList = v8->fields.servantItemList;
  if ( !servantItemList )
LABEL_12:
    sub_2213CDC(this, userServantEntity);
  size = servantItemList->fields._size;
  if ( size >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      this = (EventFortificationWorkManager_o *)v8->fields.servantItemList;
      if ( !this )
        goto LABEL_12;
      this = (EventFortificationWorkManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v11,
                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
      if ( !this )
        goto LABEL_12;
      v12 = (EventFortificationWorkItem_o *)this;
      if ( this->fields.bgSpriteOffSetWidth == index )
        break;
      if ( size == ++v11 )
        return;
    }
    v13 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v13, (Il2CppObject *)v8, Method_EventFortificationWorkManager_OnClickItem__, 0);
    EventFortificationWorkItem__SetServantInfo(v12, userServantEntity, eventId, index, v13, v14);
  }
}


void EventFortificationWorkManager__ModifyItems(EventFortificationWorkManager_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *MasterData_object; // x21
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  __int64 v8; // x1
  __int64 v9; // x2
  EventEntity_o *v10; // x21
  _BOOL8 v11; // x0
  __int64 v12; // x1
  struct SetSvtInfo_array *setSvtInfos; // x27
  int max_length; // w8
  EventFortificationWorkItem_o *current; // x22
  unsigned int v16; // w29
  SetSvtInfo_o *v17; // x25
  UserServantEntity_o *v18; // x23
  int32_t type; // w8
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  bool v24; // w0
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *v27; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject v31; // q1
  Il2CppObject *v32; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v33; // x0
  int32_t svtId; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // kr00_16
  EventFortificationSvtEntity_o *v36; // x8
  Il2CppObject *v37; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // kr10_16
  Il2CppObject *v39; // x0
  __int64 v40; // x1
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  Il2CppObject *v43; // x23
  UserServantEntity_o *v44; // x24
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  int32_t iconLimitCount; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // kr20_16
  __int64 v50; // x23
  __int64 v51; // x1
  __int64 v52; // x2
  NetworkManager_c *v53; // x0
  int64_t userIdNumber; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  __int128 v58; // q1
  Il2CppObject *v59; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v60; // x0
  int32_t v61; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // kr30_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v63; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // kr40_16
  int32_t eventId; // w24
  int32_t position; // w25
  System_Action_int__o *v67; // x26
  const MethodInfo *v68; // x5
  const MethodInfo *v69; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+20h] [xbp-C0h] BYREF
  __int64 v72; // [xsp+40h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o *v73; // [xsp+48h] [xbp-98h]
  EventFortificationSvtEntity_o *v74; // [xsp+50h] [xbp-90h] BYREF
  Il2CppObject *v75; // [xsp+58h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+60h] [xbp-80h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_596A690 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__);
    sub_2213A60(&Method_EventFortificationWorkManager_OnClickItem__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&UserServantEntity_TypeInfo);
    byte_596A690 = 1;
  }
  entity = 0;
  memset(&v76, 0, sizeof(v76));
  v75 = 0;
  v74 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  eventFortificationEntity = this->fields.eventFortificationEntity;
  if ( !eventFortificationEntity || !MasterData_object )
    goto LABEL_95;
  if ( !UserEventFortificationMaster__TryGetEntity(
          (UserEventFortificationMaster_o *)MasterData_object,
          &entity,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          this->fields.eventId,
          eventFortificationEntity->fields.idx,
          0) )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8, v9);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      this->fields.eventId,
                                      (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        !this->fields.servantItemList) )
  {
LABEL_95:
    sub_2213CDC(Instance, v4);
  }
  v10 = (EventEntity_o *)Instance;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    (System_Collections_Generic_List_object__o *)this->fields.servantItemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
  v76 = *(System_Collections_Generic_List_Enumerator_object__o *)&v71.fields.currentCryptoKey;
  v72 = 0;
  v73 = &v76;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v76,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    if ( !v11 )
      break;
    if ( !entity )
      sub_2213CDC(v11, v12);
    setSvtInfos = entity->fields.setSvtInfos;
    if ( !setSvtInfos )
      sub_2213CDC(v11, v12);
    max_length = setSvtInfos->max_length;
    if ( max_length >= 1 )
    {
      current = (EventFortificationWorkItem_o *)v76.fields._current;
      v16 = 0;
LABEL_23:
      if ( v16 >= max_length )
        sub_2213CE4(v11);
      v17 = setSvtInfos->m_Items[v16];
      if ( !v17 )
        sub_2213CDC(v11, v12);
      if ( !current )
        sub_2213CDC(v11, v12);
      if ( v17->fields.position != current->fields.position )
        goto LABEL_70;
      v18 = (UserServantEntity_o *)sub_2213CCC(UserServantEntity_TypeInfo);
      UserServantEntity___ctor(v18, 0);
      type = v17->fields.type;
      v75 = (Il2CppObject *)v18;
      if ( type )
      {
        v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v20 )
          sub_2213CDC(0, v21);
        v22 = DataManager__GetMasterData_object_(
                (DataManager_o *)v20,
                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
        if ( !entity )
          sub_2213CDC(v22, v23);
        if ( !v22 )
          sub_2213CDC(0, v23);
        v24 = EventFortificationSvtMaster__TryGetEntity(
                (EventFortificationSvtMaster_o *)v22,
                &v74,
                this->fields.eventId,
                entity->fields.fortificationIdx,
                v17->fields.position,
                0);
        v27 = v75;
        if ( v24 )
        {
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25, v26);
          v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v70, 0, 0);
          v71 = v70;
          if ( !v27 )
            sub_2213CDC(v28, v29);
          v31 = *(Il2CppObject *)&v71.fields.fakeValue;
          v32 = v75;
          v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
          v27[3] = *(Il2CppObject *)&v71.fields.currentCryptoKey;
          v27[4] = v31;
          svtId = v17->fields.svtId;
          if ( !*(&v33->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v33, v29, v30);
          v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
          if ( !v32 )
            sub_2213CDC(*(_QWORD *)&v35.fields.currentCryptoKey, *(_QWORD *)&v35.fields.fakeValue);
          v36 = v74;
          v32[5] = (Il2CppObject)v35;
          if ( !v36 )
            sub_2213CDC(*(_QWORD *)&v35.fields.currentCryptoKey, *(_QWORD *)&v35.fields.fakeValue);
          v37 = v75;
          if ( !v75 )
            sub_2213CDC(*(_QWORD *)&v35.fields.currentCryptoKey, *(_QWORD *)&v35.fields.fakeValue);
          LODWORD(v75[25].klass) = v36->fields.lv;
          v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v36->fields.limitCount, 0);
          v27 = v75;
          v37[6] = (Il2CppObject)v38;
          if ( !v27 )
            sub_2213CDC(*(_QWORD *)&v38.fields.currentCryptoKey, *(_QWORD *)&v38.fields.fakeValue);
          LODWORD(v27[27].monitor) = 0;
        }
LABEL_69:
        eventId = this->fields.eventId;
        position = current->fields.position;
        v67 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
        System_Action_int____ctor(v67, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0);
        EventFortificationWorkItem__SetServantInfo(current, (UserServantEntity_o *)v27, eventId, position, v67, v68);
LABEL_70:
        max_length = setSvtInfos->max_length;
        if ( (int)++v16 >= max_length )
          continue;
        goto LABEL_23;
      }
      v39 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v39 )
        sub_2213CDC(0, v40);
      v41 = DataManager__GetMasterData_object_(
              (DataManager_o *)v39,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !v41 )
        sub_2213CDC(0, v42);
      DataMasterBase_object__object__long___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)v41,
        &v75,
        v17->fields.userSvtId,
        (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( v10 && EventEntity__IsEventPeriod(v10, 0, 0) )
      {
        v27 = v75;
        goto LABEL_69;
      }
      v43 = v75;
      if ( v75 )
      {
        v44 = (UserServantEntity_o *)sub_2213CCC(UserServantEntity_TypeInfo);
        UserServantEntity___ctor_50173628(v44, (UserServantEntity_o *)v43, 0);
        v75 = (Il2CppObject *)v44;
        if ( !v44 )
          sub_2213CDC(v45, v46);
        v44->fields.lv = v17->fields.lv;
        iconLimitCount = v17->fields.iconLimitCount;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v46, v47);
        v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(iconLimitCount, 0);
        v27 = v75;
        v44->fields.iconLimitCount = v49;
        if ( !v27 )
          sub_2213CDC(*(_QWORD *)&v49.fields.currentCryptoKey, *(_QWORD *)&v49.fields.fakeValue);
      }
      else
      {
        if ( !v17->fields.svtId )
        {
          v27 = 0;
          goto LABEL_69;
        }
        v50 = sub_2213CCC(UserServantEntity_TypeInfo);
        UserServantEntity___ctor((UserServantEntity_o *)v50, 0);
        v75 = (Il2CppObject *)v50;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v51, v52);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        v53 = NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v51, v52);
          v53 = NetworkManager_TypeInfo;
        }
        userIdNumber = v53->static_fields->userIdNumber;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v51, v52);
        v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v70, userIdNumber, 0);
        v71 = v70;
        if ( !v50 )
          sub_2213CDC(v55, v56);
        v58 = *(_OWORD *)&v71.fields.fakeValue;
        v59 = v75;
        v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
        *(_OWORD *)(v50 + 48) = *(_OWORD *)&v71.fields.currentCryptoKey;
        *(_OWORD *)(v50 + 64) = v58;
        v61 = v17->fields.svtId;
        if ( !*(&v60->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v60, v56, v57);
        v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v61, 0);
        if ( !v59 )
          sub_2213CDC(*(_QWORD *)&v62.fields.currentCryptoKey, *(_QWORD *)&v62.fields.fakeValue);
        v63 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v75;
        v59[5] = (Il2CppObject)v62;
        if ( !v63 )
          sub_2213CDC(*(_QWORD *)&v62.fields.currentCryptoKey, *(_QWORD *)&v62.fields.fakeValue);
        v63[25].fields.currentCryptoKey = v17->fields.lv;
        v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v17->fields.iconLimitCount, 0);
        v27 = v75;
        v63[10] = v64;
        if ( !v27 )
          sub_2213CDC(*(_QWORD *)&v64.fields.currentCryptoKey, *(_QWORD *)&v64.fields.fakeValue);
      }
      LODWORD(v27[27].monitor) = v17->fields.exceedCount;
      goto LABEL_69;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v76,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
  EventFortificationWorkManager__SetPointText(this, v69);
}


void EventFortificationWorkManager__OnClickItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x0

  if ( (byte_596A68E & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_EventFortificationWorkItem___);
    byte_596A68E = 1;
  }
  Item = (Il2CppObject *)EventFortificationWorkManager__GetItem(this, index, method);
  if ( this->fields.onClick )
    ActionExtensions__Call_object_(
      (System_Action_T__o *)this->fields.onClick,
      Item,
      (const MethodInfo_36FFECC *)Method_ActionExtensions_Call_EventFortificationWorkItem___);
}


void EventFortificationWorkManager__OnClickItemIcon(EventFortificationWorkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *orgPanel; // x20
  ItemIconComponent_o *itemIcon; // x0
  __int64 v6; // x1
  struct FortificationOrganizationPanelComponent_o *v7; // x8
  struct ItemIconComponent_o *v8; // x20
  System_Action_o *v9; // x21
  System_Action_o *v10; // x2

  if ( (byte_596A693 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A693 = 1;
  }
  orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  itemIcon = (ItemIconComponent_o *)UnityEngine_Object__op_Inequality(orgPanel, 0, 0);
  if ( ((unsigned __int8)itemIcon & 1) == 0 )
  {
    itemIcon = this->fields.itemIcon;
    if ( itemIcon )
    {
      v10 = 0;
      goto LABEL_11;
    }
LABEL_12:
    sub_2213CDC(itemIcon, v6);
  }
  v7 = this->fields.orgPanel;
  if ( !v7 )
    goto LABEL_12;
  v8 = this->fields.itemIcon;
  v7->fields.isTouchEnabled = 0;
  v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__, 0);
  if ( !v8 )
    goto LABEL_12;
  itemIcon = v8;
  v10 = v9;
LABEL_11:
  ItemIconComponent__OnClickItem(itemIcon, 0, v10, 0);
}


void EventFortificationWorkManager__SerializeFieldNotNullCheck(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  ;
}


void EventFortificationWorkManager__SetPointText(EventFortificationWorkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *pointLabel; // x20
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *servantItemList; // x0
  int v7; // w23
  const MethodInfo *v8; // x1
  __int64 v9; // x2
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  int32_t maxFortificationPoint; // w22
  UILabel_o *v12; // x20
  System_String_o *v13; // x21
  Il2CppObject *v14; // x19
  Il2CppObject *v15; // x22
  Il2CppObject *v16; // x0
  _QWORD v17[2]; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+18h] [xbp-58h] BYREF
  int v19; // [xsp+38h] [xbp-38h] BYREF
  int32_t v20; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_596A694 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6782/*"FORTIFICATION_POINT_INFO"*/);
    byte_596A694 = 1;
  }
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  memset(&v18, 0, sizeof(v18));
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(pointLabel, 0, 0) )
  {
    servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
    if ( !servantItemList )
      goto LABEL_18;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      servantItemList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    v7 = 0;
    v17[0] = 0;
    v17[1] = &v18;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__) )
    {
      if ( !v18.fields._current )
        sub_2213CDC(0, v8);
      v7 += EventFortificationWorkItem__get_AddPoint((EventFortificationWorkItem_o *)v18.fields._current, v8);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    eventFortificationEntity = this->fields.eventFortificationEntity;
    if ( !eventFortificationEntity )
      goto LABEL_18;
    maxFortificationPoint = eventFortificationEntity->fields.maxFortificationPoint;
    v12 = this->fields.pointLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v9);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_6782/*"FORTIFICATION_POINT_INFO"*/, 0);
    LODWORD(v17[0]) = this->fields.nowPoint;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, v17);
    v20 = maxFortificationPoint;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v20);
    v19 = v7;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v19);
    servantItemList = (System_Collections_Generic_List_object__o *)System_String__Format_75697948(v13, v14, v15, v16, 0);
    if ( !v12 )
LABEL_18:
      sub_2213CDC(servantItemList, v5);
    UILabel__set_text(v12, (System_String_o *)servantItemList, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventFortificationWorkManager__SetServantFortificationWork(
        EventFortificationWorkManager_o *this,
        EventFortificationEntity_o *eventFortificationEntity,
        int32_t eventId,
        System_Action_EventFortificationWorkItem__o *onClick,
        FortificationOrganizationPanelComponent_o *orgPanel,
        UIAtlas_o *terminalAtlas,
        const MethodInfo *method)
{
  bool v7; // w7
  struct EventFortificationEntity_o **p_eventFortificationEntity; // x25
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
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
  DataManager_o *Instance; // x0
  const MethodInfo *v34; // x1
  System_Collections_Generic_List_EventFortificationDetailEntity__o *v35; // x23
  System_Action_int__o *v36; // x24
  const MethodInfo *v37; // x3
  __int64 v38; // x2
  DataManager_o *v39; // x23
  UnityEngine_Object_o *itemIcon; // x24
  int32_t *v41; // x8
  __int64 v42; // x1
  __int64 v43; // x2
  UnityEngine_Object_o *frameSprite; // x24
  __int64 v45; // x2
  __int64 v46; // x8
  System_String_o **v47; // x8
  __int64 v48; // x2
  Il2CppObject *MasterData_object; // x22
  __int64 v50; // x2
  UnityEngine_Object_o *pointSlider; // x22
  UnityEngine_Object_c *v52; // x0
  __int64 v53; // x2
  float v54; // s0
  UnityEngine_Object_o *v55; // x22
  UnityEngine_Object_o *workTypeIcon; // x22
  __int64 v57; // x1
  __int64 v58; // x2
  UISprite_o *v59; // x22
  Il2CppObject *v60; // x23
  Il2CppObject *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  System_String_o *v64; // x23
  UnityEngine_Object_o *teamNameLabel; // x22
  __int64 v66; // x1
  __int64 v67; // x2
  UnityEngine_Object_o *bgSprite; // x22
  __int64 v69; // x1
  __int64 v70; // x2
  UISprite_o *v71; // x22
  Il2CppObject *v72; // x23
  Il2CppObject *v73; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  System_String_o *v76; // x23
  int32_t size; // w9
  int bgSpriteWidth; // w1
  UnityEngine_Object_o *itemBgSprite; // x22
  __int64 v80; // x2
  UISprite_o *v81; // x22
  UnityEngine_Object_o *gaugeSprite; // x21
  __int64 v83; // x1
  __int64 v84; // x2
  UISprite_o *v85; // x21
  UnityEngine_Object_o *gaugeBaseSprite; // x21
  const MethodInfo *v87; // x1
  __int64 v88; // x2
  UISprite_o *v89; // x21
  int32_t v90; // [xsp+4h] [xbp-6Ch] BYREF
  UnityEngine_Color_o color; // [xsp+8h] [xbp-68h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_596A68C & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_2213A60(&Method_EventFortificationWorkManager_OnClickItem__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_5141/*"D2"*/);
    sub_2213A60(&StringLiteral_24862/*"spot_info_gauge_l"*/);
    sub_2213A60(&StringLiteral_24860/*"spot_info_gauge_base"*/);
    sub_2213A60(&StringLiteral_21169/*"icon_event_{0}{1}"*/);
    sub_2213A60(&StringLiteral_20115/*"event_organizationbg_{0}{1}"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_24864/*"spot_info_window"*/);
    sub_2213A60(&StringLiteral_21587/*"img_terminal_itembg"*/);
    byte_596A68C = 1;
  }
  entities = 0;
  this->fields.eventFortificationEntity = eventFortificationEntity;
  p_eventFortificationEntity = &this->fields.eventFortificationEntity;
  *(_QWORD *)&color.fields.b = 0;
  entity = 0;
  *(_QWORD *)&color.fields.r = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventFortificationEntity,
    (int32_t)eventFortificationEntity,
    *(System_String_o **)&eventId,
    (System_String_o *)onClick,
    (int32_t)orgPanel,
    (int32_t)terminalAtlas,
    (bool)method,
    v7);
  this->fields.onClick = onClick;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onClick, (int32_t)onClick, v15, v16, v17, v18, v19, v20);
  this->fields.eventId = eventId;
  this->fields.orgPanel = orgPanel;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.orgPanel,
    (int32_t)orgPanel,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.terminalAtlas = terminalAtlas;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.terminalAtlas,
    (int32_t)terminalAtlas,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  if ( !eventFortificationEntity || !*p_eventFortificationEntity || !Instance )
    goto LABEL_104;
  if ( !EventFortificationDetailMaster__TryGetEntityList(
          (EventFortificationDetailMaster_o *)Instance,
          &entities,
          eventFortificationEntity->fields.eventId,
          (*p_eventFortificationEntity)->fields.idx,
          0) )
    return;
  v35 = entities;
  v36 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
  System_Action_int____ctor(v36, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0);
  EventFortificationWorkManager__CreateItem(this, v35, v36, v37);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_104;
  Instance = (DataManager_o *)GiftMaster__GetGiftListById(
                                (GiftMaster_o *)Instance,
                                eventFortificationEntity->fields.giftId,
                                0);
  if ( !Instance )
    goto LABEL_104;
  v39 = Instance;
  if ( !LODWORD(Instance->fields.m_CancellationTokenSource) )
    goto LABEL_105;
  if ( !*(_QWORD *)&Instance->fields._DispLog )
    goto LABEL_34;
  itemIcon = (UnityEngine_Object_o *)this->fields.itemIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v38);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(itemIcon, 0, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_34;
  if ( !LODWORD(v39->fields.m_CancellationTokenSource) )
    goto LABEL_105;
  v41 = *(int32_t **)&v39->fields._DispLog;
  if ( !v41 )
    goto LABEL_104;
  Instance = (DataManager_o *)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_104;
  ItemIconComponent__SetGift_47884936((ItemIconComponent_o *)Instance, v41[5], v41[6], v41[7], 0, 0);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42, v43);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(frameSprite, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( LODWORD(v39->fields.m_CancellationTokenSource) )
    {
      v46 = *(_QWORD *)&v39->fields._DispLog;
      if ( !v46 )
        goto LABEL_104;
      if ( *(_DWORD *)(v46 + 20) != 1 )
        goto LABEL_31;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v45);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)terminalAtlas, 0, 0) )
      {
        Instance = (DataManager_o *)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_104;
        UISprite__set_atlas((UISprite_o *)Instance, terminalAtlas, 0);
        Instance = (DataManager_o *)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_104;
        v47 = (System_String_o **)&StringLiteral_21587/*"img_terminal_itembg"*/;
      }
      else
      {
LABEL_31:
        Instance = (DataManager_o *)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_104;
        v47 = (System_String_o **)&StringLiteral_1/*""*/;
      }
      UISprite__set_spriteName((UISprite_o *)Instance, *v47, 0);
      goto LABEL_34;
    }
LABEL_105:
    sub_2213CE4(Instance);
  }
LABEL_34:
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v34, v48);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v34, v48);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_104;
  Instance = (DataManager_o *)UserEventFortificationMaster__TryGetEntity(
                                (UserEventFortificationMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                eventId,
                                eventFortificationEntity->fields.idx,
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_104;
    pointSlider = (UnityEngine_Object_o *)this->fields.pointSlider;
    v52 = UnityEngine_Object_TypeInfo;
    this->fields.nowPoint = entity->fields.totalFortificationPoint;
    if ( !*(&v52->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v52, v34, v50);
    Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(pointSlider, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_104;
      Instance = (DataManager_o *)this->fields.pointSlider;
      if ( !Instance )
        goto LABEL_104;
      v54 = (float)entity->fields.totalFortificationPoint
          / (float)eventFortificationEntity->fields.maxFortificationPoint;
      goto LABEL_55;
    }
  }
  else
  {
    this->fields.nowPoint = 0;
    v55 = (UnityEngine_Object_o *)this->fields.pointSlider;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v50);
    if ( UnityEngine_Object__op_Inequality(v55, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.pointSlider;
      if ( !Instance )
        goto LABEL_104;
      v54 = 0.0;
LABEL_55:
      UIProgressBar__set_value((UIProgressBar_o *)Instance, v54, 0);
    }
  }
  workTypeIcon = (UnityEngine_Object_o *)this->fields.workTypeIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v53);
  if ( UnityEngine_Object__op_Inequality(workTypeIcon, 0, 0) )
  {
    v59 = this->fields.workTypeIcon;
    v90 = eventId;
    v60 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v90);
    v61 = (Il2CppObject *)System_Int32__ToString_77138656(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_5141/*"D2"*/,
                            0);
    v64 = System_String__Format_75697880((System_String_o *)StringLiteral_21169/*"icon_event_{0}{1}"*/, v60, v61, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v62, v63);
    AtlasManager__SetEventUI_47569484(eventId, v59, v64, 0);
  }
  teamNameLabel = (UnityEngine_Object_o *)this->fields.teamNameLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57, v58);
  if ( UnityEngine_Object__op_Inequality(teamNameLabel, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.teamNameLabel;
    if ( !Instance )
      goto LABEL_104;
    UILabel__set_text((UILabel_o *)Instance, eventFortificationEntity->fields.name, 0);
  }
  EventFortificationWorkManager__SetPointText(this, v34);
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66, v67);
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0, 0) )
  {
    v71 = this->fields.bgSprite;
    v90 = eventId;
    v72 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v90);
    v73 = (Il2CppObject *)System_Int32__ToString_77138656(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_5141/*"D2"*/,
                            0);
    v76 = System_String__Format_75697880((System_String_o *)StringLiteral_20115/*"event_organizationbg_{0}{1}"*/, v72, v73, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v74, v75);
    Instance = (DataManager_o *)AtlasManager__SetEventUI_47569484(eventId, v71, v76, 0);
    if ( !entities )
      goto LABEL_104;
    size = entities->fields._size;
    if ( size <= 2 )
    {
      Instance = (DataManager_o *)this->fields.bgSprite;
      if ( !Instance )
        goto LABEL_104;
      bgSpriteWidth = this->fields.bgSpriteWidth;
    }
    else
    {
      Instance = (DataManager_o *)this->fields.bgSprite;
      if ( size == 3 )
      {
        if ( !Instance )
          goto LABEL_104;
        bgSpriteWidth = this->fields.bgSpriteWidth + this->fields.bgSpriteOffSetWidth;
      }
      else
      {
        if ( !Instance )
          goto LABEL_104;
        bgSpriteWidth = this->fields.bgSpriteWidth + this->fields.bgSpriteOffSetWidth2 * (size - 2);
      }
    }
    UIWidget__set_width((UIWidget_o *)Instance, bgSpriteWidth, 0);
  }
  itemBgSprite = (UnityEngine_Object_o *)this->fields.itemBgSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v69, v70);
  if ( !UnityEngine_Object__op_Inequality(itemBgSprite, 0, 0) )
    goto LABEL_90;
  v81 = this->fields.itemBgSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v34, v80);
  AtlasManager__SetEventUI_47569484(eventId, v81, (System_String_o *)StringLiteral_24864/*"spot_info_window"*/, 0);
  if ( !EventFortificationDataLogic__TryGetColorByWorkType(
          &color,
          this->fields.colorCodeMilitsry,
          this->fields.colorCodeInternal,
          this->fields.colorCodeFarmming,
          this->fields.colorCodeA,
          eventFortificationEntity->fields.workType,
          0) )
    goto LABEL_90;
  Instance = (DataManager_o *)this->fields.itemBgSprite;
  if ( !Instance )
LABEL_104:
    sub_2213CDC(Instance, v34);
  UIWidget__set_color((UIWidget_o *)Instance, color, 0);
LABEL_90:
  gaugeSprite = (UnityEngine_Object_o *)this->fields.gaugeSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v80);
  if ( UnityEngine_Object__op_Inequality(gaugeSprite, 0, 0) )
  {
    v85 = this->fields.gaugeSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v83, v84);
    AtlasManager__SetEventUI_47569484(eventId, v85, (System_String_o *)StringLiteral_24862/*"spot_info_gauge_l"*/, 0);
  }
  gaugeBaseSprite = (UnityEngine_Object_o *)this->fields.gaugeBaseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v83, v84);
  if ( UnityEngine_Object__op_Inequality(gaugeBaseSprite, 0, 0) )
  {
    v89 = this->fields.gaugeBaseSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v87, v88);
    AtlasManager__SetEventUI_47569484(eventId, v89, (System_String_o *)StringLiteral_24860/*"spot_info_gauge_base"*/, 0);
  }
  EventFortificationWorkManager__WidthAdjustmentOfTitle(this, v87);
}


void EventFortificationWorkManager__WidthAdjustmentOfTitle(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *workTypeIcon; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *teamNameLabel; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *bgSprite; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *titleRootObj; // x20
  __int64 v14; // x1
  __int64 gameObject; // x0
  int v16; // w20
  int32_t addWidthForIcon; // s12
  int v18; // w21
  float v19; // s8
  int v20; // w22
  float v21; // s9
  float v22; // s10
  float v23; // s11
  float v24; // s8
  UnityEngine_Transform_o *v25; // x20
  unsigned int localScale; // s0
  unsigned int v27; // s0
  unsigned int v28; // s0
  float y; // s1
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A692 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A692 = 1;
  }
  workTypeIcon = (UnityEngine_Object_o *)this->fields.workTypeIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(workTypeIcon, 0, 0) )
  {
    teamNameLabel = (UnityEngine_Object_o *)this->fields.teamNameLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( !UnityEngine_Object__op_Equality(teamNameLabel, 0, 0) )
    {
      bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      if ( !UnityEngine_Object__op_Equality(bgSprite, 0, 0) )
      {
        titleRootObj = (UnityEngine_Object_o *)this->fields.titleRootObj;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
        if ( !UnityEngine_Object__op_Equality(titleRootObj, 0, 0) )
        {
          gameObject = (__int64)this->fields.workTypeIcon;
          if ( !gameObject )
            goto LABEL_40;
          v16 = *(_DWORD *)(gameObject + 168);
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
          gameObject = (__int64)this->fields.teamNameLabel;
          if ( !gameObject )
            goto LABEL_40;
          addWidthForIcon = this->fields.addWidthForIcon;
          v18 = *(_DWORD *)(gameObject + 168);
          v19 = *(float *)&localScale;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          v27 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
          gameObject = (__int64)this->fields.bgSprite;
          if ( !gameObject )
            goto LABEL_40;
          v20 = *(_DWORD *)(gameObject + 168);
          v21 = *(float *)&v27;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          v28 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
          gameObject = (__int64)this->fields.titleRootObj;
          if ( !gameObject )
            goto LABEL_40;
          v22 = *(float *)&v28;
          gameObject = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0).fields.y;
          gameObject = (__int64)this->fields.titleRootObj;
          if ( !gameObject )
            goto LABEL_40;
          v23 = y;
          gameObject = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          v24 = (float)(v19 * (float)v16) + (float)addWidthForIcon;
          v30.fields.z = 0.0;
          v30.fields.y = v23;
          v30.fields.x = -(float)((float)((float)(v22 * (float)v20) * 0.5)
                                - (float)((float)((float)(v22 * (float)v20) - (float)(v24 + (float)(v21 * (float)v18)))
                                        * 0.5));
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v30, 0);
          gameObject = (__int64)this->fields.workTypeIcon;
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          v25 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_5969AE0 )
          {
            gameObject = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
            byte_5969AE0 = 1;
          }
          if ( !v25
            || (UnityEngine_Transform__set_localPosition(
                  v25,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0),
                (gameObject = (__int64)this->fields.teamNameLabel) == 0)
            || (gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0
            || (gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0)) == 0 )
          {
LABEL_40:
            sub_2213CDC(gameObject, v14);
          }
          v31.fields.x = v24;
          v31.fields.y = 0.0;
          v31.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v31, 0);
        }
      }
    }
  }
}


void EventFortificationWorkManager___OnClickItemIcon_b__36_0(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  struct FortificationOrganizationPanelComponent_o *orgPanel; // x8

  orgPanel = this->fields.orgPanel;
  if ( !orgPanel )
    sub_2213CDC(this, method);
  orgPanel->fields.isTouchEnabled = 1;
}


void EventFortificationWorkManager___c__DisplayClass29_0___ctor(
        EventFortificationWorkManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventFortificationWorkManager___c__DisplayClass29_0___CreateItem_b__0(
        EventFortificationWorkManager___c__DisplayClass29_0_o *this,
        EventFortificationDetailEntity_o *ent,
        const MethodInfo *method)
{
  EventFortificationWorkManager___c__DisplayClass29_0_o *v4; // x19
  struct EventFortificationWorkManager_o *_4__this; // x8
  Il2CppObject *eventFortificationWorkItemObj; // x20
  const MethodInfo *v7; // x3
  struct EventFortificationWorkManager_o *v8; // x8
  EventFortificationWorkItem_o *v9; // x20
  const MethodInfo *v10; // x5
  struct EventFortificationWorkManager_o *v11; // x8
  struct EventFortificationWorkManager_o *v12; // x8
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct EventFortificationWorkManager_o *v19; // x8
  System_Collections_Generic_List_object__o *servantItemList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v22; // x10
  __int64 size; // x11
  Il2CppClass **v24; // x0

  v4 = this;
  if ( (byte_596A696 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A696 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  eventFortificationWorkItemObj = (Il2CppObject *)_4__this->fields.eventFortificationWorkItemObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, ent, method);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                    eventFortificationWorkItemObj,
                                                                    (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_19;
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___);
  v8 = v4->fields.__4__this;
  if ( !v8 )
    goto LABEL_19;
  v9 = (EventFortificationWorkItem_o *)this;
  if ( !this )
    goto LABEL_19;
  EventFortificationWorkItem__Init((EventFortificationWorkItem_o *)this, ent, v8->fields.orgPanel, v7);
  v11 = v4->fields.__4__this;
  if ( !v11 )
    goto LABEL_19;
  if ( !ent )
    goto LABEL_19;
  EventFortificationWorkItem__SetServantInfo(v9, 0, v11->fields.eventId, ent->fields.position, v4->fields.onClick, v10);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)v9,
                                                                    0);
  v12 = v4->fields.__4__this;
  if ( !v12 )
    goto LABEL_19;
  GameObjectExtensions__SetParent_42897232((UnityEngine_GameObject_o *)this, v12->fields.ItemObjRoot, 0);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)v9,
                                                                    0);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0), (v19 = v4->fields.__4__this) == 0)
    || (servantItemList = (System_Collections_Generic_List_object__o *)v19->fields.servantItemList) == 0
    || (items = servantItemList->fields._items,
        v22 = Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__,
        ++servantItemList->fields._version,
        !items) )
  {
LABEL_19:
    sub_2213CDC(this, ent);
  }
  size = servantItemList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      servantItemList,
      (Il2CppObject *)v9,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    servantItemList->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v9;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v9, v13, v14, v15, v16, v17, v18);
  }
}