void EventFortificationWorkManager___ctor(EventFortificationWorkManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1

  if ( (byte_4C3D377 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1315/*"1B2FA5"*/);
    sub_1C37058(&StringLiteral_1309/*"11814B"*/);
    sub_1C37058(&StringLiteral_1837/*"A51B1B"*/);
    byte_4C3D377 = 1;
  }
  *(_OWORD *)&this->fields.addWidthForIcon = xmmword_C0F1C0;
  v3 = StringLiteral_1837/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1837/*"A51B1B"*/;
  sub_1C36FFC(&this->fields.colorCodeMilitsry, v3);
  v4 = StringLiteral_1315/*"1B2FA5"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1315/*"1B2FA5"*/;
  sub_1C36FFC(&this->fields.colorCodeInternal, v4);
  v5 = StringLiteral_1309/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1309/*"11814B"*/;
  sub_1C36FFC(&this->fields.colorCodeFarmming, v5);
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
  System_Collections_Generic_List_object__o *v9; // x21
  System_Action_object__o *v10; // x21
  const MethodInfo *v11; // x1

  if ( (byte_4C3D36F & 1) == 0 )
  {
    sub_1C37058(&System_Action_EventFortificationDetailEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo);
    sub_1C37058(&Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__);
    sub_1C37058(&EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo);
    byte_4C3D36F = 1;
  }
  v7 = (Il2CppObject *)sub_1C372A4(EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_6;
  v7[1].klass = (Il2CppClass *)this;
  sub_1C36FFC(&v7[1], this);
  v7[1].monitor = onClick;
  sub_1C36FFC(&v7[1].monitor, onClick);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__);
  this->fields.servantItemList = (struct System_Collections_Generic_List_EventFortificationWorkItem__o *)v9;
  sub_1C36FFC(&this->fields.servantItemList, v9);
  v10 = (System_Action_object__o *)sub_1C372A4(System_Action_EventFortificationDetailEntity__TypeInfo);
  System_Action_object____ctor(
    v10,
    v7,
    Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__,
    0);
  if ( !eventFortificationDetailEntities )
LABEL_6:
    sub_1C372B4(v8);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)eventFortificationDetailEntities,
    (System_Action_T__o *)v10,
    (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__);
  EventFortificationWorkManager__ModifyItems(this, v11);
}


