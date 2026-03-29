void EventFortificationWorkManager___ctor(EventFortificationWorkManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1

  if ( (byte_4D2ABCB & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1309/*"1B2FA5"*/);
    sub_1C93AD4(&StringLiteral_1303/*"11814B"*/);
    sub_1C93AD4(&StringLiteral_1832/*"A51B1B"*/);
    byte_4D2ABCB = 1;
  }
  *(_OWORD *)&this->fields.addWidthForIcon = xmmword_D01270;
  v3 = StringLiteral_1832/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1832/*"A51B1B"*/;
  sub_1C93A78(&this->fields.colorCodeMilitsry, v3);
  v4 = StringLiteral_1309/*"1B2FA5"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1309/*"1B2FA5"*/;
  sub_1C93A78(&this->fields.colorCodeInternal, v4);
  v5 = StringLiteral_1303/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1303/*"11814B"*/;
  sub_1C93A78(&this->fields.colorCodeFarmming, v5);
  this->fields.colorCodeA = 156;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventFortificationWorkManager__CreateItem(
        EventFortificationWorkManager_o *this,
        System_Collections_Generic_List_EventFortificationDetailEntity__o *eventFortificationDetailEntities,
        System_Action_int__o *onClick,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_Action_object__o *v11; // x21
  const MethodInfo *v12; // x1

  if ( (byte_4D2ABC3 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_EventFortificationDetailEntity__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo);
    sub_1C93AD4(&Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__);
    sub_1C93AD4(&EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo);
    byte_4D2ABC3 = 1;
  }
  v7 = (Il2CppObject *)sub_1C93D20(EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_6;
  v7[1].klass = (Il2CppClass *)this;
  sub_1C93A78(&v7[1], this);
  v7[1].monitor = onClick;
  sub_1C93A78(&v7[1].monitor, onClick);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__);
  this->fields.servantItemList = (struct System_Collections_Generic_List_EventFortificationWorkItem__o *)v10;
  sub_1C93A78(&this->fields.servantItemList, v10);
  v11 = (System_Action_object__o *)sub_1C93D20(System_Action_EventFortificationDetailEntity__TypeInfo);
  System_Action_object____ctor(
    v11,
    v7,
    Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__,
    0);
  if ( !eventFortificationDetailEntities )
LABEL_6:
    sub_1C93D2C(v8, v9);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)eventFortificationDetailEntities,
    (System_Action_T__o *)v11,
    (const MethodInfo_387A3DC *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__);
  EventFortificationWorkManager__ModifyItems(this, v12);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationWorkItem_o *EventFortificationWorkManager__GetItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *result; // x0
  int m_CancellationTokenSource; // w22
  int32_t v7; // w21

  if ( (byte_4D2ABC5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
    byte_4D2ABC5 = 1;
  }
  result = (EventFortificationWorkItem_o *)this->fields.servantItemList;
  if ( !result )
    goto LABEL_10;
  m_CancellationTokenSource = (int)result->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v7 = 0;
    do
    {
      result = (EventFortificationWorkItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)result,
                                                 v7,
                                                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
      if ( !result )
        break;
      if ( result->fields.position == index )
        return result;
      if ( m_CancellationTokenSource == ++v7 )
        return 0;
      result = (EventFortificationWorkItem_o *)this->fields.servantItemList;
    }
    while ( result );
LABEL_10:
    sub_1C93D2C(result, *(_QWORD *)&index);
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
  System_Collections_Generic_List_object__o *servantItemList; // x0
  int size; // w25
  int32_t v11; // w23
  EventFortificationWorkItem_o *v12; // x24
  System_Action_int__o *v13; // x23
  const MethodInfo *v14; // x5

  if ( (byte_4D2ABC7 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&Method_EventFortificationWorkManager_OnClickItem__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
    byte_4D2ABC7 = 1;
  }
  servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
  if ( !servantItemList )
LABEL_10:
    sub_1C93D2C(servantItemList, userServantEntity);
  size = servantItemList->fields._size;
  if ( size >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      servantItemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       servantItemList,
                                                                       v11,
                                                                       (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
      if ( !servantItemList )
        goto LABEL_10;
      v12 = (EventFortificationWorkItem_o *)servantItemList;
      if ( servantItemList[3].fields._size == index )
        break;
      if ( size == ++v11 )
        return;
      servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
      if ( !servantItemList )
        goto LABEL_10;
    }
    v13 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
    System_Action_int____ctor(v13, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0);
    EventFortificationWorkItem__SetServantInfo(v12, userServantEntity, eventId, index, v13, v14);
  }
}


void EventFortificationWorkManager__ModifyItems(EventFortificationWorkManager_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x21
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  EventEntity_o *v7; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  struct SetSvtInfo_array *setSvtInfos; // x27
  int max_length; // w8
  EventFortificationWorkItem_o *current; // x22
  unsigned int v13; // w20
  SetSvtInfo_o *v14; // x25
  UserServantEntity_o *v15; // x23
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v21; // x0
  __int64 v22; // x1
  Il2CppObject v23; // q0
  Il2CppObject *v24; // x24
  int32_t svtId; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // kr00_16
  EventFortificationSvtEntity_o *v27; // x8
  Il2CppObject *v28; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // kr10_16
  Il2CppObject *v30; // x0
  __int64 v31; // x1
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  Il2CppObject *v34; // x24
  UserServantEntity_o *v35; // x23
  __int64 v36; // x0
  __int64 v37; // x1
  int32_t iconLimitCount; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // kr20_16
  Il2CppObject *v40; // x8
  __int64 v41; // x23
  NetworkManager_c *v42; // x0
  int64_t userIdNumber; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v44; // x0
  __int64 v45; // x1
  __int128 v46; // q0
  Il2CppObject *v47; // x24
  int32_t v48; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // kr30_16
  Il2CppObject *v50; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // kr40_16
  Il2CppObject *v52; // x23
  int32_t eventId; // w24
  int32_t position; // w25
  System_Action_int__o *v55; // x26
  const MethodInfo *v56; // x5
  const MethodInfo *v57; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+20h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v60; // [xsp+40h] [xbp-90h] BYREF
  Il2CppObject *v61; // [xsp+48h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+50h] [xbp-80h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4D2ABC6 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__);
    sub_1C93AD4(&Method_EventFortificationWorkManager_OnClickItem__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&UserServantEntity_TypeInfo);
    byte_4D2ABC6 = 1;
  }
  entity = 0;
  memset(&v62, 0, sizeof(v62));
  v60 = 0;
  v61 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_93;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  eventFortificationEntity = this->fields.eventFortificationEntity;
  if ( !eventFortificationEntity || !MasterData_object )
    goto LABEL_93;
  if ( !UserEventFortificationMaster__TryGetEntity(
          (UserEventFortificationMaster_o *)MasterData_object,
          &entity,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          this->fields.eventId,
          eventFortificationEntity->fields.idx,
          0) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      this->fields.eventId,
                                      (const MethodInfo_3463274 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        !this->fields.servantItemList) )
  {
LABEL_93:
    sub_1C93D2C(Instance, v4);
  }
  v7 = (EventEntity_o *)Instance;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    (System_Collections_Generic_List_object__o *)this->fields.servantItemList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
  v62 = *(System_Collections_Generic_List_Enumerator_object__o *)&v59.fields.currentCryptoKey;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v62,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    if ( !v8 )
      break;
    if ( !entity )
      sub_1C93D2C(v8, v9);
    setSvtInfos = entity->fields.setSvtInfos;
    if ( !setSvtInfos )
      sub_1C93D2C(v8, v9);
    max_length = setSvtInfos->max_length;
    if ( max_length >= 1 )
    {
      current = (EventFortificationWorkItem_o *)v62.fields._current;
      v13 = 0;
LABEL_23:
      if ( v13 >= max_length )
        sub_1C93D34(v8);
      v14 = setSvtInfos->m_Items[v13];
      if ( !v14 )
        sub_1C93D2C(v8, v9);
      if ( !current )
        sub_1C93D2C(v8, v9);
      if ( v14->fields.position != current->fields.position )
        goto LABEL_69;
      v15 = (UserServantEntity_o *)sub_1C93D20(UserServantEntity_TypeInfo);
      UserServantEntity___ctor(v15, 0);
      v61 = (Il2CppObject *)v15;
      if ( v14->fields.type )
      {
        v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v16 )
          sub_1C93D2C(0, v17);
        v18 = DataManager__GetMasterData_object_(
                (DataManager_o *)v16,
                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
        if ( !entity )
          sub_1C93D2C(v18, v19);
        if ( !v18 )
          sub_1C93D2C(0, v19);
        if ( EventFortificationSvtMaster__TryGetEntity(
               (EventFortificationSvtMaster_o *)v18,
               &v60,
               this->fields.eventId,
               entity->fields.fortificationIdx,
               v14->fields.position,
               0) )
        {
          v20 = v61;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v58, 0, 0);
          v59 = v58;
          if ( !v20 )
            sub_1C93D2C(v21, v22);
          v23 = *(Il2CppObject *)&v59.fields.fakeValue;
          v20[3] = *(Il2CppObject *)&v59.fields.currentCryptoKey;
          v20[4] = v23;
          v24 = v61;
          svtId = v14->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
          if ( !v24 )
            sub_1C93D2C(*(_QWORD *)&v26.fields.currentCryptoKey, *(_QWORD *)&v26.fields.fakeValue);
          v24[5] = (Il2CppObject)v26;
          v27 = v60;
          if ( !v60 )
            sub_1C93D2C(*(_QWORD *)&v26.fields.currentCryptoKey, *(_QWORD *)&v26.fields.fakeValue);
          v28 = v61;
          if ( !v61 )
            sub_1C93D2C(*(_QWORD *)&v26.fields.currentCryptoKey, *(_QWORD *)&v26.fields.fakeValue);
          LODWORD(v61[16].klass) = v60->fields.lv;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v27->fields.limitCount, 0);
          v28[6] = (Il2CppObject)v29;
          if ( !v61 )
            sub_1C93D2C(*(_QWORD *)&v29.fields.currentCryptoKey, *(_QWORD *)&v29.fields.fakeValue);
          LODWORD(v61[18].monitor) = 0;
        }
      }
      else
      {
        v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v30 )
          sub_1C93D2C(0, v31);
        v32 = DataManager__GetMasterData_object_(
                (DataManager_o *)v30,
                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !v32 )
          sub_1C93D2C(0, v33);
        DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v32,
          &v61,
          v14->fields.userSvtId,
          (const MethodInfo_3465A70 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( !v7 || !EventEntity__IsEventPeriod(v7, 0, 0) )
        {
          v34 = v61;
          if ( v61 )
          {
            v35 = (UserServantEntity_o *)sub_1C93D20(UserServantEntity_TypeInfo);
            UserServantEntity___ctor_43856732(v35, (UserServantEntity_o *)v34, 0);
            v61 = (Il2CppObject *)v35;
            if ( !v35 )
              sub_1C93D2C(v36, v37);
            v35->fields.lv = v14->fields.lv;
            iconLimitCount = v14->fields.iconLimitCount;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(iconLimitCount, 0);
            v35->fields.iconLimitCount = v39;
            v40 = v61;
            if ( !v61 )
              sub_1C93D2C(*(_QWORD *)&v39.fields.currentCryptoKey, *(_QWORD *)&v39.fields.fakeValue);
          }
          else
          {
            if ( !v14->fields.svtId )
              goto LABEL_68;
            v41 = sub_1C93D20(UserServantEntity_TypeInfo);
            UserServantEntity___ctor((UserServantEntity_o *)v41, 0);
            v61 = (Il2CppObject *)v41;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4D2A55B )
            {
              sub_1C93AD4(&NetworkManager_TypeInfo);
              byte_4D2A55B = 1;
            }
            v42 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v42 = NetworkManager_TypeInfo;
            }
            userIdNumber = v42->static_fields->userIdNumber;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v58, userIdNumber, 0);
            v59 = v58;
            if ( !v41 )
              sub_1C93D2C(v44, v45);
            v46 = *(_OWORD *)&v59.fields.fakeValue;
            *(_OWORD *)(v41 + 48) = *(_OWORD *)&v59.fields.currentCryptoKey;
            *(_OWORD *)(v41 + 64) = v46;
            v47 = v61;
            v48 = v14->fields.svtId;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v48, 0);
            if ( !v47 )
              sub_1C93D2C(*(_QWORD *)&v49.fields.currentCryptoKey, *(_QWORD *)&v49.fields.fakeValue);
            v47[5] = (Il2CppObject)v49;
            v50 = v61;
            if ( !v61 )
              sub_1C93D2C(*(_QWORD *)&v49.fields.currentCryptoKey, *(_QWORD *)&v49.fields.fakeValue);
            LODWORD(v61[16].klass) = v14->fields.lv;
            v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v14->fields.iconLimitCount, 0);
            v50[10] = (Il2CppObject)v51;
            v40 = v61;
            if ( !v61 )
              sub_1C93D2C(*(_QWORD *)&v51.fields.currentCryptoKey, *(_QWORD *)&v51.fields.fakeValue);
          }
          LODWORD(v40[18].monitor) = v14->fields.exceedCount;
        }
      }
