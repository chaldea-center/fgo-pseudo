void EventFortificationWorkManager___ctor(EventFortificationWorkManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C216BE & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1315/*"1B2FA5"*/);
    sub_1C2D490(&StringLiteral_1309/*"11814B"*/);
    sub_1C2D490(&StringLiteral_1836/*"A51B1B"*/);
    byte_4C216BE = 1;
  }
  *(_OWORD *)&this->fields.addWidthForIcon = xmmword_C09E70;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1836/*"A51B1B"*/;
  sub_1C2D434(&this->fields.colorCodeMilitsry);
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1315/*"1B2FA5"*/;
  sub_1C2D434(&this->fields.colorCodeInternal);
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1309/*"11814B"*/;
  sub_1C2D434(&this->fields.colorCodeFarmming);
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

  if ( (byte_4C216B6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_EventFortificationDetailEntity__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo);
    sub_1C2D490(&Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__);
    sub_1C2D490(&EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo);
    byte_4C216B6 = 1;
  }
  v7 = (Il2CppObject *)sub_1C2D6DC(EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_6;
  v7[1].klass = (Il2CppClass *)this;
  sub_1C2D434(&v7[1]);
  v7[1].monitor = onClick;
  sub_1C2D434(&v7[1].monitor);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__);
  this->fields.servantItemList = (struct System_Collections_Generic_List_EventFortificationWorkItem__o *)v10;
  sub_1C2D434(&this->fields.servantItemList);
  v11 = (System_Action_object__o *)sub_1C2D6DC(System_Action_EventFortificationDetailEntity__TypeInfo);
  System_Action_object____ctor(
    v11,
    v7,
    Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__,
    0);
  if ( !eventFortificationDetailEntities )