EventFortificationWorkItem_o *EventFortificationWorkManager__GetItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *result; // x0
  int m_CancellationTokenSource; // w22
  int32_t v7; // w21

  if ( (byte_4C3D371 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
    byte_4C3D371 = 1;
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
                                                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
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
    sub_1C372B4(result);
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

  if ( (byte_4C3D373 & 1) == 0 )
  {
    sub_1C37058(&System_Action_int__TypeInfo);
    sub_1C37058(&Method_EventFortificationWorkManager_OnClickItem__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
    byte_4C3D373 = 1;
  }
  servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
  if ( !servantItemList )
LABEL_10:
    sub_1C372B4(servantItemList);
  size = servantItemList->fields._size;
  if ( size >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      servantItemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       servantItemList,
                                                                       v11,
                                                                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
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
    v13 = (System_Action_int__o *)sub_1C372A4(System_Action_int__TypeInfo);
    System_Action_int____ctor(v13, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0);
    EventFortificationWorkItem__SetServantInfo(v12, userServantEntity, eventId, index, v13, v14);
  }
}


void EventFortificationWorkManager__ModifyItems(EventFortificationWorkManager_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  EventEntity_o *v6; // x21
  _BOOL8 v7; // x0
  struct SetSvtInfo_array *setSvtInfos; // x27
  int max_length; // w8
  EventFortificationWorkItem_o *current; // x22
  unsigned int v11; // w20
  SetSvtInfo_o *v12; // x25
  UserServantEntity_o *v13; // x23
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v17; // x0
  Il2CppObject v18; // q0
  Il2CppObject *v19; // x24
  int32_t svtId; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // kr00_16
  EventFortificationSvtEntity_o *v22; // x8
  Il2CppObject *v23; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // kr10_16
  Il2CppObject *v25; // x0
  Il2CppObject *v26; // x0
  Il2CppObject *v27; // x24
  UserServantEntity_o *v28; // x23
  __int64 v29; // x0
  int32_t iconLimitCount; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // kr20_16
  Il2CppObject *v32; // x8
  __int64 v33; // x23
  NetworkManager_c *v34; // x0
  int64_t userIdNumber; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v36; // x0
  __int128 v37; // q0
  Il2CppObject *v38; // x24
  int32_t v39; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // kr30_16
  Il2CppObject *v41; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // kr40_16
  Il2CppObject *v43; // x23
  int32_t eventId; // w24
  int32_t position; // w25
  System_Action_int__o *v46; // x26
  const MethodInfo *v47; // x5
  const MethodInfo *v48; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+20h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v51; // [xsp+40h] [xbp-90h] BYREF
  Il2CppObject *v52; // [xsp+48h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+50h] [xbp-80h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4C3D372 & 1) == 0 )
  {
    sub_1C37058(&System_Action_int__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__);
    sub_1C37058(&Method_EventFortificationWorkManager_OnClickItem__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&UserServantEntity_TypeInfo);
    byte_4C3D372 = 1;
  }
  entity = 0;
  memset(&v53, 0, sizeof(v53));
  v51 = 0;
  v52 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_93;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
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
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      this->fields.eventId,
                                      (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        !this->fields.servantItemList) )
  {
LABEL_93:
    sub_1C372B4(Instance);
  }
  v6 = (EventEntity_o *)Instance;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    (System_Collections_Generic_List_object__o *)this->fields.servantItemList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
  *(_OWORD *)&v53.fields._list = *(_OWORD *)&v50.fields.currentCryptoKey;
  v53.fields._current = (Il2CppObject *)v50.fields.fakeValue;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v53,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    if ( !v7 )
      break;
    if ( !entity )
      sub_1C372B4(v7);
    setSvtInfos = entity->fields.setSvtInfos;
    if ( !setSvtInfos )
      sub_1C372B4(v7);
    max_length = setSvtInfos->max_length;
    if ( max_length >= 1 )
    {
      current = (EventFortificationWorkItem_o *)v53.fields._current;
      v11 = 0;
LABEL_23:
      if ( v11 >= max_length )
        sub_1C372BC(v7);
      v12 = setSvtInfos->m_Items[v11];
      if ( !v12 )
        sub_1C372B4(v7);
      if ( !current )
        sub_1C372B4(v7);
      if ( v12->fields.position != current->fields.position )
        goto LABEL_69;
      v13 = (UserServantEntity_o *)sub_1C372A4(UserServantEntity_TypeInfo);
      UserServantEntity___ctor(v13, 0);
      v52 = (Il2CppObject *)v13;
      if ( v12->fields.type )
      {
        v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v14 )
          sub_1C372B4(0);
        v15 = DataManager__GetMasterData_object_(
                (DataManager_o *)v14,
                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
        if ( !entity )
          sub_1C372B4(v15);
        if ( !v15 )
          sub_1C372B4(0);
        if ( EventFortificationSvtMaster__TryGetEntity(
               (EventFortificationSvtMaster_o *)v15,
               &v51,
               this->fields.eventId,
               entity->fields.fortificationIdx,
               v12->fields.position,
               0) )
        {
          v16 = v52;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v49, 0, 0);
          v50 = v49;
          if ( !v16 )
            sub_1C372B4(v17);
          v18 = *(Il2CppObject *)&v50.fields.fakeValue;
          v16[3] = *(Il2CppObject *)&v50.fields.currentCryptoKey;
          v16[4] = v18;
          v19 = v52;
          svtId = v12->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
          if ( !v19 )
            sub_1C372B4(*(_QWORD *)&v21.fields.currentCryptoKey);
          v19[5] = (Il2CppObject)v21;
          v22 = v51;
          if ( !v51 )
            sub_1C372B4(*(_QWORD *)&v21.fields.currentCryptoKey);
          v23 = v52;
          if ( !v52 )
            sub_1C372B4(*(_QWORD *)&v21.fields.currentCryptoKey);
          LODWORD(v52[16].klass) = v51->fields.lv;
          v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v22->fields.limitCount, 0);
          v23[6] = (Il2CppObject)v24;
          if ( !v52 )
            sub_1C372B4(*(_QWORD *)&v24.fields.currentCryptoKey);
          LODWORD(v52[18].monitor) = 0;
        }
      }
      else
      {
        v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v25 )
          sub_1C372B4(0);
        v26 = DataManager__GetMasterData_object_(
                (DataManager_o *)v25,
                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !v26 )
          sub_1C372B4(0);
        DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v26,
          &v52,
          v12->fields.userSvtId,
          (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( !v6 || !EventEntity__IsEventPeriod(v6, 0, 0) )
        {
          v27 = v52;
          if ( v52 )
          {
            v28 = (UserServantEntity_o *)sub_1C372A4(UserServantEntity_TypeInfo);
            UserServantEntity___ctor_43157284(v28, (UserServantEntity_o *)v27, 0);
            v52 = (Il2CppObject *)v28;
            if ( !v28 )
              sub_1C372B4(v29);
            v28->fields.lv = v12->fields.lv;
            iconLimitCount = v12->fields.iconLimitCount;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(iconLimitCount, 0);
            v28->fields.iconLimitCount = v31;
            v32 = v52;
            if ( !v52 )
              sub_1C372B4(*(_QWORD *)&v31.fields.currentCryptoKey);
          }
          else
          {
            if ( !v12->fields.svtId )
              goto LABEL_68;
            v33 = sub_1C372A4(UserServantEntity_TypeInfo);
            UserServantEntity___ctor((UserServantEntity_o *)v33, 0);
            v52 = (Il2CppObject *)v33;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C3CD62 )
            {
              sub_1C37058(&NetworkManager_TypeInfo);
              byte_4C3CD62 = 1;
            }
            v34 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v34 = NetworkManager_TypeInfo;
            }
            userIdNumber = v34->static_fields->userIdNumber;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v49, userIdNumber, 0);
            v50 = v49;
            if ( !v33 )
              sub_1C372B4(v36);
            v37 = *(_OWORD *)&v50.fields.fakeValue;
            *(_OWORD *)(v33 + 48) = *(_OWORD *)&v50.fields.currentCryptoKey;
            *(_OWORD *)(v33 + 64) = v37;
            v38 = v52;
            v39 = v12->fields.svtId;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v39, 0);
            if ( !v38 )
              sub_1C372B4(*(_QWORD *)&v40.fields.currentCryptoKey);
            v38[5] = (Il2CppObject)v40;
            v41 = v52;
            if ( !v52 )
              sub_1C372B4(*(_QWORD *)&v40.fields.currentCryptoKey);
            LODWORD(v52[16].klass) = v12->fields.lv;
            v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v12->fields.iconLimitCount, 0);
            v41[10] = (Il2CppObject)v42;
            v32 = v52;
            if ( !v52 )
              sub_1C372B4(*(_QWORD *)&v42.fields.currentCryptoKey);
          }
          LODWORD(v32[18].monitor) = v12->fields.exceedCount;
        }
      }