LABEL_68:
      v52 = v61;
      eventId = this->fields.eventId;
      position = current->fields.position;
      v55 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
      System_Action_int____ctor(v55, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0);
      EventFortificationWorkItem__SetServantInfo(current, (UserServantEntity_o *)v52, eventId, position, v55, v56);
LABEL_69:
      max_length = setSvtInfos->max_length;
      if ( (int)++v13 >= max_length )
        continue;
      goto LABEL_23;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v62,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
  EventFortificationWorkManager__SetPointText(this, v57);
}


void EventFortificationWorkManager__OnClickItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  System_Action_T__o *onClick; // x8

  if ( (byte_4D2ABC4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_EventFortificationWorkItem___);
    byte_4D2ABC4 = 1;
  }
  Item = (Il2CppObject *)EventFortificationWorkManager__GetItem(this, index, method);
  onClick = (System_Action_T__o *)this->fields.onClick;
  if ( onClick )
    ActionExtensions__Call_object_(
      onClick,
      Item,
      (const MethodInfo_30EBC54 *)Method_ActionExtensions_Call_EventFortificationWorkItem___);
}


void EventFortificationWorkManager__OnClickItemIcon(EventFortificationWorkManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *orgPanel; // x20
  ItemIconComponent_o *itemIcon; // x0
  __int64 v5; // x1
  struct FortificationOrganizationPanelComponent_o *v6; // x8
  struct ItemIconComponent_o *v7; // x20
  System_Action_o *v8; // x21
  System_Action_o *v9; // x2

  if ( (byte_4D2ABC9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2ABC9 = 1;
  }
  orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  itemIcon = (ItemIconComponent_o *)UnityEngine_Object__op_Inequality(orgPanel, 0, 0);
  if ( ((unsigned __int8)itemIcon & 1) == 0 )
  {
    itemIcon = this->fields.itemIcon;
    if ( itemIcon )
    {
      v9 = 0;
      goto LABEL_11;
    }
LABEL_12:
    sub_1C93D2C(itemIcon, v5);
  }
  v6 = this->fields.orgPanel;
  if ( !v6 )
    goto LABEL_12;
  v6->fields.isTouchEnabled = 0;
  v7 = this->fields.itemIcon;
  v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__, 0);
  if ( !v7 )
    goto LABEL_12;
  itemIcon = v7;
  v9 = v8;
LABEL_11:
  ItemIconComponent__OnClickItem(itemIcon, 0, v9, 0);
}