LABEL_6:
    sub_1C2D6EC(v8, v9);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)eventFortificationDetailEntities,
    (System_Action_T__o *)v11,
    (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__);
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

  if ( (byte_4C216B8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
    byte_4C216B8 = 1;
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
                                                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
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
    sub_1C2D6EC(result, *(_QWORD *)&index);
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

  if ( (byte_4C216BA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_int__TypeInfo);
    sub_1C2D490(&Method_EventFortificationWorkManager_OnClickItem__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
    byte_4C216BA = 1;
  }
  servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
  if ( !servantItemList )
LABEL_10:
    sub_1C2D6EC(servantItemList, userServantEntity);
  size = servantItemList->fields._size;
  if ( size >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      servantItemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       servantItemList,
                                                                       v11,
                                                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
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
    v13 = (System_Action_int__o *)sub_1C2D6DC(System_Action_int__TypeInfo);
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
  __int64 v10; // x2
  __int64 v11; // x3
  struct SetSvtInfo_array *setSvtInfos; // x27
  int max_length; // w8
  EventFortificationWorkItem_o *current; // x22
  unsigned int v15; // w20
  SetSvtInfo_o *v16; // x25
  UserServantEntity_o *v17; // x23
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v23; // x0
  __int64 v24; // x1
  Il2CppObject v25; // q0
  Il2CppObject *v26; // x24
  int32_t svtId; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // kr00_16
  EventFortificationSvtEntity_o *v29; // x8
  Il2CppObject *v30; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // kr10_16
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  Il2CppObject *v36; // x24
  UserServantEntity_o *v37; // x23
  __int64 v38; // x0
  __int64 v39; // x1
  int32_t iconLimitCount; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // kr20_16
  Il2CppObject *v42; // x8
  __int64 v43; // x23
  NetworkManager_c *v44; // x0
  int64_t userIdNumber; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v46; // x0
  __int64 v47; // x1
  __int128 v48; // q0
  Il2CppObject *v49; // x24
  int32_t v50; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // kr30_16
  Il2CppObject *v52; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // kr40_16
  Il2CppObject *v54; // x23
  int32_t eventId; // w24
  int32_t position; // w25
  System_Action_int__o *v57; // x26
  const MethodInfo *v58; // x5
  const MethodInfo *v59; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+20h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v62; // [xsp+40h] [xbp-90h] BYREF
  Il2CppObject *v63; // [xsp+48h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+50h] [xbp-80h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4C216B9 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_int__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__);
    sub_1C2D490(&Method_EventFortificationWorkManager_OnClickItem__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&UserServantEntity_TypeInfo);
    byte_4C216B9 = 1;
  }
  entity = 0;
  memset(&v64, 0, sizeof(v64));
  v62 = 0;
  v63 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_93;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      this->fields.eventId,
                                      (const MethodInfo_3387D98 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        !this->fields.servantItemList) )
  {
LABEL_93:
    sub_1C2D6EC(Instance, v4);
  }
  v7 = (EventEntity_o *)Instance;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v61,
    (System_Collections_Generic_List_object__o *)this->fields.servantItemList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
  *(_OWORD *)&v64.fields._list = *(_OWORD *)&v61.fields.currentCryptoKey;
  v64.fields._current = (Il2CppObject *)v61.fields.fakeValue;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v64,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    if ( !v8 )
      break;
    if ( !entity )
      sub_1C2D6EC(v8, v9);
    setSvtInfos = entity->fields.setSvtInfos;
    if ( !setSvtInfos )
      sub_1C2D6EC(v8, v9);
    max_length = setSvtInfos->max_length;
    if ( max_length >= 1 )
    {
      current = (EventFortificationWorkItem_o *)v64.fields._current;
      v15 = 0;
LABEL_23:
      if ( v15 >= max_length )
        sub_1C2D6F4(v8, v9, v10, v11);
      v16 = setSvtInfos->m_Items[v15];
      if ( !v16 )
        sub_1C2D6EC(v8, v9);
      if ( !current )
        sub_1C2D6EC(v8, v9);
      if ( v16->fields.position != current->fields.position )
        goto LABEL_69;
      v17 = (UserServantEntity_o *)sub_1C2D6DC(UserServantEntity_TypeInfo);
      UserServantEntity___ctor(v17, 0);
      v63 = (Il2CppObject *)v17;
      if ( v16->fields.type )
      {
        v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v18 )
          sub_1C2D6EC(0, v19);
        v20 = DataManager__GetMasterData_object_(
                (DataManager_o *)v18,
                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
        if ( !entity )
          sub_1C2D6EC(v20, v21);
        if ( !v20 )
          sub_1C2D6EC(0, v21);
        if ( EventFortificationSvtMaster__TryGetEntity(
               (EventFortificationSvtMaster_o *)v20,
               &v62,
               this->fields.eventId,
               entity->fields.fortificationIdx,
               v16->fields.position,
               0) )
        {
          v22 = v63;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v60, 0, 0);
          v61 = v60;
          if ( !v22 )
            sub_1C2D6EC(v23, v24);
          v25 = *(Il2CppObject *)&v61.fields.fakeValue;
          v22[3] = *(Il2CppObject *)&v61.fields.currentCryptoKey;
          v22[4] = v25;
          v26 = v63;
          svtId = v16->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
          if ( !v26 )
            sub_1C2D6EC(*(_QWORD *)&v28.fields.currentCryptoKey, *(_QWORD *)&v28.fields.fakeValue);
          v26[5] = (Il2CppObject)v28;
          v29 = v62;
          if ( !v62 )
            sub_1C2D6EC(*(_QWORD *)&v28.fields.currentCryptoKey, *(_QWORD *)&v28.fields.fakeValue);
          v30 = v63;
          if ( !v63 )
            sub_1C2D6EC(*(_QWORD *)&v28.fields.currentCryptoKey, *(_QWORD *)&v28.fields.fakeValue);
          LODWORD(v63[16].klass) = v62->fields.lv;
          v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v29->fields.limitCount, 0);
          v30[6] = (Il2CppObject)v31;
          if ( !v63 )
            sub_1C2D6EC(*(_QWORD *)&v31.fields.currentCryptoKey, *(_QWORD *)&v31.fields.fakeValue);
          LODWORD(v63[18].monitor) = 0;
        }
      }
      else
      {
        v32 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v32 )
          sub_1C2D6EC(0, v33);
        v34 = DataManager__GetMasterData_object_(
                (DataManager_o *)v32,
                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !v34 )
          sub_1C2D6EC(0, v35);
        DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v34,
          &v63,
          v16->fields.userSvtId,
          (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( !v7 || !EventEntity__IsEventPeriod(v7, 0, 0) )
        {
          v36 = v63;
          if ( v63 )
          {
            v37 = (UserServantEntity_o *)sub_1C2D6DC(UserServantEntity_TypeInfo);
            UserServantEntity___ctor_42922220(v37, (UserServantEntity_o *)v36, 0);
            v63 = (Il2CppObject *)v37;
            if ( !v37 )
              sub_1C2D6EC(v38, v39);
            v37->fields.lv = v16->fields.lv;
            iconLimitCount = v16->fields.iconLimitCount;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(iconLimitCount, 0);
            v37->fields.iconLimitCount = v41;
            v42 = v63;
            if ( !v63 )
              sub_1C2D6EC(*(_QWORD *)&v41.fields.currentCryptoKey, *(_QWORD *)&v41.fields.fakeValue);
          }
          else
          {
            if ( !v16->fields.svtId )
              goto LABEL_68;
            v43 = sub_1C2D6DC(UserServantEntity_TypeInfo);
            UserServantEntity___ctor((UserServantEntity_o *)v43, 0);
            v63 = (Il2CppObject *)v43;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C211E1 )
            {
              sub_1C2D490(&NetworkManager_TypeInfo);
              byte_4C211E1 = 1;
            }
            v44 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v44 = NetworkManager_TypeInfo;
            }
            userIdNumber = v44->static_fields->userIdNumber;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v60, userIdNumber, 0);
            v61 = v60;
            if ( !v43 )
              sub_1C2D6EC(v46, v47);
            v48 = *(_OWORD *)&v61.fields.fakeValue;
            *(_OWORD *)(v43 + 48) = *(_OWORD *)&v61.fields.currentCryptoKey;
            *(_OWORD *)(v43 + 64) = v48;
            v49 = v63;
            v50 = v16->fields.svtId;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v50, 0);
            if ( !v49 )
              sub_1C2D6EC(*(_QWORD *)&v51.fields.currentCryptoKey, *(_QWORD *)&v51.fields.fakeValue);
            v49[5] = (Il2CppObject)v51;
            v52 = v63;
            if ( !v63 )
              sub_1C2D6EC(*(_QWORD *)&v51.fields.currentCryptoKey, *(_QWORD *)&v51.fields.fakeValue);
            LODWORD(v63[16].klass) = v16->fields.lv;
            v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v16->fields.iconLimitCount, 0);
            v52[10] = (Il2CppObject)v53;
            v42 = v63;
            if ( !v63 )
              sub_1C2D6EC(*(_QWORD *)&v53.fields.currentCryptoKey, *(_QWORD *)&v53.fields.fakeValue);
          }
          LODWORD(v42[18].monitor) = v16->fields.exceedCount;
        }
      }