LABEL_68:
      v43 = v52;
      eventId = this->fields.eventId;
      position = current->fields.position;
      v46 = (System_Action_int__o *)sub_1C372A4(System_Action_int__TypeInfo);
      System_Action_int____ctor(v46, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0);
      EventFortificationWorkItem__SetServantInfo(current, (UserServantEntity_o *)v43, eventId, position, v46, v47);
LABEL_69:
      max_length = setSvtInfos->max_length;
      if ( (int)++v11 >= max_length )
        continue;
      goto LABEL_23;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v53,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
  EventFortificationWorkManager__SetPointText(this, v48);
}


void EventFortificationWorkManager__OnClickItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  System_Action_T__o *onClick; // x8

  if ( (byte_4C3D370 & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call_EventFortificationWorkItem___);
    byte_4C3D370 = 1;
  }
  Item = (Il2CppObject *)EventFortificationWorkManager__GetItem(this, index, method);
  onClick = (System_Action_T__o *)this->fields.onClick;
  if ( onClick )
    ActionExtensions__Call_object_(
      onClick,
      Item,
      (const MethodInfo_3034548 *)Method_ActionExtensions_Call_EventFortificationWorkItem___);
}


void EventFortificationWorkManager__OnClickItemIcon(EventFortificationWorkManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *orgPanel; // x20
  ItemIconComponent_o *itemIcon; // x0
  struct FortificationOrganizationPanelComponent_o *v5; // x8
  struct ItemIconComponent_o *v6; // x20
  System_Action_o *v7; // x21
  System_Action_o *v8; // x2

  if ( (byte_4C3D375 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D375 = 1;
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
      v8 = 0;
      goto LABEL_11;
    }
LABEL_12:
    sub_1C372B4(itemIcon);
  }
  v5 = this->fields.orgPanel;
  if ( !v5 )
    goto LABEL_12;
  v5->fields.isTouchEnabled = 0;
  v6 = this->fields.itemIcon;
  v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__, 0);
  if ( !v6 )
    goto LABEL_12;
  itemIcon = v6;
  v8 = v7;