void EventFortificationWorkManager__SerializeFieldNotNullCheck(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  ;
}


void EventFortificationWorkManager__SetPointText(EventFortificationWorkManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *pointLabel; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *servantItemList; // x0
  int v6; // w23
  const MethodInfo *v7; // x1
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  int32_t maxFortificationPoint; // w22
  UILabel_o *v10; // x20
  System_String_o *v11; // x21
  Il2CppObject *v12; // x19
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x0
  int v15; // [xsp+4h] [xbp-5Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-58h] BYREF
  int32_t v17; // [xsp+28h] [xbp-38h] BYREF
  int32_t nowPoint; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4D2ABCA & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_6527/*"FORTIFICATION_POINT_INFO"*/);
    byte_4D2ABCA = 1;
  }
  memset(&v16, 0, sizeof(v16));
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pointLabel, 0, 0) )
  {
    servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
    if ( !servantItemList )
      goto LABEL_18;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      servantItemList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    v6 = 0;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__) )
    {
      if ( !v16.fields._current )
        sub_1C93D2C(0, v7);
      v6 += EventFortificationWorkItem__get_AddPoint((EventFortificationWorkItem_o *)v16.fields._current, v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    eventFortificationEntity = this->fields.eventFortificationEntity;
    if ( !eventFortificationEntity )
      goto LABEL_18;
    maxFortificationPoint = eventFortificationEntity->fields.maxFortificationPoint;
    v10 = this->fields.pointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_6527/*"FORTIFICATION_POINT_INFO"*/, 0);
    nowPoint = this->fields.nowPoint;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &nowPoint);
    v17 = maxFortificationPoint;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    v15 = v6;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    servantItemList = (System_Collections_Generic_List_object__o *)System_String__Format_64467100(v11, v12, v13, v14, 0);
    if ( !v10 )