LABEL_68:
      v54 = v63;
      eventId = this->fields.eventId;
      position = current->fields.position;
      v57 = (System_Action_int__o *)sub_1C2D6DC(System_Action_int__TypeInfo);
      System_Action_int____ctor(v57, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0);
      EventFortificationWorkItem__SetServantInfo(current, (UserServantEntity_o *)v54, eventId, position, v57, v58);
LABEL_69:
      max_length = setSvtInfos->max_length;
      if ( (int)++v15 >= max_length )
        continue;
      goto LABEL_23;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v64,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
  EventFortificationWorkManager__SetPointText(this, v59);
}


void EventFortificationWorkManager__OnClickItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  System_Action_T__o *onClick; // x8

  if ( (byte_4C216B7 & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_EventFortificationWorkItem___);
    byte_4C216B7 = 1;
  }
  Item = (Il2CppObject *)EventFortificationWorkManager__GetItem(this, index, method);
  onClick = (System_Action_T__o *)this->fields.onClick;
  if ( onClick )
    ActionExtensions__Call_object_(
      onClick,
      Item,
      (const MethodInfo_301B240 *)Method_ActionExtensions_Call_EventFortificationWorkItem___);
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

  if ( (byte_4C216BC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C216BC = 1;
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
    sub_1C2D6EC(itemIcon, v5);
  }
  v6 = this->fields.orgPanel;
  if ( !v6 )
    goto LABEL_12;
  v6->fields.isTouchEnabled = 0;
  v7 = this->fields.itemIcon;
  v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x19
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x22
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  int v24; // [xsp+4h] [xbp-5Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-58h] BYREF
  int32_t v26; // [xsp+28h] [xbp-38h] BYREF
  int32_t nowPoint; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4C216BD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_6491/*"FORTIFICATION_POINT_INFO"*/);
    byte_4C216BD = 1;
  }
  memset(&v25, 0, sizeof(v25));
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pointLabel, 0, 0) )
  {
    servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
    if ( !servantItemList )
      goto LABEL_18;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      servantItemList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    v6 = 0;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__) )
    {
      if ( !v25.fields._current )
        sub_1C2D6EC(0, v7);
      v6 += EventFortificationWorkItem__get_AddPoint((EventFortificationWorkItem_o *)v25.fields._current, v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    eventFortificationEntity = this->fields.eventFortificationEntity;
    if ( !eventFortificationEntity )
      goto LABEL_18;
    maxFortificationPoint = eventFortificationEntity->fields.maxFortificationPoint;
    v10 = this->fields.pointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_6491/*"FORTIFICATION_POINT_INFO"*/, 0);
    nowPoint = this->fields.nowPoint;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &nowPoint, v12, v13, v14);
    v26 = maxFortificationPoint;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v16, v17, v18);
    v24 = v6;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v20, v21, v22);
    servantItemList = (System_Collections_Generic_List_object__o *)System_String__Format_63499224(v11, v15, v19, v23, 0);
    if ( !v10 )