LABEL_11:
  ItemIconComponent__OnClickItem(itemIcon, 0, v8, 0);
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
  System_Collections_Generic_List_object__o *servantItemList; // x0
  int v5; // w23
  const MethodInfo *v6; // x1
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  int32_t maxFortificationPoint; // w22
  UILabel_o *v9; // x20
  System_String_o *v10; // x21
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  Il2CppObject *v17; // x19
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x22
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  Il2CppObject *v31; // x0
  int v32; // [xsp+4h] [xbp-5Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-58h] BYREF
  int32_t v34; // [xsp+28h] [xbp-38h] BYREF
  int32_t nowPoint; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4C3D376 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_6497/*"FORTIFICATION_POINT_INFO"*/);
    byte_4C3D376 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pointLabel, 0, 0) )
  {
    servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
    if ( !servantItemList )
      goto LABEL_18;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v33,
      servantItemList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    v5 = 0;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v33,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__) )
    {
      if ( !v33.fields._current )
        sub_1C372B4(0);
      v5 += EventFortificationWorkItem__get_AddPoint((EventFortificationWorkItem_o *)v33.fields._current, v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v33,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    eventFortificationEntity = this->fields.eventFortificationEntity;
    if ( !eventFortificationEntity )
      goto LABEL_18;
    maxFortificationPoint = eventFortificationEntity->fields.maxFortificationPoint;
    v9 = this->fields.pointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_6497/*"FORTIFICATION_POINT_INFO"*/, 0);
    nowPoint = this->fields.nowPoint;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &nowPoint, v11, v12, v13, v14, v15, v16);
    v34 = maxFortificationPoint;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v18, v19, v20, v21, v22, v23);
    v32 = v5;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v25, v26, v27, v28, v29, v30);
    servantItemList = (System_Collections_Generic_List_object__o *)System_String__Format_63603016(v10, v17, v24, v31, 0);
    if ( !v9 )