LABEL_18:
      sub_1C93D2C(servantItemList, v4);
    UILabel__set_text(v10, (System_String_o *)servantItemList, 0);
  }
}


void EventFortificationWorkManager__SetServantFortificationWork(
        EventFortificationWorkManager_o *this,
        EventFortificationEntity_o *eventFortificationEntity,
        int32_t eventId,
        System_Action_EventFortificationWorkItem__o *onClick,
        FortificationOrganizationPanelComponent_o *orgPanel,
        UIAtlas_o *terminalAtlas,
        const MethodInfo *method)
{
  struct EventFortificationEntity_o **p_eventFortificationEntity; // x25
  DataManager_o *Instance; // x0
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_EventFortificationDetailEntity__o *v16; // x23
  System_Action_int__o *v17; // x24
  const MethodInfo *v18; // x3
  DataManager_o *v19; // x23
  UnityEngine_Object_o *itemIcon; // x24
  int32_t *v21; // x8
  UnityEngine_Object_o *frameSprite; // x24
  __int64 v23; // x8
  __int64 *v24; // x8
  Il2CppObject *MasterData_object; // x22
  UnityEngine_Object_o *pointSlider; // x22
  float v27; // s0
  UnityEngine_Object_o *v28; // x22
  UnityEngine_Object_o *workTypeIcon; // x22
  UISprite_o *v30; // x22
  Il2CppObject *v31; // x23
  Il2CppObject *v32; // x0
  System_String_o *v33; // x23
  UnityEngine_Object_o *teamNameLabel; // x22
  UnityEngine_Object_o *bgSprite; // x22
  UISprite_o *v36; // x22
  Il2CppObject *v37; // x23
  Il2CppObject *v38; // x0
  System_String_o *v39; // x23
  int32_t size; // w10
  int32_t v41; // w8
  int32_t bgSpriteWidth; // w1
  UnityEngine_Object_o *itemBgSprite; // x22
  UISprite_o *v44; // x22
  const MethodInfo *v45; // x6
  UnityEngine_Object_o *gaugeSprite; // x21
  UISprite_o *v47; // x21
  UnityEngine_Object_o *gaugeBaseSprite; // x21
  const MethodInfo *v49; // x1
  UISprite_o *v50; // x21
  int32_t v51; // [xsp+4h] [xbp-6Ch] BYREF
  UnityEngine_Color_o color; // [xsp+8h] [xbp-68h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4D2ABC2 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_1C93AD4(&Method_EventFortificationWorkManager_OnClickItem__);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_4972/*"D2"*/);
    sub_1C93AD4(&StringLiteral_23899/*"spot_info_gauge_l"*/);
    sub_1C93AD4(&StringLiteral_23897/*"spot_info_gauge_base"*/);
    sub_1C93AD4(&StringLiteral_20421/*"icon_event_{0}{1}"*/);
    sub_1C93AD4(&StringLiteral_19417/*"event_organizationbg_{0}{1}"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_23901/*"spot_info_window"*/);
    sub_1C93AD4(&StringLiteral_20826/*"img_terminal_itembg"*/);
    byte_4D2ABC2 = 1;
  }
  entities = 0;
  *(_QWORD *)&color.fields.b = 0;
  entity = 0;
  *(_QWORD *)&color.fields.r = 0;
  this->fields.eventFortificationEntity = eventFortificationEntity;
  p_eventFortificationEntity = &this->fields.eventFortificationEntity;
  sub_1C93A78(&this->fields.eventFortificationEntity, eventFortificationEntity);
  this->fields.onClick = onClick;
  sub_1C93A78(&this->fields.onClick, onClick);
  this->fields.eventId = eventId;
  this->fields.orgPanel = orgPanel;
  sub_1C93A78(&this->fields.orgPanel, orgPanel);
  this->fields.terminalAtlas = terminalAtlas;
  sub_1C93A78(&this->fields.terminalAtlas, terminalAtlas);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  if ( !eventFortificationEntity || !*p_eventFortificationEntity || !Instance )
    goto LABEL_104;
  if ( !EventFortificationDetailMaster__TryGetEntityList(
          (EventFortificationDetailMaster_o *)Instance,
          &entities,
          eventFortificationEntity->fields.eventId,
          (*p_eventFortificationEntity)->fields.idx,
          0) )
    return;
  v16 = entities;
  v17 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
  System_Action_int____ctor(v17, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0);
  EventFortificationWorkManager__CreateItem(this, v16, v17, v18);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_104;
  Instance = (DataManager_o *)GiftMaster__GetGiftListById(
                                (GiftMaster_o *)Instance,
                                eventFortificationEntity->fields.giftId,
                                0);
  if ( !Instance )
    goto LABEL_104;
  v19 = Instance;
  if ( !LODWORD(Instance->fields.m_CancellationTokenSource) )
    goto LABEL_105;
  if ( !*(_QWORD *)&Instance->fields._DispLog )
    goto LABEL_34;
  itemIcon = (UnityEngine_Object_o *)this->fields.itemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(itemIcon, 0, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_34;
  if ( !LODWORD(v19->fields.m_CancellationTokenSource) )
    goto LABEL_105;
  v21 = *(int32_t **)&v19->fields._DispLog;
  if ( !v21 )
    goto LABEL_104;
  Instance = (DataManager_o *)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_104;
  ItemIconComponent__SetGift_41640856((ItemIconComponent_o *)Instance, v21[5], v21[6], v21[7], 0, 0);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(frameSprite, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( LODWORD(v19->fields.m_CancellationTokenSource) )
    {
      v23 = *(_QWORD *)&v19->fields._DispLog;
      if ( !v23 )
        goto LABEL_104;
      if ( *(_DWORD *)(v23 + 20) != 1 )
        goto LABEL_31;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)terminalAtlas, 0, 0) )
      {
        Instance = (DataManager_o *)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_104;
        UISprite__set_atlas((UISprite_o *)Instance, terminalAtlas, 0);
        Instance = (DataManager_o *)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_104;
        v24 = &StringLiteral_20826/*"img_terminal_itembg"*/;
      }
      else
      {
LABEL_31:
        Instance = (DataManager_o *)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_104;
        v24 = &StringLiteral_1/*""*/;
      }
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v24, 0);
      goto LABEL_34;
    }