LABEL_18:
      sub_1C2D6EC(servantItemList, v4);
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
  __int64 v19; // x2
  __int64 v20; // x3
  DataManager_o *v21; // x23
  UnityEngine_Object_o *itemIcon; // x24
  int32_t *v23; // x8
  UnityEngine_Object_o *frameSprite; // x24
  __int64 v25; // x8
  __int64 *v26; // x8
  Il2CppObject *MasterData_object; // x22
  UnityEngine_Object_o *pointSlider; // x22
  float v29; // s0
  UnityEngine_Object_o *v30; // x22
  UnityEngine_Object_o *workTypeIcon; // x22
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  UISprite_o *v35; // x22
  Il2CppObject *v36; // x23
  Il2CppObject *v37; // x0
  System_String_o *v38; // x23
  UnityEngine_Object_o *teamNameLabel; // x22
  UnityEngine_Object_o *bgSprite; // x22
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  UISprite_o *v44; // x22
  Il2CppObject *v45; // x23
  Il2CppObject *v46; // x0
  System_String_o *v47; // x23
  int32_t size; // w10
  int32_t v49; // w8
  int32_t bgSpriteWidth; // w1
  UnityEngine_Object_o *itemBgSprite; // x22
  UISprite_o *v52; // x22
  const MethodInfo *v53; // x6
  UnityEngine_Object_o *gaugeSprite; // x21
  UISprite_o *v55; // x21
  UnityEngine_Object_o *gaugeBaseSprite; // x21
  const MethodInfo *v57; // x1
  UISprite_o *v58; // x21
  int32_t v59; // [xsp+4h] [xbp-6Ch] BYREF
  UnityEngine_Color_o color; // [xsp+8h] [xbp-68h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4C216B5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_int__TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_1C2D490(&Method_EventFortificationWorkManager_OnClickItem__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_4944/*"D2"*/);
    sub_1C2D490(&StringLiteral_23585/*"spot_info_gauge_l"*/);
    sub_1C2D490(&StringLiteral_23583/*"spot_info_gauge_base"*/);
    sub_1C2D490(&StringLiteral_20183/*"icon_event_{0}{1}"*/);
    sub_1C2D490(&StringLiteral_19209/*"event_organizationbg_{0}{1}"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_23587/*"spot_info_window"*/);
    sub_1C2D490(&StringLiteral_20578/*"img_terminal_itembg"*/);
    byte_4C216B5 = 1;
  }
  entities = 0;
  *(_QWORD *)&color.fields.b = 0;
  entity = 0;
  *(_QWORD *)&color.fields.r = 0;
  this->fields.eventFortificationEntity = eventFortificationEntity;
  p_eventFortificationEntity = &this->fields.eventFortificationEntity;
  sub_1C2D434(&this->fields.eventFortificationEntity);
  this->fields.onClick = onClick;
  sub_1C2D434(&this->fields.onClick);
  this->fields.eventId = eventId;
  this->fields.orgPanel = orgPanel;
  sub_1C2D434(&this->fields.orgPanel);
  this->fields.terminalAtlas = terminalAtlas;
  sub_1C2D434(&this->fields.terminalAtlas);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
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
  v17 = (System_Action_int__o *)sub_1C2D6DC(System_Action_int__TypeInfo);
  System_Action_int____ctor(v17, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0);
  EventFortificationWorkManager__CreateItem(this, v16, v17, v18);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_104;
  Instance = (DataManager_o *)GiftMaster__GetGiftListById(
                                (GiftMaster_o *)Instance,
                                eventFortificationEntity->fields.giftId,
                                0);
  if ( !Instance )
    goto LABEL_104;
  v21 = Instance;
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
  if ( !LODWORD(v21->fields.m_CancellationTokenSource) )
    goto LABEL_105;
  v23 = *(int32_t **)&v21->fields._DispLog;
  if ( !v23 )
    goto LABEL_104;
  Instance = (DataManager_o *)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_104;
  ItemIconComponent__SetGift_40700316((ItemIconComponent_o *)Instance, v23[5], v23[6], v23[7], 0, 0);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(frameSprite, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( LODWORD(v21->fields.m_CancellationTokenSource) )
    {
      v25 = *(_QWORD *)&v21->fields._DispLog;
      if ( !v25 )
        goto LABEL_104;
      if ( *(_DWORD *)(v25 + 20) != 1 )
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
        v26 = &StringLiteral_20578/*"img_terminal_itembg"*/;
      }
      else
      {
LABEL_31:
        Instance = (DataManager_o *)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_104;
        v26 = &StringLiteral_1/*""*/;
      }
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v26, 0);
      goto LABEL_34;
    }