LABEL_18:
      sub_1C372B4(servantItemList);
    UILabel__set_text(v9, (System_String_o *)servantItemList, 0);
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
  System_Collections_Generic_List_EventFortificationDetailEntity__o *v15; // x23
  System_Action_int__o *v16; // x24
  const MethodInfo *v17; // x3
  DataManager_o *v18; // x23
  UnityEngine_Object_o *itemIcon; // x24
  int32_t *v20; // x8
  UnityEngine_Object_o *frameSprite; // x24
  __int64 v22; // x8
  __int64 *v23; // x8
  Il2CppObject *MasterData_object; // x22
  UnityEngine_Object_o *pointSlider; // x22
  float v26; // s0
  UnityEngine_Object_o *v27; // x22
  UnityEngine_Object_o *workTypeIcon; // x22
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v33; // x6
  __int64 v34; // x7
  UISprite_o *v35; // x22
  Il2CppObject *v36; // x23
  Il2CppObject *v37; // x0
  System_String_o *v38; // x23
  UnityEngine_Object_o *teamNameLabel; // x22
  const MethodInfo *v40; // x1
  UnityEngine_Object_o *bgSprite; // x22
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x5
  __int64 v46; // x6
  __int64 v47; // x7
  UISprite_o *v48; // x22
  Il2CppObject *v49; // x23
  Il2CppObject *v50; // x0
  System_String_o *v51; // x23
  int32_t size; // w10
  int32_t v53; // w8
  int32_t bgSpriteWidth; // w1
  UnityEngine_Object_o *itemBgSprite; // x22
  UISprite_o *v56; // x22
  const MethodInfo *v57; // x6
  UnityEngine_Object_o *gaugeSprite; // x21
  UISprite_o *v59; // x21
  UnityEngine_Object_o *gaugeBaseSprite; // x21
  const MethodInfo *v61; // x1
  UISprite_o *v62; // x21
  int32_t v63; // [xsp+4h] [xbp-6Ch] BYREF
  UnityEngine_Color_o color; // [xsp+8h] [xbp-68h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4C3D36E & 1) == 0 )
  {
    sub_1C37058(&System_Action_int__TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_1C37058(&Method_EventFortificationWorkManager_OnClickItem__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_4952/*"D2"*/);
    sub_1C37058(&StringLiteral_23607/*"spot_info_gauge_l"*/);
    sub_1C37058(&StringLiteral_23605/*"spot_info_gauge_base"*/);
    sub_1C37058(&StringLiteral_20198/*"icon_event_{0}{1}"*/);
    sub_1C37058(&StringLiteral_19223/*"event_organizationbg_{0}{1}"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_23609/*"spot_info_window"*/);
    sub_1C37058(&StringLiteral_20593/*"img_terminal_itembg"*/);
    byte_4C3D36E = 1;
  }
  entities = 0;
  *(_QWORD *)&color.fields.b = 0;
  entity = 0;
  *(_QWORD *)&color.fields.r = 0;
  this->fields.eventFortificationEntity = eventFortificationEntity;
  p_eventFortificationEntity = &this->fields.eventFortificationEntity;
  sub_1C36FFC(&this->fields.eventFortificationEntity, eventFortificationEntity);
  this->fields.onClick = onClick;
  sub_1C36FFC(&this->fields.onClick, onClick);
  this->fields.eventId = eventId;
  this->fields.orgPanel = orgPanel;
  sub_1C36FFC(&this->fields.orgPanel, orgPanel);
  this->fields.terminalAtlas = terminalAtlas;
  sub_1C36FFC(&this->fields.terminalAtlas, terminalAtlas);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  if ( !eventFortificationEntity || !*p_eventFortificationEntity || !Instance )
    goto LABEL_104;
  if ( !EventFortificationDetailMaster__TryGetEntityList(
          (EventFortificationDetailMaster_o *)Instance,
          &entities,
          eventFortificationEntity->fields.eventId,
          (*p_eventFortificationEntity)->fields.idx,
          0) )
    return;
  v15 = entities;
  v16 = (System_Action_int__o *)sub_1C372A4(System_Action_int__TypeInfo);
  System_Action_int____ctor(v16, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0);
  EventFortificationWorkManager__CreateItem(this, v15, v16, v17);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_104;
  Instance = (DataManager_o *)GiftMaster__GetGiftListById(
                                (GiftMaster_o *)Instance,
                                eventFortificationEntity->fields.giftId,
                                0);
  if ( !Instance )
    goto LABEL_104;
  v18 = Instance;
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
  if ( !LODWORD(v18->fields.m_CancellationTokenSource) )
    goto LABEL_105;
  v20 = *(int32_t **)&v18->fields._DispLog;
  if ( !v20 )
    goto LABEL_104;
  Instance = (DataManager_o *)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_104;
  ItemIconComponent__SetGift_40921900((ItemIconComponent_o *)Instance, v20[5], v20[6], v20[7], 0, 0);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(frameSprite, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( LODWORD(v18->fields.m_CancellationTokenSource) )
    {
      v22 = *(_QWORD *)&v18->fields._DispLog;
      if ( !v22 )
        goto LABEL_104;
      if ( *(_DWORD *)(v22 + 20) != 1 )
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
        v23 = &StringLiteral_20593/*"img_terminal_itembg"*/;
      }
      else
      {
LABEL_31:
        Instance = (DataManager_o *)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_104;
        v23 = &StringLiteral_1/*""*/;
      }
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v23, 0);
      goto LABEL_34;
    }