LABEL_105:
    sub_1C93D34(Instance);
  }
LABEL_34:
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    this->fields.nowPoint = entity->fields.totalFortificationPoint;
    pointSlider = (UnityEngine_Object_o *)this->fields.pointSlider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(pointSlider, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_104;
      Instance = (DataManager_o *)this->fields.pointSlider;
      if ( !Instance )
        goto LABEL_104;
      v27 = (float)entity->fields.totalFortificationPoint
          / (float)eventFortificationEntity->fields.maxFortificationPoint;
      goto LABEL_55;
    }
  }
  else
  {
    this->fields.nowPoint = 0;
    v28 = (UnityEngine_Object_o *)this->fields.pointSlider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v28, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.pointSlider;
      if ( !Instance )
        goto LABEL_104;
      v27 = 0.0;
LABEL_55:
      UIProgressBar__set_value((UIProgressBar_o *)Instance, v27, 0);
    }
  }
  workTypeIcon = (UnityEngine_Object_o *)this->fields.workTypeIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(workTypeIcon, 0, 0) )
  {
    v30 = this->fields.workTypeIcon;
    v51 = eventId;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
    v32 = (Il2CppObject *)System_Int32__ToString_65934220(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_4972/*"D2"*/,
                            0);
    v33 = System_String__Format_64467032((System_String_o *)StringLiteral_20421/*"icon_event_{0}{1}"*/, v31, v32, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_41320352(eventId, v30, v33, 0);
  }
  teamNameLabel = (UnityEngine_Object_o *)this->fields.teamNameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(teamNameLabel, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.teamNameLabel;
    if ( !Instance )
      goto LABEL_104;
    UILabel__set_text((UILabel_o *)Instance, eventFortificationEntity->fields.name, 0);
  }
  EventFortificationWorkManager__SetPointText(this, v15);
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0, 0) )
  {
    v36 = this->fields.bgSprite;
    v51 = eventId;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
    v38 = (Il2CppObject *)System_Int32__ToString_65934220(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_4972/*"D2"*/,
                            0);
    v39 = System_String__Format_64467032((System_String_o *)StringLiteral_19417/*"event_organizationbg_{0}{1}"*/, v37, v38, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = (DataManager_o *)AtlasManager__SetEventUI_41320352(eventId, v36, v39, 0);
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
      v41 = this->fields.bgSpriteWidth;
      if ( size == 3 )
      {
        if ( !Instance )
          goto LABEL_104;
        bgSpriteWidth = this->fields.bgSpriteOffSetWidth + v41;
      }
      else
      {
        if ( !Instance )
          goto LABEL_104;
        bgSpriteWidth = v41 + this->fields.bgSpriteOffSetWidth2 * (size - 2);
      }
    }
    UIWidget__set_width((UIWidget_o *)Instance, bgSpriteWidth, 0);
  }
  itemBgSprite = (UnityEngine_Object_o *)this->fields.itemBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(itemBgSprite, 0, 0) )
    goto LABEL_90;
  v44 = this->fields.itemBgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_41320352(eventId, v44, (System_String_o *)StringLiteral_23901/*"spot_info_window"*/, 0);
  if ( !EventFortificationDataLogic__TryGetColorByWorkType(
          &color,
          this->fields.colorCodeMilitsry,
          this->fields.colorCodeInternal,
          this->fields.colorCodeFarmming,
          this->fields.colorCodeA,
          eventFortificationEntity->fields.workType,
          v45) )
    goto LABEL_90;
  Instance = (DataManager_o *)this->fields.itemBgSprite;
  if ( !Instance )