LABEL_105:
    sub_1C2D6F4(Instance, v15, v19, v20);
  }
LABEL_34:
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
      v29 = (float)entity->fields.totalFortificationPoint
          / (float)eventFortificationEntity->fields.maxFortificationPoint;
      goto LABEL_55;
    }
  }
  else
  {
    this->fields.nowPoint = 0;
    v30 = (UnityEngine_Object_o *)this->fields.pointSlider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v30, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.pointSlider;
      if ( !Instance )
        goto LABEL_104;
      v29 = 0.0;
LABEL_55:
      UIProgressBar__set_value((UIProgressBar_o *)Instance, v29, 0);
    }
  }
  workTypeIcon = (UnityEngine_Object_o *)this->fields.workTypeIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(workTypeIcon, 0, 0) )
  {
    v35 = this->fields.workTypeIcon;
    v59 = eventId;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59, v32, v33, v34);
    v37 = (Il2CppObject *)System_Int32__ToString_64968716(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_4944/*"D2"*/,
                            0);
    v38 = System_String__Format_63499156((System_String_o *)StringLiteral_20183/*"icon_event_{0}{1}"*/, v36, v37, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_40385372(eventId, v35, v38, 0);
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
    v44 = this->fields.bgSprite;
    v59 = eventId;
    v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59, v41, v42, v43);
    v46 = (Il2CppObject *)System_Int32__ToString_64968716(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_4944/*"D2"*/,
                            0);
    v47 = System_String__Format_63499156((System_String_o *)StringLiteral_19209/*"event_organizationbg_{0}{1}"*/, v45, v46, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = (DataManager_o *)AtlasManager__SetEventUI_40385372(eventId, v44, v47, 0);
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
      v49 = this->fields.bgSpriteWidth;
      if ( size == 3 )
      {
        if ( !Instance )
          goto LABEL_104;
        bgSpriteWidth = this->fields.bgSpriteOffSetWidth + v49;
      }
      else
      {
        if ( !Instance )
          goto LABEL_104;
        bgSpriteWidth = v49 + this->fields.bgSpriteOffSetWidth2 * (size - 2);
      }
    }
    UIWidget__set_width((UIWidget_o *)Instance, bgSpriteWidth, 0);
  }
  itemBgSprite = (UnityEngine_Object_o *)this->fields.itemBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(itemBgSprite, 0, 0) )
    goto LABEL_90;
  v52 = this->fields.itemBgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_40385372(eventId, v52, (System_String_o *)StringLiteral_23587/*"spot_info_window"*/, 0);
  if ( !EventFortificationDataLogic__TryGetColorByWorkType(
          &color,
          this->fields.colorCodeMilitsry,
          this->fields.colorCodeInternal,
          this->fields.colorCodeFarmming,
          this->fields.colorCodeA,
          eventFortificationEntity->fields.workType,
          v53) )
    goto LABEL_90;
  Instance = (DataManager_o *)this->fields.itemBgSprite;
  if ( !Instance )