LABEL_105:
    sub_1C372BC(Instance);
  }
LABEL_34:
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
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
      v26 = (float)entity->fields.totalFortificationPoint
          / (float)eventFortificationEntity->fields.maxFortificationPoint;
      goto LABEL_55;
    }
  }
  else
  {
    this->fields.nowPoint = 0;
    v27 = (UnityEngine_Object_o *)this->fields.pointSlider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v27, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.pointSlider;
      if ( !Instance )
        goto LABEL_104;
      v26 = 0.0;
LABEL_55:
      UIProgressBar__set_value((UIProgressBar_o *)Instance, v26, 0);
    }
  }
  workTypeIcon = (UnityEngine_Object_o *)this->fields.workTypeIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(workTypeIcon, 0, 0) )
  {
    v35 = this->fields.workTypeIcon;
    v63 = eventId;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63, v29, v30, v31, v32, v33, v34);
    v37 = (Il2CppObject *)System_Int32__ToString_65071764(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_4952/*"D2"*/,
                            0);
    v38 = System_String__Format_63602948((System_String_o *)StringLiteral_20198/*"icon_event_{0}{1}"*/, v36, v37, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_40606984(eventId, v35, v38, 0);
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
  EventFortificationWorkManager__SetPointText(this, v40);
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0, 0) )
  {
    v48 = this->fields.bgSprite;
    v63 = eventId;
    v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63, v42, v43, v44, v45, v46, v47);
    v50 = (Il2CppObject *)System_Int32__ToString_65071764(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_4952/*"D2"*/,
                            0);
    v51 = System_String__Format_63602948((System_String_o *)StringLiteral_19223/*"event_organizationbg_{0}{1}"*/, v49, v50, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = (DataManager_o *)AtlasManager__SetEventUI_40606984(eventId, v48, v51, 0);
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
      v53 = this->fields.bgSpriteWidth;
      if ( size == 3 )
      {
        if ( !Instance )
          goto LABEL_104;
        bgSpriteWidth = this->fields.bgSpriteOffSetWidth + v53;
      }
      else
      {
        if ( !Instance )
          goto LABEL_104;
        bgSpriteWidth = v53 + this->fields.bgSpriteOffSetWidth2 * (size - 2);
      }
    }
    UIWidget__set_width((UIWidget_o *)Instance, bgSpriteWidth, 0);
  }
  itemBgSprite = (UnityEngine_Object_o *)this->fields.itemBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(itemBgSprite, 0, 0) )
    goto LABEL_90;
  v56 = this->fields.itemBgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_40606984(eventId, v56, (System_String_o *)StringLiteral_23609/*"spot_info_window"*/, 0);
  if ( !EventFortificationDataLogic__TryGetColorByWorkType(
          &color,
          this->fields.colorCodeMilitsry,
          this->fields.colorCodeInternal,
          this->fields.colorCodeFarmming,
          this->fields.colorCodeA,
          eventFortificationEntity->fields.workType,
          v57) )
    goto LABEL_90;
  Instance = (DataManager_o *)this->fields.itemBgSprite;
  if ( !Instance )