LABEL_104:
    sub_1C93D2C(Instance, v15);
  UIWidget__set_color((UIWidget_o *)Instance, color, 0);
LABEL_90:
  gaugeSprite = (UnityEngine_Object_o *)this->fields.gaugeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gaugeSprite, 0, 0) )
  {
    v47 = this->fields.gaugeSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_41320352(eventId, v47, (System_String_o *)StringLiteral_23899/*"spot_info_gauge_l"*/, 0);
  }
  gaugeBaseSprite = (UnityEngine_Object_o *)this->fields.gaugeBaseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gaugeBaseSprite, 0, 0) )
  {
    v50 = this->fields.gaugeBaseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_41320352(eventId, v50, (System_String_o *)StringLiteral_23897/*"spot_info_gauge_base"*/, 0);
  }
  EventFortificationWorkManager__WidthAdjustmentOfTitle(this, v49);
}


void EventFortificationWorkManager__WidthAdjustmentOfTitle(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *workTypeIcon; // x20
  UnityEngine_Object_o *teamNameLabel; // x20
  UnityEngine_Object_o *bgSprite; // x20
  UnityEngine_Object_o *titleRootObj; // x20
  __int64 v7; // x1
  __int64 gameObject; // x0
  int v9; // w20
  int32_t addWidthForIcon; // s12
  int v11; // w21
  float v12; // s8
  int v13; // w22
  float v14; // s9
  float v15; // s10
  float v16; // s11
  float v17; // s8
  UnityEngine_Transform_o *v18; // x20
  unsigned int localScale; // s0
  unsigned int v20; // s0
  unsigned int v21; // s0
  float y; // s1
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2ABC8 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2ABC8 = 1;
  }
  workTypeIcon = (UnityEngine_Object_o *)this->fields.workTypeIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(workTypeIcon, 0, 0) )
  {
    teamNameLabel = (UnityEngine_Object_o *)this->fields.teamNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(teamNameLabel, 0, 0) )
    {
      bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(bgSprite, 0, 0) )
      {
        titleRootObj = (UnityEngine_Object_o *)this->fields.titleRootObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(titleRootObj, 0, 0) )
        {
          gameObject = (__int64)this->fields.workTypeIcon;
          if ( !gameObject )
            goto LABEL_40;
          v9 = *(_DWORD *)(gameObject + 168);
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
          v11 = *(_DWORD *)(gameObject + 168);
          v12 = *(float *)&localScale;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          v20 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
          gameObject = (__int64)this->fields.bgSprite;
          if ( !gameObject )
            goto LABEL_40;
          v13 = *(_DWORD *)(gameObject + 168);
          v14 = *(float *)&v20;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          v21 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
          gameObject = (__int64)this->fields.titleRootObj;
          if ( !gameObject )
            goto LABEL_40;
          v15 = *(float *)&v21;
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
          v16 = y;
          gameObject = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          v17 = (float)(v12 * (float)v9) + (float)addWidthForIcon;
          v23.fields.x = -(float)((float)((float)(v15 * (float)v13) * 0.5)
                                - (float)((float)((float)(v15 * (float)v13) - (float)(v17 + (float)(v14 * (float)v11)))
                                        * 0.5));
          v23.fields.z = 0.0;
          v23.fields.y = v16;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v23, 0);
          gameObject = (__int64)this->fields.workTypeIcon;
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          v18 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4D2A139 )
          {
            gameObject = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
            byte_4D2A139 = 1;
          }
          if ( !v18
            || (UnityEngine_Transform__set_localPosition(
                  v18,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0),
                (gameObject = (__int64)this->fields.teamNameLabel) == 0)
            || (gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0
            || (gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0)) == 0 )
          {
LABEL_40:
            sub_1C93D2C(gameObject, v7);
          }
          v24.fields.x = v17;
          v24.fields.y = 0.0;
          v24.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v24, 0);
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
    sub_1C93D2C(this, method);
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
  struct EventFortificationWorkManager_o *v13; // x8
  struct EventFortificationWorkManager_o *v14; // x8
  _QWORD *v15; // x9
  __int64 onClick_low; // x10
  EventFortificationWorkManager_c **v17; // x8

  v4 = this;
  if ( (byte_4D2ABCC & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2ABCC = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  eventFortificationWorkItemObj = (Il2CppObject *)_4__this->fields.eventFortificationWorkItemObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                    eventFortificationWorkItemObj,
                                                                    (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_19;
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___);
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
  GameObjectExtensions__SetParent_36750884((UnityEngine_GameObject_o *)this, v12->fields.ItemObjRoot, 0);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)v9,
                                                                    0);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0), (v13 = v4->fields.__4__this) == 0)
    || (this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)v13->fields.servantItemList) == 0
    || (v14 = this->fields.__4__this,
        v15 = Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__,
        ++HIDWORD(this->fields.onClick),
        !v14) )
  {
LABEL_19:
    sub_1C93D2C(this, ent);
  }
  onClick_low = SLODWORD(this->fields.onClick);
  if ( (unsigned int)onClick_low >= LODWORD(v14->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v9,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &v14->klass + onClick_low;
    LODWORD(this->fields.onClick) = onClick_low + 1;
    v17[4] = (EventFortificationWorkManager_c *)v9;
    sub_1C93A78(v17 + 4, v9);
  }
}