LABEL_104:
    sub_1C2D6EC(Instance, v15);
  UIWidget__set_color((UIWidget_o *)Instance, color, 0);
LABEL_90:
  gaugeSprite = (UnityEngine_Object_o *)this->fields.gaugeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gaugeSprite, 0, 0) )
  {
    v55 = this->fields.gaugeSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_40385372(eventId, v55, (System_String_o *)StringLiteral_23585/*"spot_info_gauge_l"*/, 0);
  }
  gaugeBaseSprite = (UnityEngine_Object_o *)this->fields.gaugeBaseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gaugeBaseSprite, 0, 0) )
  {
    v58 = this->fields.gaugeBaseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_40385372(eventId, v58, (System_String_o *)StringLiteral_23583/*"spot_info_gauge_base"*/, 0);
  }
  EventFortificationWorkManager__WidthAdjustmentOfTitle(this, v57);
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
  UnityEngine_Component_o *gameObject; // x0
  int klass; // w20
  unsigned int localScale; // s0
  int32_t addWidthForIcon; // s12
  int v12; // w21
  float v13; // s8
  unsigned int v14; // s0
  int v15; // w22
  float v16; // s9
  unsigned int v17; // s0
  float v18; // s10
  float y; // s11
  float v20; // s8
  UnityEngine_Transform_o *v21; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C216BB & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C216BB = 1;
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
          gameObject = (UnityEngine_Component_o *)this->fields.workTypeIcon;
          if ( !gameObject )
            goto LABEL_40;
          klass = (int)gameObject[7].klass;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0);
          if ( !gameObject )
            goto LABEL_40;
          localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.teamNameLabel;
          if ( !gameObject )
            goto LABEL_40;
          addWidthForIcon = this->fields.addWidthForIcon;
          v12 = (int)gameObject[7].klass;
          v13 = *(float *)&localScale;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0);
          if ( !gameObject )
            goto LABEL_40;
          v14 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.bgSprite;
          if ( !gameObject )
            goto LABEL_40;
          v15 = (int)gameObject[7].klass;
          v16 = *(float *)&v14;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0);
          if ( !gameObject )
            goto LABEL_40;
          v17 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.titleRootObj;
          if ( !gameObject )
            goto LABEL_40;
          v18 = *(float *)&v17;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0);
          if ( !gameObject )
            goto LABEL_40;
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.titleRootObj;
          if ( !gameObject )
            goto LABEL_40;
          y = localPosition.fields.y;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0);
          if ( !gameObject )
            goto LABEL_40;
          v20 = (float)(v13 * (float)klass) + (float)addWidthForIcon;
          v23.fields.x = -(float)((float)((float)(v18 * (float)v15) * 0.5)
                                - (float)((float)((float)(v18 * (float)v15) - (float)(v20 + (float)(v16 * (float)v12)))
                                        * 0.5));
          v23.fields.z = 0.0;
          v23.fields.y = y;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v23, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.workTypeIcon;
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0);
          v21 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4C20DA1 )
          {
            gameObject = (UnityEngine_Component_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
            byte_4C20DA1 = 1;
          }
          if ( !v21
            || (UnityEngine_Transform__set_localPosition(
                  v21,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0),
                (gameObject = (UnityEngine_Component_o *)this->fields.teamNameLabel) == 0)
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)gameObject,
                                                          0)) == 0 )
          {
LABEL_40:
            sub_1C2D6EC(gameObject, v7);
          }
          v24.fields.x = v20;
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
    sub_1C2D6EC(this, method);
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
  if ( (byte_4C216BF & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C216BF = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  eventFortificationWorkItemObj = (Il2CppObject *)_4__this->fields.eventFortificationWorkItemObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                    eventFortificationWorkItemObj,
                                                                    (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_19;
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___);
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
  GameObjectExtensions__SetParent_35924212((UnityEngine_GameObject_o *)this, v12->fields.ItemObjRoot, 0);
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
    sub_1C2D6EC(this, ent);
  }
  onClick_low = SLODWORD(this->fields.onClick);
  if ( (unsigned int)onClick_low >= LODWORD(v14->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v9,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &v14->klass + onClick_low;
    LODWORD(this->fields.onClick) = onClick_low + 1;
    v17[4] = (EventFortificationWorkManager_c *)v9;
    sub_1C2D434(v17 + 4);
  }
}