LABEL_104:
    sub_1C372B4(Instance);
  UIWidget__set_color((UIWidget_o *)Instance, color, 0);
LABEL_90:
  gaugeSprite = (UnityEngine_Object_o *)this->fields.gaugeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gaugeSprite, 0, 0) )
  {
    v59 = this->fields.gaugeSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_40606984(eventId, v59, (System_String_o *)StringLiteral_23607/*"spot_info_gauge_l"*/, 0);
  }
  gaugeBaseSprite = (UnityEngine_Object_o *)this->fields.gaugeBaseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gaugeBaseSprite, 0, 0) )
  {
    v62 = this->fields.gaugeBaseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_40606984(eventId, v62, (System_String_o *)StringLiteral_23605/*"spot_info_gauge_base"*/, 0);
  }
  EventFortificationWorkManager__WidthAdjustmentOfTitle(this, v61);
}


void EventFortificationWorkManager__WidthAdjustmentOfTitle(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *workTypeIcon; // x20
  UnityEngine_Object_o *teamNameLabel; // x20
  UnityEngine_Object_o *bgSprite; // x20
  UnityEngine_Object_o *titleRootObj; // x20
  UnityEngine_Component_o *gameObject; // x0
  int klass; // w20
  unsigned int localScale; // s0
  int32_t addWidthForIcon; // s12
  int v11; // w21
  float v12; // s8
  unsigned int v13; // s0
  int v14; // w22
  float v15; // s9
  unsigned int v16; // s0
  float v17; // s10
  float y; // s11
  float v19; // s8
  UnityEngine_Transform_o *v20; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3D374 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D374 = 1;
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
          v11 = (int)gameObject[7].klass;
          v12 = *(float *)&localScale;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0);
          if ( !gameObject )
            goto LABEL_40;
          v13 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.bgSprite;
          if ( !gameObject )
            goto LABEL_40;
          v14 = (int)gameObject[7].klass;
          v15 = *(float *)&v13;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0);
          if ( !gameObject )
            goto LABEL_40;
          v16 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.titleRootObj;
          if ( !gameObject )
            goto LABEL_40;
          v17 = *(float *)&v16;
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
          v19 = (float)(v12 * (float)klass) + (float)addWidthForIcon;
          v22.fields.x = -(float)((float)((float)(v17 * (float)v14) * 0.5)
                                - (float)((float)((float)(v17 * (float)v14) - (float)(v19 + (float)(v15 * (float)v11)))
                                        * 0.5));
          v22.fields.z = 0.0;
          v22.fields.y = y;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v22, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.workTypeIcon;
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0);
          v20 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4C3C921 )
          {
            gameObject = (UnityEngine_Component_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
            byte_4C3C921 = 1;
          }
          if ( !v20
            || (UnityEngine_Transform__set_localPosition(
                  v20,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0),
                (gameObject = (UnityEngine_Component_o *)this->fields.teamNameLabel) == 0)
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)gameObject,
                                                          0)) == 0 )
          {
LABEL_40:
            sub_1C372B4(gameObject);
          }
          v23.fields.x = v19;
          v23.fields.y = 0.0;
          v23.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v23, 0);
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
    sub_1C372B4(this);
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
  if ( (byte_4C3D378 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___);
    sub_1C37058(&Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D378 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  eventFortificationWorkItemObj = (Il2CppObject *)_4__this->fields.eventFortificationWorkItemObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                    eventFortificationWorkItemObj,
                                                                    (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_19;
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___);
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
  GameObjectExtensions__SetParent_36138108((UnityEngine_GameObject_o *)this, v12->fields.ItemObjRoot, 0);
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
    sub_1C372B4(this);
  }
  onClick_low = SLODWORD(this->fields.onClick);
  if ( (unsigned int)onClick_low >= LODWORD(v14->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v9,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &v14->klass + onClick_low;
    LODWORD(this->fields.onClick) = onClick_low + 1;
    v17[4] = (EventFortificationWorkManager_c *)v9;
    sub_1C36FFC(v17 + 4, v9);
  }
}